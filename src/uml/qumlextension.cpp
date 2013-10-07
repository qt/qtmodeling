/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlextension.h"

#include "private/qumlextensionobject_p.h"

#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtensionEnd>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

/*!
    \class QUmlExtension

    \inmodule QtUml

    \brief An extension is used to indicate that the properties of a metaclass are extended through a stereotype, and gives the ability to flexibly add (and later remove) stereotypes to classes.
 */
QUmlExtension::QUmlExtension(bool createQObject) :
    QUmlAssociation(false),
    _ownedEnd(0)
{
    if (createQObject)
        _qObject = new QUmlExtensionObject(this);
    setPropertyData();
}

QUmlExtension::~QUmlExtension()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlExtension::clone() const
{
    QUmlExtension *c = new QUmlExtension;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    c->setVisibility(visibility());
    if (package())
        c->setPackage(dynamic_cast<QUmlPackage *>(package()->clone()));
    c->setLeaf(isLeaf());
    foreach (QUmlTemplateBinding *element, templateBindings())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    foreach (QUmlCollaborationUse *element, collaborationUses())
        c->addCollaborationUse(dynamic_cast<QUmlCollaborationUse *>(element->clone()));
    foreach (QUmlGeneralization *element, generalizations())
        c->addGeneralization(dynamic_cast<QUmlGeneralization *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setFinalSpecialization(isFinalSpecialization());
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlUseCase *element, ownedUseCases())
        c->addOwnedUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    foreach (QUmlGeneralizationSet *element, powertypeExtents())
        c->addPowertypeExtent(dynamic_cast<QUmlGeneralizationSet *>(element->clone()));
    foreach (QUmlClassifier *element, redefinedClassifiers())
        c->addRedefinedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    if (representation())
        c->setRepresentation(dynamic_cast<QUmlCollaborationUse *>(representation()->clone()));
    foreach (QUmlSubstitution *element, substitutions())
        c->addSubstitution(dynamic_cast<QUmlSubstitution *>(element->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlClassifierTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlUseCase *element, useCases())
        c->addUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    c->setDerived(isDerived());
    foreach (QUmlProperty *element, memberEnds())
        c->addMemberEnd(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlProperty *element, navigableOwnedEnds())
        c->addNavigableOwnedEnd(dynamic_cast<QUmlProperty *>(element->clone()));
    if (ownedEnd())
        c->setOwnedEnd(dynamic_cast<QUmlExtensionEnd *>(ownedEnd()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Indicates whether an instance of the extending stereotype must be created when an instance of the extended class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false. Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false.
 */
bool QUmlExtension::isRequired() const
{
    // This is a read-only derived property

    qWarning("UmlExtension::isRequired(): to be implemented (this is a derived property)");

    return bool();
}

void QUmlExtension::setRequired(bool isRequired)
{
    // This is a read-only derived property

    qWarning("UmlExtension::setRequired(): to be implemented (this is a derived property)");
    Q_UNUSED(isRequired);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the Class that is extended through an Extension. The property is derived from the type of the memberEnd that is not the ownedEnd.
 */
QUmlClass *QUmlExtension::metaclass() const
{
    // This is a read-only derived association end

    qWarning("UmlExtension::metaclass(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlExtension::setMetaclass(QUmlClass *metaclass)
{
    // This is a read-only derived association end

    qWarning("UmlExtension::setMetaclass(): to be implemented (this is a derived association end)");
    Q_UNUSED(metaclass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the end of the extension that is typed by a Stereotype.
 */
QUmlExtensionEnd *QUmlExtension::ownedEnd() const
{
    // This is a read-write association end

    return _ownedEnd;
}

void QUmlExtension::setOwnedEnd(QUmlExtensionEnd *ownedEnd)
{
    // This is a read-write association end

    if (_ownedEnd != ownedEnd) {
        _ownedEnd = ownedEnd;
        if (ownedEnd && ownedEnd->asQObject() && this->asQObject())
            QObject::connect(ownedEnd->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setOwnedEnd()));
        ownedEnd->asQObject()->setParent(this->asQObject());
    }
}

// OPERATIONS

/*!
    The query metaclassEnd() returns the Property that is typed by a metaclass (as opposed to a stereotype).
 */
QUmlProperty *QUmlExtension::metaclassEnd() const
{
    qWarning("UmlExtension::metaclassEnd(): to be implemented (operation)");

    return 0;
}

void QUmlExtension::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("isRequired")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("isRequired")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExtension");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("isRequired")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("isRequired")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("isRequired")][QtModeling::DocumentationRole] = QStringLiteral("Indicates whether an instance of the extending stereotype must be created when an instance of the extended class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false. Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("isRequired")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("isRequired")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("isRequired")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("metaclass")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("metaclass")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExtension");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("metaclass")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("metaclass")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("metaclass")][QtModeling::DocumentationRole] = QStringLiteral("References the Class that is extended through an Extension. The property is derived from the type of the memberEnd that is not the ownedEnd.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("metaclass")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("metaclass")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("metaclass")][QtModeling::OppositeEndRole] = QStringLiteral("Class-extension");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("ownedEnd")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("ownedEnd")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExtension");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("ownedEnd")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("ownedEnd")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("ownedEnd")][QtModeling::DocumentationRole] = QStringLiteral("References the end of the extension that is typed by a Stereotype.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("ownedEnd")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("Association-ownedEnd");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("ownedEnd")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlExtension")][QStringLiteral("ownedEnd")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

