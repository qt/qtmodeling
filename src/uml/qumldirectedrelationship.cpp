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
#include "qumldirectedrelationship.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>

/*!
    \class QUmlDirectedRelationship

    \inmodule QtUml

    \brief A directed relationship represents a relationship between a collection of source model elements and a collection of target model elements.
 */
QUmlDirectedRelationship::QUmlDirectedRelationship()
{
    setGroupProperties();
    setPropertyData();
}

QUmlDirectedRelationship::~QUmlDirectedRelationship()
{
}

QModelingObject *QUmlDirectedRelationship::clone() const
{
    QUmlDirectedRelationship *c = new QUmlDirectedRelationship;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the sources of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlDirectedRelationship::sources() const
{
    // This is a read-only derived union association end

    return _sources;
}

void QUmlDirectedRelationship::addSource(QUmlElement *source)
{
    // This is a read-only derived union association end

    if (!_sources.contains(source)) {
        _sources.insert(source);
        if (source && source->asQObject() && this->asQObject())
            QObject::connect(source->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeSource(QObject *)));

        // Adjust subsetted properties
        addRelatedElement(source);
    }
}

void QUmlDirectedRelationship::removeSource(QUmlElement *source)
{
    // This is a read-only derived union association end

    if (_sources.contains(source)) {
        _sources.remove(source);

        // Adjust subsetted properties
        removeRelatedElement(source);
    }
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlDirectedRelationship::targets() const
{
    // This is a read-only derived union association end

    return _targets;
}

void QUmlDirectedRelationship::addTarget(QUmlElement *target)
{
    // This is a read-only derived union association end

    if (!_targets.contains(target)) {
        _targets.insert(target);
        if (target && target->asQObject() && this->asQObject())
            QObject::connect(target->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeTarget(QObject *)));

        // Adjust subsetted properties
        addRelatedElement(target);
    }
}

void QUmlDirectedRelationship::removeTarget(QUmlElement *target)
{
    // This is a read-only derived union association end

    if (_targets.contains(target)) {
        _targets.remove(target);

        // Adjust subsetted properties
        removeRelatedElement(target);
    }
}

void QUmlDirectedRelationship::setGroupProperties()
{
    const QMetaObject *metaObject = _qObject->metaObject();

    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));
    _groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sources"))));
    _groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targets"))));
}

void QUmlDirectedRelationship::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("sources")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("sources")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDirectedRelationship");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("sources")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("sources")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("sources")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the sources of the DirectedRelationship.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("sources")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("sources")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Relationship-relatedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("sources")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("targets")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("targets")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDirectedRelationship");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("targets")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("targets")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("targets")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the targets of the DirectedRelationship.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("targets")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("targets")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Relationship-relatedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDirectedRelationship")][QStringLiteral("targets")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

