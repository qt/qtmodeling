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

#include "qlinkenddata.h"
#include "qlinkenddata_p.h"

#include <QtUml/QProperty>
#include <QtUml/QQualifierValue>
#include <QtUml/QInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QLinkEndDataPrivate::QLinkEndDataPrivate() :
    value(0),
    end(0)
{
}

QLinkEndDataPrivate::~QLinkEndDataPrivate()
{
}

/*!
    \class QLinkEndData

    \inmodule QtUml

    \brief A link end data is not an action. It is an element that identifies links. It identifies one end of a link to be read or written by the children of a link action. A link cannot be passed as a runtime value to or from an action. Instead, a link is identified by its end objects and qualifier values, if any. This requires more than one piece of data, namely, the statically-specified end in the user model, the object on the end, and the qualifier values for that end, if any. These pieces are brought together around a link end data. Each association end is identified separately with an instance of the LinkEndData class.
 */

QLinkEndData::QLinkEndData(QWrappedObject *wrapper, QWrappedObject *parent) :
    QElement(*new QLinkEndDataPrivate, wrapper, parent)
{
    setPropertyData();
}

QLinkEndData::QLinkEndData(QLinkEndDataPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QElement(dd, wrapper, parent)
{
    setPropertyData();
}

QLinkEndData::~QLinkEndData()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QLinkEndData
// ---------------------------------------------------------------

/*!
    Input pin that provides the specified object for the given end. This pin is omitted if the link-end data specifies an 'open' end for reading.
 */
QInputPin *QLinkEndData::value() const
{
    // This is a read-write association end

    Q_D(const QLinkEndData);
    return d->value;
}

void QLinkEndData::setValue(QInputPin *value)
{
    // This is a read-write association end

    Q_D(QLinkEndData);
    if (d->value != value) {
        d->value = value;
    }
}

/*!
    Association end for which this link-end data specifies values.
 */
QProperty *QLinkEndData::end() const
{
    // This is a read-write association end

    Q_D(const QLinkEndData);
    return d->end;
}

void QLinkEndData::setEnd(QProperty *end)
{
    // This is a read-write association end

    Q_D(QLinkEndData);
    if (d->end != end) {
        d->end = end;
    }
}

/*!
    List of qualifier values
 */
QSet<QQualifierValue *> QLinkEndData::qualifiers() const
{
    // This is a read-write association end

    Q_D(const QLinkEndData);
    return d->qualifiers;
}

void QLinkEndData::addQualifier(QQualifierValue *qualifier)
{
    // This is a read-write association end

    Q_D(QLinkEndData);
    if (!d->qualifiers.contains(qualifier)) {
        d->qualifiers.insert(qualifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(qualifier));
    }
}

void QLinkEndData::removeQualifier(QQualifierValue *qualifier)
{
    // This is a read-write association end

    Q_D(QLinkEndData);
    if (d->qualifiers.contains(qualifier)) {
        d->qualifiers.remove(qualifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(qualifier));
    }
}

void QLinkEndData::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("value")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("value")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("value")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Input pin that provides the specified object for the given end. This pin is omitted if the link-end data specifies an 'open' end for reading.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("value")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("value")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("value")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("end")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("end")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("end")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Association end for which this link-end data specifies values.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("end")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("end")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("end")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("qualifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("qualifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("qualifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("List of qualifier values");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("qualifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("qualifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndData")][QString::fromLatin1("qualifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QElement::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qlinkenddata.cpp"

