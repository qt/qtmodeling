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

#include "qumlsubstitution.h"
#include "qumlsubstitution_p.h"

#include <QtUml/QUmlClassifier>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlSubstitutionPrivate::QUmlSubstitutionPrivate() :
    contract(0),
    substitutingClassifier(0)
{
}

QUmlSubstitutionPrivate::~QUmlSubstitutionPrivate()
{
}

/*!
    \class QUmlSubstitution

    \inmodule QtUml

    \brief A substitution is a relationship between two classifiers signifies that the substituting classifier complies with the contract specified by the contract classifier. This implies that instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
 */

QUmlSubstitution::QUmlSubstitution(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRealization(*new QUmlSubstitutionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlSubstitution::QUmlSubstitution(QUmlSubstitutionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRealization(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlSubstitution::~QUmlSubstitution()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlSubstitution
// ---------------------------------------------------------------

/*!
    The contract with which the substituting classifier complies.
 */
QUmlClassifier *QUmlSubstitution::contract() const
{
    // This is a read-write association end

    Q_D(const QUmlSubstitution);
    return d->contract;
}

void QUmlSubstitution::setContract(QUmlClassifier *contract)
{
    // This is a read-write association end

    Q_D(QUmlSubstitution);
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

/*!
    Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
 */
QUmlClassifier *QUmlSubstitution::substitutingClassifier() const
{
    // This is a read-write association end

    Q_D(const QUmlSubstitution);
    return d->substitutingClassifier;
}

void QUmlSubstitution::setSubstitutingClassifier(QUmlClassifier *substitutingClassifier)
{
    // This is a read-write association end

    Q_D(QUmlSubstitution);
    if (d->substitutingClassifier != substitutingClassifier) {
        // Adjust opposite property
        if (d->substitutingClassifier)
            d->substitutingClassifier->removeSubstitution(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDependency *>(this))->removeClient(qwrappedobject_cast<QUmlNamedElement *>(d->substitutingClassifier));

        d->substitutingClassifier = substitutingClassifier;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(substitutingClassifier));
        if (substitutingClassifier) {
            (qwrappedobject_cast<QUmlDependency *>(this))->addClient(qwrappedobject_cast<QUmlNamedElement *>(substitutingClassifier));
        }

        // Adjust opposite property
        if (substitutingClassifier)
            substitutingClassifier->addSubstitution(this);
    }
}

void QUmlSubstitution::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("contract")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("contract")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("contract")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The contract with which the substituting classifier complies.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("contract")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("contract")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDependency::suppliers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("contract")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("substitutingClassifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("substitutingClassifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("substitutingClassifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("substitutingClassifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("substitutingClassifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner QUmlDependency::clients");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSubstitution")][QString::fromLatin1("substitutingClassifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlClassifier::substitution");

    QUmlRealization::setPropertyData();
}

// Overriden methods for subsetted properties

void QUmlSubstitution::addSupplier(QWrappedObjectPointer<QUmlClassifier> contract)
{
    setContract(contract);
}

void QUmlSubstitution::removeSupplier(QWrappedObjectPointer<QUmlClassifier> contract)
{
    Q_UNUSED(contract);
    setContract(0);
}

void QUmlSubstitution::addClient(QWrappedObjectPointer<QUmlClassifier> substitutingClassifier)
{
    setSubstitutingClassifier(substitutingClassifier);
}

void QUmlSubstitution::removeClient(QWrappedObjectPointer<QUmlClassifier> substitutingClassifier)
{
    Q_UNUSED(substitutingClassifier);
    setSubstitutingClassifier(0);
}

QT_END_NAMESPACE

#include "moc_qumlsubstitution.cpp"

