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

#include "qsubstitution.h"
#include "qsubstitution_p.h"

#include <QtUml/QClassifier>

QT_BEGIN_NAMESPACE_QTUML

QSubstitutionPrivate::QSubstitutionPrivate() :
    contract(0),
    substitutingClassifier(0)
{
}

QSubstitutionPrivate::~QSubstitutionPrivate()
{
}

/*!
    \class QSubstitution

    \inmodule QtUml

    \brief A substitution is a relationship between two classifiers signifies that the substituting classifier complies with the contract specified by the contract classifier. This implies that instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
 */

QSubstitution::QSubstitution(QObject *parent) :
    QRealization(*new QSubstitutionPrivate, parent)
{
    qRegisterMetaType<QSubstitution *>("QSubstitution *");
    qRegisterMetaType<const QSet<QSubstitution *> *>("const QSet<QSubstitution *> *");
    qRegisterMetaType<const QList<QSubstitution *> *>("const QList<QSubstitution *> *");
}

QSubstitution::QSubstitution(QSubstitutionPrivate &dd, QObject *parent) :
    QRealization(dd, parent)
{
    qRegisterMetaType<QSubstitution *>("QSubstitution *");
    qRegisterMetaType<const QSet<QSubstitution *> *>("const QSet<QSubstitution *> *");
    qRegisterMetaType<const QList<QSubstitution *> *>("const QList<QSubstitution *> *");
}

QSubstitution::~QSubstitution()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QSubstitution
// ---------------------------------------------------------------

/*!
    The contract with which the substituting classifier complies.
 */
QClassifier *QSubstitution::contract() const
{
    // This is a read-write association end

    Q_D(const QSubstitution);
    return d->contract;
}

void QSubstitution::setContract(QClassifier *contract)
{
    // This is a read-write association end

    Q_D(QSubstitution);
    if (d->contract != contract) {
        // Adjust subsetted property(ies)
        (qtuml_object_cast<QDependency *>(this))->removeSupplier(qtuml_object_cast<QNamedElement *>(d->contract));

        d->contract = contract;

        // Adjust subsetted property(ies)
        if (contract) {
            (qtuml_object_cast<QDependency *>(this))->addSupplier(qtuml_object_cast<QNamedElement *>(contract));
        }
    }
}

/*!
    Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
 */
QClassifier *QSubstitution::substitutingClassifier() const
{
    // This is a read-write association end

    Q_D(const QSubstitution);
    return d->substitutingClassifier;
}

void QSubstitution::setSubstitutingClassifier(QClassifier *substitutingClassifier)
{
    // This is a read-write association end

    Q_D(QSubstitution);
    if (d->substitutingClassifier != substitutingClassifier) {
        // Adjust opposite property
        if (d->substitutingClassifier)
            d->substitutingClassifier->removeSubstitution(this);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QDependency *>(this))->removeClient(qtuml_object_cast<QNamedElement *>(d->substitutingClassifier));

        d->substitutingClassifier = substitutingClassifier;

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->setOwner(qtuml_object_cast<QElement *>(substitutingClassifier));
        if (substitutingClassifier) {
            (qtuml_object_cast<QDependency *>(this))->addClient(qtuml_object_cast<QNamedElement *>(substitutingClassifier));
        }

        // Adjust opposite property
        if (substitutingClassifier)
            substitutingClassifier->addSubstitution(this);
    }
}

// Overriden methods for subsetted properties

void QSubstitution::addSupplier(QUmlPointer<QClassifier> contract)
{
    setContract(contract);
}

void QSubstitution::removeSupplier(QUmlPointer<QClassifier> contract)
{
    Q_UNUSED(contract);
    setContract(0);
}

void QSubstitution::addClient(QUmlPointer<QClassifier> substitutingClassifier)
{
    setSubstitutingClassifier(substitutingClassifier);
}

void QSubstitution::removeClient(QUmlPointer<QClassifier> substitutingClassifier)
{
    Q_UNUSED(substitutingClassifier);
    setSubstitutingClassifier(0);
}

#include "moc_qsubstitution.cpp"

QT_END_NAMESPACE_QTUML

