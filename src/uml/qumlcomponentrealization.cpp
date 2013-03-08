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

#include "qumlcomponentrealization.h"
#include "qumlcomponentrealization_p.h"

#include <QtUml/QUmlComponent>
#include <QtUml/QUmlClassifier>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlComponentRealizationPrivate::QUmlComponentRealizationPrivate() :
    abstraction(0)
{
}

QUmlComponentRealizationPrivate::~QUmlComponentRealizationPrivate()
{
}

/*!
    \class QUmlComponentRealization

    \inmodule QtUml

    \brief The realization concept is specialized to (optionally) define the classifiers that realize the contract offered by a component in terms of its provided and required interfaces. The component forms an abstraction from these various classifiers.
 */

QUmlComponentRealization::QUmlComponentRealization(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRealization(*new QUmlComponentRealizationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlComponentRealization::QUmlComponentRealization(QUmlComponentRealizationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRealization(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlComponentRealization::~QUmlComponentRealization()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlComponentRealization
// ---------------------------------------------------------------

/*!
    The Component that owns this ComponentRealization and which is implemented by its realizing classifiers.
 */
QUmlComponent *QUmlComponentRealization::abstraction() const
{
    // This is a read-write association end

    Q_D(const QUmlComponentRealization);
    return d->abstraction;
}

void QUmlComponentRealization::setAbstraction(QUmlComponent *abstraction)
{
    // This is a read-write association end

    Q_D(QUmlComponentRealization);
    if (d->abstraction != abstraction) {
        // Adjust opposite property
        if (d->abstraction)
            d->abstraction->removeRealization(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDependency *>(this))->removeSupplier(qwrappedobject_cast<QUmlNamedElement *>(d->abstraction));

        d->abstraction = abstraction;

        // Adjust subsetted property(ies)
        if (abstraction) {
            (qwrappedobject_cast<QUmlDependency *>(this))->addSupplier(qwrappedobject_cast<QUmlNamedElement *>(abstraction));
        }
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(abstraction));

        // Adjust opposite property
        if (abstraction)
            abstraction->addRealization(this);
    }
}

/*!
    The classifiers that are involved in the implementation of the Component that owns this Realization.
 */
QSet<QUmlClassifier *> QUmlComponentRealization::realizingClassifiers() const
{
    // This is a read-write association end

    Q_D(const QUmlComponentRealization);
    return d->realizingClassifiers;
}

void QUmlComponentRealization::addRealizingClassifier(QUmlClassifier *realizingClassifier)
{
    // This is a read-write association end

    Q_D(QUmlComponentRealization);
    if (!d->realizingClassifiers.contains(realizingClassifier)) {
        d->realizingClassifiers.insert(realizingClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDependency *>(this))->addClient(qwrappedobject_cast<QUmlNamedElement *>(realizingClassifier));
    }
}

void QUmlComponentRealization::removeRealizingClassifier(QUmlClassifier *realizingClassifier)
{
    // This is a read-write association end

    Q_D(QUmlComponentRealization);
    if (d->realizingClassifiers.contains(realizingClassifier)) {
        d->realizingClassifiers.remove(realizingClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDependency *>(this))->removeClient(qwrappedobject_cast<QUmlNamedElement *>(realizingClassifier));
    }
}

void QUmlComponentRealization::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Component that owns this ComponentRealization and which is implemented by its realizing classifiers.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDependency::suppliers QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("abstraction")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QComponent::realization");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifiers that are involved in the implementation of the Component that owns this Realization.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDependency::clients");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlComponentRealization")][QString::fromLatin1("realizingClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlRealization::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlComponentRealization::addSupplier(QWrappedObjectPointer<QUmlComponent> abstraction)
{
    setAbstraction(abstraction);
}

void QUmlComponentRealization::removeSupplier(QWrappedObjectPointer<QUmlComponent> abstraction)
{
    Q_UNUSED(abstraction);
    setAbstraction(0);
}

void QUmlComponentRealization::addClient(QWrappedObjectPointer<QUmlClassifier> realizingClassifier)
{
    addRealizingClassifier(realizingClassifier);
}

void QUmlComponentRealization::removeClient(QWrappedObjectPointer<QUmlClassifier> realizingClassifier)
{
    removeRealizingClassifier(realizingClassifier);
}

QT_END_NAMESPACE

#include "moc_qumlcomponentrealization.cpp"

