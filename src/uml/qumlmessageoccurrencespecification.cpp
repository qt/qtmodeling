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
#include "qumlmessageoccurrencespecification.h"

#include "private/qumlmessageoccurrencespecificationobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

/*!
    \class QUmlMessageOccurrenceSpecification

    \inmodule QtUml

    \brief A message occurrence specification pecifies the occurrence of message events, such as sending and receiving of signals or invoking or receiving of operation calls. A message occurrence specification is a kind of message end. Messages are generated either by synchronous operation calls or asynchronous signal sends. They are received by the execution of corresponding accept event actions.
 */
QUmlMessageOccurrenceSpecification::QUmlMessageOccurrenceSpecification(bool createQObject) :
    QUmlOccurrenceSpecification(false)
{
    if (createQObject)
        _qObject = new QUmlMessageOccurrenceSpecificationObject(this);
    setPropertyData();
}

QUmlMessageOccurrenceSpecification::~QUmlMessageOccurrenceSpecification()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlMessageOccurrenceSpecification::clone() const
{
    QUmlMessageOccurrenceSpecification *c = new QUmlMessageOccurrenceSpecification;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (enclosingInteraction())
        c->setEnclosingInteraction(dynamic_cast<QUmlInteraction *>(enclosingInteraction()->clone()));
    if (enclosingOperand())
        c->setEnclosingOperand(dynamic_cast<QUmlInteractionOperand *>(enclosingOperand()->clone()));
    foreach (QUmlGeneralOrdering *element, generalOrderings())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    if (covered())
        c->setCovered(dynamic_cast<QUmlLifeline *>(covered()->clone()));
    foreach (QUmlGeneralOrdering *element, toAfters())
        c->addToAfter(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    foreach (QUmlGeneralOrdering *element, toBefores())
        c->addToBefore(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    if (message())
        c->setMessage(dynamic_cast<QUmlMessage *>(message()->clone()));
    return c;
}

void QUmlMessageOccurrenceSpecification::setPropertyData()
{
}

