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
#include "qumlassociationclass.h"

#include "private/qumlassociationclassobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlReception>
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
    \class QUmlAssociationClass

    \inmodule QtUml

    \brief A model element that has both association and class properties. An AssociationClass can be seen as an association that also has class properties, or as a class that also has association properties. It not only connects a set of classifiers but also defines a set of features that belong to the relationship itself and not to any of the classifiers.
 */
QUmlAssociationClass::QUmlAssociationClass(bool createQObject) :
    QUmlClass(false),
    QUmlAssociation(false)
{
    if (createQObject)
        _qObject = new QUmlAssociationClassObject(this);
    setPropertyData();
}

QUmlAssociationClass::~QUmlAssociationClass()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlAssociationClass::clone() const
{
    QUmlAssociationClass *c = new QUmlAssociationClass;
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
    foreach (QUmlConnector *element, ownedConnectors())
        c->addOwnedConnector(dynamic_cast<QUmlConnector *>(element->clone()));
    if (classifierBehavior())
        c->setClassifierBehavior(dynamic_cast<QUmlBehavior *>(classifierBehavior()->clone()));
    foreach (QUmlInterfaceRealization *element, interfaceRealizations())
        c->addInterfaceRealization(dynamic_cast<QUmlInterfaceRealization *>(element->clone()));
    foreach (QUmlBehavior *element, ownedBehaviors())
        c->addOwnedBehavior(dynamic_cast<QUmlBehavior *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setActive(isActive());
    foreach (QUmlClassifier *element, nestedClassifiers())
        c->addNestedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    foreach (QUmlProperty *element, ownedAttributes())
        c->addOwnedAttribute(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlOperation *element, ownedOperations())
        c->addOwnedOperation(dynamic_cast<QUmlOperation *>(element->clone()));
    foreach (QUmlReception *element, ownedReceptions())
        c->addOwnedReception(dynamic_cast<QUmlReception *>(element->clone()));
    c->setDerived(isDerived());
    foreach (QUmlProperty *element, memberEnds())
        c->addMemberEnd(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlProperty *element, navigableOwnedEnds())
        c->addNavigableOwnedEnd(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlProperty *element, ownedEnds())
        c->addOwnedEnd(dynamic_cast<QUmlProperty *>(element->clone()));
    return c;
}

void QUmlAssociationClass::setPropertyData()
{
}

void QUmlAssociationClass::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("elementImports")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("importedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("members")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedRules")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("packageImports")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("owningTemplateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlPackageableElement");
    _classForProperty[QStringLiteral("package")] = QStringLiteral("QUmlType");
    _classForProperty[QStringLiteral("isLeaf")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinedElements")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinitionContexts")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("templateBindings")] = QStringLiteral("QUmlTemplateableElement");
    _classForProperty[QStringLiteral("attributes")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("collaborationUses")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("features")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("generalizations")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("inheritedMembers")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("isFinalSpecialization")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("ownedTemplateSignature")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("ownedUseCases")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("powertypeExtents")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("redefinedClassifiers")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("representation")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("substitutions")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("templateParameter")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("useCases")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("ownedConnectors")] = QStringLiteral("QUmlStructuredClassifier");
    _classForProperty[QStringLiteral("parts")] = QStringLiteral("QUmlStructuredClassifier");
    _classForProperty[QStringLiteral("roles")] = QStringLiteral("QUmlStructuredClassifier");
    _classForProperty[QStringLiteral("ownedPorts")] = QStringLiteral("QUmlEncapsulatedClassifier");
    _classForProperty[QStringLiteral("classifierBehavior")] = QStringLiteral("QUmlBehavioredClassifier");
    _classForProperty[QStringLiteral("interfaceRealizations")] = QStringLiteral("QUmlBehavioredClassifier");
    _classForProperty[QStringLiteral("ownedBehaviors")] = QStringLiteral("QUmlBehavioredClassifier");
    _classForProperty[QStringLiteral("extensions")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("isAbstract")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("isActive")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("nestedClassifiers")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("ownedAttributes")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("ownedOperations")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("ownedReceptions")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("superClasses")] = QStringLiteral("QUmlClass");
    _classForProperty[QStringLiteral("relatedElements")] = QStringLiteral("QUmlRelationship");
    _classForProperty[QStringLiteral("endTypes")] = QStringLiteral("QUmlAssociation");
    _classForProperty[QStringLiteral("isDerived")] = QStringLiteral("QUmlAssociation");
    _classForProperty[QStringLiteral("memberEnds")] = QStringLiteral("QUmlAssociation");
    _classForProperty[QStringLiteral("navigableOwnedEnds")] = QStringLiteral("QUmlAssociation");
    _classForProperty[QStringLiteral("ownedEnds")] = QStringLiteral("QUmlAssociation");
}

