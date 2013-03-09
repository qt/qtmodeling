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

#include "qumlmanifestation.h"
#include "qumlmanifestation_p.h"

#include <QtUml/QUmlPackageableElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlManifestationPrivate::QUmlManifestationPrivate() :
    utilizedElement(0)
{
}

QUmlManifestationPrivate::~QUmlManifestationPrivate()
{
}

/*!
    \class QUmlManifestation

    \inmodule QtUml

    \brief A manifestation is the concrete physical rendering of one or more model elements by an artifact.
 */

QUmlManifestation::QUmlManifestation(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAbstraction(*new QUmlManifestationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlManifestation::QUmlManifestation(QUmlManifestationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAbstraction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlManifestation::~QUmlManifestation()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlManifestation
// ---------------------------------------------------------------

/*!
    The model element that is utilized in the manifestation in an Artifact.
 */
QUmlPackageableElement *QUmlManifestation::utilizedElement() const
{
    // This is a read-write association end

    Q_D(const QUmlManifestation);
    return d->utilizedElement;
}

void QUmlManifestation::setUtilizedElement(QUmlPackageableElement *utilizedElement)
{
    // This is a read-write association end

    Q_D(QUmlManifestation);
    if (d->utilizedElement != utilizedElement) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDependency *>(this))->removeSupplier(qwrappedobject_cast<QUmlNamedElement *>(d->utilizedElement));

        d->utilizedElement = utilizedElement;

        // Adjust subsetted property(ies)
        if (utilizedElement) {
            (qwrappedobject_cast<QUmlDependency *>(this))->addSupplier(qwrappedobject_cast<QUmlNamedElement *>(utilizedElement));
        }
    }
}

void QUmlManifestation::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlManifestation")][QString::fromLatin1("utilizedElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlManifestation")][QString::fromLatin1("utilizedElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlManifestation")][QString::fromLatin1("utilizedElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The model element that is utilized in the manifestation in an Artifact.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlManifestation")][QString::fromLatin1("utilizedElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlManifestation")][QString::fromLatin1("utilizedElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDependency::suppliers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlManifestation")][QString::fromLatin1("utilizedElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAbstraction::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlManifestation::addSupplier(QWrappedObjectPointer<QUmlPackageableElement> utilizedElement)
{
    setUtilizedElement(utilizedElement);
}

void QUmlManifestation::removeSupplier(QWrappedObjectPointer<QUmlPackageableElement> utilizedElement)
{
    Q_UNUSED(utilizedElement);
    setUtilizedElement(0);
}

QT_END_NAMESPACE

#include "moc_qumlmanifestation.cpp"

