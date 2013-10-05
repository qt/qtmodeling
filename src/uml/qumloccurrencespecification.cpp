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
#include "qumloccurrencespecification.h"

#include "private/qumloccurrencespecificationobject_p.h"

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
    \class QUmlOccurrenceSpecification

    \inmodule QtUml

    \brief An occurrence specification is the basic semantic unit of interactions. The sequences of occurrences specified by them are the meanings of interactions.
 */
QUmlOccurrenceSpecification::QUmlOccurrenceSpecification(bool createQObject) :
    _covered(0)
{
    if (createQObject)
        _qObject = new QUmlOccurrenceSpecificationObject(this);
    setPropertyData();
}

QUmlOccurrenceSpecification::~QUmlOccurrenceSpecification()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlOccurrenceSpecification::clone() const
{
    QUmlOccurrenceSpecification *c = new QUmlOccurrenceSpecification;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (enclosingInteraction())
        c->setEnclosingInteraction(dynamic_cast<QUmlInteraction *>(enclosingInteraction()->clone()));
    if (enclosingOperand())
        c->setEnclosingOperand(dynamic_cast<QUmlInteractionOperand *>(enclosingOperand()->clone()));
    foreach (QUmlGeneralOrdering *element, generalOrdering())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    if (covered())
        c->setCovered(dynamic_cast<QUmlLifeline *>(covered()->clone()));
    foreach (QUmlGeneralOrdering *element, toAfter())
        c->addToAfter(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    foreach (QUmlGeneralOrdering *element, toBefore())
        c->addToBefore(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Lifeline on which the OccurrenceSpecification appears.
 */
QUmlLifeline *QUmlOccurrenceSpecification::covered() const
{
    // This is a read-write association end

    return _covered;
}

void QUmlOccurrenceSpecification::setCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    if (_covered != covered) {
        _covered = covered;
        if (covered && covered->asQObject() && this->asQObject())
            QObject::connect(covered->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setCovered()));
    }
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification
 */
const QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toAfter() const
{
    // This is a read-write association end

    return _toAfter;
}

void QUmlOccurrenceSpecification::addToAfter(QUmlGeneralOrdering *toAfter)
{
    // This is a read-write association end

    if (!_toAfter.contains(toAfter)) {
        _toAfter.insert(toAfter);
        if (toAfter && toAfter->asQObject() && this->asQObject())
            QObject::connect(toAfter->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeToAfter(QObject *)));

        // Adjust opposite properties
        if (toAfter) {
            toAfter->setBefore(this);
        }
    }
}

void QUmlOccurrenceSpecification::removeToAfter(QUmlGeneralOrdering *toAfter)
{
    // This is a read-write association end

    if (_toAfter.contains(toAfter)) {
        _toAfter.remove(toAfter);

        // Adjust opposite properties
        if (toAfter) {
            toAfter->setBefore(0);
        }
    }
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification
 */
const QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toBefore() const
{
    // This is a read-write association end

    return _toBefore;
}

void QUmlOccurrenceSpecification::addToBefore(QUmlGeneralOrdering *toBefore)
{
    // This is a read-write association end

    if (!_toBefore.contains(toBefore)) {
        _toBefore.insert(toBefore);
        if (toBefore && toBefore->asQObject() && this->asQObject())
            QObject::connect(toBefore->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeToBefore(QObject *)));

        // Adjust opposite properties
        if (toBefore) {
            toBefore->setAfter(this);
        }
    }
}

void QUmlOccurrenceSpecification::removeToBefore(QUmlGeneralOrdering *toBefore)
{
    // This is a read-write association end

    if (_toBefore.contains(toBefore)) {
        _toBefore.remove(toBefore);

        // Adjust opposite properties
        if (toBefore) {
            toBefore->setAfter(0);
        }
    }
}

void QUmlOccurrenceSpecification::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::DocumentationRole] = QStringLiteral("References the Lifeline on which the OccurrenceSpecification appears.");
    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("InteractionFragment-covered");
    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("covered")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("toAfter")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("toAfter")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("toAfter")][QtModeling::DocumentationRole] = QStringLiteral("References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification");
    QModelingObject::propertyDataHash[QStringLiteral("toAfter")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("toAfter")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("toAfter")][QtModeling::OppositeEndRole] = QStringLiteral("GeneralOrdering-before");

    QModelingObject::propertyDataHash[QStringLiteral("toBefore")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("toBefore")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("toBefore")][QtModeling::DocumentationRole] = QStringLiteral("References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification");
    QModelingObject::propertyDataHash[QStringLiteral("toBefore")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("toBefore")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("toBefore")][QtModeling::OppositeEndRole] = QStringLiteral("GeneralOrdering-after");

}

