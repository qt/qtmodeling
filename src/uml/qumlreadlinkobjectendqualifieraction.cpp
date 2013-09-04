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
#include "qumlreadlinkobjectendqualifieraction.h"

#include "private/qumlreadlinkobjectendqualifieractionobject_p.h"

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
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
/*!
    \class QUmlReadLinkObjectEndQualifierAction

    \inmodule QtUml

    \brief A read link object end qualifier action is an action that retrieves a qualifier end value from a link object.
 */
QUmlReadLinkObjectEndQualifierAction::QUmlReadLinkObjectEndQualifierAction(bool createQObject) :
    _object(0),
    _qualifier(0),
    _result(0)
{
    if (createQObject)
        _qObject = new QUmlReadLinkObjectEndQualifierActionObject(this);
}

QUmlReadLinkObjectEndQualifierAction::~QUmlReadLinkObjectEndQualifierAction()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlReadLinkObjectEndQualifierAction::clone() const
{
    QUmlReadLinkObjectEndQualifierAction *c = new QUmlReadLinkObjectEndQualifierAction;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
    foreach (QUmlInterruptibleActivityRegion *element, inInterruptibleRegion())
        c->addInInterruptibleRegion(dynamic_cast<QUmlInterruptibleActivityRegion *>(element->clone()));
    foreach (QUmlActivityPartition *element, inPartition())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    foreach (QUmlActivityEdge *element, incoming())
        c->addIncoming(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityEdge *element, outgoing())
        c->addOutgoing(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, redefinedNode())
        c->addRedefinedNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    foreach (QUmlExceptionHandler *element, handler())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostcondition())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPrecondition())
        c->addLocalPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    if (object())
        c->setObject(dynamic_cast<QUmlInputPin *>(object()->clone()));
    if (qualifier())
        c->setQualifier(dynamic_cast<QUmlProperty *>(qualifier()->clone()));
    if (result())
        c->setResult(dynamic_cast<QUmlOutputPin *>(result()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Gives the input pin from which the link object is obtained.
 */
QUmlInputPin *QUmlReadLinkObjectEndQualifierAction::object() const
{
    // This is a read-write association end

    return _object;
}

void QUmlReadLinkObjectEndQualifierAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    if (_object != object) {
        // Adjust subsetted properties
        removeInput(_object);

        _object = object;
        if (object->asQObject() && this->asQObject())
            QObject::connect(object->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setObject()));
        object->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (object) {
            addInput(object);
        }
    }
}

/*!
    The attribute representing the qualifier to be read.
 */
QUmlProperty *QUmlReadLinkObjectEndQualifierAction::qualifier() const
{
    // This is a read-write association end

    return _qualifier;
}

void QUmlReadLinkObjectEndQualifierAction::setQualifier(QUmlProperty *qualifier)
{
    // This is a read-write association end

    if (_qualifier != qualifier) {
        _qualifier = qualifier;
        if (qualifier->asQObject() && this->asQObject())
            QObject::connect(qualifier->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setQualifier()));
    }
}

/*!
    Pin where the result value is placed.
 */
QUmlOutputPin *QUmlReadLinkObjectEndQualifierAction::result() const
{
    // This is a read-write association end

    return _result;
}

void QUmlReadLinkObjectEndQualifierAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    if (_result != result) {
        // Adjust subsetted properties
        removeOutput(_result);

        _result = result;
        if (result->asQObject() && this->asQObject())
            QObject::connect(result->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setResult()));
        result->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (result) {
            addOutput(result);
        }
    }
}

