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
#include "qmofpackageableelement.h"
#include "qmofpackageableelement_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofPackageableElementPrivate::QMofPackageableElementPrivate() :
    visibility(QtMof::VisibilityPublic)
{
}

QMofPackageableElementPrivate::~QMofPackageableElementPrivate()
{
}

/*!
    \class QMofPackageableElement

    \inmodule QtMof

    \brief A packageable element indicates a named element that may be owned directly by a package.
 */

QMofPackageableElement::QMofPackageableElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofNamedElement(*new QMofPackageableElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofPackageableElement::QMofPackageableElement(QMofPackageableElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofPackageableElement::~QMofPackageableElement()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtMof::VisibilityKind QMofPackageableElement::visibility() const
{
    // This is a read-write attribute

    Q_D(const QMofPackageableElement);
    return d->visibility;
}

void QMofPackageableElement::setVisibility(QtMof::VisibilityKind visibility)
{
    // This is a read-write attribute

    Q_D(QMofPackageableElement);
    if (d->visibility != visibility) {
        d->visibility = visibility;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QMofNamedElement *>(this))->setVisibility(visibility);
    }
    d->modifiedResettableProperties << QString::fromLatin1("visibility");
}

void QMofPackageableElement::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
    Q_D(QMofPackageableElement);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

void QMofPackageableElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QMofNamedElement::visibility");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofPackageableElement")][QString::fromLatin1("visibility")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofpackageableelement.cpp"

