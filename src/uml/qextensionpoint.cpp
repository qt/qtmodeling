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

#include "qextensionpoint.h"
#include "qextensionpoint_p.h"

#include <QtUml/QUseCase>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QExtensionPointPrivate::QExtensionPointPrivate() :
    useCase(0)
{
}

QExtensionPointPrivate::~QExtensionPointPrivate()
{
}

/*!
    \class QExtensionPoint

    \inmodule QtUml

    \brief An extension point identifies a point in the behavior of a use case where that behavior can be extended by the behavior of some other (extending) use case, as specified by an extend relationship.
 */

QExtensionPoint::QExtensionPoint(QWrappedObject *parent, QWrappedObject *wrapper) :
    QRedefinableElement(*new QExtensionPointPrivate, parent, wrapper)
{
    setPropertyData();
}

QExtensionPoint::QExtensionPoint(QExtensionPointPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QRedefinableElement(dd, parent, wrapper)
{
    setPropertyData();
}

QExtensionPoint::~QExtensionPoint()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QExtensionPoint
// ---------------------------------------------------------------

/*!
    References the use case that owns this extension point.
 */
QUseCase *QExtensionPoint::useCase() const
{
    // This is a read-write association end

    Q_D(const QExtensionPoint);
    return d->useCase;
}

void QExtensionPoint::setUseCase(QUseCase *useCase)
{
    // This is a read-write association end

    Q_D(QExtensionPoint);
    if (d->useCase != useCase) {
        // Adjust opposite property
        if (d->useCase)
            d->useCase->removeExtensionPoint(this);

        d->useCase = useCase;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(useCase));

        // Adjust opposite property
        if (useCase)
            useCase->addExtensionPoint(this);
    }
}

void QExtensionPoint::registerMetaTypes() const
{
    qRegisterMetaType<QUseCase *>("QUseCase *");
    qRegisterMetaType<QSet<QUseCase *>>("QSet<QUseCase *>");
    qRegisterMetaType<QList<QUseCase *>>("QList<QUseCase *>");

    QRedefinableElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QExtensionPoint::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use case that owns this extension point.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUseCase::extensionPoint");

    QRedefinableElement::setPropertyData();
}

#include "moc_qextensionpoint.cpp"

QT_END_NAMESPACE_QTUML

