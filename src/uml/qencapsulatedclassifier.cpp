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

#include "qencapsulatedclassifier.h"
#include "qencapsulatedclassifier_p.h"

#include <QtUml/QPort>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QEncapsulatedClassifierPrivate::QEncapsulatedClassifierPrivate()
{
}

QEncapsulatedClassifierPrivate::~QEncapsulatedClassifierPrivate()
{
}

/*!
    \class QEncapsulatedClassifier

    \inmodule QtUml

    \brief A classifier has the ability to own ports as specific and type checked interaction points.
 */

QEncapsulatedClassifier::QEncapsulatedClassifier(QWrappedObject *wrapper, QWrappedObject *parent) :
    QStructuredClassifier(*new QEncapsulatedClassifierPrivate, wrapper, parent)
{
    setPropertyData();
}

QEncapsulatedClassifier::QEncapsulatedClassifier(QEncapsulatedClassifierPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QStructuredClassifier(dd, wrapper, parent)
{
    setPropertyData();
}

QEncapsulatedClassifier::~QEncapsulatedClassifier()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QEncapsulatedClassifier
// ---------------------------------------------------------------

/*!
    References a set of ports that an encapsulated classifier owns.
 */
QSet<QPort *> QEncapsulatedClassifier::ownedPorts() const
{
    // This is a read-only derived association end

    Q_D(const QEncapsulatedClassifier);
    QSet<QPort *> ownedPorts_;
    foreach (QProperty *property, d->ownedAttributes)
        if (QPort *port = qwrappedobject_cast<QPort *>(property))
            ownedPorts_.insert(port);
    return ownedPorts_;
}

void QEncapsulatedClassifier::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References a set of ports that an encapsulated classifier owns.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QStructuredClassifier::ownedAttributes");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QEncapsulatedClassifier")][QString::fromLatin1("ownedPorts")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QStructuredClassifier::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qencapsulatedclassifier.cpp"

