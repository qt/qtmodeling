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

#include "qumlextension.h"
#include "qumlextension_p.h"

#include "qumlclass_p.h"

#include <QtUml/QUmlClass>
#include <QtUml/QUmlExtensionEnd>
#include <QtUml/QUmlProperty>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlExtensionPrivate::QUmlExtensionPrivate() :
    ownedEnd(0)
{
}

QUmlExtensionPrivate::~QUmlExtensionPrivate()
{
}

void QUmlExtensionPrivate::setMetaclass(QUmlClass *metaclass)
{
    // This is a read-only derived association end

    qWarning("QUmlExtension::setMetaclass: to be implemented (this is a derived associationend)");
    Q_UNUSED(metaclass);

    if (false /* <derived-change-criteria> */) {
        Q_Q(QUmlExtension);
        // Adjust opposite property
        // if (this->metaclass)
        //     (qwrappedobject_cast<QUmlClassPrivate *>(this->metaclass->d_func()))->removeExtension(q);

        // <derived-code>

        // Adjust opposite property
        if (metaclass)
            (qwrappedobject_cast<QUmlClassPrivate *>(metaclass->d_func()))->addExtension(q);
    }
}

/*!
    \class QUmlExtension

    \inmodule QtUml

    \brief An extension is used to indicate that the properties of a metaclass are extended through a stereotype, and gives the ability to flexibly add (and later remove) stereotypes to classes.
 */

QUmlExtension::QUmlExtension(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAssociation(*new QUmlExtensionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlExtension::QUmlExtension(QUmlExtensionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAssociation(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlExtension::~QUmlExtension()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlExtension
// ---------------------------------------------------------------

/*!
    Indicates whether an instance of the extending stereotype must be created when an instance of the extended class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false. Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false.
 */
bool QUmlExtension::isRequired() const
{
    // This is a read-only derived attribute

    qWarning("QUmlExtension::isRequired: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlExtension
// ---------------------------------------------------------------

/*!
    References the Class that is extended through an Extension. The property is derived from the type of the memberEnd that is not the ownedEnd.
 */
QUmlClass *QUmlExtension::metaclass() const
{
    // This is a read-only derived association end

    qWarning("QUmlExtension::metaclass: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    References the end of the extension that is typed by a Stereotype.
 */
QUmlExtensionEnd *QUmlExtension::ownedEnd() const
{
    // This is a read-write association end

    Q_D(const QUmlExtension);
    return d->ownedEnd;
}

void QUmlExtension::setOwnedEnd(QUmlExtensionEnd *ownedEnd)
{
    // This is a read-write association end

    Q_D(QUmlExtension);
    if (d->ownedEnd != ownedEnd) {
        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlAssociation *>(this))->removeOwnedEnd(qwrappedobject_cast<QUmlProperty *>(d->ownedEnd));

        if (d->ownedEnd)
            qTopLevelWrapper(d->ownedEnd)->setParent(0);
        d->ownedEnd = ownedEnd;
        qTopLevelWrapper(ownedEnd)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        if (ownedEnd) {
            (qwrappedobject_cast<QUmlAssociation *>(this))->addOwnedEnd(qwrappedobject_cast<QUmlProperty *>(ownedEnd));
        }
    }
}

/*!
    The query metaclassEnd() returns the Property that is typed by a metaclass (as opposed to a stereotype).
 */
QUmlProperty *QUmlExtension::metaclassEnd() const
{
    qWarning("QUmlExtension::metaclassEnd: operation to be implemented");

    return 0; // change here to your derived return
}

void QUmlExtension::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether an instance of the extending stereotype must be created when an instance of the extended class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false. Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("isRequired")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Class that is extended through an Extension. The property is derived from the type of the memberEnd that is not the ownedEnd.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("metaclass")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClass::extension");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the end of the extension that is typed by a Stereotype.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlAssociation::ownedEnds");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtension")][QString::fromLatin1("ownedEnd")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlAssociation::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlextension.cpp"

