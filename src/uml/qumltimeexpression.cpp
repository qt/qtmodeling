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
#include "qumltimeexpression.h"

#include "private/qumltimeexpressionobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlObservation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

/*!
    \class QUmlTimeExpression

    \inmodule QtUml

    \brief A time expression defines a value specification that represents a time value.
 */
QUmlTimeExpression::QUmlTimeExpression(bool createQObject) :
    _expr(0)
{
    if (createQObject)
        _qObject = new QUmlTimeExpressionObject(this);
    setClassForProperty();
    setPropertyData();
}

QUmlTimeExpression::~QUmlTimeExpression()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlTimeExpression::clone() const
{
    QUmlTimeExpression *c = new QUmlTimeExpression;
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
    if (expr())
        c->setExpr(dynamic_cast<QUmlValueSpecification *>(expr()->clone()));
    foreach (QUmlObservation *element, observations())
        c->addObservation(dynamic_cast<QUmlObservation *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The value of the time expression.
 */
QUmlValueSpecification *QUmlTimeExpression::expr() const
{
    // This is a read-write association end

    return _expr;
}

void QUmlTimeExpression::setExpr(QUmlValueSpecification *expr)
{
    // This is a read-write association end

    if (_expr != expr) {
        // Adjust subsetted properties
        removeOwnedElement(_expr);

        _expr = expr;
        if (expr && expr->asQObject() && this->asQObject())
            QObject::connect(expr->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setExpr()));
        expr->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (expr) {
            addOwnedElement(expr);
        }
    }
}

/*!
    Refers to the time and duration observations that are involved in expr.
 */
const QSet<QUmlObservation *> QUmlTimeExpression::observations() const
{
    // This is a read-write association end

    return _observations;
}

void QUmlTimeExpression::addObservation(QUmlObservation *observation)
{
    // This is a read-write association end

    if (!_observations.contains(observation)) {
        _observations.insert(observation);
        if (observation && observation->asQObject() && this->asQObject())
            QObject::connect(observation->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeObservation(QObject *)));
    }
}

void QUmlTimeExpression::removeObservation(QUmlObservation *observation)
{
    // This is a read-write association end

    if (_observations.contains(observation)) {
        _observations.remove(observation);
    }
}

void QUmlTimeExpression::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("type")] = QStringLiteral("QUmlTypedElement");
    _classForProperty[QStringLiteral("owningTemplateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("templateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlPackageableElement");
    _classForProperty[QStringLiteral("expr")] = QStringLiteral("QUmlTimeExpression");
    _classForProperty[QStringLiteral("observations")] = QStringLiteral("QUmlTimeExpression");
}

void QUmlTimeExpression::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("expr")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("expr")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTimeExpression");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("expr")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("expr")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("expr")][QtModeling::DocumentationRole] = QStringLiteral("The value of the time expression.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("expr")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("expr")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("expr")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("observations")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("observations")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTimeExpression");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("observations")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("observations")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("observations")][QtModeling::DocumentationRole] = QStringLiteral("Refers to the time and duration observations that are involved in expr.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("observations")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("observations")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTimeExpression")][QStringLiteral("observations")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

