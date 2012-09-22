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
declare function qtxmi:classifierFromProperty ($property as node()) as xs:string* {
    doc($xmiFile)//packagedElement[@xmi:id = $property/@type]/@xmi:type
};
declare function qtxmi:mappedPrimitiveType($primitiveType as xs:string) as xs:string {
    if ($primitiveType = "Boolean") then "bool"
    else if ($primitiveType = "Integer" or $primitiveType = "UnlimitedNatural") then "qint32"
    else if ($primitiveType = "Real") then "qreal"
    else if ($primitiveType = "String") then "QString"
    else "qtxmi:unknownPrimitiveType"
};
declare function qtxmi:unqualifiedTypeFromNamespacedProperty ($property as node(), $namespace as xs:string) as xs:string {
    if ($property/@type) then
        let $baseType := if (compare(qtxmi:namespaceFromId($property/@type), $namespace) = 0) then
            concat("Q", substring(replace(replace($property/@type, "-", "::"), $namespace, ""), 3))
        else
            concat(qtxmi:namespaceFromId($property/@type), concat("::", concat("Q", qtxmi:unqualifiedTypeFromId($property/@type))))
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
for $class in doc($xmiFile)//packagedElement[@xmi:type="uml:Class"][@xmi:id = "Classes-Kernel-Element" or @xmi:id = "Classes-Kernel-Association" or @xmi:id = "Classes-Kernel-NamedElement" or @xmi:id = "Classes-Kernel-BehavioralFeature"]
let $namespace := qtxmi:namespaceFromId($class/@xmi:id)
let $superClasses := $class/generalization/@general
return
    <class name="Q{$class/@name}">
        <namespace>{$namespace}</namespace>
        {
        for $id in $superClasses
        return
        <includes>{concat("Q", qtxmi:unqualifiedTypeFromId($id))}</includes>
        }
        {
        for $id in distinct-values($class/ownedAttribute/@type | $class/ownedOperation/ownedParameter/@type)
        where qtxmi:classifierFromString($id) = "uml:Enumeration"
        return
        <includes>{concat("Q", qtxmi:unqualifiedTypeFromId($id))}</includes>
        }
        {
        for $id in distinct-values($class/ownedAttribute/@type | $class/ownedOperation/ownedParameter/@type)
        where qtxmi:classifierFromString($id) != "uml:Enumeration" and $id != $class/@xmi:id and empty(distinct-values($id[.=$superClasses]))
        return
        <forwarddecls>{concat("Q", qtxmi:unqualifiedTypeFromId($id))}</forwarddecls>
        }
        {
        for $attribute in $class/ownedAttribute
        let $unqualifiedType := qtxmi:unqualifiedTypeFromNamespacedProperty($attribute, $namespace)
        return
        if (not(starts-with($unqualifiedType, "QList")) and ($attribute[not(@isReadOnly)] or $attribute/@isReadOnly != "true")) then
        <attribute-accessors>
        <attribute-accessor return="{$unqualifiedType}" name="{$attribute/@name}"/>
        <attribute-accessor return="void" name="set{qtxmi:capitalizedNameFromType($unqualifiedType, $attribute/@name)}"></attribute-accessor>
        </attribute-accessors>
        else
        <attribute-accessors>
        <attribute-accessor return="{$unqualifiedType}" name="{$attribute/@name}"/>
        </attribute-accessors>
        }
        <documentation>{$class/ownedComment/body/text()}</documentation>
    </class>
}
</qtxmi:XMI>
