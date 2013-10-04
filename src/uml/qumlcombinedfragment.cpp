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
#include "qumlcombinedfragment.h"

#include "private/qumlcombinedfragmentobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGate>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
/*!
    \class QUmlCombinedFragment

    \inmodule QtUml

    \brief A combined fragment defines an expression of interaction fragments. A combined fragment is defined by an interaction operator and corresponding interaction operands. Through the use of combined fragments the user will be able to describe a number of traces in a compact and concise manner.
 */
QUmlCombinedFragment::QUmlCombinedFragment(bool createQObject) :
    _interactionOperator(QtUml::InteractionOperatorKindSeq)
{
    if (createQObject)
        _qObject = new QUmlCombinedFragmentObject(this);
    setPropertyData();
}

QUmlCombinedFragment::~QUmlCombinedFragment()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlCombinedFragment::clone() const
{
    QUmlCombinedFragment *c = new QUmlCombinedFragment;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlLifeline *element, covered())
        c->addCovered(dynamic_cast<QUmlLifeline *>(element->clone()));
    if (enclosingInteraction())
        c->setEnclosingInteraction(dynamic_cast<QUmlInteraction *>(enclosingInteraction()->clone()));
    if (enclosingOperand())
        c->setEnclosingOperand(dynamic_cast<QUmlInteractionOperand *>(enclosingOperand()->clone()));
    foreach (QUmlGeneralOrdering *element, generalOrdering())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    foreach (QUmlGate *element, cfragmentGate())
        c->addCfragmentGate(dynamic_cast<QUmlGate *>(element->clone()));
    c->setInteractionOperator(interactionOperator());
    foreach (QUmlInteractionOperand *element, operand())
        c->addOperand(dynamic_cast<QUmlInteractionOperand *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the gates that form the interface between this CombinedFragment and its surroundings
 */
const QSet<QUmlGate *> QUmlCombinedFragment::cfragmentGate() const
{
    // This is a read-write association end

    return _cfragmentGate;
}

void QUmlCombinedFragment::addCfragmentGate(QUmlGate *cfragmentGate)
{
    // This is a read-write association end

    if (!_cfragmentGate.contains(cfragmentGate)) {
        _cfragmentGate.insert(cfragmentGate);
        if (cfragmentGate && cfragmentGate->asQObject() && this->asQObject())
            QObject::connect(cfragmentGate->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeCfragmentGate(QObject *)));
        cfragmentGate->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(cfragmentGate);
    }
}

void QUmlCombinedFragment::removeCfragmentGate(QUmlGate *cfragmentGate)
{
    // This is a read-write association end

    if (_cfragmentGate.contains(cfragmentGate)) {
        _cfragmentGate.remove(cfragmentGate);
        if (cfragmentGate->asQObject())
            cfragmentGate->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(cfragmentGate);
    }
}

/*!
    Specifies the operation which defines the semantics of this combination of InteractionFragments.
 */
QtUml::InteractionOperatorKind QUmlCombinedFragment::interactionOperator() const
{
    // This is a read-write property

    return _interactionOperator;
}

void QUmlCombinedFragment::setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator)
{
    // This is a read-write property

    if (_interactionOperator != interactionOperator) {
        _interactionOperator = interactionOperator;
    }
}

/*!
    The set of operands of the combined fragment.
 */
const QList<QUmlInteractionOperand *> QUmlCombinedFragment::operand() const
{
    // This is a read-write association end

    return _operand;
}

void QUmlCombinedFragment::addOperand(QUmlInteractionOperand *operand)
{
    // This is a read-write association end

    if (!_operand.contains(operand)) {
        _operand.append(operand);
        if (operand && operand->asQObject() && this->asQObject())
            QObject::connect(operand->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOperand(QObject *)));
        operand->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(operand);
    }
}

void QUmlCombinedFragment::removeOperand(QUmlInteractionOperand *operand)
{
    // This is a read-write association end

    if (_operand.contains(operand)) {
        _operand.removeAll(operand);
        if (operand->asQObject())
            operand->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(operand);
    }
}

void QUmlCombinedFragment::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("cfragmentGate")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("cfragmentGate")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("cfragmentGate")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the gates that form the interface between this CombinedFragment and its surroundings");
    QModelingObject::propertyDataHash[QStringLiteral("cfragmentGate")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("cfragmentGate")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("cfragmentGate")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("interactionOperator")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("interactionOperator")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("interactionOperator")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the operation which defines the semantics of this combination of InteractionFragments.");
    QModelingObject::propertyDataHash[QStringLiteral("interactionOperator")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("interactionOperator")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("interactionOperator")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::DocumentationRole] = QStringLiteral("The set of operands of the combined fragment.");
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("operand")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

