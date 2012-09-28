declare namespace xmi="http://www.omg.org/spec/XMI/20110701";
declare namespace qtxmi="http://www.qt-project.org";
declare function qtxmi:typeFromProperty ($properties as node()*) as xs:string * {
    for $property in $properties
    let $type := if ($property/@type) then xs:string($property/@type)
                 else if ($property/type/@xmi:idref) then xs:string($property/type/@xmi:idref)
                 else if ($property/type/@href) then xs:string($property/type/@href)
                 else "qtxmi:unknownType"
    let $type := tokenize($type, "/")[last()]
    return $type
};
declare function qtxmi:mappedBaseNamespace($baseNamespace as xs:string*) as xs:string* {
    if ($baseNamespace = "PrimitiveTypes.xmi") then ""
    else if ($baseNamespace = "Superstructure.xmi") then "QtUml::"
    else if ($baseNamespace = "MOF.xmi") then "QtMof::"
    else ""
};
declare function qtxmi:namespaceFromString ($strings as xs:string*) as xs:string* {
    for $string in $strings
    let $type := tokenize($string, "/")[last()]
    let $baseNamespace := tokenize($type, "#")[1]
    let $type := tokenize($type, "#")[last()]
    let $baseNamespace := qtxmi:mappedBaseNamespace(if ($baseNamespace = $type) then $xmiFile else $baseNamespace)
    let $namespaceArray := tokenize($type, "-")
    return concat($baseNamespace, string-join(remove($namespaceArray, count($namespaceArray)), "::"))
};
declare function qtxmi:namespaceFromProperty ($properties as node()*) as xs:string* {
    qtxmi:namespaceFromString(qtxmi:typeFromProperty($properties))
};
declare function qtxmi:unqualifiedTypeFromString ($string as xs:string) as xs:string {
    tokenize($string, "-")[last()]
};
declare function qtxmi:unqualifiedTypeFromProperty ($property as node()) as xs:string {
    qtxmi:unqualifiedTypeFromString(qtxmi:typeFromProperty($property))
};
declare function qtxmi:elementFromString ($strings as xs:string*) as node()* {
    for $string in $strings
    let $type := tokenize($string, "/")[last()]
    let $file := tokenize($type, "#")[1]
    let $type := tokenize($type, "#")[last()]
    let $file := if ($file = $type) then $xmiFile else $file
    return
    doc($file)//packagedElement[@xmi:id = $type]
};
declare function qtxmi:elementFromProperty ($properties as node()*) as node()* {
    qtxmi:elementFromString(qtxmi:typeFromProperty($properties))
};
declare function qtxmi:mappedPrimitiveType ($primitiveType as xs:string) as xs:string {
    if ($primitiveType = "Boolean") then "bool"
    else if ($primitiveType = "Integer" or $primitiveType = "UnlimitedNatural") then "qint32"
    else if ($primitiveType = "Real") then "qreal"
    else if ($primitiveType = "String") then "QString"
    else "qtxmi:unknownPrimitiveType"
};
declare function qtxmi:mappedFunctionName ($name as xs:string) as xs:string {
    if ($name = "namespace") then "namespace_"
    else if ($name = "class") then "class_"
    else if ($name = "default") then "default_"
    else $name
};
declare function qtxmi:unqualifiedTypeFromNamespacedProperty ($property as node(), $namespace as xs:string) as xs:string {
    let $file := if ($property/@type or $property/type/@xmi:idref) then $xmiFile else tokenize(tokenize($property/type/@href, "#")[1], "/")[last()]
    let $type := if ($property/@type) then string($property/@type) else if ($property/type/@xmi:idref) then string($property/type/@xmi:idref) else tokenize($property/type/@href, "#")[last()]
    let $element := qtxmi:elementFromString($file, $type)
return
    let $baseType := if (compare(qtxmi:namespaceFromId($type), $namespace) = 0) then
        if ($element/@xmi:type = "uml:Class") then
            concat("Q", substring(replace(replace($type, "-", "::"), $namespace, ""), 3))
        else
            concat("QEnumerations::", substring(replace(replace($type, "-", "::"), $namespace, ""), 3))
    else
        if ($element/@xmi:type = "uml:Class") then
            concat(qtxmi:namespaceFromId($type), concat("::", concat("Q", qtxmi:unqualifiedTypeFromId($type))))
        else if ($element/@xmi:type = "uml:Enumeration") then
            concat(qtxmi:namespaceFromId($type), concat("::", concat("QEnumerations::", qtxmi:unqualifiedTypeFromId($type))))
        else
            qtxmi:mappedPrimitiveType(tokenize($type, "#")[last()])
    let $baseType := if ($property/upperValue/@value = "*") then concat(concat("QList<", $baseType), " *>") else $baseType
    let $baseType := if ($element/@xmi:type = "uml:Class" and ($property/@isReadOnly = "true" or $property/@isDerived = "true" or ($property/@direction = "return" and $property/../@isQuery = "true"))) then concat ("const ", $baseType) else $baseType
    let $baseType := if ($element/@xmi:type = "uml:Class") then concat ($baseType, " *") else $baseType
    return $baseType
};
declare function qtxmi:capitalizedNameFromType ($unqualifiedType as xs:string, $name as xs:string) as xs:string {
    let $capitalizedName := $name
    let $capitalizedName := if ($unqualifiedType = "bool " and starts-with($name, "is") and substring($name, 3, 1) = upper-case(substring($name, 3, 1))) then
       substring($name, 3)
    else
       $capitalizedName
    return concat(upper-case(substring($capitalizedName, 1, 1)), substring($capitalizedName, 2))
};
<qtxmi:XMI xmlns:xmi="http://www.omg.org/spec/XMI/20110701" xmlns:uml="http://www.omg.org/spec/UML/20110701" xmlns:qtxmi="http://www.qt-project.org">
{
for $namespace in distinct-values(doc($xmiFile)//packagedElement[@xmi:type="uml:Package"]/@xmi:id)
return
<namespace path="{replace($namespace, "-", "/")}">
{
for $class in doc($xmiFile)//packagedElement[@xmi:id=$namespace]/packagedElement[@xmi:type="uml:Class"]
let $superClasses := $class/generalization/@general
let $namespace := replace(concat(qtxmi:mappedBaseNamespace($xmiFile), $namespace), "-", "::")
let $isAbstract := if ($class/@isAbstract) then $class/@isAbstract else "false"
return
    <class name="Q{$class/@name}" isAbstract="{$isAbstract}">
        <documentation>{$class/ownedComment/body/text()}</documentation>
        {
        for $id in distinct-values(qtxmi:elementFromProperty($class/ownedAttribute | $class/ownedOperation/ownedParameter)/@xmi:type)
        where $id = "uml:Enumeration"
        return
        <qtumlinclude>QtUml/QEnumerations</qtumlinclude>
        }
        {
        for $superobject in (qtxmi:elementFromString($superClasses)[not(@isAbstract) or @isAbstract = "false"]/@xmi:id)
        return
        <superobject>QtCore/{concat("Q", qtxmi:unqualifiedTypeFromString($superobject))}</superobject>
        }
        {
        if (count(qtxmi:elementFromString($superClasses)[@isAbstract = "true"]) = count($superClasses) and $isAbstract = "false") then
        <superclassinclude>QtCore/QObject</superclassinclude>
        else ""
        }
        {
        for $id in $superClasses
        return
        <superclassinclude>QtUml/{concat("Q", qtxmi:unqualifiedTypeFromString($id))}</superclassinclude>
        }
        {
        for $type in distinct-values($class/ownedAttribute/type/@href | $class/ownedOperation/ownedParameter/type/@href)
        where tokenize($type, "#")[last()] = "String"
        return
        <qtinclude>QtCore/QString</qtinclude>
        }
        {
        for $value in distinct-values($class/ownedAttribute/upperValue/@value | $class/ownedOperation/ownedParameter/upperValue/@Value)
        where $value = "*"
        return
        <qtinclude>QtCore/QList</qtinclude>
        }
        {
        for $id in distinct-values($class/ownedAttribute/@type | $class/ownedOperation/ownedParameter/@type | $class/ownedAttribute/type/@xmi:idref | $class/ownedOperation/ownedParameter/type/@xmi:idref | $class/ownedAttribute/type/@href | $class/ownedOperation/ownedParameter/type/@href)
        let $realId := tokenize($id, "#")[last()]
        where qtxmi:elementFromString($id)/@xmi:type = "uml:Class" and $realId != $class/@xmi:id and empty(distinct-values($id[.=$superClasses]))
        return
        <forwarddecl namespace="{qtxmi:namespaceFromString($id)}">{concat("Q", qtxmi:unqualifiedTypeFromString($realId))}</forwarddecl>
        }
        {
        for $attribute in $class/ownedAttribute
        let $unqualifiedType := qtxmi:unqualifiedTypeFromNamespacedProperty($attribute, $namespace)
        let $unqualifiedType := if (ends-with($unqualifiedType, "*")) then $unqualifiedType else concat($unqualifiedType, " ")
        let $isDerived := if (not($attribute/@isDerived) or $attribute/@isDerived = "false") then "false" else "true"
        let $isDerivedUnion := if (not($attribute/@isDerivedUnion) or $attribute/@isDerivedUnion = "false") then "false" else "true"
        let $constness := if (starts-with($unqualifiedType, "QList") and $isDerived = "false") then "" else " const"
        where $attribute[not(@association)]
        return
        <attribute isDerived="{$isDerived}" isDerivedUnion="{$isDerivedUnion}">
        <accessor return="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}" constness="{$constness}"/>
        {
        if (not(starts-with($unqualifiedType, "QList")) and ($attribute[not(@isReadOnly)] or $attribute/@isReadOnly != "true") and $isDerived = "false") then
        <accessor return="void " name="set{qtxmi:capitalizedNameFromType($unqualifiedType, qtxmi:mappedFunctionName($attribute/@name))}" constness="">
           <parameter type="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}"/>
        </accessor>
        else ""
        }
        <documentation>{$attribute/ownedComment/body/text()}</documentation>
        </attribute>
        }
        {
        for $attribute in $class/ownedAttribute
        let $unqualifiedType := qtxmi:unqualifiedTypeFromNamespacedProperty($attribute, $namespace)
        let $unqualifiedType := if (ends-with($unqualifiedType, "*")) then $unqualifiedType else concat($unqualifiedType, " ")
        let $isDerived := if (not($attribute/@isDerived) or $attribute/@isDerived = "false") then "false" else "true"
        let $isDerivedUnion := if (not($attribute/@isDerivedUnion) or $attribute/@isDerivedUnion = "false") then "false" else "true"
        let $constness := if (starts-with($unqualifiedType, "QList") and $isDerived = "false") then "" else " const"
        where $attribute[@association]
        return
        <associationend isDerived="{$isDerived}" isDerivedUnion="{$isDerivedUnion}">
        <accessor return="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}" constness="{$constness}"/>
        {
        if (not(starts-with($unqualifiedType, "QList")) and ($attribute[not(@isReadOnly)] or $attribute/@isReadOnly != "true") and $isDerived = "false") then
        <accessor return="void " name="set{qtxmi:capitalizedNameFromType($unqualifiedType, qtxmi:mappedFunctionName($attribute/@name))}" constness="">
           <parameter type="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}"/>
        </accessor>
        else ""
        }
        <documentation>{$attribute/ownedComment/body/text()}</documentation>
        </associationend>
        }
        {
        for $operation in $class/ownedOperation
        let $constness := if ($operation/@isQuery = "true") then " const" else ""
        let $return := if ($operation/ownedParameter[@direction = "return"]) then
                          qtxmi:unqualifiedTypeFromNamespacedProperty($operation/ownedParameter[@direction = "return"], $namespace)
                       else "void"
        let $return := if (ends-with($return, "*")) then $return else concat($return, " ")
        return
        <operation return="{$return}" name="{qtxmi:mappedFunctionName($operation/@name)}" constness="{$constness}">
        {
        for $parameter in $operation/ownedParameter[not(@direction) or @direction != "return"]
        let $unqualifiedType := qtxmi:unqualifiedTypeFromNamespacedProperty($parameter, $namespace)
        let $unqualifiedType := if (ends-with($unqualifiedType, "*")) then $unqualifiedType else concat($unqualifiedType, " ")
        let $unqualifiedType := if (ends-with($unqualifiedType, "*") and (not($parameter/@direction) or $parameter/@direction = "in")) then concat("const ", $unqualifiedType) else $unqualifiedType
        return
            <parameter type="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($parameter/@name)}"/>
        }
        <documentation>{$operation/ownedComment/body/text()}</documentation>
        </operation>
        }
    </class>
}
{
for $enumeration in doc($xmiFile)//packagedElement[@xmi:id=$namespace]/packagedElement[@xmi:type="uml:Enumeration"]
return
    <enumeration name="{$enumeration/@name}">
        <documentation>{$enumeration/ownedComment/body/text()}</documentation>
        {
        for $literal in $enumeration/ownedLiteral
        return
        <literal name="{concat(upper-case(substring($literal/@name, 1, 1)), substring($literal/@name, 2))}" documentation="{$literal/ownedComment/body/text()}"/>
        }
    </enumeration>
}
</namespace>
}
</qtxmi:XMI>
