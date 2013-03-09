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

#include "qumlextensionpoint.h"
#include "qumlextensionpoint_p.h"

#include <QtUml/QUmlUseCase>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlExtensionPointPrivate::QUmlExtensionPointPrivate() :
    useCase(0)
{
}

QUmlExtensionPointPrivate::~QUmlExtensionPointPrivate()
{
}

/*!
    \class QUmlExtensionPoint

    \inmodule QtUml

    \brief An extension point identifies a point in the behavior of a use case where that behavior can be extended by the behavior of some other (extending) use case, as specified by an extend relationship.
 */

QUmlExtensionPoint::QUmlExtensionPoint(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRedefinableElement(*new QUmlExtensionPointPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlExtensionPoint::QUmlExtensionPoint(QUmlExtensionPointPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRedefinableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlExtensionPoint::~QUmlExtensionPoint()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlExtensionPoint
// ---------------------------------------------------------------

/*!
    References the use case that owns this extension point.
 */
QUmlUseCase *QUmlExtensionPoint::useCase() const
{
    // This is a read-write association end

    Q_D(const QUmlExtensionPoint);
    return d->useCase;
}

void QUmlExtensionPoint::setUseCase(QUmlUseCase *useCase)
{
    // This is a read-write association end

    Q_D(QUmlExtensionPoint);
    if (d->useCase != useCase) {
        // Adjust opposite property
        if (d->useCase)
            d->useCase->removeExtensionPoint(this);

        d->useCase = useCase;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(useCase));

        // Adjust opposite property
        if (useCase)
            useCase->addExtensionPoint(this);
    }
}

void QUmlExtensionPoint::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use case that owns this extension point.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtensionPoint")][QString::fromLatin1("useCase")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlUseCase::extensionPoint");

    QUmlRedefinableElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlextensionpoint.cpp"

