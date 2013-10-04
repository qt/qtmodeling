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
#include "qumlinteractionconstraint.h"

#include "private/qumlinteractionconstraintobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>
/*!
    \class QUmlInteractionConstraint

    \inmodule QtUml

    \brief An interaction constraint is a Boolean expression that guards an operand in a combined fragment.
 */
QUmlInteractionConstraint::QUmlInteractionConstraint(bool createQObject) :
    QUmlConstraint(false),
    _maxint(0),
    _minint(0)
{
    if (createQObject)
        _qObject = new QUmlInteractionConstraintObject(this);
    setPropertyData();
}

QUmlInteractionConstraint::~QUmlInteractionConstraint()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlInteractionConstraint::clone() const
{
    QUmlInteractionConstraint *c = new QUmlInteractionConstraint;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlElement *element, constrainedElement())
        c->addConstrainedElement(dynamic_cast<QUmlElement *>(element->clone()));
    if (context())
        c->setContext(dynamic_cast<QUmlNamespace *>(context()->clone()));
    if (specification())
        c->setSpecification(dynamic_cast<QUmlValueSpecification *>(specification()->clone()));
    if (maxint())
        c->setMaxint(dynamic_cast<QUmlValueSpecification *>(maxint()->clone()));
    if (minint())
        c->setMinint(dynamic_cast<QUmlValueSpecification *>(minint()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The maximum number of iterations of a loop
 */
QUmlValueSpecification *QUmlInteractionConstraint::maxint() const
{
    // This is a read-write association end

    return _maxint;
}

void QUmlInteractionConstraint::setMaxint(QUmlValueSpecification *maxint)
{
    // This is a read-write association end

    if (_maxint != maxint) {
        // Adjust subsetted properties
        removeOwnedElement(_maxint);

        _maxint = maxint;
        if (maxint && maxint->asQObject() && this->asQObject())
            QObject::connect(maxint->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setMaxint()));
        maxint->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (maxint) {
            addOwnedElement(maxint);
        }
    }
}

/*!
    The minimum number of iterations of a loop
 */
QUmlValueSpecification *QUmlInteractionConstraint::minint() const
{
    // This is a read-write association end

    return _minint;
}

void QUmlInteractionConstraint::setMinint(QUmlValueSpecification *minint)
{
    // This is a read-write association end

    if (_minint != minint) {
        // Adjust subsetted properties
        removeOwnedElement(_minint);

        _minint = minint;
        if (minint && minint->asQObject() && this->asQObject())
            QObject::connect(minint->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setMinint()));
        minint->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (minint) {
            addOwnedElement(minint);
        }
    }
}

void QUmlInteractionConstraint::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("maxint")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("maxint")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("maxint")][QtModeling::DocumentationRole] = QStringLiteral("The maximum number of iterations of a loop");
    QModelingObject::propertyDataHash[QStringLiteral("maxint")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("maxint")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("maxint")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("minint")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("minint")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("minint")][QtModeling::DocumentationRole] = QStringLiteral("The minimum number of iterations of a loop");
    QModelingObject::propertyDataHash[QStringLiteral("minint")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("minint")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("minint")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

