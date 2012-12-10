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

#include "qbehavioredclassifier.h"
#include "qbehavioredclassifier_p.h"

#include <QtUml/QBehavior>
#include <QtUml/QInterfaceRealization>

QT_BEGIN_NAMESPACE_QTUML

QBehavioredClassifierPrivate::QBehavioredClassifierPrivate() :
    ownedBehaviors(new QSet<QBehavior *>),
    interfaceRealizations(new QSet<QInterfaceRealization *>),
    classifierBehavior(0)
{
}

QBehavioredClassifierPrivate::~QBehavioredClassifierPrivate()
{
    delete ownedBehaviors;
    delete interfaceRealizations;
}

/*!
    \class QBehavioredClassifier

    \inmodule QtUml

    \brief A behaviored classifier may have an interface realization.A classifier can have behavior specifications defined in its namespace. One of these may specify the behavior of the classifier itself.
 */

QBehavioredClassifier::QBehavioredClassifier(QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QClassifier(*new QBehavioredClassifierPrivate, parent, wrapper)
{
}

QBehavioredClassifier::QBehavioredClassifier(QBehavioredClassifierPrivate &dd, QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QClassifier(dd, parent, wrapper)
{
}

QBehavioredClassifier::~QBehavioredClassifier()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QBehavioredClassifier
// ---------------------------------------------------------------

/*!
    References behavior specifications owned by a classifier.
 */
const QSet<QBehavior *> *QBehavioredClassifier::ownedBehaviors() const
{
    // This is a read-write association end

    Q_D(const QBehavioredClassifier);
    return d->ownedBehaviors;
}

void QBehavioredClassifier::addOwnedBehavior(QBehavior *ownedBehavior)
{
    // This is a read-write association end

    Q_D(QBehavioredClassifier);
    if (!d->ownedBehaviors->contains(ownedBehavior)) {
        d->ownedBehaviors->insert(ownedBehavior);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qmofobject_cast<QNamedElement *>(ownedBehavior));
    }
}

void QBehavioredClassifier::removeOwnedBehavior(QBehavior *ownedBehavior)
{
    // This is a read-write association end

    Q_D(QBehavioredClassifier);
    if (d->ownedBehaviors->contains(ownedBehavior)) {
        d->ownedBehaviors->remove(ownedBehavior);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qmofobject_cast<QNamedElement *>(ownedBehavior));
    }
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
const QSet<QInterfaceRealization *> *QBehavioredClassifier::interfaceRealizations() const
{
    // This is a read-write association end

    Q_D(const QBehavioredClassifier);
    return d->interfaceRealizations;
}

void QBehavioredClassifier::addInterfaceRealization(QInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    Q_D(QBehavioredClassifier);
    if (!d->interfaceRealizations->contains(interfaceRealization)) {
        d->interfaceRealizations->insert(interfaceRealization);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QElementPrivate *>(d))->addOwnedElement(qmofobject_cast<QElement *>(interfaceRealization));
        (qmofobject_cast<QNamedElement *>(this))->addClientDependency(qmofobject_cast<QDependency *>(interfaceRealization));

        // Adjust opposite property
        interfaceRealization->setImplementingClassifier(this);
    }
}

void QBehavioredClassifier::removeInterfaceRealization(QInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    Q_D(QBehavioredClassifier);
    if (d->interfaceRealizations->contains(interfaceRealization)) {
        d->interfaceRealizations->remove(interfaceRealization);

        // Adjust subsetted property(ies)
        (qmofobject_cast<QElementPrivate *>(d))->removeOwnedElement(qmofobject_cast<QElement *>(interfaceRealization));
        (qmofobject_cast<QNamedElement *>(this))->removeClientDependency(qmofobject_cast<QDependency *>(interfaceRealization));

        // Adjust opposite property
        interfaceRealization->setImplementingClassifier(0);
    }
}

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QBehavior *QBehavioredClassifier::classifierBehavior() const
{
    // This is a read-write association end

    Q_D(const QBehavioredClassifier);
    return d->classifierBehavior;
}

void QBehavioredClassifier::setClassifierBehavior(QBehavior *classifierBehavior)
{
    // This is a read-write association end

    Q_D(QBehavioredClassifier);
    if (d->classifierBehavior != classifierBehavior) {
        // Adjust subsetted property(ies)
        (qmofobject_cast<QBehavioredClassifier *>(this))->removeOwnedBehavior(qmofobject_cast<QBehavior *>(d->classifierBehavior));

        d->classifierBehavior = classifierBehavior;

        // Adjust subsetted property(ies)
        if (classifierBehavior) {
            (qmofobject_cast<QBehavioredClassifier *>(this))->addOwnedBehavior(qmofobject_cast<QBehavior *>(classifierBehavior));
        }
    }
}

// Overriden methods for subsetted properties

void QBehavioredClassifier::addClientDependency(QtMof::QMofPointer<QInterfaceRealization> interfaceRealization)
{
    addInterfaceRealization(interfaceRealization);
}

void QBehavioredClassifier::removeClientDependency(QtMof::QMofPointer<QInterfaceRealization> interfaceRealization)
{
    removeInterfaceRealization(interfaceRealization);
}

#include "moc_qbehavioredclassifier.cpp"

QT_END_NAMESPACE_QTUML

