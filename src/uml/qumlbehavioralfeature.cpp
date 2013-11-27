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
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlBehavioralFeature

    \inmodule QtUml

    \brief A behavioral feature is a feature of a classifier that specifies an aspect of the behavior of its instances.A behavioral feature is implemented (realized) by a behavior. A behavioral feature specifies that a classifier will respond to a designated request by invoking its implementing method.A behavioral feature owns zero or more parameter sets.

    \b {QUmlBehavioralFeature is an abstract class.}
 */

/*!
    Creates a new QUmlBehavioralFeature.
*/
QUmlBehavioralFeature::QUmlBehavioralFeature() :
    _concurrency(QtUml::CallConcurrencyKindSequential),
    _isAbstract(false)
{
}

/*!
    Destroys the QUmlBehavioralFeature.
 */
QUmlBehavioralFeature::~QUmlBehavioralFeature()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlBehavioralFeature.
*/
QModelingElement *QUmlBehavioralFeature::clone() const
{
    QUmlBehavioralFeature *c = new QUmlBehavioralFeature;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
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
    foreach (QUmlParameter *element, ownedParameters())
        c->addOwnedParameter(dynamic_cast<QUmlParameter *>(element->clone()));
    foreach (QUmlParameterSet *element, ownedParameterSets())
        c->addOwnedParameterSet(dynamic_cast<QUmlParameterSet *>(element->clone()));
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

/*!
    Adjusts concurrency to \a concurrency.
 */
void QUmlBehavioralFeature::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    // This is a read-write property

    if (_concurrency != concurrency) {
        _concurrency = concurrency;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("concurrency");
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

/*!
    Adjusts isAbstract to \a isAbstract.
 */
void QUmlBehavioralFeature::setAbstract(bool isAbstract)
{
    // This is a read-write property

    if (_isAbstract != isAbstract) {
        _isAbstract = isAbstract;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isAbstract");
    }
}

/*!
    A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).

    \sa addMethod(), removeMethod()

    \b {Opposite property(ies):} QUmlBehavior::specification().
 */
const QSet<QUmlBehavior *> QUmlBehavioralFeature::methods() const
{
    // This is a read-write association end

    return _methods;
}

/*!
    Adds \a method to methods.

    \sa methods(), removeMethod()
 */
void QUmlBehavioralFeature::addMethod(QUmlBehavior *method)
{
    // This is a read-write association end

    if (!_methods.contains(method)) {
        _methods.insert(method);
        if (method && method->asQModelingObject() && this->asQModelingObject())
            QObject::connect(method->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeMethod(QObject *)));

        // Adjust opposite properties
        if (method) {
            method->setSpecification(this);
        }
    }
}

/*!
    Removes \a method from methods.

    \sa methods(), addMethod()
 */
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

    \sa addOwnedParameter(), removeOwnedParameter()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().
 */
const QList<QUmlParameter *> QUmlBehavioralFeature::ownedParameters() const
{
    // This is a read-write association end

    return _ownedParameters;
}

/*!
    Adds \a ownedParameter to ownedParameters.

    \sa ownedParameters(), removeOwnedParameter()
 */
void QUmlBehavioralFeature::addOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.append(ownedParameter);
        if (ownedParameter && ownedParameter->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedParameter->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedParameter(QObject *)));
        ownedParameter->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(ownedParameter);
    }
}

/*!
    Removes \a ownedParameter from ownedParameters.

    \sa ownedParameters(), addOwnedParameter()
 */
void QUmlBehavioralFeature::removeOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.removeAll(ownedParameter);
        if (ownedParameter->asQModelingObject())
            ownedParameter->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameter);
    }
}

/*!
    The ParameterSets owned by this BehavioralFeature.

    \sa addOwnedParameterSet(), removeOwnedParameterSet()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().
 */
const QSet<QUmlParameterSet *> QUmlBehavioralFeature::ownedParameterSets() const
{
    // This is a read-write association end

    return _ownedParameterSets;
}

/*!
    Adds \a ownedParameterSet to ownedParameterSets.

    \sa ownedParameterSets(), removeOwnedParameterSet()
 */
void QUmlBehavioralFeature::addOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (!_ownedParameterSets.contains(ownedParameterSet)) {
        _ownedParameterSets.insert(ownedParameterSet);
        if (ownedParameterSet && ownedParameterSet->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedParameterSet->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedParameterSet(QObject *)));
        ownedParameterSet->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(ownedParameterSet);
    }
}

/*!
    Removes \a ownedParameterSet from ownedParameterSets.

    \sa ownedParameterSets(), addOwnedParameterSet()
 */
void QUmlBehavioralFeature::removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (_ownedParameterSets.contains(ownedParameterSet)) {
        _ownedParameterSets.remove(ownedParameterSet);
        if (ownedParameterSet->asQModelingObject())
            ownedParameterSet->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameterSet);
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this feature.

    \sa addRaisedException(), removeRaisedException()
 */
const QSet<QUmlType *> QUmlBehavioralFeature::raisedExceptions() const
{
    // This is a read-write association end

    return _raisedExceptions;
}

/*!
    Adds \a raisedException to raisedExceptions.

    \sa raisedExceptions(), removeRaisedException()
 */
void QUmlBehavioralFeature::addRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    if (!_raisedExceptions.contains(raisedException)) {
        _raisedExceptions.insert(raisedException);
        if (raisedException && raisedException->asQModelingObject() && this->asQModelingObject())
            QObject::connect(raisedException->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRaisedException(QObject *)));
    }
}

/*!
    Removes \a raisedException from raisedExceptions.

    \sa raisedExceptions(), addRaisedException()
 */
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
    qWarning("QUmlBehavioralFeature::isDistinguishableFrom(): to be implemented (operation)");

    Q_UNUSED(n);
    Q_UNUSED(ns);
    return bool ();
}

QT_END_NAMESPACE

