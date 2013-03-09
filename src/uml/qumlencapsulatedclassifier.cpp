/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qumlencapsulatedclassifier.h"
#include "qumlencapsulatedclassifier_p.h"

#include <QtUml/QUmlPort>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlEncapsulatedClassifierPrivate::QUmlEncapsulatedClassifierPrivate()
{
}

QUmlEncapsulatedClassifierPrivate::~QUmlEncapsulatedClassifierPrivate()
{
}

/*!
    \class QUmlEncapsulatedClassifier

    \inmodule QtUml

    \brief A classifier has the ability to own ports as specific and type checked interaction points.
 */

QUmlEncapsulatedClassifier::QUmlEncapsulatedClassifier(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuredClassifier(*new QUmlEncapsulatedClassifierPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlEncapsulatedClassifier::QUmlEncapsulatedClassifier(QUmlEncapsulatedClassifierPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuredClassifier(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlEncapsulatedClassifier::~QUmlEncapsulatedClassifier()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlEncapsulatedClassifier
// ---------------------------------------------------------------

/*!
    References a set of ports that an encapsulated classifier owns.
 */
QSet<QUmlPort *> QUmlEncapsulatedClassifier::ownedPorts() const
{
    // This is a read-only derived association end

    Q_D(const QUmlEncapsulatedClassifier);
    QSet<QUmlPort *> ownedPorts_;
    foreach (QUmlProperty *property, d->ownedAttributes)
        if (QUmlPort *port = qwrappedobject_cast<QUmlPort *>(property))
            ownedPorts_.insert(port);
    return ownedPorts_;
}

void QUmlEncapsulatedClassifier::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a set of ports that an encapsulated classifier owns.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlStructuredClassifier::ownedAttributes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlStructuredClassifier::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlencapsulatedclassifier.cpp"

