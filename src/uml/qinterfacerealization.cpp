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
#include "qelement_p.h"
#include "qdependency_p.h"
#include "qdependency_p.h"

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

void QInterfaceRealizationPrivate::setImplementingClassifier(const QBehavioredClassifier *implementingClassifier)
{
    // Adjust subsetted property(ies)
    removeClient(this->implementingClassifier);
    this->implementingClassifier = const_cast<QBehavioredClassifier *>(implementingClassifier);
    // Adjust subsetted property(ies)
    setOwner(implementingClassifier);
    addClient(implementingClassifier);
}

void QInterfaceRealizationPrivate::setContract(const QInterface *contract)
{
    // Adjust subsetted property(ies)
    removeSupplier(this->contract);
    this->contract = const_cast<QInterface *>(contract);
    // Adjust subsetted property(ies)
    addSupplier(contract);
}

/*!
    \class QInterfaceRealization

    \inmodule QtUml

    \brief An interface realization is a specialized realization relationship between a classifier and an interface. This relationship signifies that the realizing classifier conforms to the contract specified by the interface.
 */

QInterfaceRealization::QInterfaceRealization(QObject *parent)
    : QRealization(false, parent)
{
    d_umlptr = new QInterfaceRealizationPrivate;
}

QInterfaceRealization::QInterfaceRealization(bool createPimpl, QObject *parent)
    : QRealization(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QInterfaceRealizationPrivate;
}

QInterfaceRealization::~QInterfaceRealization()
{
}

/*!
    References the BehavioredClassifier that owns this Interfacerealization (i.e., the classifier that realizes the Interface to which it points).
 */
QBehavioredClassifier *QInterfaceRealization::implementingClassifier() const
{
    Q_D(const QInterfaceRealization);
    return d->implementingClassifier;
}

void QInterfaceRealization::setImplementingClassifier(const QBehavioredClassifier *implementingClassifier)
{
    Q_D(QInterfaceRealization);
    d->setImplementingClassifier(const_cast<QBehavioredClassifier *>(implementingClassifier));
}

/*!
    References the Interface specifying the conformance contract.
 */
QInterface *QInterfaceRealization::contract() const
{
    Q_D(const QInterfaceRealization);
    return d->contract;
}

void QInterfaceRealization::setContract(const QInterface *contract)
{
    Q_D(QInterfaceRealization);
    d->setContract(const_cast<QInterface *>(contract));
}

#include "moc_qinterfacerealization.cpp"

QT_END_NAMESPACE_QTUML

