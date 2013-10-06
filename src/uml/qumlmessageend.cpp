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
#include "qumlmessageend.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

/*!
    \class QUmlMessageEnd

    \inmodule QtUml

    \brief MessageEnd is an abstract specialization of NamedElement that represents what can occur at the end of a message.
 */
QUmlMessageEnd::QUmlMessageEnd() :
    _message(0)
{
    setPropertyData();
}

QUmlMessageEnd::~QUmlMessageEnd()
{
}

QModelingObject *QUmlMessageEnd::clone() const
{
    QUmlMessageEnd *c = new QUmlMessageEnd;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (message())
        c->setMessage(dynamic_cast<QUmlMessage *>(message()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References a Message.
 */
QUmlMessage *QUmlMessageEnd::message() const
{
    // This is a read-write association end

    return _message;
}

void QUmlMessageEnd::setMessage(QUmlMessage *message)
{
    // This is a read-write association end

    if (_message != message) {
        _message = message;
        if (message && message->asQObject() && this->asQObject())
            QObject::connect(message->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setMessage()));
    }
}

void QUmlMessageEnd::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("message")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("message")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlMessageEnd");
    QModelingObject::propertyDataHash[QStringLiteral("message")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("message")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("message")][QtModeling::DocumentationRole] = QStringLiteral("References a Message.");
    QModelingObject::propertyDataHash[QStringLiteral("message")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("message")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("message")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

