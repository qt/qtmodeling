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
#include "qmoftype.h"
#include "qmoftype_p.h"

#include <QtMof/QMofPackage>
#include <QtMof/QMofObject>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofTypePrivate::QMofTypePrivate() :
    package(0)
{
}

QMofTypePrivate::~QMofTypePrivate()
{
}

/*!
    \class QMofType

    \inmodule QtMof

    \brief A type constrains the values represented by a typed element.
 */

QMofType::QMofType(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofPackageableElement(*new QMofTypePrivate, wrapper, parent)
{
    setPropertyData();
}

QMofType::QMofType(QMofTypePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofPackageableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofType::~QMofType()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofType
// ---------------------------------------------------------------

/*!
    Specifies the owning package of this classifier, if any.
 */
QMofPackage *QMofType::package() const
{
    // This is a read-write association end

    Q_D(const QMofType);
    return d->package;
}

void QMofType::setPackage(QMofPackage *package)
{
    // This is a read-write association end

    Q_D(QMofType);
    if (d->package != package) {
        // Adjust opposite property
        if (d->package)
            d->package->removeOwnedType(this);

        d->package = package;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QMofNamespace *>(package));

        // Adjust opposite property
        if (package)
            package->addOwnedType(this);
    }
}

/*!
    The query conformsTo() gives true for a type that conforms to another. By default, two types do not conform to each other. This query is intended to be redefined for specific conformance situations.
 */
bool QMofType::conformsTo(const QMofType *other) const
{
    qWarning("QMofType::conformsTo: operation to be implemented");
    Q_UNUSED(other);

    return bool(); // change here to your derived return
}

bool QMofType::isInstance(const QMofObject *object) const
{
    qWarning("QMofType::isInstance: operation to be implemented");
    Q_UNUSED(object);

    return bool(); // change here to your derived return
}

void QMofType::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofType")][QString::fromLatin1("package")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofType")][QString::fromLatin1("package")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofType")][QString::fromLatin1("package")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the owning package of this classifier, if any.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofType")][QString::fromLatin1("package")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofType")][QString::fromLatin1("package")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofType")][QString::fromLatin1("package")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofPackage::ownedType");

    QMofPackageableElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmoftype.cpp"

