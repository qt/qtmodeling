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
#include "qumlconnectionpointreference.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlState>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlConnectionPointReference

    \inmodule QtUml

    \brief A connection point reference represents a usage (as part of a submachine state) of an entry/exit point defined in the statemachine reference by the submachine state.
 */

QUmlConnectionPointReference::QUmlConnectionPointReference() :
    _state(0)
{
    d_ptr->object.setProperty("entry", QVariant::fromValue(&_entry));
    d_ptr->object.setProperty("exit", QVariant::fromValue(&_exit));
    d_ptr->object.setProperty("state", QVariant::fromValue((QUmlState *)(0)));
}

// OWNED ATTRIBUTES

/*!
    The entryPoint kind pseudo states corresponding to this connection point.
 */
const QSet<QUmlPseudostate *> QUmlConnectionPointReference::entry() const
{
    // This is a read-write association end

    return _entry;
}

void QUmlConnectionPointReference::addEntry(QUmlPseudostate *entry)
{
    // This is a read-write association end

    if (!_entry.contains(entry)) {
        _entry.insert(entry);
    }
}

void QUmlConnectionPointReference::removeEntry(QUmlPseudostate *entry)
{
    // This is a read-write association end

    if (_entry.contains(entry)) {
        _entry.remove(entry);
    }
}

/*!
    The exitPoints kind pseudo states corresponding to this connection point.
 */
const QSet<QUmlPseudostate *> QUmlConnectionPointReference::exit() const
{
    // This is a read-write association end

    return _exit;
}

void QUmlConnectionPointReference::addExit(QUmlPseudostate *exit)
{
    // This is a read-write association end

    if (!_exit.contains(exit)) {
        _exit.insert(exit);
    }
}

void QUmlConnectionPointReference::removeExit(QUmlPseudostate *exit)
{
    // This is a read-write association end

    if (_exit.contains(exit)) {
        _exit.remove(exit);
    }
}

/*!
    The State in which the connection point refreshens are defined.
 */
QUmlState *QUmlConnectionPointReference::state() const
{
    // This is a read-write association end

    return _state;
}

void QUmlConnectionPointReference::setState(QUmlState *state)
{
    // This is a read-write association end

    if (_state != state) {
        // Adjust subsetted properties

        _state = state;

        // Adjust subsetted properties
        setNamespace(state);
    }
}

QT_END_NAMESPACE

