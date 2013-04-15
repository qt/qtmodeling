/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#include "qumlinterfacerealization.h"
#include "qumlinterfacerealization_p.h"

#include <QtUml/QUmlInterface>
#include <QtUml/QUmlBehavioredClassifier>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlInterfaceRealizationPrivate::QUmlInterfaceRealizationPrivate() :
    implementingClassifier(0),
    contract(0)
{
}

QUmlInterfaceRealizationPrivate::~QUmlInterfaceRealizationPrivate()
{
}

/*!
    \class QUmlInterfaceRealization

    \inmodule QtUml

    \brief An interface realization is a specialized realization relationship between a classifier and an interface. This relationship signifies that the realizing classifier conforms to the contract specified by the interface.
 */

QUmlInterfaceRealization::QUmlInterfaceRealization(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRealization(*new QUmlInterfaceRealizationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlInterfaceRealization::QUmlInterfaceRealization(QUmlInterfaceRealizationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRealization(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlInterfaceRealization::~QUmlInterfaceRealization()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlInterfaceRealization
// ---------------------------------------------------------------

/*!
    References the BehavioredClassifier that owns this Interfacerealization (i.e., the classifier that realizes the Interface to which it points).
 */
QUmlBehavioredClassifier *QUmlInterfaceRealization::implementingClassifier() const
{
    // This is a read-write association end

    Q_D(const QUmlInterfaceRealization);
    return d->implementingClassifier;
}

void QUmlInterfaceRealization::setImplementingClassifier(QUmlBehavioredClassifier *implementingClassifier)
{
    // This is a read-write association end

    Q_D(QUmlInterfaceRealization);
    if (d->implementingClassifier != implementingClassifier) {
        // Adjust opposite property
        if (d->implementingClassifier)
            d->implementingClassifier->removeInterfaceRealization(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDependency *>(this))->removeClient(qwrappedobject_cast<QUmlNamedElement *>(d->implementingClassifier));

        d->implementingClassifier = implementingClassifier;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(implementingClassifier));
        if (implementingClassifier) {
            (qwrappedobject_cast<QUmlDependency *>(this))->addClient(qwrappedobject_cast<QUmlNamedElement *>(implementingClassifier));
        }

        // Adjust opposite property
        if (implementingClassifier)
            implementingClassifier->addInterfaceRealization(this);
    }
}

/*!
    References the Interface specifying the conformance contract.
 */
QUmlInterface *QUmlInterfaceRealization::contract() const
{
    // This is a read-write association end

    Q_D(const QUmlInterfaceRealization);
    return d->contract;
}

void QUmlInterfaceRealization::setContract(QUmlInterface *contract)
{
    // This is a read-write association end

    Q_D(QUmlInterfaceRealization);
    if (d->contract != contract) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDependency *>(this))->removeSupplier(qwrappedobject_cast<QUmlNamedElement *>(d->contract));

        d->contract = contract;

        // Adjust subsetted property(ies)
        if (contract) {
            (qwrappedobject_cast<QUmlDependency *>(this))->addSupplier(qwrappedobject_cast<QUmlNamedElement *>(contract));
        }
    }
}

void QUmlInterfaceRealization::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("implementingClassifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("implementingClassifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("implementingClassifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the BehavioredClassifier that owns this Interfacerealization (i.e., the classifier that realizes the Interface to which it points).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("implementingClassifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("implementingClassifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner QUmlDependency::clients");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("implementingClassifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlBehavioredClassifier::interfaceRealization");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("contract")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("contract")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("contract")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Interface specifying the conformance contract.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("contract")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("contract")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDependency::suppliers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInterfaceRealization")][QString::fromLatin1("contract")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlRealization::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlInterfaceRealization::addClient(QWrappedObjectPointer<QUmlBehavioredClassifier> implementingClassifier)
{
    setImplementingClassifier(implementingClassifier);
}

void QUmlInterfaceRealization::removeClient(QWrappedObjectPointer<QUmlBehavioredClassifier> implementingClassifier)
{
    Q_UNUSED(implementingClassifier);
    setImplementingClassifier(0);
}

void QUmlInterfaceRealization::addSupplier(QWrappedObjectPointer<QUmlInterface> contract)
{
    setContract(contract);
}

void QUmlInterfaceRealization::removeSupplier(QWrappedObjectPointer<QUmlInterface> contract)
{
    Q_UNUSED(contract);
    setContract(0);
}

QT_END_NAMESPACE

#include "moc_qumlinterfacerealization.cpp"

