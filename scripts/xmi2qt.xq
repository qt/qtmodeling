declare namespace xmi="http://www.omg.org/spec/XMI/20110701";
declare namespace qtxmi="http://www.qt-project.org";
declare function qtxmi:namespaceFromId ($id as xs:string) as xs:string {
    let $namespaceArray := tokenize($id, "-")
    return string-join(remove($namespaceArray, count($namespaceArray)), "::")
};
declare function qtxmi:unqualifiedTypeFromId ($id as xs:string) as xs:string {
    tokenize($id, "-")[last()]
};
declare function qtxmi:classifierFromString ($property as xs:string) as xs:string* {
    doc($xmiFile)//packagedElement[@xmi:id = $property]/@xmi:type
};
declare function qtxmi:classifierFromProperty ($property as node()*) as xs:string* {
    doc($xmiFile)//packagedElement[@xmi:id = $property/@type]/@xmi:type
};
declare function qtxmi:mappedPrimitiveType($primitiveType as xs:string) as xs:string {
    if ($primitiveType = "Boolean") then "bool"
    else if ($primitiveType = "Integer" or $primitiveType = "UnlimitedNatural") then "qint32"
    else if ($primitiveType = "Real") then "qreal"
    else if ($primitiveType = "String") then "QString"
    else "qtxmi:unknownPrimitiveType"
};
declare function qtxmi:mappedFunctionName($name as xs:string) as xs:string {
    if ($name = "namespace") then "namespace_"
    else if ($name = "class") then "class_"
    else if ($name = "default") then "default_"
    else $name
};
declare function qtxmi:unqualifiedTypeFromNamespacedProperty ($property as node(), $namespace as xs:string) as xs:string {
    if ($property/@type) then
        let $baseType := if (compare(qtxmi:namespaceFromId($property/@type), $namespace) = 0) then
            if (qtxmi:classifierFromProperty($property) != "uml:Enumeration") then
                concat("Q", substring(replace(replace($property/@type, "-", "::"), $namespace, ""), 3))
            else
                concat("QEnumerations::", substring(replace(replace($property/@type, "-", "::"), $namespace, ""), 3))
        else
            if (qtxmi:classifierFromProperty($property) != "uml:Enumeration") then
                concat(qtxmi:namespaceFromId($property/@type), concat("::", concat("Q", qtxmi:unqualifiedTypeFromId($property/@type))))
            else
                concat(qtxmi:namespaceFromId($property/@type), concat("::", concat("QEnumerations::", qtxmi:unqualifiedTypeFromId($property/@type))))
        let $baseType := if ($property/upperValue/@value = "*") then concat(concat("QList<", $baseType), " *>") else $baseType
        let $baseType := if ($property/@isReadOnly = "true") then concat ("const ", $baseType) else $baseType
        let $baseType := if (qtxmi:classifierFromProperty($property) = "uml:Class") then concat ($baseType, " *") else $baseType
        return $baseType
    else
        qtxmi:mappedPrimitiveType(tokenize($property/type/@href, "#")[last()])
};
declare function qtxmi:capitalizedNameFromType($unqualifiedType as xs:string, $name as xs:string) as xs:string {
    let $capitalizedName := $name
    let $capitalizedName := if ($unqualifiedType = "bool" and starts-with($name, "is") and substring($name, 3, 1) = upper-case(substring($name, 3, 1))) then
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
let $namespace := replace($namespace, "-", "::")
let $isAbstract := if ($class/@isAbstract) then $class/@isAbstract else "false"
return
    <class name="Q{$class/@name}" isAbstract="{$isAbstract}">
        <documentation>{$class/ownedComment/body/text()}</documentation>
        {
        for $id in distinct-values(qtxmi:classifierFromProperty($class/ownedAttribute | $class/ownedOperation/ownedParameter))
        where $id = "uml:Enumeration"
        return
        <qtumlinclude>QtUml/QEnumerations</qtumlinclude>
        }
        {
        for $id in $superClasses
        return
        <superclassinclude>QtUml/{concat("Q", qtxmi:unqualifiedTypeFromId($id))}</superclassinclude>
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
        for $id in distinct-values($class/ownedAttribute/@type | $class/ownedOperation/ownedParameter/@type)
        where qtxmi:classifierFromString($id) != "uml:Enumeration" and $id != $class/@xmi:id and empty(distinct-values($id[.=$superClasses]))
        return
        <forwarddecl>{concat("Q", qtxmi:unqualifiedTypeFromId($id))}</forwarddecl>
        }
        {
        for $attribute in $class/ownedAttribute
        let $unqualifiedType := qtxmi:unqualifiedTypeFromNamespacedProperty($attribute, $namespace)
        let $unqualifiedType := if (ends-with($unqualifiedType, "*")) then $unqualifiedType else concat($unqualifiedType, " ")
        where $attribute[not(@association) and not(@isDerived="true" and (not(@isDerivedUnion or @isDerivedUnion="false")))]
        return
        if (not(starts-with($unqualifiedType, "QList")) and ($attribute[not(@isReadOnly)] or $attribute/@isReadOnly != "true")) then
        <attribute>
        <accessor return="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}" constness=" const"/>
        <accessor return="void " name="set{qtxmi:capitalizedNameFromType($unqualifiedType, qtxmi:mappedFunctionName($attribute/@name))}" constness="">
           <parameter type="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}"/>
        </accessor>
        <documentation>{$attribute/ownedComment/body/text()}</documentation>
        </attribute>
        else
        <attribute>
        <accessor return="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}" constness=" const"/>
        <documentation>{$attribute/ownedComment/body/text()}</documentation>
        </attribute>
        }
        {
        for $attribute in $class/ownedAttribute
        let $unqualifiedType := qtxmi:unqualifiedTypeFromNamespacedProperty($attribute, $namespace)
        let $unqualifiedType := if (ends-with($unqualifiedType, "*")) then $unqualifiedType else concat($unqualifiedType, " ")
        where $attribute[@association and not(@isDerived="true" and (not(@isDerivedUnion or @isDerivedUnion="false")))]
        return
        if (not(starts-with($unqualifiedType, "QList")) and ($attribute[not(@isReadOnly)] or $attribute/@isReadOnly != "true")) then
        <associationend>
        <accessor return="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}" constness=" const"/>
        <accessor return="void " name="set{qtxmi:capitalizedNameFromType($unqualifiedType, qtxmi:mappedFunctionName($attribute/@name))}" constness="">
           <parameter type="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}"/>
        </accessor>
        <documentation>{$attribute/ownedComment/body/text()}</documentation>
        </associationend>
        else
        <associationend>
        <accessor return="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}" constness=" const"/>
        <documentation>{$attribute/ownedComment/body/text()}</documentation>
        </associationend>
        }
        {
        for $operation in $class/ownedOperation
        let $return := if ($operation/ownedParameter[@direction = "return"]) then
                          qtxmi:unqualifiedTypeFromNamespacedProperty($operation/ownedParameter[@direction = "return"], $namespace)
                       else "void"
        let $return := if (ends-with($return, "*")) then $return else concat($return, " ")
        let $constness := if ($operation[not(@isQuery)] or $operation/@isQuery = "true") then " const" else ""
        return
        <operation return="{$return}" name="{qtxmi:mappedFunctionName($operation/@name)}" constness="{$constness}">
        {
        for $parameter in $operation/ownedParameter[not(@direction) or @direction != "return"]
        let $unqualifiedType := qtxmi:unqualifiedTypeFromNamespacedProperty($parameter, $namespace)
        let $unqualifiedType := if (ends-with($unqualifiedType, "*")) then $unqualifiedType else concat($unqualifiedType, " ")
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
