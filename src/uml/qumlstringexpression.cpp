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
#include "qumlstringexpression.h"
#include "qumlstringexpression_p.h"

QT_BEGIN_NAMESPACE

QUmlStringExpressionPrivate::QUmlStringExpressionPrivate() :
    owningExpression(0)
{
}

/*!
    \class QUmlStringExpression

    \inmodule QtUml

    \brief An expression that specifies a string value that is derived by concatenating a set of sub string expressions, some of which might be template parameters.
 */

QUmlStringExpression::QUmlStringExpression(bool create_d_ptr) :
    QUmlExpression(false),
    QUmlTemplateableElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlStringExpressionPrivate);
}

// Owned attributes

/*!
    The string expression of which this expression is a substring.
 */
QUmlStringExpression *QUmlStringExpression::owningExpression() const
{
    return 0;
}

void QUmlStringExpression::setOwningExpression(QUmlStringExpression *owningExpression)
{
    Q_UNUSED(owningExpression);
}

/*!
    The StringExpressions that constitute this StringExpression.
 */
QSet<QUmlStringExpression *> QUmlStringExpression::subExpression() const
{
    return QSet<QUmlStringExpression *>();
}

void QUmlStringExpression::addSubExpression(QSet<QUmlStringExpression *> subExpression)
{
    Q_UNUSED(subExpression);
}

void QUmlStringExpression::removeSubExpression(QSet<QUmlStringExpression *> subExpression)
{
    Q_UNUSED(subExpression);
}

// Operations

/*!
    The query stringValue() returns the string that concatenates, in order, all the component string literals of all the subexpressions that are part of the StringExpression.
 */
QString QUmlStringExpression::stringValue() const
{
    return QString ();
}

QT_END_NAMESPACE

