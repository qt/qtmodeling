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
#include "qumlopaqueaction.h"
#include "qumlopaqueaction_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlOpaqueActionPrivate::QUmlOpaqueActionPrivate()
{
}

/*!
    \class QUmlOpaqueAction

    \inmodule QtUml

    \brief An action with implementation-specific semantics.
 */

QUmlOpaqueAction::QUmlOpaqueAction(bool create_d_ptr) :
    QUmlAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlOpaqueActionPrivate);
}

// Owned attributes

/*!
    Specifies the action in one or more languages.
 */
QList<QString> QUmlOpaqueAction::body() const
{
    return QList<QString>();
}

void QUmlOpaqueAction::addBody(QList<QString> body)
{
    Q_UNUSED(body);
}

void QUmlOpaqueAction::removeBody(QList<QString> body)
{
    Q_UNUSED(body);
}

/*!
    Provides input to the action.
 */
QSet<QUmlInputPin *> QUmlOpaqueAction::inputValue() const
{
    return QSet<QUmlInputPin *>();
}

void QUmlOpaqueAction::addInputValue(QSet<QUmlInputPin *> inputValue)
{
    Q_UNUSED(inputValue);
}

void QUmlOpaqueAction::removeInputValue(QSet<QUmlInputPin *> inputValue)
{
    Q_UNUSED(inputValue);
}

/*!
    Languages the body strings use, in the same order as the body strings
 */
QList<QString> QUmlOpaqueAction::language() const
{
    return QList<QString>();
}

void QUmlOpaqueAction::addLanguage(QList<QString> language)
{
    Q_UNUSED(language);
}

void QUmlOpaqueAction::removeLanguage(QList<QString> language)
{
    Q_UNUSED(language);
}

/*!
    Takes output from the action.
 */
QSet<QUmlOutputPin *> QUmlOpaqueAction::outputValue() const
{
    return QSet<QUmlOutputPin *>();
}

void QUmlOpaqueAction::addOutputValue(QSet<QUmlOutputPin *> outputValue)
{
    Q_UNUSED(outputValue);
}

void QUmlOpaqueAction::removeOutputValue(QSet<QUmlOutputPin *> outputValue)
{
    Q_UNUSED(outputValue);
}

QT_END_NAMESPACE

