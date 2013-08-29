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
#include "qumlopaqueexpression.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlParameter>

QT_BEGIN_NAMESPACE

QUmlOpaqueExpression::QUmlOpaqueExpression(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QUmlBehavior *QUmlOpaqueExpression::behavior() const
{
    return reinterpret_cast<QUmlBehavior *>(_behavior);
}

void QUmlOpaqueExpression::setBehavior(QUmlBehavior *behavior)
{
    UmlOpaqueExpression::setBehavior(behavior);
}

const QList<QString> QUmlOpaqueExpression::body() const
{
    return *(reinterpret_cast<const QList<QString> *>(&_body));
}

void QUmlOpaqueExpression::addBody(QString body)
{
    UmlOpaqueExpression::addBody(body);
}

void QUmlOpaqueExpression::removeBody(QString body)
{
    UmlOpaqueExpression::removeBody(body);
}

const QList<QString> QUmlOpaqueExpression::language() const
{
    return *(reinterpret_cast<const QList<QString> *>(&_language));
}

void QUmlOpaqueExpression::addLanguage(QString language)
{
    UmlOpaqueExpression::addLanguage(language);
}

void QUmlOpaqueExpression::removeLanguage(QString language)
{
    UmlOpaqueExpression::removeLanguage(language);
}

QUmlParameter *QUmlOpaqueExpression::result() const
{
    return reinterpret_cast<QUmlParameter *>(UmlOpaqueExpression::result());
}

// Operations

bool QUmlOpaqueExpression::isIntegral() const
{
    return UmlOpaqueExpression::isIntegral();
}

bool QUmlOpaqueExpression::isNonNegative() const
{
    return UmlOpaqueExpression::isNonNegative();
}

bool QUmlOpaqueExpression::isPositive() const
{
    return UmlOpaqueExpression::isPositive();
}

int QUmlOpaqueExpression::value() const
{
    return UmlOpaqueExpression::value();
}

QT_END_NAMESPACE

