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
#include "qumlraiseexceptionaction.h"

#include "private/qumlraiseexceptionactionobject_p.h"

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

/*!
    \class QUmlRaiseExceptionAction

    \inmodule QtUml

    \brief A raise exception action is an action that causes an exception to occur. The input value becomes the exception object.
 */
QUmlRaiseExceptionAction::QUmlRaiseExceptionAction(bool createQObject) :
    _exception(0)
{
    if (createQObject)
        _qObject = new QUmlRaiseExceptionActionObject(this);
    setPropertyData();
}

QUmlRaiseExceptionAction::~QUmlRaiseExceptionAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlRaiseExceptionAction::clone() const
{
    QUmlRaiseExceptionAction *c = new QUmlRaiseExceptionAction;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
    foreach (QUmlInterruptibleActivityRegion *element, inInterruptibleRegions())
        c->addInInterruptibleRegion(dynamic_cast<QUmlInterruptibleActivityRegion *>(element->clone()));
    foreach (QUmlActivityPartition *element, inPartitions())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    foreach (QUmlActivityEdge *element, incomings())
        c->addIncoming(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityEdge *element, outgoings())
        c->addOutgoing(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, redefinedNodes())
        c->addRedefinedNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    foreach (QUmlExceptionHandler *element, handlers())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostconditions())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPreconditions())
        c->addLocalPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    if (exception())
        c->setException(dynamic_cast<QUmlInputPin *>(exception()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    An input pin whose value becomes an exception object.
 */
QUmlInputPin *QUmlRaiseExceptionAction::exception() const
{
    // This is a read-write association end

    return _exception;
}

void QUmlRaiseExceptionAction::setException(QUmlInputPin *exception)
{
    // This is a read-write association end

    if (_exception != exception) {
        // Adjust subsetted properties
        removeInput(_exception);

        _exception = exception;
        if (exception && exception->asQObject() && this->asQObject())
            QObject::connect(exception->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setException()));
        exception->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (exception) {
            addInput(exception);
        }
    }
}

void QUmlRaiseExceptionAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRaiseExceptionAction")][QStringLiteral("exception")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRaiseExceptionAction")][QStringLiteral("exception")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlRaiseExceptionAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRaiseExceptionAction")][QStringLiteral("exception")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRaiseExceptionAction")][QStringLiteral("exception")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRaiseExceptionAction")][QStringLiteral("exception")][QtModeling::DocumentationRole] = QStringLiteral("An input pin whose value becomes an exception object.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRaiseExceptionAction")][QStringLiteral("exception")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRaiseExceptionAction")][QStringLiteral("exception")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRaiseExceptionAction")][QStringLiteral("exception")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

