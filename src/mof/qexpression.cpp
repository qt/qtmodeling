/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qexpression.h"
#include "qexpression_p.h"

QT_BEGIN_NAMESPACE_QTMOF

QExpressionPrivate::QExpressionPrivate() :
    operands(new QList<QValueSpecification *>)
{
}

QExpressionPrivate::~QExpressionPrivate()
{
    delete operands;
}

/*!
    \class QExpression

    \inmodule QtMof

    \brief An expression represents a node in an expression tree, which may be non-terminal or terminal. It defines a symbol, and has a possibly empty sequence of operands which are value specifications.
 */

QExpression::QExpression(QWrappedObject *parent, QWrappedObject *wrapper) :
    QValueSpecification(*new QExpressionPrivate, parent, wrapper)
{
}

QExpression::QExpression(QExpressionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QValueSpecification(dd, parent, wrapper)
{
}

QExpression::~QExpression()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QExpression
// ---------------------------------------------------------------

/*!
    The symbol associated with the node in the expression tree.
 */
QString QExpression::symbol() const
{
    // This is a read-write attribute

    Q_D(const QExpression);
    return d->symbol;
}

void QExpression::setSymbol(QString symbol)
{
    // This is a read-write attribute

    Q_D(QExpression);
    if (d->symbol != symbol) {
        d->symbol = symbol;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QExpression
// ---------------------------------------------------------------

/*!
    Specifies a sequence of operands.
 */
const QList<QValueSpecification *> *QExpression::operands() const
{
    // This is a read-write association end

    Q_D(const QExpression);
    return d->operands;
}

void QExpression::addOperand(QValueSpecification *operand)
{
    // This is a read-write association end

    Q_D(QExpression);
    if (!d->operands->contains(operand)) {
        d->operands->append(operand);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(operand));
    }
}

void QExpression::removeOperand(QValueSpecification *operand)
{
    // This is a read-write association end

    Q_D(QExpression);
    if (d->operands->contains(operand)) {
        d->operands->removeAll(operand);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(operand));
    }
}

void QExpression::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QExpression) *>("QT_PREPEND_NAMESPACE_QTMOF(QExpression) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QExpression) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QExpression) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QExpression) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QExpression) *> *");
    qRegisterMetaType<QExpression *>("QExpression *");
    qRegisterMetaType<const QSet<QExpression *> *>("const QSet<QExpression *> *");
    qRegisterMetaType<const QList<QExpression *> *>("const QList<QExpression *> *");

    QValueSpecification::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qexpression.cpp"

QT_END_NAMESPACE_QTMOF

