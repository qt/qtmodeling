/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofexpression.h"

#include "private/qmofexpressionobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

/*!
    \class QMofExpression

    \inmodule QtMof

    \brief An expression represents a node in an expression tree, which may be non-terminal or terminal. It defines a symbol, and has a possibly empty sequence of operands which are value specifications.
 */

/*!
    Creates a new QMofExpression. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QMofExpression::QMofExpression(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofExpressionObject(this));
}

/*!
    Destroys the QMofExpression.
 */
QMofExpression::~QMofExpression()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofExpression.
*/
QModelingElement *QMofExpression::clone() const
{
    QMofExpression *c = new QMofExpression;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    foreach (QMofValueSpecification *element, operands())
        c->addOperand(dynamic_cast<QMofValueSpecification *>(element->clone()));
    c->setSymbol(symbol());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies a sequence of operands.

    \sa addOperand(), removeOperand()

    \b {Subsetted property(ies):} QMofElement::ownedElements().
 */
const QList<QMofValueSpecification *> QMofExpression::operands() const
{
    // This is a read-write association end

    return _operands;
}

/*!
    Adds \a operand to operands.

    \sa operands(), removeOperand()
 */
void QMofExpression::addOperand(QMofValueSpecification *operand)
{
    // This is a read-write association end

    if (!_operands.contains(operand)) {
        _operands.append(operand);
        if (operand && operand->asQModelingObject() && this->asQModelingObject())
            QObject::connect(operand->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOperand(QObject *)));
        operand->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(operand);
    }
}

/*!
    Removes \a operand from operands.

    \sa operands(), addOperand()
 */
void QMofExpression::removeOperand(QMofValueSpecification *operand)
{
    // This is a read-write association end

    if (_operands.contains(operand)) {
        _operands.removeAll(operand);
        if (operand->asQModelingObject())
            operand->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(operand);
    }
}

/*!
    The symbol associated with the node in the expression tree.
 */
QString QMofExpression::symbol() const
{
    // This is a read-write property

    return _symbol;
}

/*!
    Adjusts symbol to \a symbol.
 */
void QMofExpression::setSymbol(QString symbol)
{
    // This is a read-write property

    if (_symbol != symbol) {
        _symbol = symbol;
    }
}

QT_END_NAMESPACE

