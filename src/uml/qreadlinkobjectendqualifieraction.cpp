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

#include "qreadlinkobjectendqualifieraction.h"
#include "qreadlinkobjectendqualifieraction_p.h"
#include "qaction_p.h"
#include "qaction_p.h"

#include <QtUml/QInputPin>
#include <QtUml/QProperty>
#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QReadLinkObjectEndQualifierActionPrivate::QReadLinkObjectEndQualifierActionPrivate() :
    result(0),
    object(0),
    qualifier(0)
{
}

QReadLinkObjectEndQualifierActionPrivate::~QReadLinkObjectEndQualifierActionPrivate()
{
}

void QReadLinkObjectEndQualifierActionPrivate::setResult(const QOutputPin *result)
{
    this->result = const_cast<QOutputPin *>(result);
}

void QReadLinkObjectEndQualifierActionPrivate::setObject(const QInputPin *object)
{
    this->object = const_cast<QInputPin *>(object);
}

void QReadLinkObjectEndQualifierActionPrivate::setQualifier(const QProperty *qualifier)
{
    this->qualifier = const_cast<QProperty *>(qualifier);
}

/*!
    \class QReadLinkObjectEndQualifierAction

    \inmodule QtUml

    \brief A read link object end qualifier action is an action that retrieves a qualifier end value from a link object.
 */

QReadLinkObjectEndQualifierAction::QReadLinkObjectEndQualifierAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QReadLinkObjectEndQualifierActionPrivate;
}

QReadLinkObjectEndQualifierAction::QReadLinkObjectEndQualifierAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QReadLinkObjectEndQualifierActionPrivate;
}

QReadLinkObjectEndQualifierAction::~QReadLinkObjectEndQualifierAction()
{
}

/*!
    Pin where the result value is placed.
 */
QOutputPin *QReadLinkObjectEndQualifierAction::result() const
{
    Q_D(const QReadLinkObjectEndQualifierAction);
    return d->result;
}

void QReadLinkObjectEndQualifierAction::setResult(const QOutputPin *result)
{
    Q_D(QReadLinkObjectEndQualifierAction);
    d->setResult(const_cast<QOutputPin *>(result));
}

/*!
    Gives the input pin from which the link object is obtained.
 */
QInputPin *QReadLinkObjectEndQualifierAction::object() const
{
    Q_D(const QReadLinkObjectEndQualifierAction);
    return d->object;
}

void QReadLinkObjectEndQualifierAction::setObject(const QInputPin *object)
{
    Q_D(QReadLinkObjectEndQualifierAction);
    d->setObject(const_cast<QInputPin *>(object));
}

/*!
    The attribute representing the qualifier to be read.
 */
QProperty *QReadLinkObjectEndQualifierAction::qualifier() const
{
    Q_D(const QReadLinkObjectEndQualifierAction);
    return d->qualifier;
}

void QReadLinkObjectEndQualifierAction::setQualifier(const QProperty *qualifier)
{
    Q_D(QReadLinkObjectEndQualifierAction);
    d->setQualifier(const_cast<QProperty *>(qualifier));
}

#include "moc_qreadlinkobjectendqualifieraction.cpp"

QT_END_NAMESPACE_QTUML

