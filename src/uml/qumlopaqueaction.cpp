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

// OWNED ATTRIBUTES

/*!
    Specifies the action in one or more languages.
 */
QList<QString> QUmlOpaqueAction::body() const
{
    // This is a read-write property

    QM_D(const QUmlOpaqueAction);
    return d->body;
}

void QUmlOpaqueAction::addBody(QString body)
{
    // This is a read-write property

    QM_D(QUmlOpaqueAction);
    if (!d->body.contains(body)) {
        d->body.append(body);
    }
}

void QUmlOpaqueAction::removeBody(QString body)
{
    // This is a read-write property

    QM_D(QUmlOpaqueAction);
    if (d->body.contains(body)) {
        d->body.removeAll(body);
    }
}

/*!
    Provides input to the action.
 */
QSet<QUmlInputPin *> QUmlOpaqueAction::inputValue() const
{
    // This is a read-write association end

    QM_D(const QUmlOpaqueAction);
    return d->inputValue;
}

void QUmlOpaqueAction::addInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    QM_D(QUmlOpaqueAction);
    if (!d->inputValue.contains(inputValue)) {
        d->inputValue.insert(inputValue);
    }
}

void QUmlOpaqueAction::removeInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    QM_D(QUmlOpaqueAction);
    if (d->inputValue.contains(inputValue)) {
        d->inputValue.remove(inputValue);
    }
}

/*!
    Languages the body strings use, in the same order as the body strings
 */
QList<QString> QUmlOpaqueAction::language() const
{
    // This is a read-write property

    QM_D(const QUmlOpaqueAction);
    return d->language;
}

void QUmlOpaqueAction::addLanguage(QString language)
{
    // This is a read-write property

    QM_D(QUmlOpaqueAction);
    if (!d->language.contains(language)) {
        d->language.append(language);
    }
}

void QUmlOpaqueAction::removeLanguage(QString language)
{
    // This is a read-write property

    QM_D(QUmlOpaqueAction);
    if (d->language.contains(language)) {
        d->language.removeAll(language);
    }
}

/*!
    Takes output from the action.
 */
QSet<QUmlOutputPin *> QUmlOpaqueAction::outputValue() const
{
    // This is a read-write association end

    QM_D(const QUmlOpaqueAction);
    return d->outputValue;
}

void QUmlOpaqueAction::addOutputValue(QUmlOutputPin *outputValue)
{
    // This is a read-write association end

    QM_D(QUmlOpaqueAction);
    if (!d->outputValue.contains(outputValue)) {
        d->outputValue.insert(outputValue);
    }
}

void QUmlOpaqueAction::removeOutputValue(QUmlOutputPin *outputValue)
{
    // This is a read-write association end

    QM_D(QUmlOpaqueAction);
    if (d->outputValue.contains(outputValue)) {
        d->outputValue.remove(outputValue);
    }
}

QT_END_NAMESPACE

