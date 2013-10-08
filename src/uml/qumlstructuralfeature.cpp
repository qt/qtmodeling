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
#include "qumlstructuralfeature.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

/*!
    \class QUmlStructuralFeature

    \inmodule QtUml

    \brief A structural feature is a typed feature of a classifier that specifies the structure of instances of the classifier.By specializing multiplicity element, it supports a multiplicity that specifies valid cardinalities for the collection of values associated with an instantiation of the structural feature.
 */
QUmlStructuralFeature::QUmlStructuralFeature() :
    _isReadOnly(false)
{
    setClassForProperty();
    setPropertyData();
}

QUmlStructuralFeature::~QUmlStructuralFeature()
{
}

QModelingObject *QUmlStructuralFeature::clone() const
{
    QUmlStructuralFeature *c = new QUmlStructuralFeature;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (type())
        c->setType(dynamic_cast<QUmlType *>(type()->clone()));
    c->setOrdered(isOrdered());
    c->setUnique(isUnique());
    if (lowerValue())
        c->setLowerValue(dynamic_cast<QUmlValueSpecification *>(lowerValue()->clone()));
    if (upperValue())
        c->setUpperValue(dynamic_cast<QUmlValueSpecification *>(upperValue()->clone()));
    c->setLeaf(isLeaf());
    c->setStatic(isStatic());
    c->setReadOnly(isReadOnly());
    return c;
}

// OWNED ATTRIBUTES

/*!
    States whether the feature's value may be modified by a client.
 */
bool QUmlStructuralFeature::isReadOnly() const
{
    // This is a read-write property

    return _isReadOnly;
}

void QUmlStructuralFeature::setReadOnly(bool isReadOnly)
{
    // This is a read-write property

    if (_isReadOnly != isReadOnly) {
        _isReadOnly = isReadOnly;
        _modifiedResettableProperties << QStringLiteral("isReadOnly");
    }
}

void QUmlStructuralFeature::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("type")] = QStringLiteral("QUmlTypedElement");
    _classForProperty[QStringLiteral("isOrdered")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("isUnique")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("lower")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("lowerValue")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("upper")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("upperValue")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("isLeaf")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinedElements")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinitionContexts")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("featuringClassifiers")] = QStringLiteral("QUmlFeature");
    _classForProperty[QStringLiteral("isStatic")] = QStringLiteral("QUmlFeature");
    _classForProperty[QStringLiteral("isReadOnly")] = QStringLiteral("QUmlStructuralFeature");
}

void QUmlStructuralFeature::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeature")][QStringLiteral("isReadOnly")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeature")][QStringLiteral("isReadOnly")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlStructuralFeature");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeature")][QStringLiteral("isReadOnly")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeature")][QStringLiteral("isReadOnly")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeature")][QStringLiteral("isReadOnly")][QtModeling::DocumentationRole] = QStringLiteral("States whether the feature's value may be modified by a client.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeature")][QStringLiteral("isReadOnly")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeature")][QStringLiteral("isReadOnly")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlStructuralFeature")][QStringLiteral("isReadOnly")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

