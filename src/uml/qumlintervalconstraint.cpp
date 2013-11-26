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
#include "qumlintervalconstraint.h"

#include "private/qumlintervalconstraintobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterval>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlIntervalConstraint

    \inmodule QtUml

    \brief An interval constraint is a constraint that refers to an interval.
 */

/*!
    Creates a new QUmlIntervalConstraint. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlIntervalConstraint::QUmlIntervalConstraint(bool createQModelingObject) :
    QUmlConstraint(false),
    _specification(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlIntervalConstraintObject(this));
}

/*!
    Destroys the QUmlIntervalConstraint.
 */
QUmlIntervalConstraint::~QUmlIntervalConstraint()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlIntervalConstraint.
*/
QModelingElement *QUmlIntervalConstraint::clone() const
{
    QUmlIntervalConstraint *c = new QUmlIntervalConstraint;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (specification())
        c->setSpecification(dynamic_cast<QUmlInterval *>(specification()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.

    \b {Redefined property(ies):} QUmlConstraint::specification().
 */
QUmlInterval *QUmlIntervalConstraint::specification() const
{
    // This is a read-write association end

    return _specification;
}

/*!
    Adjusts specification to \a specification.
 */
void QUmlIntervalConstraint::setSpecification(QUmlInterval *specification)
{
    // This is a read-write association end

    if (_specification != specification) {
        _specification = specification;
        if (specification && specification->asQModelingObject() && this->asQModelingObject())
            QObject::connect(specification->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSpecification()));
        specification->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust redefined properties
        QUmlConstraint::setSpecification(specification);
    }
}

QT_END_NAMESPACE

