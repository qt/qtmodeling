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

#include "qextension.h"
#include "qextension_p.h"

#include "qclass_p.h"

#include <QtUml/QClass>
#include <QtUml/QExtensionEnd>
#include <QtUml/QProperty>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QExtensionPrivate::QExtensionPrivate() :
    ownedEnd(0)
{
}

QExtensionPrivate::~QExtensionPrivate()
{
}

void QExtensionPrivate::setMetaclass(QClass *metaclass)
{
    // This is a read-only derived association end

    qWarning("QExtension::setMetaclass: to be implemented (this is a derived associationend)");
    Q_UNUSED(metaclass);

    if (false /* <derived-change-criteria> */) {
        Q_Q(QExtension);
        // Adjust opposite property
        // if (this->metaclass)
        //     (qwrappedobject_cast<QClassPrivate *>(this->metaclass->d_func()))->removeExtension(q);

        // <derived-code>

        // Adjust opposite property
        if (metaclass)
            (qwrappedobject_cast<QClassPrivate *>(metaclass->d_func()))->addExtension(q);
    }
}

/*!
    \class QExtension

    \inmodule QtUml

    \brief An extension is used to indicate that the properties of a metaclass are extended through a stereotype, and gives the ability to flexibly add (and later remove) stereotypes to classes.
 */

QExtension::QExtension(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAssociation(*new QExtensionPrivate, wrapper, parent)
{
    setPropertyData();
}

QExtension::QExtension(QExtensionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAssociation(dd, wrapper, parent)
{
    setPropertyData();
}

QExtension::~QExtension()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QExtension
// ---------------------------------------------------------------

/*!
    Indicates whether an instance of the extending stereotype must be created when an instance of the extended class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false. Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false.
 */
bool QExtension::isRequired() const
{
    // This is a read-only derived attribute

    qWarning("QExtension::isRequired: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QExtension
// ---------------------------------------------------------------

/*!
    References the Class that is extended through an Extension. The property is derived from the type of the memberEnd that is not the ownedEnd.
 */
QClass *QExtension::metaclass() const
{
    // This is a read-only derived association end

    qWarning("QExtension::metaclass: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    References the end of the extension that is typed by a Stereotype.
 */
QExtensionEnd *QExtension::ownedEnd() const
{
    // This is a read-write association end

    Q_D(const QExtension);
    return d->ownedEnd;
}

void QExtension::setOwnedEnd(QExtensionEnd *ownedEnd)
{
    // This is a read-write association end

    Q_D(QExtension);
    if (d->ownedEnd != ownedEnd) {
        if (d->ownedEnd)
            qTopLevelWrapper(d->ownedEnd)->setParent(0);
        d->ownedEnd = ownedEnd;
        qTopLevelWrapper(ownedEnd)->setParent(qTopLevelWrapper(this));
    }
}

/*!
    The query metaclassEnd() returns the Property that is typed by a metaclass (as opposed to a stereotype).
 */
QProperty *QExtension::metaclassEnd() const
{
    qWarning("QExtension::metaclassEnd: operation to be implemented");

    return 0; // change here to your derived return
}

void QExtension::registerMetaTypes() const
{
    qRegisterMetaType<QClass *>("QClass *");
    qRegisterMetaType<QSet<QClass *>>("QSet<QClass *>");
    qRegisterMetaType<QList<QClass *>>("QList<QClass *>");

    qRegisterMetaType<QExtensionEnd *>("QExtensionEnd *");
    qRegisterMetaType<QSet<QExtensionEnd *>>("QSet<QExtensionEnd *>");
    qRegisterMetaType<QList<QExtensionEnd *>>("QList<QExtensionEnd *>");

    qRegisterMetaType<QProperty *>("QProperty *");
    qRegisterMetaType<QSet<QProperty *>>("QSet<QProperty *>");
    qRegisterMetaType<QList<QProperty *>>("QList<QProperty *>");

    QAssociation::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QExtension::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether an instance of the extending stereotype must be created when an instance of the extended class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false. Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Class that is extended through an Extension. The property is derived from the type of the memberEnd that is not the ownedEnd.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClass::extension");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the end of the extension that is typed by a Stereotype.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QAssociation::ownedEnds");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAssociation::setPropertyData();
}

#include "moc_qextension.cpp"

QT_END_NAMESPACE_QTUML

