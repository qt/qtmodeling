declare namespace xmi="http://www.omg.org/spec/XMI/20110701";
declare namespace qtxmi="http://www.qt-project.org";

(: Provide a mapping between XMI primity types and Qt types :)
declare function qtxmi:mappedPrimitiveType($primitiveType as xs:string+) as xs:string+
{
         if ($primitiveType = "Boolean")          then "bool"
    else if ($primitiveType = "Integer" or
             $primitiveType = "UnlimitedNatural") then "qint32"
    else if ($primitiveType = "Real")             then "qreal"
    else if ($primitiveType = "String")           then "QString"
    else                                               "qtxmi:unknownPrimitiveType"
};

(: Handle XMI attributes with C++ prohibitive names :)
declare function qtxmi:mappedFunctionName($name as xs:string) as xs:string
{
         if ($name = "namespace") then "namespace_"
    else if ($name = "interface") then "interface_"
    else if ($name = "class") then "class_"
    else if ($name = "default") then "default_"
    else if ($name = "template") then "template_"
    else if ($name = "slots") then "slots_"
    else if ($name = "delete") then "delete_"
    else $name
};

(: Return a new attribute names regarding its multiplicity :)
declare function qtxmi:modifiedFunctionName($attribute as node()) as xs:string
{
    let $functionName := qtxmi:mappedFunctionName(
                         if ($attribute/upperValue/@value != "1"
                         and not((starts-with($attribute/@name, "in") or
                         starts-with($attribute/@name, "to")) and
                             substring($attribute/@name, 3, 1) =
                             upper-case(substring($attribute/@name, 3, 1)))
                         and $attribute/@name != "provided"
                         and $attribute/@name != "required"
                         and $attribute/@name != "endData"
                         and $attribute/@name != "conveyed"
                         and $attribute/@name != "covered"
                         and $attribute/@name != "coveredBy"
                         and $attribute/@name != "conformance"
                         and $attribute/@name != "referred"
                         and $attribute/@name != "represented"
                         ) then
                             concat(replace(replace(replace(replace(
                                    $attribute/@name,
                                    "y$", "ie"),
                                    "ss$", "sse"),
                                    "ex$", "ice"),
                                    "x$", "ce"),
                                    "s")
                         else qtxmi:mappedFunctionName($attribute/@name)
                         )
    return $functionName
};

(: Receives a Qt-mapped basic type and returns a new type regarding type multiplicity :)
declare function qtxmi:handleType($attribute as node()+, $basicType as xs:string+) as xs:string+
{
    let $type := doc($xmiFile)//packagedElement[@xmi:id=$attribute/@type]/@xmi:type
    let $isUnique := if (not($attribute/@isUnique) or $attribute/@isUnique = "true") then "true"
                     else "false"
    let $isOrdered := if (not($attribute/@isOrdered) or $attribute/@isOrdered = "false") then "false"
                      else "true"
    let $collectionBegin := if ($attribute/upperValue/@value != "1") then
                                if ($isUnique = "true" and $isOrdered = "false") then "QSet<"
                                else "QList<"
                            else ""
    let $collectionEnd := if ($attribute/upperValue/@value != "1") then
                              ">"
                          else ""
    let $pointer := if ($type = "uml:Class") then " *" else ""
    return concat(concat(concat($collectionBegin, $basicType), $pointer), $collectionEnd)
};

declare function qtxmi:defaultValue($attribute as node()+, $moduleName as xs:string+) as xs:string+
{
    if ($attribute/defaultValue) then
        if ($attribute/defaultValue/@xmi:type = "uml:LiteralBoolean") then
            if ($attribute/defaultValue/@value) then
                xs:string($attribute/defaultValue/@value)
            else "false"
        else
        if ($attribute/defaultValue/@xmi:type = "uml:LiteralUnlimitedNatural") then
            if ($attribute/defaultValue/@value) then
                replace($attribute/defaultValue/@value, "\*", "-1")
            else "0"
        else
        if ($attribute/defaultValue/@xmi:type = "uml:InstanceValue" and
            doc($xmiFile)//packagedElement[@xmi:id=$attribute/defaultValue/@type]/@xmi:type
            = "uml:Enumeration") then
            if ($attribute/defaultValue/@instance) then
                concat(concat($moduleName, "::"),
                concat(replace(replace(tokenize(
                $attribute/defaultValue/@instance, "-")[1], "Kind", ""), "Sort", ""),
                concat(upper-case(substring(tokenize($attribute/defaultValue/@instance, "-")[2], 1, 1)),
                substring(tokenize($attribute/defaultValue/@instance, "-")[2], 2))))
            else ""
        else ""
    else ""
};

<qtxmi:XMI xmlns:xmi="http://www.omg.org/spec/XMI/20110701"
           xmlns:uml="http://www.omg.org/spec/UML/20110701"
           xmlns:qtxmi="http://www.qt-project.org">
{
for $namespace in doc($xmiFile)//(packagedElement[@xmi:type="uml:Package"] | uml:Package)
let $modulePrefix := concat("Q", $namespace/@name)
let $moduleName    := replace($modulePrefix, "^Q", "Qt")
return
for $class in doc($xmiFile)//*[@xmi:id=$namespace/@xmi:id]/packagedElement[@xmi:type="uml:Class"]
let $isAbstract := if ($class/@isAbstract) then $class/@isAbstract else "false"
return
<class name="{$modulePrefix}{$class/@name}" module="{$moduleName}" isAbstract="{$isAbstract}">
    <documentation>{$class/ownedComment/body/text()}</documentation>
    {
    for $superclass in $class/generalization/@general |
                       $class/generalization/general/@xmi:idref |
                       $class/generalization/general/@href
    let $superclassName := concat($modulePrefix, $superclass)
    return
    <superclass include="{$moduleName}/{$superclassName}" name="{$superclassName}"/>
    }
    {
    for $attribute in $class/ownedAttribute
    let $isDerived        := if (not($attribute/@isDerived) or $attribute/@isDerived = "false") then "false"
                             else "true"
    let $isDerivedUnion   := if (not($attribute/@isDerivedUnion) or $attribute/@isDerivedUnion = "false") then "false"
                             else "true"
    let $isReadOnly       := if (not($attribute/@isReadOnly) or $attribute/@isReadOnly = "false") then "false"
                             else "true"
    let $isAssociationEnd := if ($attribute[@association]) then "true"
                             else "false"
    let $isMultivalued    := if ($attribute/upperValue/@value != "1") then "true"
                             else "false"
    let $basicType        := if ($attribute/@type) then concat($modulePrefix, xs:string($attribute/@type))
                             else qtxmi:mappedPrimitiveType(tokenize($attribute/type/@href, "#")[last()])
    return
    <attribute name="{qtxmi:modifiedFunctionName($attribute)}" type="{qtxmi:handleType($attribute, $basicType)}"
               isMultivalued="{$isMultivalued}" isDerived="{$isDerived}" isDerivedUnion="{$isDerivedUnion}"
               isReadOnly="{$isReadOnly}" isAssociationEnd="{$isAssociationEnd}" defaultValue="{qtxmi:defaultValue($attribute, $moduleName)}">
    {
        for $subsettedPropertyName in tokenize($attribute/@subsettedProperty, " ")
        let $subsettedProperty := doc($xmiFile)//ownedAttribute[@xmi:id=$subsettedPropertyName]
        return
        <subsettedProperty name="{$modulePrefix}{tokenize($subsettedPropertyName, '-')[1]}::{qtxmi:modifiedFunctionName($subsettedProperty)}"/>
    }
    {
        for $redefinedPropertyName in tokenize($attribute/@redefinedProperty, " ")
        let $redefinedProperty := doc($xmiFile)//ownedAttribute[@xmi:id=$redefinedPropertyName]
        return
        <redefinedProperty name="{$modulePrefix}{tokenize($redefinedPropertyName, '-')[1]}::{qtxmi:modifiedFunctionName($redefinedProperty)}"/>
    }
    </attribute>
    }
</class>
}
</qtxmi:XMI>
