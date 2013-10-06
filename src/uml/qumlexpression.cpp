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
#include "qumlexpression.h"

#include "private/qumlexpressionobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

/*!
    \class QUmlExpression

    \inmodule QtUml

    \brief An expression is a structured tree of symbols that denotes a (possibly empty) set of values when evaluated in a context.An expression represents a node in an expression tree, which may be non-terminal or terminal. It defines a symbol, and has a possibly empty sequence of operands which are value specifications.
 */
QUmlExpression::QUmlExpression(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlExpressionObject(this);
    setPropertyData();
}

QUmlExpression::~QUmlExpression()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlExpression::clone() const
{
    QUmlExpression *c = new QUmlExpression;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    if (type())
        c->setType(dynamic_cast<QUmlType *>(type()->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlValueSpecification *element, operands())
        c->addOperand(dynamic_cast<QUmlValueSpecification *>(element->clone()));
    c->setSymbol(symbol());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies a sequence of operands.
 */
const QList<QUmlValueSpecification *> QUmlExpression::operands() const
{
    // This is a read-write association end

    return _operands;
}

void QUmlExpression::addOperand(QUmlValueSpecification *operand)
{
    // This is a read-write association end

    if (!_operands.contains(operand)) {
        _operands.append(operand);
        if (operand && operand->asQObject() && this->asQObject())
            QObject::connect(operand->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOperand(QObject *)));
        operand->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(operand);
    }
}

void QUmlExpression::removeOperand(QUmlValueSpecification *operand)
{
    // This is a read-write association end

    if (_operands.contains(operand)) {
        _operands.removeAll(operand);
        if (operand->asQObject())
            operand->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(operand);
    }
}

/*!
    The symbol associated with the node in the expression tree.
 */
QString QUmlExpression::symbol() const
{
    // This is a read-write property

    return _symbol;
}

void QUmlExpression::setSymbol(QString symbol)
{
    // This is a read-write property

    if (_symbol != symbol) {
        _symbol = symbol;
    }
}

void QUmlExpression::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExpression");
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::DocumentationRole] = QStringLiteral("Specifies a sequence of operands.");
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("symbol")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("symbol")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlExpression");
    QModelingObject::propertyDataHash[QStringLiteral("symbol")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("symbol")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("symbol")][QtModeling::DocumentationRole] = QStringLiteral("The symbol associated with the node in the expression tree.");
    QModelingObject::propertyDataHash[QStringLiteral("symbol")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("symbol")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("symbol")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

