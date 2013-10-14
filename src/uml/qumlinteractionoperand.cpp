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
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlStringExpression>

/*!
    \class QUmlInteractionOperand

    \inmodule QtUml

    \brief An interaction operand is contained in a combined fragment. An interaction operand represents one operand of the expression given by the enclosing combined fragment.
 */
QUmlInteractionOperand::QUmlInteractionOperand(bool createQModelingObject) :
    _guard(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlInteractionOperandObject(this));
}

QModelingElement *QUmlInteractionOperand::clone() const
{
    QUmlInteractionOperand *c = new QUmlInteractionOperand;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
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
    foreach (QUmlGeneralOrdering *element, generalOrderings())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    foreach (QUmlInteractionFragment *element, fragments())
        c->addFragment(dynamic_cast<QUmlInteractionFragment *>(element->clone()));
    if (guard())
        c->setGuard(dynamic_cast<QUmlInteractionConstraint *>(guard()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The fragments of the operand.
 */
const QList<QUmlInteractionFragment *> QUmlInteractionOperand::fragments() const
{
    // This is a read-write association end

    return _fragments;
}

void QUmlInteractionOperand::addFragment(QUmlInteractionFragment *fragment)
{
    // This is a read-write association end

    if (!_fragments.contains(fragment)) {
        _fragments.append(fragment);
        if (fragment && fragment->asQModelingObject() && this->asQModelingObject())
            QObject::connect(fragment->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeFragment(QObject *)));
        fragment->asQModelingObject()->setParent(this->asQModelingObject());

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

    if (_fragments.contains(fragment)) {
        _fragments.removeAll(fragment);
        if (fragment->asQModelingObject())
            fragment->asQModelingObject()->setParent(0);

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
        if (guard && guard->asQModelingObject() && this->asQModelingObject())
            QObject::connect(guard->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setGuard()));
        guard->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (guard) {
            addOwnedElement(guard);
        }
    }
}

