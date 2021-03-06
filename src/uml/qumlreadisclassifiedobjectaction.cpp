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
#include "qumlreadisclassifiedobjectaction.h"

#include "private/qumlreadisclassifiedobjectactionobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlReadIsClassifiedObjectAction

    \inmodule QtUml

    \brief A read is classified object action is an action that determines whether a runtime object is classified by a given classifier.
 */

/*!
    Creates a new QUmlReadIsClassifiedObjectAction. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlReadIsClassifiedObjectAction::QUmlReadIsClassifiedObjectAction(bool createQModelingObject) :
    _classifier(0),
    _isDirect(false),
    _object(0),
    _result(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlReadIsClassifiedObjectActionObject(this));
}

/*!
    Destroys the QUmlReadIsClassifiedObjectAction.
 */
QUmlReadIsClassifiedObjectAction::~QUmlReadIsClassifiedObjectAction()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlReadIsClassifiedObjectAction.
*/
QModelingElement *QUmlReadIsClassifiedObjectAction::clone() const
{
    QUmlReadIsClassifiedObjectAction *c = new QUmlReadIsClassifiedObjectAction;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlExceptionHandler *element, handlers())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostconditions())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPreconditions())
        c->addLocalPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    c->setDirect(isDirect());
    if (object())
        c->setObject(dynamic_cast<QUmlInputPin *>(object()->clone()));
    if (result())
        c->setResult(dynamic_cast<QUmlOutputPin *>(result()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The classifier against which the classification of the input object is tested.
 */
QUmlClassifier *QUmlReadIsClassifiedObjectAction::classifier() const
{
    // This is a read-write association end

    return _classifier;
}

/*!
    Adjusts classifier to \a classifier.
 */
void QUmlReadIsClassifiedObjectAction::setClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    if (_classifier != classifier) {
        _classifier = classifier;
        if (classifier && classifier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(classifier->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setClassifier()));
    }
}

/*!
    Indicates whether the classifier must directly classify the input object.
 */
bool QUmlReadIsClassifiedObjectAction::isDirect() const
{
    // This is a read-write property

    return _isDirect;
}

/*!
    Adjusts isDirect to \a isDirect.
 */
void QUmlReadIsClassifiedObjectAction::setDirect(bool isDirect)
{
    // This is a read-write property

    if (_isDirect != isDirect) {
        _isDirect = isDirect;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isDirect");
    }
}

/*!
    Holds the object whose classification is to be tested.

    \b {Subsetted property(ies):} QUmlAction::inputs().
 */
QUmlInputPin *QUmlReadIsClassifiedObjectAction::object() const
{
    // This is a read-write association end

    return _object;
}

/*!
    Adjusts object to \a object.
 */
void QUmlReadIsClassifiedObjectAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    if (_object != object) {
        // Adjust subsetted properties
        removeInput(_object);

        _object = object;
        if (object && object->asQModelingObject() && this->asQModelingObject())
            QObject::connect(object->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setObject()));
        object->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (object) {
            addInput(object);
        }
    }
}

/*!
    After termination of the action, will hold the result of the test.

    \b {Subsetted property(ies):} QUmlAction::outputs().
 */
QUmlOutputPin *QUmlReadIsClassifiedObjectAction::result() const
{
    // This is a read-write association end

    return _result;
}

/*!
    Adjusts result to \a result.
 */
void QUmlReadIsClassifiedObjectAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_result != result) {
        // Adjust subsetted properties
        removeOutput(_result);

        _result = result;
        if (result && result->asQModelingObject() && this->asQModelingObject())
            QObject::connect(result->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setResult()));
        result->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (result) {
            addOutput(result);
        }
    }
}

QT_END_NAMESPACE

