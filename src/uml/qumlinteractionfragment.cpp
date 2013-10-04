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
#include "qumlinteractionfragment.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
/*!
    \class QUmlInteractionFragment

    \inmodule QtUml

    \brief InteractionFragment is an abstract notion of the most general interaction unit. An interaction fragment is a piece of an interaction. Each interaction fragment is conceptually like an interaction by itself.
 */
QUmlInteractionFragment::QUmlInteractionFragment() :
    _enclosingInteraction(0),
    _enclosingOperand(0)
{
    setPropertyData();
}

QUmlInteractionFragment::~QUmlInteractionFragment()
{
}

QModelingObject *QUmlInteractionFragment::clone() const
{
    QUmlInteractionFragment *c = new QUmlInteractionFragment;
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
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Lifelines that the InteractionFragment involves.
 */
const QSet<QUmlLifeline *> QUmlInteractionFragment::covered() const
{
    // This is a read-write association end

    return _covered;
}

void QUmlInteractionFragment::addCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    if (!_covered.contains(covered)) {
        _covered.insert(covered);
        if (covered && covered->asQObject() && this->asQObject())
            QObject::connect(covered->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeCovered(QObject *)));

        // Adjust opposite properties
        if (covered) {
            covered->addCoveredBy(this);
        }
    }
}

void QUmlInteractionFragment::removeCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    if (_covered.contains(covered)) {
        _covered.remove(covered);

        // Adjust opposite properties
        if (covered) {
            covered->removeCoveredBy(this);
        }
    }
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QUmlInteraction *QUmlInteractionFragment::enclosingInteraction() const
{
    // This is a read-write association end

    return _enclosingInteraction;
}

void QUmlInteractionFragment::setEnclosingInteraction(QUmlInteraction *enclosingInteraction)
{
    // This is a read-write association end

    if (_enclosingInteraction != enclosingInteraction) {
        // Adjust subsetted properties

        _enclosingInteraction = enclosingInteraction;
        if (enclosingInteraction && enclosingInteraction->asQObject() && this->asQObject())
            QObject::connect(enclosingInteraction->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setEnclosingInteraction()));

        // Adjust subsetted properties
        setNamespace(enclosingInteraction);
    }
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QUmlInteractionOperand *QUmlInteractionFragment::enclosingOperand() const
{
    // This is a read-write association end

    return _enclosingOperand;
}

void QUmlInteractionFragment::setEnclosingOperand(QUmlInteractionOperand *enclosingOperand)
{
    // This is a read-write association end

    if (_enclosingOperand != enclosingOperand) {
        // Adjust subsetted properties

        _enclosingOperand = enclosingOperand;
        if (enclosingOperand && enclosingOperand->asQObject() && this->asQObject())
            QObject::connect(enclosingOperand->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setEnclosingOperand()));

        // Adjust subsetted properties
        setNamespace(enclosingOperand);
    }
}

/*!
    The general ordering relationships contained in this fragment.
 */
const QSet<QUmlGeneralOrdering *> QUmlInteractionFragment::generalOrdering() const
{
    // This is a read-write association end

    return _generalOrdering;
}

void QUmlInteractionFragment::addGeneralOrdering(QUmlGeneralOrdering *generalOrdering)
{
    // This is a read-write association end

    if (!_generalOrdering.contains(generalOrdering)) {
        _generalOrdering.insert(generalOrdering);
        if (generalOrdering && generalOrdering->asQObject() && this->asQObject())
            QObject::connect(generalOrdering->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeGeneralOrdering(QObject *)));
        generalOrdering->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(generalOrdering);
    }
}

void QUmlInteractionFragment::removeGeneralOrdering(QUmlGeneralOrdering *generalOrdering)
{
    // This is a read-write association end

    if (_generalOrdering.contains(generalOrdering)) {
        _generalOrdering.remove(generalOrdering);
        if (generalOrdering->asQObject())
            generalOrdering->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(generalOrdering);
    }
}

void QUmlInteractionFragment::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::DocumentationRole] = QStringLiteral("References the Lifelines that the InteractionFragment involves.");
    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::OppositeEndRole] = QStringLiteral("Lifeline-coveredBy");

    QModelingObject::propertyDataHash[QStringLiteral("enclosingInteraction")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("enclosingInteraction")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("enclosingInteraction")][QtModeling::DocumentationRole] = QStringLiteral("The Interaction enclosing this InteractionFragment.");
    QModelingObject::propertyDataHash[QStringLiteral("enclosingInteraction")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("enclosingInteraction")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("enclosingInteraction")][QtModeling::OppositeEndRole] = QStringLiteral("Interaction-fragment");

    QModelingObject::propertyDataHash[QStringLiteral("enclosingOperand")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("enclosingOperand")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("enclosingOperand")][QtModeling::DocumentationRole] = QStringLiteral("The operand enclosing this InteractionFragment (they may nest recursively)");
    QModelingObject::propertyDataHash[QStringLiteral("enclosingOperand")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("enclosingOperand")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("enclosingOperand")][QtModeling::OppositeEndRole] = QStringLiteral("InteractionOperand-fragment");

    QModelingObject::propertyDataHash[QStringLiteral("generalOrdering")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("generalOrdering")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("generalOrdering")][QtModeling::DocumentationRole] = QStringLiteral("The general ordering relationships contained in this fragment.");
    QModelingObject::propertyDataHash[QStringLiteral("generalOrdering")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("generalOrdering")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("generalOrdering")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

