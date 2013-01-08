/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qpackageableelement.h"
#include "qpackageableelement_p.h"

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTMOF

QPackageableElementPrivate::QPackageableElementPrivate() :
    visibility(QtMof::VisibilityPublic)
{
}

QPackageableElementPrivate::~QPackageableElementPrivate()
{
}

/*!
    \class QPackageableElement

    \inmodule QtMof

    \brief A packageable element indicates a named element that may be owned directly by a package.
 */

QPackageableElement::QPackageableElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QNamedElement(*new QPackageableElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QPackageableElement::QPackageableElement(QPackageableElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QPackageableElement::~QPackageableElement()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtMof::VisibilityKind QPackageableElement::visibility() const
{
    // This is a read-write attribute

    Q_D(const QPackageableElement);
    return d->visibility;
}

void QPackageableElement::setVisibility(QtMof::VisibilityKind visibility)
{
    // This is a read-write attribute

    Q_D(QPackageableElement);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
    d->modifiedResettableProperties << QString::fromLatin1("visibility");
}

void QPackageableElement::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
    Q_D(QPackageableElement);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

void QPackageableElement::registerMetaTypes() const
{
    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QPackageableElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QNamedElement::visibility");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QNamedElement::setPropertyData();
}

#include "moc_qpackageableelement.cpp"

QT_END_NAMESPACE_QTMOF

