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
#include "qumllinkaction.h"
#include "qumllinkaction_p.h"

#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlLinkEndData>

QT_BEGIN_NAMESPACE

QUmlLinkActionPrivate::QUmlLinkActionPrivate()
{
}

/*!
    \class QUmlLinkAction

    \inmodule QtUml

    \brief LinkAction is an abstract class for all link actions that identify their links by the objects at the ends of the links and by the qualifiers at ends of the links.
 */

QUmlLinkAction::QUmlLinkAction(bool create_d_ptr) :
    QUmlAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlLinkActionPrivate);
}

// Owned attributes

/*!
    Data identifying one end of a link by the objects on its ends and qualifiers.
 */
QSet<QUmlLinkEndData *> QUmlLinkAction::endData() const
{
    return QSet<QUmlLinkEndData *>();
}

void QUmlLinkAction::addEndData(QSet<QUmlLinkEndData *> endData)
{
    Q_UNUSED(endData);
}

void QUmlLinkAction::removeEndData(QSet<QUmlLinkEndData *> endData)
{
    Q_UNUSED(endData);
}

/*!
    Pins taking end objects and qualifier values as input.
 */
QSet<QUmlInputPin *> QUmlLinkAction::inputValue() const
{
    return QSet<QUmlInputPin *>();
}

void QUmlLinkAction::addInputValue(QSet<QUmlInputPin *> inputValue)
{
    Q_UNUSED(inputValue);
}

void QUmlLinkAction::removeInputValue(QSet<QUmlInputPin *> inputValue)
{
    Q_UNUSED(inputValue);
}

// Operations

/*!
    The association operates on LinkAction. It returns the association of the action.
 */
QUmlAssociation *QUmlLinkAction::association() const
{
    return 0;
}

QT_END_NAMESPACE

