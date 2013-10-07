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
#include "qumlartifact.h"

#include "private/qumlartifactobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlManifestation>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
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
    \class QUmlArtifact

    \inmodule QtUml

    \brief An artifact is the source of a deployment to a node.An artifact is the specification of a physical piece of information that is used or produced by a software development process, or by deployment and operation of a system. Examples of artifacts include model files, source files, scripts, and binary executable files, a table in a database system, a development deliverable, or a word-processing document, a mail message.
 */
QUmlArtifact::QUmlArtifact(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlArtifactObject(this);
    setPropertyData();
}

QUmlArtifact::~QUmlArtifact()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlArtifact::clone() const
{
    QUmlArtifact *c = new QUmlArtifact;
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
    c->setFileName(fileName());
    foreach (QUmlManifestation *element, manifestations())
        c->addManifestation(dynamic_cast<QUmlManifestation *>(element->clone()));
    foreach (QUmlArtifact *element, nestedArtifacts())
        c->addNestedArtifact(dynamic_cast<QUmlArtifact *>(element->clone()));
    foreach (QUmlProperty *element, ownedAttributes())
        c->addOwnedAttribute(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlOperation *element, ownedOperations())
        c->addOwnedOperation(dynamic_cast<QUmlOperation *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
 */
QString QUmlArtifact::fileName() const
{
    // This is a read-write property

    return _fileName;
}

void QUmlArtifact::setFileName(QString fileName)
{
    // This is a read-write property

    if (_fileName != fileName) {
        _fileName = fileName;
    }
}

/*!
    The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
 */
const QSet<QUmlManifestation *> QUmlArtifact::manifestations() const
{
    // This is a read-write association end

    return _manifestations;
}

void QUmlArtifact::addManifestation(QUmlManifestation *manifestation)
{
    // This is a read-write association end

    if (!_manifestations.contains(manifestation)) {
        _manifestations.insert(manifestation);
        if (manifestation && manifestation->asQObject() && this->asQObject())
            QObject::connect(manifestation->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeManifestation(QObject *)));
        manifestation->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(manifestation);
        addClientDependency(manifestation);
    }
}

void QUmlArtifact::removeManifestation(QUmlManifestation *manifestation)
{
    // This is a read-write association end

    if (_manifestations.contains(manifestation)) {
        _manifestations.remove(manifestation);
        if (manifestation->asQObject())
            manifestation->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(manifestation);
        removeClientDependency(manifestation);
    }
}

/*!
    The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
 */
const QSet<QUmlArtifact *> QUmlArtifact::nestedArtifacts() const
{
    // This is a read-write association end

    return _nestedArtifacts;
}

void QUmlArtifact::addNestedArtifact(QUmlArtifact *nestedArtifact)
{
    // This is a read-write association end

    if (!_nestedArtifacts.contains(nestedArtifact)) {
        _nestedArtifacts.insert(nestedArtifact);
        if (nestedArtifact && nestedArtifact->asQObject() && this->asQObject())
            QObject::connect(nestedArtifact->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeNestedArtifact(QObject *)));
        nestedArtifact->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(nestedArtifact);
    }
}

void QUmlArtifact::removeNestedArtifact(QUmlArtifact *nestedArtifact)
{
    // This is a read-write association end

    if (_nestedArtifacts.contains(nestedArtifact)) {
        _nestedArtifacts.remove(nestedArtifact);
        if (nestedArtifact->asQObject())
            nestedArtifact->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(nestedArtifact);
    }
}

/*!
    The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QUmlProperty *> QUmlArtifact::ownedAttributes() const
{
    // This is a read-write association end

    return _ownedAttributes;
}

void QUmlArtifact::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (!_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.append(ownedAttribute);
        if (ownedAttribute && ownedAttribute->asQObject() && this->asQObject())
            QObject::connect(ownedAttribute->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedAttribute(QObject *)));
        ownedAttribute->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(ownedAttribute);
        addAttribute(ownedAttribute);
    }
}

void QUmlArtifact::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.removeAll(ownedAttribute);
        if (ownedAttribute->asQObject())
            ownedAttribute->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedAttribute);
        removeAttribute(ownedAttribute);
    }
}

/*!
    The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QUmlOperation *> QUmlArtifact::ownedOperations() const
{
    // This is a read-write association end

    return _ownedOperations;
}

void QUmlArtifact::addOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (!_ownedOperations.contains(ownedOperation)) {
        _ownedOperations.append(ownedOperation);
        if (ownedOperation && ownedOperation->asQObject() && this->asQObject())
            QObject::connect(ownedOperation->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedOperation(QObject *)));
        ownedOperation->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addFeature(ownedOperation);
        addOwnedMember(ownedOperation);
    }
}

void QUmlArtifact::removeOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (_ownedOperations.contains(ownedOperation)) {
        _ownedOperations.removeAll(ownedOperation);
        if (ownedOperation->asQObject())
            ownedOperation->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeFeature(ownedOperation);
        removeOwnedMember(ownedOperation);
    }
}

void QUmlArtifact::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("fileName")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("fileName")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlArtifact");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("fileName")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("fileName")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("fileName")][QtModeling::DocumentationRole] = QStringLiteral("A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("fileName")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("fileName")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("fileName")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("manifestation")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("manifestation")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlArtifact");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("manifestation")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("manifestation")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("manifestation")][QtModeling::DocumentationRole] = QStringLiteral("The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("manifestation")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("manifestation")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement NamedElement-clientDependency");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("manifestation")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("nestedArtifact")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("nestedArtifact")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlArtifact");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("nestedArtifact")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("nestedArtifact")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("nestedArtifact")][QtModeling::DocumentationRole] = QStringLiteral("The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("nestedArtifact")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("nestedArtifact")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("nestedArtifact")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedAttribute")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedAttribute")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlArtifact");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedAttribute")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedAttribute")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedAttribute")][QtModeling::DocumentationRole] = QStringLiteral("The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedAttribute")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedAttribute")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember Classifier-attribute");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedAttribute")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedOperation")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedOperation")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlArtifact");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedOperation")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedOperation")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedOperation")][QtModeling::DocumentationRole] = QStringLiteral("The Operations defined for the Artifact. The association is a specialization of the ownedMember association.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedOperation")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedOperation")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlArtifact")][QStringLiteral("ownedOperation")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlArtifact::setClassForProperty()
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
    _classForProperty[QStringLiteral("generals")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("generalizations")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("inheritedMembers")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("isAbstract")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("isFinalSpecialization")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("ownedTemplateSignature")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("ownedUseCases")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("powertypeExtents")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("redefinedClassifiers")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("representation")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("substitutions")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("templateParameter")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("useCases")] = QStringLiteral("QUmlClassifier");
    _classForProperty[QStringLiteral("fileName")] = QStringLiteral("QUmlArtifact");
    _classForProperty[QStringLiteral("manifestations")] = QStringLiteral("QUmlArtifact");
    _classForProperty[QStringLiteral("nestedArtifacts")] = QStringLiteral("QUmlArtifact");
    _classForProperty[QStringLiteral("ownedAttributes")] = QStringLiteral("QUmlArtifact");
    _classForProperty[QStringLiteral("ownedOperations")] = QStringLiteral("QUmlArtifact");
}

