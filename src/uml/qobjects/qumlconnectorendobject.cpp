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
#include "qumlconnectorendobject_p.h"

#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlConnectorEndObject::QUmlConnectorEndObject(QUmlConnectorEnd *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlConnectorEndObject::~QUmlConnectorEndObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConnectorEndObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConnectorEndObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConnectorEndObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlConnectorEndObject::isOrdered() const
{
    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->isOrdered();
}

bool QUmlConnectorEndObject::isUnique() const
{
    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->isUnique();
}

int QUmlConnectorEndObject::lower() const
{
    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->lower();
}

QObject *QUmlConnectorEndObject::lowerValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->lowerValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->lowerValue()->asQObject();
}

int QUmlConnectorEndObject::upper() const
{
    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->upper();
}

QObject *QUmlConnectorEndObject::upperValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->upperValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->upperValue()->asQObject();
}

// OWNED ATTRIBUTES [ConnectorEnd]

QObject *QUmlConnectorEndObject::definingEnd() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->definingEnd())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->definingEnd()->asQObject();
}

QObject *QUmlConnectorEndObject::partWithPort() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->partWithPort())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->partWithPort()->asQObject();
}

QObject *QUmlConnectorEndObject::role() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->role())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->role()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConnectorEndObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConnectorEndObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlConnectorEndObject::compatibleWith(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->compatibleWith(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlConnectorEndObject::includesCardinality(int C) const
{
    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->includesCardinality(C);
}

bool QUmlConnectorEndObject::includesMultiplicity(QObject *M) const
{
    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->includesMultiplicity(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlConnectorEndObject::is(int lowerbound, int upperbound) const
{
    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->is(lowerbound, upperbound);
}

bool QUmlConnectorEndObject::isMultivalued() const
{
    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->isMultivalued();
}

int QUmlConnectorEndObject::lowerBound() const
{
    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->lowerBound();
}

//int QUmlConnectorEndObject::upperBound() const
//{
//    return qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->upperBound();
//}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConnectorEndObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectorEndObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectorEndObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectorEndObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectorEndObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlConnectorEndObject::setOrdered(bool isOrdered)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->setOrdered(isOrdered);
}

void QUmlConnectorEndObject::unsetOrdered()
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordered"));
}

void QUmlConnectorEndObject::setUnique(bool isUnique)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->setUnique(isUnique);
}

void QUmlConnectorEndObject::unsetUnique()
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("unique"));
}

void QUmlConnectorEndObject::setLower(int lower)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->setLower(lower);
}

void QUmlConnectorEndObject::unsetLower()
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("lower"));
}

void QUmlConnectorEndObject::setLowerValue(QObject *lowerValue)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->setLowerValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlConnectorEndObject::setUpper(int upper)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->setUpper(upper);
}

void QUmlConnectorEndObject::unsetUpper()
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("upper"));
}

void QUmlConnectorEndObject::setUpperValue(QObject *upperValue)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->setUpperValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [ConnectorEnd]

void QUmlConnectorEndObject::setDefiningEnd(QObject *definingEnd)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->setDefiningEnd(qmodelingobjectproperty_cast<QUmlProperty *>(definingEnd));
}

void QUmlConnectorEndObject::setPartWithPort(QObject *partWithPort)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->setPartWithPort(qmodelingobjectproperty_cast<QUmlProperty *>(partWithPort));
}

void QUmlConnectorEndObject::setRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlConnectorEnd *>(this)->setRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

QT_END_NAMESPACE

