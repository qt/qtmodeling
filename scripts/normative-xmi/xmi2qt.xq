declare namespace xmi="http://www.omg.org/spec/XMI/20110701";
declare namespace qtxmi="http://www.qt-project.org";

declare function qtxmi:typeStringFromProperty ($properties as node()*) as xs:string* {
    for $property in $properties
    return tokenize(
                    if ($property/@type) then xs:string($property/@type)
               else if ($property/type/@xmi:idref) then xs:string($property/type/@xmi:idref)
               else if ($property/type/@href) then xs:string($property/type/@href)
               else "qtxmi:unknownType",
           "/")[last()]
};

declare function qtxmi:mappedBaseNamespace($xmiFile as xs:string*) as xs:string* {
         if ($xmiFile = "PrimitiveTypes.xmi") then ""
    else if ($xmiFile = "Superstructure.xmi") then "QtUml::"
    else if ($xmiFile = "UML.xmi") then "QtUml"
    else if ($xmiFile = "MOF.xmi") then "QtMof::"
    else "QtUnknown::"
};

declare function qtxmi:namespaceFromTypeString ($types as xs:string*) as xs:string* {
    for $type in $types
    let $baseNamespace := qtxmi:mappedBaseNamespace(
                              if (tokenize(tokenize($type, "/")[last()], "#")[1]
                                  = tokenize(tokenize($type, "/")[last()], "#")[last()]) then
                                  $xmiFile
                              else
                                  tokenize(tokenize($type, "/")[last()], "#")[1])
    let $namespaceArray := tokenize(tokenize(tokenize($type, "/")[last()], "#")[last()], "-")
    return concat(concat($baseNamespace,
                         string-join(remove($namespaceArray, count($namespaceArray)), "::")),
                  "::")
};

declare function qtxmi:namespaceFromProperty ($properties as node()*) as xs:string* {
    qtxmi:namespaceFromTypeString(qtxmi:typeStringFromProperty($properties))
};

declare function qtxmi:unqualifiedTypeFromTypeString ($types as xs:string*) as xs:string* {
    for $type in $types
    let $namespace := tokenize(tokenize(tokenize($type, "/")[last()], "#")[last()], "-")[1]
    let $unqualifiedType := tokenize(tokenize(tokenize($type, "/")[last()], "#")[last()], "-")[last()]
    return if ($unqualifiedType != $namespace and $unqualifiedType = "Object") then
               "MofObject"
           else
               $unqualifiedType
};

declare function qtxmi:unqualifiedTypeFromProperty ($properties as node()*) as xs:string* {
    qtxmi:unqualifiedTypeFromTypeString(qtxmi:typeStringFromProperty($properties))
};

declare function qtxmi:qualifiedTypeFromTypeString ($types as xs:string*) as xs:string* {
    concat(qtxmi:namespaceFromTypeString($types), qtxmi:unqualifiedTypeFromTypeString($types))
};

declare function qtxmi:qualifiedTypeFromProperty ($properties as node()*) as xs:string* {
    qtxmi:qualifiedTypeFromTypeString(qtxmi:typeStringFromProperty($properties))
};

declare function qtxmi:elementFromTypeString ($types as xs:string*) as node()* {
    for $type in $types
    let $unqualifiedType := tokenize(tokenize($type, "/")[last()], "#")[last()]
    let $file := if (tokenize(tokenize($type, "/")[last()], "#")[last()]
                     = tokenize(tokenize($type, "/")[last()], "#")[1]) then
                     $xmiFile
                 else
                     tokenize(tokenize($type, "/")[last()], "#")[1]
    return
    doc($file)//packagedElement[@xmi:id = $unqualifiedType]
};

declare function qtxmi:elementFromProperty ($properties as node()*) as node()* {
    qtxmi:elementFromTypeString(qtxmi:typeStringFromProperty($properties))
};

declare function qtxmi:mappedPrimitiveType ($primitiveType as xs:string*) as xs:string* {
         if ($primitiveType = "Boolean") then "bool"
    else if ($primitiveType = "Integer" or $primitiveType = "UnlimitedNatural") then "qint32"
    else if ($primitiveType = "Real") then "qreal"
    else if ($primitiveType = "String") then "QString"
    else "qtxmi:unknownPrimitiveType"
};

declare function qtxmi:mappedFunctionName ($name as xs:string*) as xs:string* {
         if ($name = "namespace") then "namespace_"
    else if ($name = "class") then "class_"
    else if ($name = "default") then "default_"
    else if ($name = "template") then "template_"
    else if ($name = "slot") then "slot_"
    else $name
};

declare function qtxmi:modifiedFunctionName ($property as node()*) as xs:string* {
    let $mappedFunctionName := qtxmi:mappedFunctionName($property/@name)
    let $functionName := if ($property/upperValue/@value != "1"
                         and not((starts-with($property/@name, "in") or starts-with($property/@name, "to")) and
                                          substring($property/@name, 3, 1) = upper-case(substring($property/@name, 3, 1)))
                         and $property/@name != "provided"
                         and $property/@name != "required"
                         and $property/@name != "endData"
                         and $property/@name != "conveyed"
                         and $property/@name != "covered"
                         and $property/@name != "coveredBy"
                         and $property/@name != "conformance"
                         and $property/@name != "referred"
                         and $property/@name != "represented"
                         ) then
                             concat(replace(replace(replace(replace(replace(qtxmi:mappedFunctionName($property/@name), "_$", ""), "y$", "ie"), "s$", "se"), "ex$", "ice"), "x$", "ce"), "s")
                         else qtxmi:mappedFunctionName($property/@name)
    let $functionName := if(ends-with($mappedFunctionName, "_") and not(ends-with($functionName, "_"))) then concat($functionName, "_") else $functionName
    return $functionName
};

declare function qtxmi:typeFromNamespacedTypeString ($string as xs:string, $namespace as xs:string) as xs:string {
    let $type := qtxmi:unqualifiedTypeFromTypeString($string)
    let $element := qtxmi:elementFromTypeString($string)
    let $propertyNamespace := replace(qtxmi:namespaceFromTypeString($string), $namespace, "")
    let $type := if ($type = "Object" and $propertyNamespace != "") then
                     concat(substring(tokenize($propertyNamespace, "::")[1], 3), $type)
                 else
                     $type
    let $type := if ($element/@xmi:type = "uml:Class") then
                     concat($propertyNamespace, concat("Q", $type))
                 else if ($element/@xmi:type = "uml:Enumeration") then
                     concat($propertyNamespace, concat(concat(tokenize($namespace, "::")[1], "::"), $type))
                 else
                     qtxmi:mappedPrimitiveType($type)
    return $type
};

declare function qtxmi:typeFromNamespacedProperty ($property as node(), $namespace as xs:string) as xs:string {
    qtxmi:typeFromNamespacedTypeString(qtxmi:typeStringFromProperty($property), $namespace)
};

declare function qtxmi:collectionFromProperty ($property as node()) as xs:string {
    let $isUnique := if (not($property/@isUnique) or $property/@isUnique = "true") then "true" else "false"
    let $isOrdered := if (not($property/@isOrdered) or $property/@isOrdered = "false") then "false" else "true"
    return if ($isUnique = "true" and $isOrdered = "false") then "QSet<" else "QList<"
};

declare function qtxmi:modifiedTypeFromNamespacedProperty ($property as node(), $namespace as xs:string, $collection as xs:boolean) as xs:string {
    let $type := qtxmi:typeFromNamespacedProperty($property, $namespace)
    let $element := qtxmi:elementFromProperty($property)
    let $type := if ($property/upperValue/@value != "1" and $collection) then
                     concat(qtxmi:collectionFromProperty($property), $type)
                 else
                     $type
    let $type := if (($property/upperValue/@value != "1" or ($element/@xmi:type = "uml:Class" and not($collection))) and $element/@xmi:type = "uml:Class") then
                     concat($type, " *")
                 else
                     $type
    let $type := if ($property/upperValue/@value != "1" and $collection) then
                     concat($type, ">")
                 else
                     $type
    let $type := if (($collection or $element/@xmi:type = "uml:Class") and ($property/upperValue/@value != "1" or not($collection)) and
                     (not($property/@direction) or ($property/@direction != "out" and $property/@direction != "inout"))) then
                     concat ("const ", $type)
                 else
                     $type
    let $type := if ($collection and ($element/@xmi:type = "uml:Class" or $property/upperValue/@value != "1")) then
                     concat ($type, " *")
                 else if ($collection and $element/@xmi:type != "uml:Class" and ($property/@direction = "inout" or $property/@direction = "out")) then
                     concat ($type, " &amp;")
                 else
                     $type
    return $type
};

declare function qtxmi:capitalizedNameFromTypeString ($unqualifiedType as xs:string, $name as xs:string) as xs:string {
    let $capitalizedName := $name
    let $capitalizedName := if ($unqualifiedType = "bool " and starts-with($name, "is")
                                and substring($name, 3, 1) = upper-case(substring($name, 3, 1))) then
                                substring($name, 3)
                            else
                                $capitalizedName
    return concat(upper-case(substring($capitalizedName, 1, 1)), substring($capitalizedName, 2))
};

declare function qtxmi:defaultValue ($property as node(), $namespace) as xs:string {
    let $namespace := replace ($namespace, "::::$", "::")
    let $defaultValue := if ($property/defaultValue) then
                             if ($property/defaultValue/@xmi:type = "uml:LiteralBoolean") then
                                 if ($property/defaultValue/@value) then string($property/defaultValue/@value) else "false"
                             else if ($property/defaultValue/@xmi:type = "uml:LiteralUnlimitedNatural") then
                                 if ($property/defaultValue/@value) then replace($property/defaultValue/@value, "\*", "-1") else "0"
                             else if ($property/defaultValue/@xmi:type = "uml:InstanceValue" and
                                      qtxmi:elementFromTypeString($property/defaultValue/@type)/@xmi:type = "uml:Enumeration") then
                                 if ($property/defaultValue/@instance) then
                                     concat($namespace,
                                            concat(replace(replace(tokenize($property/defaultValue/@instance, "-")[1], "Kind", ""), "Sort", ""),
                                                   concat(upper-case(substring(tokenize($property/defaultValue/@instance, "-")[2], 1, 1)),
                                                          substring(tokenize($property/defaultValue/@instance, "-")[2], 2))))
                                 else ""
                             else ""
                         else ""
    return $defaultValue
};

<qtxmi:XMI xmlns:xmi="http://www.omg.org/spec/XMI/20110701" xmlns:uml="http://www.omg.org/spec/UML/20110701" xmlns:qtxmi="http://www.qt-project.org">
{
for $namespace in distinct-values((doc($xmiFile)//packagedElement[@xmi:type="uml:Package"] | doc($xmiFile)//uml:Package)/@xmi:id)
return
<namespace path="{replace(replace(concat(qtxmi:mappedBaseNamespace($xmiFile), $namespace), "-", "/"), "::", "/")}">
{
for $class in doc($xmiFile)//*[@xmi:id=$namespace]/packagedElement[@xmi:type="uml:Class"]
let $namespace := concat(replace(concat(qtxmi:mappedBaseNamespace($xmiFile), $namespace), "-", "::"), "::")
let $superClasses := $class/generalization/@general | $class/generalization/general/@xmi:idref | $class/generalization/general/@href
let $isAbstract := if ($class/@isAbstract) then $class/@isAbstract else "false"
return
    <class name="Q{qtxmi:unqualifiedTypeFromTypeString($class/@xmi:id)}" isAbstract="{$isAbstract}">
        {
        if ($class/ownedComment/body) then
        <documentation>{$class/ownedComment/body/text()}</documentation>
        else ""
        }
        {
        for $id in qtxmi:elementFromProperty($class/ownedAttribute | $class/ownedOperation/ownedParameter)/@xmi:type
        where $id = "uml:Enumeration"
        return
        <qtumlinclude>{replace(qtxmi:mappedBaseNamespace($xmiFile), "::", "")}/{tokenize($namespace, "::")[1]}Enumerations</qtumlinclude>
        }
        {
        for $superobject in (qtxmi:elementFromTypeString($superClasses)[not(@isAbstract) or @isAbstract = "false"]/@xmi:id)
        return
        <superobject>{qtxmi:typeFromNamespacedTypeString($superobject, $namespace)}</superobject>
        }
        {
        if (count(qtxmi:elementFromTypeString($superClasses)[@isAbstract = "true"]) = count($superClasses) and $isAbstract = "false") then
        <superclass include="QtCore/QObject" name="QObject"/>
        else ""
        }
        {
        for $superClass in $superClasses
        return
        <superclass include="{tokenize(qtxmi:namespaceFromTypeString($superClass), "::")[1]}/{concat("Q", qtxmi:unqualifiedTypeFromTypeString($superClass))}" name="{qtxmi:typeFromNamespacedTypeString($superClass, $namespace)}"/>
        }
        {
        for $type in distinct-values($class/ownedAttribute/type/@href | $class/ownedOperation/ownedParameter/type/@href)
        where tokenize($type, "#")[last()] = "String"
        return
        <qtinclude>QtCore/QString</qtinclude>
        }
        {
        for $value in distinct-values($class/ownedAttribute[not((not(@isUnique) or @isUnique = "true")
                                                                and (not(@isOrdered) or @isOrdered = "false"))]/upperValue/@value
                                    | $class/ownedOperation/ownedParameter[not((not(@isUnique) or @isUnique = "true")
                                                                and (not(@isOrdered) or @isOrdered = "false"))]/upperValue/@value)
        where $value != "1"
        return
        <qtinclude>QtCore/QList</qtinclude>
        }
        {
        for $value in distinct-values($class/ownedAttribute[(not(@isUnique) or @isUnique = "true")
                                                            and (not(@isOrdered) or @isOrdered = "false")]/upperValue/@value
                                    | $class/ownedOperation/ownedParameter[(not(@isUnique) or @isUnique = "true")
                                                            and (not(@isOrdered) or @isOrdered = "false")]/upperValue/@value)
        where $value != "1"
        return
        <qtinclude>QtCore/QSet</qtinclude>
        }
        {
        for $id in distinct-values($class/ownedAttribute/@type | $class/ownedOperation/ownedParameter/@type
                                   | $class/ownedAttribute/type/@xmi:idref | $class/ownedOperation/ownedParameter/type/@xmi:idref
                                   | $class/ownedAttribute/type/@href | $class/ownedOperation/ownedParameter/type/@href)
        let $forwardNamespace := tokenize(qtxmi:namespaceFromTypeString($id), "::")
        let $forwardNamespace := string-join(remove($forwardNamespace, count($forwardNamespace)), "::")
        where qtxmi:elementFromTypeString($id)/@xmi:type = "uml:Class"
              and tokenize($id, "#")[last()] != $class/@xmi:id
              and empty(distinct-values($id[.=$superClasses]))
        order by $forwardNamespace
        return
        <forwarddecl namespace="{$forwardNamespace}">{concat("Q", qtxmi:unqualifiedTypeFromTypeString($id))}</forwarddecl>
        }
        {
        for $attribute in $class/ownedAttribute
        let $unqualifiedType := qtxmi:modifiedTypeFromNamespacedProperty($attribute, $namespace, xs:boolean("true"))
        let $unqualifiedType := if (ends-with($unqualifiedType, "*")) then $unqualifiedType else concat($unqualifiedType, " ")
        let $singleUnqualifiedType := qtxmi:modifiedTypeFromNamespacedProperty($attribute, $namespace, xs:boolean("false"))
        let $singleUnqualifiedType := if (ends-with($singleUnqualifiedType, "*")) then $singleUnqualifiedType else concat($singleUnqualifiedType, " ")
        let $isDerived := if (not($attribute/@isDerived) or $attribute/@isDerived = "false") then "false" else "true"
        let $isDerivedUnion := if (not($attribute/@isDerivedUnion) or $attribute/@isDerivedUnion = "false") then "false" else "true"
        let $isReadOnly := if (not($attribute/@isReadOnly) or $attribute/@isReadOnly = "false") then "false" else "true"
        let $defaultValue := qtxmi:defaultValue($attribute, $namespace)
        where $attribute[not(@association)]
        return
        <attribute isDerived="{$isDerived}" isDerivedUnion="{$isDerivedUnion}" isReadOnly="{$isReadOnly}" subsettedProperty="{$attribute/@subsettedProperty}" redefinedProperty="{$attribute/@redefinedProperty}" id="{$attribute/@xmi:id}" defaultValue="{$defaultValue}">
        <accessor return="{$unqualifiedType}" name="{qtxmi:modifiedFunctionName($attribute)}" constness=" const"/>
        {
        if (not($attribute/upperValue/@value) and $isReadOnly = "false") then
            <accessor return="void " name="set{qtxmi:capitalizedNameFromTypeString($unqualifiedType, qtxmi:mappedFunctionName($attribute/@name))}" constness="">
                <parameter type="{$singleUnqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}"/>
            </accessor>
        else ""
        }
        {
        if ($attribute/upperValue/@value and $isReadOnly = "false") then
        <accessor return="void " name="add{qtxmi:capitalizedNameFromTypeString($unqualifiedType, qtxmi:mappedFunctionName($attribute/@name))}" constness="">
           <parameter type="{$singleUnqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}"/>
        </accessor>
        else ""
        }
        {
        if ($attribute/upperValue/@value and $isReadOnly = "false") then
        <accessor return="void " name="remove{qtxmi:capitalizedNameFromTypeString($unqualifiedType, qtxmi:mappedFunctionName($attribute/@name))}" constness="">
           <parameter type="{$singleUnqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}"/>
        </accessor>
        else ""
        }
        {
        if ($attribute/ownedComment/body) then
        <documentation>{$attribute/ownedComment/body/text()}</documentation>
        else ""
        }
        </attribute>
        }
        {
        for $attribute in $class/ownedAttribute
        let $unqualifiedType := qtxmi:modifiedTypeFromNamespacedProperty($attribute, $namespace, xs:boolean("true"))
        let $unqualifiedType := if (ends-with($unqualifiedType, "*")) then $unqualifiedType else concat($unqualifiedType, " ")
        let $singleUnqualifiedType := qtxmi:modifiedTypeFromNamespacedProperty($attribute, $namespace, xs:boolean("false"))
        let $singleUnqualifiedType := if (ends-with($singleUnqualifiedType, "*")) then $singleUnqualifiedType else concat($singleUnqualifiedType, " ")
        let $isDerived := if (not($attribute/@isDerived) or $attribute/@isDerived = "false") then "false" else "true"
        let $isDerivedUnion := if (not($attribute/@isDerivedUnion) or $attribute/@isDerivedUnion = "false") then "false" else "true"
        let $isReadOnly := if (not($attribute/@isReadOnly) or $attribute/@isReadOnly = "false") then "false" else "true"
        let $defaultValue := qtxmi:defaultValue($attribute, $namespace)
        where $attribute[@association]
        return
        <associationend isDerived="{$isDerived}" isDerivedUnion="{$isDerivedUnion}" isReadOnly="{$isReadOnly}" subsettedProperty="{$attribute/@subsettedProperty}" redefinedProperty="{$attribute/@redefinedProperty}" id="{$attribute/@xmi:id}" defaultValue="{$defaultValue}">
        <accessor return="{$unqualifiedType}" name="{qtxmi:modifiedFunctionName($attribute)}" constness=" const"/>
        {
        if (not($attribute/upperValue/@value) and $isReadOnly = "false") then
            <accessor return="void " name="set{qtxmi:capitalizedNameFromTypeString($unqualifiedType, qtxmi:mappedFunctionName($attribute/@name))}" constness="">
                <parameter type="{$singleUnqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}"/>
            </accessor>
        else ""
        }
        {
        if ($attribute/upperValue/@value and $isReadOnly = "false") then
        <accessor return="void " name="add{qtxmi:capitalizedNameFromTypeString($unqualifiedType, qtxmi:mappedFunctionName($attribute/@name))}" constness="">
           <parameter type="{$singleUnqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}"/>
        </accessor>
        else ""
        }
        {
        if ($attribute/upperValue/@value and $isReadOnly = "false") then
        <accessor return="void " name="remove{qtxmi:capitalizedNameFromTypeString($unqualifiedType, qtxmi:mappedFunctionName($attribute/@name))}" constness="">
           <parameter type="{$singleUnqualifiedType}" name="{qtxmi:mappedFunctionName($attribute/@name)}"/>
        </accessor>
        else ""
        }
        {
        if ($attribute/ownedComment/body) then
        <documentation>{$attribute/ownedComment/body/text()}</documentation>
        else ""
        }
        </associationend>
        }
        {
        for $operation in $class/ownedOperation
        let $constness := if ($operation/@isQuery = "true") then " const" else ""
        let $return := if ($operation/ownedParameter[@direction = "return"]) then
                          qtxmi:modifiedTypeFromNamespacedProperty($operation/ownedParameter[@direction = "return"], $namespace, xs:boolean("true"))
                       else
                           "void"
        let $return := if (ends-with($return, "*")) then $return else concat($return, " ")
        where empty($class/ownedAttribute[@name = $operation/@name])
        return
        <operation return="{$return}" name="{qtxmi:mappedFunctionName($operation/@name)}" constness="{$constness}">
        {
        for $parameter in $operation/ownedParameter[not(@direction) or @direction != "return"]
        let $unqualifiedType := qtxmi:modifiedTypeFromNamespacedProperty($parameter, $namespace, xs:boolean("true"))
        let $unqualifiedType := if (ends-with($unqualifiedType, "*") or ends-with($unqualifiedType, "&amp;")) then $unqualifiedType else concat($unqualifiedType, " ")
        let $unqualifiedType := if ((ends-with($unqualifiedType, "*") or ends-with($unqualifiedType, "&amp;"))
                                    and not(starts-with($unqualifiedType, "const ")) and (not($parameter/@direction)
                                    or $parameter/@direction = "in")) then
                                    concat("const ", $unqualifiedType)
                                else
                                    $unqualifiedType
        return
            <parameter type="{$unqualifiedType}" name="{qtxmi:mappedFunctionName($parameter/@name)}"/>
        }
        {
        if ($operation/ownedComment/body) then
        <documentation>{$operation/ownedComment/body/text()}</documentation>
        else ""
        }
        </operation>
        }
    </class>
}
{
for $enumeration in doc($xmiFile)//*[@xmi:id=$namespace]/packagedElement[@xmi:type="uml:Enumeration"]
return
    <enumeration name="{$enumeration/@name}">
        {
        if ($enumeration/ownedComment/body) then
        <documentation>{$enumeration/ownedComment/body/text()}</documentation>
        else ""
        }
        {
        for $literal in $enumeration/ownedLiteral
        return
        <literal name="{concat(replace(replace($enumeration/@name, "Kind", ""), "Sort", ""), concat(upper-case(substring($literal/@name, 1, 1)), substring($literal/@name, 2)))}" documentation="{$literal/ownedComment/body/text()}"/>
        }
    </enumeration>
}
</namespace>
}
</qtxmi:XMI>
