[%- MACRO convertType(type)
    SWITCH type -%]
    [%- CASE 'Boolean' -%]boolean
    [%- CASE 'Integer' -%]qint32
    [%- CASE 'Real' -%]qreal
    [%- CASE 'UnlimitedNatural' -%]qint32
    [%- CASE -%]
        [%- IF !type.remove('^' _ currentPackage _ '::').search('::') -%]
            [%- 'Q' _ type.remove('^' _ currentPackage _ '::') -%]
        [%- ELSE -%]
            [%- FOREACH classifier IN type.split('::') -%]
                [%- IF !loop.first -%]
                    [%- '::' -%]
                [%- END -%]
                [%- IF loop.last -%]
                    [%- 'Q' -%]
                [%- END -%]
                [%- classifier -%]
            [%- END -%]
        [%- END -%]
    [%- END -%]
[%- MACRO handleModifiers(property, const, ref) BLOCK -%]
    [%- IF property.type.href.defined -%]
        [%- type = property.type.href -%]
    [%- ELSIF property.type.defined -%]
        [%- type = property.type -%]
    [%- ELSE -%]
        [%- type = property -%]
    [%- END -%]
    [%- convertedType = convertType(type.split('#').last.replace('-', '::')) -%]
    [%- IF (property.upperValue.value != '*' || property.isReadOnly) && const -%]
        [%- 'const ' -%]
    [%- END -%]
    [%- IF property.upperValue.value == '*' -%]
        [%- 'QList<' -%]
    [%- END -%]
    [%- convertedType _ ' ' -%]
    [%- IF property.upperValue.value == '*' -%]
        [%- '*> ' -%]
    [%- END -%]
    [%- IF ref -%]
        [%- '&' -%]
    [%- END -%]
[%- END -%]
[%- MACRO unqualifiedType(property, const, ref)
    IF property.type.href.defined -%]
        [%- handleModifiers(property, const, ref) -%]
    [%- ELSIF property.type.defined -%]
        [%- handleModifiers(property, const, ref) -%]
    [%- ELSE -%]
        [%- convertType(property.split('#').last.replace('-', '::')) -%]
[%- END -%]
[%- MACRO GENERATEPROPERTIES(association)
    FOREACH property IN classData.ownedAttribute -%]
        [%- IF (property.value.association.defined && association) || (!property.value.association.defined && !association) %]
    Q_PROPERTY(${unqualifiedType(property.value, 0, 0)}${property.key} READ ${property.key}
            [%- IF property.value.isReadOnly != 'true' && property.value.upperValue.value != '*' %]
                [%- ' WRITE set' -%]
                [%- IF property.key.substr(0, 2) == 'is' -%]
                    [%- property.key.substr(2).ucfirst -%]
                [%- ELSE -%]
                    [%- property.key.ucfirst -%]
                [%- END- %]
            [%- END -%]
            [%- ')' -%]
        [%- END -%]
    [%- END -%]
[%- MACRO GENERATEACCESSORS(association)
    FOREACH property IN classData.ownedAttribute -%]
        [%- IF ((property.value.association.defined && association) || (!property.value.association.defined && !association))
                && !(property.value.isDerived && !property.value.isDerivedUnion) %]
    ${unqualifiedType(property.value, 1, 1)}${property.key}()
            [%- IF property.value.isReadOnly && const -%]
                [%- 'const ' -%]
            [%- END -%]
            [%- ';' -%]
            [%- IF property.value.isReadOnly != 'true' && property.value.upperValue.value != '*' %]
    void set
            [%- IF property.key.substr(0, 2) == 'is' -%]
                [%- property.key.substr(2).ucfirst -%]
            [%- ELSE -%]
                [%- property.key.ucfirst -%]
            [%- END- %]
            [%- '(' _ unqualifiedType(property.value, 1, 1) -%]
            [%- IF property.key.substr(0, 2) == 'is' -%]
                [%- property.key.substr(2).lcfirst -%]
            [%- ELSE -%]
                [%- property.key -%]
            [%- END- %]
            [%- ');' -%]
        [%- END -%]
    [%- END -%]
[%- END %]
[%- MACRO GENERATEOPERATIONS BLOCK -%]
    [%- FOREACH operation IN classData.ownedOperation -%]
        [%- return = void -%]
        [%- FOREACH parameter IN operation.value.ownedParameter -%]
            [%- IF parameter.value.direction == 'return' -%]
                [%- return = unqualifiedType(parameter.value, 1, 1) -%]
            [%- END -%]
        [%- END %]
    ${return}${operation.key}(
        [%- returnDelta = 1 -%]
        [%- FOREACH parameter IN operation.value.ownedParameter -%]
            [%- IF parameter.value.direction != 'return' -%]
                [%- unqualifiedType(parameter.value, 1, 1) _ parameter.key -%]
                [%- IF loop.count < loop.size - returnDelta -%]
                    [%- ', ' -%]
                [%- END -%]
            [%- ELSE -%]
                [%- returnDelta = 0 -%]
            [%- END -%]
        [%- END -%]
        [%- ')' -%]
        [%- IF operation.value.isQuery -%]
            [%- ' const' -%]
        [%- END -%]
        [%- ';' -%]
    [%- END %]
[%- END -%]