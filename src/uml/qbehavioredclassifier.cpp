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
#include "qnamespace_p.h"
#include "qelement_p.h"
#include "qnamedelement_p.h"

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

void QBehavioredClassifierPrivate::addOwnedBehavior(const QBehavior *ownedBehavior)
{
    this->ownedBehaviors->insert(const_cast<QBehavior *>(ownedBehavior));

    // Adjust subsetted property(ies)
    addOwnedMember(ownedBehavior);
}

void QBehavioredClassifierPrivate::removeOwnedBehavior(const QBehavior *ownedBehavior)
{
    this->ownedBehaviors->remove(const_cast<QBehavior *>(ownedBehavior));

    // Adjust subsetted property(ies)
    removeOwnedMember(ownedBehavior);
}

void QBehavioredClassifierPrivate::addInterfaceRealization(const QInterfaceRealization *interfaceRealization)
{
    this->interfaceRealizations->insert(const_cast<QInterfaceRealization *>(interfaceRealization));

    // Adjust subsetted property(ies)
    addOwnedElement(interfaceRealization);
    addClientDependency(interfaceRealization);
}

void QBehavioredClassifierPrivate::removeInterfaceRealization(const QInterfaceRealization *interfaceRealization)
{
    this->interfaceRealizations->remove(const_cast<QInterfaceRealization *>(interfaceRealization));

    // Adjust subsetted property(ies)
    removeOwnedElement(interfaceRealization);
    removeClientDependency(interfaceRealization);
}

void QBehavioredClassifierPrivate::setClassifierBehavior(const QBehavior *classifierBehavior)
{
    this->classifierBehavior = const_cast<QBehavior *>(classifierBehavior);
}

/*!
    \class QBehavioredClassifier

    \inmodule QtUml

    \brief A behaviored classifier may have an interface realization.A classifier can have behavior specifications defined in its namespace. One of these may specify the behavior of the classifier itself.
 */

QBehavioredClassifier::QBehavioredClassifier()
{
    d_umlptr = new QBehavioredClassifierPrivate;
}

QBehavioredClassifier::~QBehavioredClassifier()
{
}

/*!
    References behavior specifications owned by a classifier.
 */
const QSet<QBehavior *> *QBehavioredClassifier::ownedBehaviors() const
{
    Q_D(const QBehavioredClassifier);
    return d->ownedBehaviors;
}

void QBehavioredClassifier::addOwnedBehavior(const QBehavior *ownedBehavior)
{
    Q_D(QBehavioredClassifier);
    d->addOwnedBehavior(const_cast<QBehavior *>(ownedBehavior));
}

void QBehavioredClassifier::removeOwnedBehavior(const QBehavior *ownedBehavior)
{
    Q_D(QBehavioredClassifier);
    d->removeOwnedBehavior(const_cast<QBehavior *>(ownedBehavior));
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
const QSet<QInterfaceRealization *> *QBehavioredClassifier::interfaceRealizations() const
{
    Q_D(const QBehavioredClassifier);
    return d->interfaceRealizations;
}

void QBehavioredClassifier::addInterfaceRealization(const QInterfaceRealization *interfaceRealization)
{
    Q_D(QBehavioredClassifier);
    d->addInterfaceRealization(const_cast<QInterfaceRealization *>(interfaceRealization));
}

void QBehavioredClassifier::removeInterfaceRealization(const QInterfaceRealization *interfaceRealization)
{
    Q_D(QBehavioredClassifier);
    d->removeInterfaceRealization(const_cast<QInterfaceRealization *>(interfaceRealization));
}

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QBehavior *QBehavioredClassifier::classifierBehavior() const
{
    Q_D(const QBehavioredClassifier);
    return d->classifierBehavior;
}

void QBehavioredClassifier::setClassifierBehavior(const QBehavior *classifierBehavior)
{
    Q_D(QBehavioredClassifier);
    d->setClassifierBehavior(const_cast<QBehavior *>(classifierBehavior));
}

QT_END_NAMESPACE_QTUML

