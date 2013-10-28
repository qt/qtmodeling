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
#include "qumlstateinvariant.h"

#include "private/qumlstateinvariantobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
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

QT_BEGIN_NAMESPACE

/*!
    \class QUmlStateInvariant

    \inmodule QtUml

    \brief A state invariant is a runtime constraint on the participants of the interaction. It may be used to specify a variety of different kinds of constraints, such as values of attributes or variables, internal or external states, and so on. A state invariant is an interaction fragment and it is placed on a lifeline.
 */
QUmlStateInvariant::QUmlStateInvariant(bool createQModelingObject) :
    _covered(0),
    _invariant(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlStateInvariantObject(this));
}

QModelingElement *QUmlStateInvariant::clone() const
{
    QUmlStateInvariant *c = new QUmlStateInvariant;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (enclosingInteraction())
        c->setEnclosingInteraction(dynamic_cast<QUmlInteraction *>(enclosingInteraction()->clone()));
    if (enclosingOperand())
        c->setEnclosingOperand(dynamic_cast<QUmlInteractionOperand *>(enclosingOperand()->clone()));
    foreach (QUmlGeneralOrdering *element, generalOrderings())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    if (covered())
        c->setCovered(dynamic_cast<QUmlLifeline *>(covered()->clone()));
    if (invariant())
        c->setInvariant(dynamic_cast<QUmlConstraint *>(invariant()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Lifeline on which the StateInvariant appears.
 */
QUmlLifeline *QUmlStateInvariant::covered() const
{
    // This is a read-write association end

    return _covered;
}

void QUmlStateInvariant::setCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    if (_covered != covered) {
        _covered = covered;
        if (covered && covered->asQModelingObject() && this->asQModelingObject())
            QObject::connect(covered->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setCovered()));
    }
}

/*!
    A Constraint that should hold at runtime for this StateInvariant
 */
QUmlConstraint *QUmlStateInvariant::invariant() const
{
    // This is a read-write association end

    return _invariant;
}

void QUmlStateInvariant::setInvariant(QUmlConstraint *invariant)
{
    // This is a read-write association end

    if (_invariant != invariant) {
        // Adjust subsetted properties
        removeOwnedElement(_invariant);

        _invariant = invariant;
        if (invariant && invariant->asQModelingObject() && this->asQModelingObject())
            QObject::connect(invariant->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setInvariant()));
        invariant->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (invariant) {
            addOwnedElement(invariant);
        }
    }
}

QT_END_NAMESPACE

