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
#include "qumlreadlinkobjectendqualifieraction_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

QUmlReadLinkObjectEndQualifierActionPrivate::QUmlReadLinkObjectEndQualifierActionPrivate() :
    object(0),
    qualifier(0),
    result(0)
{
}

/*!
    \class QUmlReadLinkObjectEndQualifierAction

    \inmodule QtUml

    \brief A read link object end qualifier action is an action that retrieves a qualifier end value from a link object.
 */

QUmlReadLinkObjectEndQualifierAction::QUmlReadLinkObjectEndQualifierAction(bool create_d_ptr) :
    QUmlAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlReadLinkObjectEndQualifierActionPrivate);
}

// OWNED ATTRIBUTES

/*!
    Gives the input pin from which the link object is obtained.
 */
QUmlInputPin *QUmlReadLinkObjectEndQualifierAction::object() const
{
    // This is a read-write association end

    QM_D(const QUmlReadLinkObjectEndQualifierAction);
    return d->object;
}

void QUmlReadLinkObjectEndQualifierAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    QM_D(QUmlReadLinkObjectEndQualifierAction);
    if (d->object != object) {
        d->object = object;
    }
}

/*!
    The attribute representing the qualifier to be read.
 */
QUmlProperty *QUmlReadLinkObjectEndQualifierAction::qualifier() const
{
    // This is a read-write association end

    QM_D(const QUmlReadLinkObjectEndQualifierAction);
    return d->qualifier;
}

void QUmlReadLinkObjectEndQualifierAction::setQualifier(QUmlProperty *qualifier)
{
    // This is a read-write association end

    QM_D(QUmlReadLinkObjectEndQualifierAction);
    if (d->qualifier != qualifier) {
        d->qualifier = qualifier;
    }
}

/*!
    Pin where the result value is placed.
 */
QUmlOutputPin *QUmlReadLinkObjectEndQualifierAction::result() const
{
    // This is a read-write association end

    QM_D(const QUmlReadLinkObjectEndQualifierAction);
    return d->result;
}

void QUmlReadLinkObjectEndQualifierAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    QM_D(QUmlReadLinkObjectEndQualifierAction);
    if (d->result != result) {
        d->result = result;
    }
}

QT_END_NAMESPACE

