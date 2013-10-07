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
#include "qumlassociation.h"

#include "private/qumlassociationobject_p.h"

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
    \class QUmlAssociation

    \inmodule QtUml

    \brief An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link.A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link. A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.
 */
QUmlAssociation::QUmlAssociation(bool createQObject) :
    _isDerived(false)
{
    if (createQObject)
        _qObject = new QUmlAssociationObject(this);
    setPropertyData();
}

QUmlAssociation::~QUmlAssociation()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlAssociation::clone() const
{
    QUmlAssociation *c = new QUmlAssociation;
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
    foreach (QUmlProperty *element, ownedEnds())
        c->addOwnedEnd(dynamic_cast<QUmlProperty *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the classifiers that are used as types of the ends of the association.
 */
const QList<QUmlType *> QUmlAssociation::endTypes() const
{
    // This is a read-only derived association end

    qWarning("UmlAssociation::endTypes(): to be implemented (this is a derived association end)");

    return QList<QUmlType *>();
}

void QUmlAssociation::addEndType(QUmlType *endType)
{
    // This is a read-only derived association end

    qWarning("UmlAssociation::addEndType(): to be implemented (this is a derived association end)");
    Q_UNUSED(endType);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addRelatedElement(endType);
    }
}

void QUmlAssociation::removeEndType(QUmlType *endType)
{
    // This is a read-only derived association end

    qWarning("UmlAssociation::removeEndType(): to be implemented (this is a derived association end)");
    Q_UNUSED(endType);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removeRelatedElement(endType);
    }
}

/*!
    Specifies whether the association is derived from other model elements such as other associations or constraints.
 */
bool QUmlAssociation::isDerived() const
{
    // This is a read-write property

    return _isDerived;
}

void QUmlAssociation::setDerived(bool isDerived)
{
    // This is a read-write property

    if (_isDerived != isDerived) {
        _isDerived = isDerived;
        _modifiedResettableProperties << QStringLiteral("isDerived");
    }
}

/*!
    Each end represents participation of instances of the classifier connected to the end in links of the association.
 */
const QList<QUmlProperty *> QUmlAssociation::memberEnds() const
{
    // This is a read-write association end

    return _memberEnds;
}

void QUmlAssociation::addMemberEnd(QUmlProperty *memberEnd)
{
    // This is a read-write association end

    if (!_memberEnds.contains(memberEnd)) {
        _memberEnds.append(memberEnd);
        if (memberEnd && memberEnd->asQObject() && this->asQObject())
            QObject::connect(memberEnd->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeMemberEnd(QObject *)));

        // Adjust subsetted properties
        addMember(memberEnd);

        // Adjust opposite properties
        if (memberEnd) {
            memberEnd->setAssociation(this);
        }
    }
}

void QUmlAssociation::removeMemberEnd(QUmlProperty *memberEnd)
{
    // This is a read-write association end

    if (_memberEnds.contains(memberEnd)) {
        _memberEnds.removeAll(memberEnd);

        // Adjust subsetted properties
        removeMember(memberEnd);

        // Adjust opposite properties
        if (memberEnd) {
            memberEnd->setAssociation(0);
        }
    }
}

/*!
    The navigable ends that are owned by the association itself.
 */
const QSet<QUmlProperty *> QUmlAssociation::navigableOwnedEnds() const
{
    // This is a read-write association end

    return _navigableOwnedEnds;
}

void QUmlAssociation::addNavigableOwnedEnd(QUmlProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    if (!_navigableOwnedEnds.contains(navigableOwnedEnd)) {
        _navigableOwnedEnds.insert(navigableOwnedEnd);
        if (navigableOwnedEnd && navigableOwnedEnd->asQObject() && this->asQObject())
            QObject::connect(navigableOwnedEnd->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeNavigableOwnedEnd(QObject *)));

        // Adjust subsetted properties
        addOwnedEnd(navigableOwnedEnd);
    }
}

void QUmlAssociation::removeNavigableOwnedEnd(QUmlProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    if (_navigableOwnedEnds.contains(navigableOwnedEnd)) {
        _navigableOwnedEnds.remove(navigableOwnedEnd);

        // Adjust subsetted properties
        removeOwnedEnd(navigableOwnedEnd);
    }
}

/*!
    The ends that are owned by the association itself.
 */
const QList<QUmlProperty *> QUmlAssociation::ownedEnds() const
{
    // This is a read-write association end

    return _ownedEnds;
}

void QUmlAssociation::addOwnedEnd(QUmlProperty *ownedEnd)
{
    // This is a read-write association end

    if (!_ownedEnds.contains(ownedEnd)) {
        _ownedEnds.append(ownedEnd);
        if (ownedEnd && ownedEnd->asQObject() && this->asQObject())
            QObject::connect(ownedEnd->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedEnd(QObject *)));
        ownedEnd->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addMemberEnd(ownedEnd);
        addFeature(ownedEnd);
        addOwnedMember(ownedEnd);

        // Adjust opposite properties
        if (ownedEnd) {
            ownedEnd->setOwningAssociation(this);
        }
    }
}

void QUmlAssociation::removeOwnedEnd(QUmlProperty *ownedEnd)
{
    // This is a read-write association end

    if (_ownedEnds.contains(ownedEnd)) {
        _ownedEnds.removeAll(ownedEnd);
        if (ownedEnd->asQObject())
            ownedEnd->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeMemberEnd(ownedEnd);
        removeFeature(ownedEnd);
        removeOwnedMember(ownedEnd);

        // Adjust opposite properties
        if (ownedEnd) {
            ownedEnd->setOwningAssociation(0);
        }
    }
}

void QUmlAssociation::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("endType")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("endType")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAssociation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("endType")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("endType")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("endType")][QtModeling::DocumentationRole] = QStringLiteral("References the classifiers that are used as types of the ends of the association.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("endType")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("endType")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Relationship-relatedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("endType")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("isDerived")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("isDerived")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAssociation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("isDerived")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("isDerived")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("isDerived")][QtModeling::DocumentationRole] = QStringLiteral("Specifies whether the association is derived from other model elements such as other associations or constraints.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("isDerived")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("isDerived")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("isDerived")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("memberEnd")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("memberEnd")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAssociation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("memberEnd")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("memberEnd")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("memberEnd")][QtModeling::DocumentationRole] = QStringLiteral("Each end represents participation of instances of the classifier connected to the end in links of the association.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("memberEnd")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("memberEnd")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-member");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("memberEnd")][QtModeling::OppositeEndRole] = QStringLiteral("Property-association");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("navigableOwnedEnd")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("navigableOwnedEnd")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAssociation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("navigableOwnedEnd")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("navigableOwnedEnd")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("navigableOwnedEnd")][QtModeling::DocumentationRole] = QStringLiteral("The navigable ends that are owned by the association itself.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("navigableOwnedEnd")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("navigableOwnedEnd")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Association-ownedEnd");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("navigableOwnedEnd")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("ownedEnd")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("ownedEnd")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlAssociation");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("ownedEnd")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("ownedEnd")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("ownedEnd")][QtModeling::DocumentationRole] = QStringLiteral("The ends that are owned by the association itself.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("ownedEnd")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("ownedEnd")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Association-memberEnd Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlAssociation")][QStringLiteral("ownedEnd")][QtModeling::OppositeEndRole] = QStringLiteral("Property-owningAssociation");

}

void QUmlAssociation::setClassForProperty()
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
    _classForProperty[QStringLiteral("relatedElements")] = QStringLiteral("QUmlRelationship");
    _classForProperty[QStringLiteral("endTypes")] = QStringLiteral("QUmlAssociation");
    _classForProperty[QStringLiteral("isDerived")] = QStringLiteral("QUmlAssociation");
    _classForProperty[QStringLiteral("memberEnds")] = QStringLiteral("QUmlAssociation");
    _classForProperty[QStringLiteral("navigableOwnedEnds")] = QStringLiteral("QUmlAssociation");
    _classForProperty[QStringLiteral("ownedEnds")] = QStringLiteral("QUmlAssociation");
}

