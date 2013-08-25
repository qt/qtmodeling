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
#include "qumlconnectionpointreference_p.h"

#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlState>

QT_BEGIN_NAMESPACE

QUmlConnectionPointReferencePrivate::QUmlConnectionPointReferencePrivate() :
    state(0)
{
}

/*!
    \class QUmlConnectionPointReference

    \inmodule QtUml

    \brief A connection point reference represents a usage (as part of a submachine state) of an entry/exit point defined in the statemachine reference by the submachine state.
 */

QUmlConnectionPointReference::QUmlConnectionPointReference(bool create_d_ptr) :
    QUmlVertex(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlConnectionPointReferencePrivate);
}

// Owned attributes

/*!
    The entryPoint kind pseudo states corresponding to this connection point.
 */
QSet<QUmlPseudostate *> QUmlConnectionPointReference::entry() const
{
    return QSet<QUmlPseudostate *>();
}

void QUmlConnectionPointReference::addEntry(QSet<QUmlPseudostate *> entry)
{
    Q_UNUSED(entry);
}

void QUmlConnectionPointReference::removeEntry(QSet<QUmlPseudostate *> entry)
{
    Q_UNUSED(entry);
}

/*!
    The exitPoints kind pseudo states corresponding to this connection point.
 */
QSet<QUmlPseudostate *> QUmlConnectionPointReference::exit() const
{
    return QSet<QUmlPseudostate *>();
}

void QUmlConnectionPointReference::addExit(QSet<QUmlPseudostate *> exit)
{
    Q_UNUSED(exit);
}

void QUmlConnectionPointReference::removeExit(QSet<QUmlPseudostate *> exit)
{
    Q_UNUSED(exit);
}

/*!
    The State in which the connection point refreshens are defined.
 */
QUmlState *QUmlConnectionPointReference::state() const
{
    return 0;
}

void QUmlConnectionPointReference::setState(QUmlState *state)
{
    Q_UNUSED(state);
}

QT_END_NAMESPACE

