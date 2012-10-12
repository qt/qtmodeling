/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qconnectorend.h"
#include "qconnectorend_p.h"

#include <QtUml/QProperty>
#include <QtUml/QConnectableElement>

QT_BEGIN_NAMESPACE_QTUML

QConnectorEndPrivate::QConnectorEndPrivate() :
    role(0),
    partWithPort(0)
{
}

QConnectorEndPrivate::~QConnectorEndPrivate()
{
}

void QConnectorEndPrivate::setRole(QConnectableElement *role)
{
    this->role = role;
}

void QConnectorEndPrivate::setPartWithPort(QProperty *partWithPort)
{
    this->partWithPort = partWithPort;
}

/*!
    \class QConnectorEnd

    \inmodule QtUml

    \brief A connector end is an endpoint of a connector, which attaches the connector to a connectable element. Each connector end is part of one connector.
 */

QConnectorEnd::QConnectorEnd(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QConnectorEndPrivate;
}

QConnectorEnd::QConnectorEnd(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QConnectorEndPrivate;
}

QConnectorEnd::~QConnectorEnd()
{
}

/*!
    The connectable element attached at this connector end. When an instance of the containing classifier is created, a link may (depending on the multiplicities) be created to an instance of the classifier that types this connectable element.
 */
QConnectableElement *QConnectorEnd::role() const
{
    QTUML_D(const QConnectorEnd);
    return d->role;
}

void QConnectorEnd::setRole(QConnectableElement *role)
{
    QTUML_D(QConnectorEnd);
    if (d->role != role) {
        d->setRole(role);
    }
}

/*!
    Indicates the role of the internal structure of a classifier with the port to which the connector end is attached.
 */
QProperty *QConnectorEnd::partWithPort() const
{
    QTUML_D(const QConnectorEnd);
    return d->partWithPort;
}

void QConnectorEnd::setPartWithPort(QProperty *partWithPort)
{
    QTUML_D(QConnectorEnd);
    if (d->partWithPort != partWithPort) {
        d->setPartWithPort(partWithPort);
    }
}

/*!
    A derived association referencing the corresponding association end on the association which types the connector owing this connector end. This association is derived by selecting the association end at the same place in the ordering of association ends as this connector end.
 */
QProperty *QConnectorEnd::definingEnd() const
{
    qWarning("QConnectorEnd::definingEnd: to be implemented (this is a derived associationend)");
}

#include "moc_qconnectorend.cpp"

QT_END_NAMESPACE_QTUML

