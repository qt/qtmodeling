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
#include "qumlbehavioralfeature.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlType>

/*!
    \class QUmlBehavioralFeature

    \inmodule QtUml

    \brief A behavioral feature is a feature of a classifier that specifies an aspect of the behavior of its instances.A behavioral feature is implemented (realized) by a behavior. A behavioral feature specifies that a classifier will respond to a designated request by invoking its implementing method.A behavioral feature owns zero or more parameter sets.
 */
QUmlBehavioralFeature::QUmlBehavioralFeature() :
    _concurrency(QtUml::CallConcurrencyKindSequential),
    _isAbstract(false)
{
    setClassForProperty();
    setPropertyData();
}

QUmlBehavioralFeature::~QUmlBehavioralFeature()
{
}

QModelingObject *QUmlBehavioralFeature::clone() const
{
    QUmlBehavioralFeature *c = new QUmlBehavioralFeature;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    c->setLeaf(isLeaf());
    c->setStatic(isStatic());
    c->setConcurrency(concurrency());
    c->setAbstract(isAbstract());
    foreach (QUmlBehavior *element, methods())
        c->addMethod(dynamic_cast<QUmlBehavior *>(element->clone()));
    foreach (QUmlParameter *element, ownedParameters())
        c->addOwnedParameter(dynamic_cast<QUmlParameter *>(element->clone()));
    foreach (QUmlParameterSet *element, ownedParameterSets())
        c->addOwnedParameterSet(dynamic_cast<QUmlParameterSet *>(element->clone()));
    foreach (QUmlType *element, raisedExceptions())
        c->addRaisedException(dynamic_cast<QUmlType *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a class with isActive being false). Active instances control access to their own behavioral features.
 */
QtUml::CallConcurrencyKind QUmlBehavioralFeature::concurrency() const
{
    // This is a read-write property

    return _concurrency;
}

void QUmlBehavioralFeature::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    // This is a read-write property

    if (_concurrency != concurrency) {
        _concurrency = concurrency;
        _modifiedResettableProperties << QStringLiteral("concurrency");
    }
}

/*!
    If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element.
 */
bool QUmlBehavioralFeature::isAbstract() const
{
    // This is a read-write property

    return _isAbstract;
}

void QUmlBehavioralFeature::setAbstract(bool isAbstract)
{
    // This is a read-write property

    if (_isAbstract != isAbstract) {
        _isAbstract = isAbstract;
        _modifiedResettableProperties << QStringLiteral("isAbstract");
    }
}

/*!
    A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).
 */
const QSet<QUmlBehavior *> QUmlBehavioralFeature::methods() const
{
    // This is a read-write association end

    return _methods;
}

void QUmlBehavioralFeature::addMethod(QUmlBehavior *method)
{
    // This is a read-write association end

    if (!_methods.contains(method)) {
        _methods.insert(method);
        if (method && method->asQObject() && this->asQObject())
            QObject::connect(method->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeMethod(QObject *)));

        // Adjust opposite properties
        if (method) {
            method->setSpecification(this);
        }
    }
}

void QUmlBehavioralFeature::removeMethod(QUmlBehavior *method)
{
    // This is a read-write association end

    if (_methods.contains(method)) {
        _methods.remove(method);

        // Adjust opposite properties
        if (method) {
            method->setSpecification(0);
        }
    }
}

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.
 */
const QList<QUmlParameter *> QUmlBehavioralFeature::ownedParameters() const
{
    // This is a read-write association end

    return _ownedParameters;
}

void QUmlBehavioralFeature::addOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.append(ownedParameter);
        if (ownedParameter && ownedParameter->asQObject() && this->asQObject())
            QObject::connect(ownedParameter->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedParameter(QObject *)));
        ownedParameter->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(ownedParameter);
    }
}

void QUmlBehavioralFeature::removeOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.removeAll(ownedParameter);
        if (ownedParameter->asQObject())
            ownedParameter->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameter);
    }
}

/*!
    The ParameterSets owned by this BehavioralFeature.
 */
const QSet<QUmlParameterSet *> QUmlBehavioralFeature::ownedParameterSets() const
{
    // This is a read-write association end

    return _ownedParameterSets;
}

void QUmlBehavioralFeature::addOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (!_ownedParameterSets.contains(ownedParameterSet)) {
        _ownedParameterSets.insert(ownedParameterSet);
        if (ownedParameterSet && ownedParameterSet->asQObject() && this->asQObject())
            QObject::connect(ownedParameterSet->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedParameterSet(QObject *)));
        ownedParameterSet->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(ownedParameterSet);
    }
}

void QUmlBehavioralFeature::removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (_ownedParameterSets.contains(ownedParameterSet)) {
        _ownedParameterSets.remove(ownedParameterSet);
        if (ownedParameterSet->asQObject())
            ownedParameterSet->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameterSet);
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this feature.
 */
const QSet<QUmlType *> QUmlBehavioralFeature::raisedExceptions() const
{
    // This is a read-write association end

    return _raisedExceptions;
}

void QUmlBehavioralFeature::addRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    if (!_raisedExceptions.contains(raisedException)) {
        _raisedExceptions.insert(raisedException);
        if (raisedException && raisedException->asQObject() && this->asQObject())
            QObject::connect(raisedException->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRaisedException(QObject *)));
    }
}

void QUmlBehavioralFeature::removeRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    if (_raisedExceptions.contains(raisedException)) {
        _raisedExceptions.remove(raisedException);
    }
}

// OPERATIONS

/*!
    The query isDistinguishableFrom() determines whether two BehavioralFeatures may coexist in the same Namespace. It specifies that they have to have different signatures.
 */
bool QUmlBehavioralFeature::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    qWarning("UmlBehavioralFeature::isDistinguishableFrom(): to be implemented (operation)");

    Q_UNUSED(n);
    Q_UNUSED(ns);
    return bool ();
}

void QUmlBehavioralFeature::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("elementImports")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("importedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("members")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedRules")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("packageImports")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("isLeaf")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinedElements")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinitionContexts")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("featuringClassifiers")] = QStringLiteral("QUmlFeature");
    _classForProperty[QStringLiteral("isStatic")] = QStringLiteral("QUmlFeature");
    _classForProperty[QStringLiteral("concurrency")] = QStringLiteral("QUmlBehavioralFeature");
    _classForProperty[QStringLiteral("isAbstract")] = QStringLiteral("QUmlBehavioralFeature");
    _classForProperty[QStringLiteral("methods")] = QStringLiteral("QUmlBehavioralFeature");
    _classForProperty[QStringLiteral("ownedParameters")] = QStringLiteral("QUmlBehavioralFeature");
    _classForProperty[QStringLiteral("ownedParameterSets")] = QStringLiteral("QUmlBehavioralFeature");
    _classForProperty[QStringLiteral("raisedExceptions")] = QStringLiteral("QUmlBehavioralFeature");
}

void QUmlBehavioralFeature::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("concurrency")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("concurrency")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlBehavioralFeature");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("concurrency")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("concurrency")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("concurrency")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a class with isActive being false). Active instances control access to their own behavioral features.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("concurrency")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("concurrency")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("concurrency")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("isAbstract")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("isAbstract")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlBehavioralFeature");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("isAbstract")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("isAbstract")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("isAbstract")][QtModeling::DocumentationRole] = QStringLiteral("If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("isAbstract")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("isAbstract")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("isAbstract")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("methods")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("methods")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlBehavioralFeature");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("methods")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("methods")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("methods")][QtModeling::DocumentationRole] = QStringLiteral("A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("methods")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("methods")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("methods")][QtModeling::OppositeEndRole] = QStringLiteral("Behavior-specification");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameters")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameters")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlBehavioralFeature");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameters")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameters")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameters")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the ordered set of formal parameters of this BehavioralFeature.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameters")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameters")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameters")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameterSets")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameterSets")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlBehavioralFeature");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameterSets")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameterSets")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameterSets")][QtModeling::DocumentationRole] = QStringLiteral("The ParameterSets owned by this BehavioralFeature.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameterSets")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameterSets")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("ownedParameterSets")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("raisedExceptions")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("raisedExceptions")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlBehavioralFeature");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("raisedExceptions")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("raisedExceptions")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("raisedExceptions")][QtModeling::DocumentationRole] = QStringLiteral("References the Types representing exceptions that may be raised during an invocation of this feature.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("raisedExceptions")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("raisedExceptions")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlBehavioralFeature")][QStringLiteral("raisedExceptions")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

