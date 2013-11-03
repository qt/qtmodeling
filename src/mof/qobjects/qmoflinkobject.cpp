/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmoflinkobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofLink>
#include <QtMof/QMofAssociation>
#include <QtMof/QMofElement>

QT_BEGIN_NAMESPACE

QMofLinkObject::QMofLinkObject(QMofLink *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Link]

QObject *QMofLinkObject::firstElement() const
{
    if (!qmodelingelementproperty_cast<QMofLink *>(this)->firstElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofLink *>(this)->firstElement()->asQModelingObject();
}

QObject *QMofLinkObject::secondElement() const
{
    if (!qmodelingelementproperty_cast<QMofLink *>(this)->secondElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofLink *>(this)->secondElement()->asQModelingObject();
}

QObject *QMofLinkObject::association() const
{
    if (!qmodelingelementproperty_cast<QMofLink *>(this)->association())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofLink *>(this)->association()->asQModelingObject();
}

// OPERATIONS [Link]

bool QMofLinkObject::equals(QObject *otherLink) const
{
    return qmodelingelementproperty_cast<QMofLink *>(this)->equals(qmodelingelementproperty_cast<QMofLink *>(otherLink));
}

void QMofLinkObject::delete_()
{
    return qmodelingelementproperty_cast<QMofLink *>(this)->delete_();
}

// SLOTS FOR OWNED ATTRIBUTES [Link]

void QMofLinkObject::setFirstElement(QObject *firstElement)
{
    qmodelingelementproperty_cast<QMofLink *>(this)->setFirstElement(qmodelingelementproperty_cast<QMofElement *>(firstElement));
    emit firstElementChanged(this->firstElement());
}

void QMofLinkObject::setSecondElement(QObject *secondElement)
{
    qmodelingelementproperty_cast<QMofLink *>(this)->setSecondElement(qmodelingelementproperty_cast<QMofElement *>(secondElement));
    emit secondElementChanged(this->secondElement());
}

void QMofLinkObject::setAssociation(QObject *association)
{
    qmodelingelementproperty_cast<QMofLink *>(this)->setAssociation(qmodelingelementproperty_cast<QMofAssociation *>(association));
    emit associationChanged(this->association());
}


void QMofLinkObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMof");

    d->propertyGroups << QStringLiteral("QMofLink");
    d->groupProperties.insert(QStringLiteral("QMofLink"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("firstElement"))));
    d->groupProperties.insert(QStringLiteral("QMofLink"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("secondElement"))));
    d->groupProperties.insert(QStringLiteral("QMofLink"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("association"))));
}

void QMofLinkObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, firstElement, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, firstElement, PropertyClassRole, QStringLiteral("QMofLink"));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, firstElement, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, firstElement, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, firstElement, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, firstElement, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, firstElement, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, firstElement, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofLink, secondElement, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, secondElement, PropertyClassRole, QStringLiteral("QMofLink"));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, secondElement, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, secondElement, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, secondElement, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, secondElement, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, secondElement, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, secondElement, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofLink, association, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, association, PropertyClassRole, QStringLiteral("QMofLink"));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, association, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, association, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, association, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, association, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, association, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofLink, association, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

