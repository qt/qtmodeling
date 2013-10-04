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
#include "qumlinteractionoperand.h"

#include "private/qumlinteractionoperandobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionConstraint>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlStringExpression>
/*!
    \class QUmlInteractionOperand

    \inmodule QtUml

    \brief An interaction operand is contained in a combined fragment. An interaction operand represents one operand of the expression given by the enclosing combined fragment.
 */
QUmlInteractionOperand::QUmlInteractionOperand(bool createQObject) :
    _guard(0)
{
    if (createQObject)
        _qObject = new QUmlInteractionOperandObject(this);
    setPropertyData();
}

QUmlInteractionOperand::~QUmlInteractionOperand()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlInteractionOperand::clone() const
{
    QUmlInteractionOperand *c = new QUmlInteractionOperand;
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
    foreach (QUmlElementImport *element, elementImport())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRule())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImport())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    foreach (QUmlInteractionFragment *element, fragment())
        c->addFragment(dynamic_cast<QUmlInteractionFragment *>(element->clone()));
    if (guard())
        c->setGuard(dynamic_cast<QUmlInteractionConstraint *>(guard()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The fragments of the operand.
 */
const QList<QUmlInteractionFragment *> QUmlInteractionOperand::fragment() const
{
    // This is a read-write association end

    return _fragment;
}

void QUmlInteractionOperand::addFragment(QUmlInteractionFragment *fragment)
{
    // This is a read-write association end

    if (!_fragment.contains(fragment)) {
        _fragment.append(fragment);
        if (fragment && fragment->asQObject() && this->asQObject())
            QObject::connect(fragment->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeFragment(QObject *)));
        fragment->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(fragment);

        // Adjust opposite properties
        if (fragment) {
            fragment->setEnclosingOperand(this);
        }
    }
}

void QUmlInteractionOperand::removeFragment(QUmlInteractionFragment *fragment)
{
    // This is a read-write association end

    if (_fragment.contains(fragment)) {
        _fragment.removeAll(fragment);
        if (fragment->asQObject())
            fragment->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(fragment);

        // Adjust opposite properties
        if (fragment) {
            fragment->setEnclosingOperand(0);
        }
    }
}

/*!
    Constraint of the operand.
 */
QUmlInteractionConstraint *QUmlInteractionOperand::guard() const
{
    // This is a read-write association end

    return _guard;
}

void QUmlInteractionOperand::setGuard(QUmlInteractionConstraint *guard)
{
    // This is a read-write association end

    if (_guard != guard) {
        // Adjust subsetted properties
        removeOwnedElement(_guard);

        _guard = guard;
        if (guard && guard->asQObject() && this->asQObject())
            QObject::connect(guard->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setGuard()));
        guard->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (guard) {
            addOwnedElement(guard);
        }
    }
}

void QUmlInteractionOperand::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("fragment")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("fragment")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("fragment")][QtModeling::DocumentationRole] = QStringLiteral("The fragments of the operand.");
    QModelingObject::propertyDataHash[QStringLiteral("fragment")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("fragment")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("fragment")][QtModeling::OppositeEndRole] = QStringLiteral("InteractionFragment-enclosingOperand");

    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::DocumentationRole] = QStringLiteral("Constraint of the operand.");
    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("guard")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

