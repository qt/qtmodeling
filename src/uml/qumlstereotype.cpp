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

#include "qumlstereotype.h"
#include "qumlstereotype_p.h"

#include <QtUml/QUmlImage>
#include <QtUml/QUmlProfile>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlStereotypePrivate::QUmlStereotypePrivate()
{
}

QUmlStereotypePrivate::~QUmlStereotypePrivate()
{
}

/*!
    \class QUmlStereotype

    \inmodule QtUml

    \brief A stereotype defines how an existing metaclass may be extended, and enables the use of platform or domain specific terminology or notation in place of, or in addition to, the ones used for the extended metaclass.
 */

QUmlStereotype::QUmlStereotype(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClass(*new QUmlStereotypePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlStereotype::QUmlStereotype(QUmlStereotypePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClass(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlStereotype::~QUmlStereotype()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlStereotype
// ---------------------------------------------------------------

/*!
    Stereotype can change the graphical appearance of the extended model element by using attached icons. When this association is not null, it references the location of the icon content to be displayed within diagrams presenting the extended model elements.
 */
QSet<QUmlImage *> QUmlStereotype::icons() const
{
    // This is a read-write association end

    Q_D(const QUmlStereotype);
    return d->icons;
}

void QUmlStereotype::addIcon(QUmlImage *icon)
{
    // This is a read-write association end

    Q_D(QUmlStereotype);
    if (!d->icons.contains(icon)) {
        d->icons.insert(icon);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(icon));
    }
}

void QUmlStereotype::removeIcon(QUmlImage *icon)
{
    // This is a read-write association end

    Q_D(QUmlStereotype);
    if (d->icons.contains(icon)) {
        d->icons.remove(icon);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(icon));
    }
}

/*!
    The profile that directly or indirectly contains this stereotype.
 */
QUmlProfile *QUmlStereotype::profile() const
{
    // This is a read-only derived association end

    qWarning("QUmlStereotype::profile: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The query containingProfile returns the closest profile directly or indirectly containing this stereotype.
 */
QUmlProfile *QUmlStereotype::containingProfile() const
{
    qWarning("QUmlStereotype::containingProfile: operation to be implemented");

    return 0; // change here to your derived return
}

void QUmlStereotype::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Stereotype can change the graphical appearance of the extended model element by using attached icons. When this association is not null, it references the location of the icon content to be displayed within diagrams presenting the extended model elements.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("icons")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The profile that directly or indirectly contains this stereotype.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStereotype")][QString::fromLatin1("profile")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlClass::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlstereotype.cpp"

