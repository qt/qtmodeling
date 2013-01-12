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

#include "qstereotype.h"
#include "qstereotype_p.h"

#include <QtUml/QImage>
#include <QtUml/QProfile>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QStereotypePrivate::QStereotypePrivate()
{
}

QStereotypePrivate::~QStereotypePrivate()
{
}

/*!
    \class QStereotype

    \inmodule QtUml

    \brief A stereotype defines how an existing metaclass may be extended, and enables the use of platform or domain specific terminology or notation in place of, or in addition to, the ones used for the extended metaclass.
 */

QStereotype::QStereotype(QWrappedObject *wrapper, QWrappedObject *parent) :
    QClass(*new QStereotypePrivate, wrapper, parent)
{
    setPropertyData();
}

QStereotype::QStereotype(QStereotypePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QClass(dd, wrapper, parent)
{
    setPropertyData();
}

QStereotype::~QStereotype()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QStereotype
// ---------------------------------------------------------------

/*!
    Stereotype can change the graphical appearance of the extended model element by using attached icons. When this association is not null, it references the location of the icon content to be displayed within diagrams presenting the extended model elements.
 */
QSet<QImage *> QStereotype::icons() const
{
    // This is a read-write association end

    Q_D(const QStereotype);
    return d->icons;
}

void QStereotype::addIcon(QImage *icon)
{
    // This is a read-write association end

    Q_D(QStereotype);
    if (!d->icons.contains(icon)) {
        d->icons.insert(icon);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(icon));
    }
}

void QStereotype::removeIcon(QImage *icon)
{
    // This is a read-write association end

    Q_D(QStereotype);
    if (d->icons.contains(icon)) {
        d->icons.remove(icon);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(icon));
    }
}

/*!
    The profile that directly or indirectly contains this stereotype.
 */
QProfile *QStereotype::profile() const
{
    // This is a read-only derived association end

    qWarning("QStereotype::profile: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The query containingProfile returns the closest profile directly or indirectly containing this stereotype.
 */
QProfile *QStereotype::containingProfile() const
{
    qWarning("QStereotype::containingProfile: operation to be implemented");

    return 0; // change here to your derived return
}

void QStereotype::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Stereotype can change the graphical appearance of the extended model element by using attached icons. When this association is not null, it references the location of the icon content to be displayed within diagrams presenting the extended model elements.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The profile that directly or indirectly contains this stereotype.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QClass::setPropertyData();
}

#include "moc_qstereotype.cpp"

QT_END_NAMESPACE_QTUML

