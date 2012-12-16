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

#include "qinterfacerealization.h"
#include "qinterfacerealization_p.h"

#include <QtUml/QInterface>
#include <QtUml/QBehavioredClassifier>

QT_BEGIN_NAMESPACE_QTUML

QInterfaceRealizationPrivate::QInterfaceRealizationPrivate() :
    implementingClassifier(0),
    contract(0)
{
}

QInterfaceRealizationPrivate::~QInterfaceRealizationPrivate()
{
}

/*!
    \class QInterfaceRealization

    \inmodule QtUml

    \brief An interface realization is a specialized realization relationship between a classifier and an interface. This relationship signifies that the realizing classifier conforms to the contract specified by the interface.
 */

QInterfaceRealization::QInterfaceRealization(QWrappedObject *parent, QWrappedObject *wrapper) :
    QRealization(*new QInterfaceRealizationPrivate, parent, wrapper)
{
}

QInterfaceRealization::QInterfaceRealization(QInterfaceRealizationPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QRealization(dd, parent, wrapper)
{
}

QInterfaceRealization::~QInterfaceRealization()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInterfaceRealization
// ---------------------------------------------------------------

/*!
    References the BehavioredClassifier that owns this Interfacerealization (i.e., the classifier that realizes the Interface to which it points).
 */
QBehavioredClassifier *QInterfaceRealization::implementingClassifier() const
{
    // This is a read-write association end

    Q_D(const QInterfaceRealization);
    return d->implementingClassifier;
}

void QInterfaceRealization::setImplementingClassifier(QBehavioredClassifier *implementingClassifier)
{
    // This is a read-write association end

    Q_D(QInterfaceRealization);
    if (d->implementingClassifier != implementingClassifier) {
        // Adjust opposite property
        if (d->implementingClassifier)
            d->implementingClassifier->removeInterfaceRealization(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDependency *>(this))->removeClient(qwrappedobject_cast<QNamedElement *>(d->implementingClassifier));

        d->implementingClassifier = implementingClassifier;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(implementingClassifier));
        if (implementingClassifier) {
            (qwrappedobject_cast<QDependency *>(this))->addClient(qwrappedobject_cast<QNamedElement *>(implementingClassifier));
        }

        // Adjust opposite property
        if (implementingClassifier)
            implementingClassifier->addInterfaceRealization(this);
    }
}

/*!
    References the Interface specifying the conformance contract.
 */
QInterface *QInterfaceRealization::contract() const
{
    // This is a read-write association end

    Q_D(const QInterfaceRealization);
    return d->contract;
}

void QInterfaceRealization::setContract(QInterface *contract)
{
    // This is a read-write association end

    Q_D(QInterfaceRealization);
    if (d->contract != contract) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDependency *>(this))->removeSupplier(qwrappedobject_cast<QNamedElement *>(d->contract));

        d->contract = contract;

        // Adjust subsetted property(ies)
        if (contract) {
            (qwrappedobject_cast<QDependency *>(this))->addSupplier(qwrappedobject_cast<QNamedElement *>(contract));
        }
    }
}

void QInterfaceRealization::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QInterfaceRealization) *>("QT_PREPEND_NAMESPACE_QTUML(QInterfaceRealization) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QInterfaceRealization) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QInterfaceRealization) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QInterfaceRealization) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QInterfaceRealization) *> *");
    qRegisterMetaType<QInterfaceRealization *>("QInterfaceRealization *");
    qRegisterMetaType<const QSet<QInterfaceRealization *> *>("const QSet<QInterfaceRealization *> *");
    qRegisterMetaType<const QList<QInterfaceRealization *> *>("const QList<QInterfaceRealization *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QInterface) *>("QT_PREPEND_NAMESPACE_QTUML(QInterface) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QInterface) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QInterface) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QInterface) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QInterface) *> *");
    qRegisterMetaType<QInterface *>("QInterface *");
    qRegisterMetaType<const QSet<QInterface *> *>("const QSet<QInterface *> *");
    qRegisterMetaType<const QList<QInterface *> *>("const QList<QInterface *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QBehavioredClassifier) *>("QT_PREPEND_NAMESPACE_QTUML(QBehavioredClassifier) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QBehavioredClassifier) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QBehavioredClassifier) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QBehavioredClassifier) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QBehavioredClassifier) *> *");
    qRegisterMetaType<QBehavioredClassifier *>("QBehavioredClassifier *");
    qRegisterMetaType<const QSet<QBehavioredClassifier *> *>("const QSet<QBehavioredClassifier *> *");
    qRegisterMetaType<const QList<QBehavioredClassifier *> *>("const QList<QBehavioredClassifier *> *");


    QRealization::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

// Overriden methods for subsetted properties

void QInterfaceRealization::addClient(QWrappedObjectPointer<QBehavioredClassifier> implementingClassifier)
{
    setImplementingClassifier(implementingClassifier);
}

void QInterfaceRealization::removeClient(QWrappedObjectPointer<QBehavioredClassifier> implementingClassifier)
{
    Q_UNUSED(implementingClassifier);
    setImplementingClassifier(0);
}

void QInterfaceRealization::addSupplier(QWrappedObjectPointer<QInterface> contract)
{
    setContract(contract);
}

void QInterfaceRealization::removeSupplier(QWrappedObjectPointer<QInterface> contract)
{
    Q_UNUSED(contract);
    setContract(0);
}

#include "moc_qinterfacerealization.cpp"

QT_END_NAMESPACE_QTUML

