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

#include "qcomponentrealization.h"
#include "qcomponentrealization_p.h"
#include "qdependency_p.h"
#include "qelement_p.h"

#include <QtUml/QComponent>
#include <QtUml/QClassifier>

QT_BEGIN_NAMESPACE_QTUML

QComponentRealizationPrivate::QComponentRealizationPrivate() :
    abstraction(0),
    realizingClassifiers(new QSet<QClassifier *>)
{
}

QComponentRealizationPrivate::~QComponentRealizationPrivate()
{
    delete realizingClassifiers;
}

void QComponentRealizationPrivate::setAbstraction(QComponent *abstraction)
{
    // Adjust subsetted property(ies)
    removeSupplier(this->abstraction);

    this->abstraction = abstraction;

    // Adjust subsetted property(ies)
    addSupplier(abstraction);
    setOwner(abstraction);
}

void QComponentRealizationPrivate::addRealizingClassifier(QClassifier *realizingClassifier)
{
    this->realizingClassifiers->insert(realizingClassifier);

    // Adjust subsetted property(ies)
    addClient(realizingClassifier);
}

void QComponentRealizationPrivate::removeRealizingClassifier(QClassifier *realizingClassifier)
{
    this->realizingClassifiers->remove(realizingClassifier);

    // Adjust subsetted property(ies)
    removeClient(realizingClassifier);
}

/*!
    \class QComponentRealization

    \inmodule QtUml

    \brief The realization concept is specialized to (optionally) define the classifiers that realize the contract offered by a component in terms of its provided and required interfaces. The component forms an abstraction from these various classifiers.
 */

QComponentRealization::QComponentRealization(QObject *parent)
    : QRealization(false, parent)
{
    d_umlptr = new QComponentRealizationPrivate;
}

QComponentRealization::QComponentRealization(bool createPimpl, QObject *parent)
    : QRealization(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QComponentRealizationPrivate;
}

QComponentRealization::~QComponentRealization()
{
}

/*!
    The Component that owns this ComponentRealization and which is implemented by its realizing classifiers.
 */
QComponent *QComponentRealization::abstraction() const
{
    QTUML_D(const QComponentRealization);
    return d->abstraction;
}

void QComponentRealization::setAbstraction(QComponent *abstraction)
{
    QTUML_D(QComponentRealization);
    if (d->abstraction != abstraction) {
        d->setAbstraction(abstraction);

        // Adjust opposite property
        abstraction->addRealization(this);
    }
}

/*!
    The classifiers that are involved in the implementation of the Component that owns this Realization.
 */
const QSet<QClassifier *> *QComponentRealization::realizingClassifiers() const
{
    QTUML_D(const QComponentRealization);
    return d->realizingClassifiers;
}

void QComponentRealization::addRealizingClassifier(QClassifier *realizingClassifier)
{
    QTUML_D(QComponentRealization);
    if (!d->realizingClassifiers->contains(realizingClassifier)) {
        d->addRealizingClassifier(realizingClassifier);
    }
}

void QComponentRealization::removeRealizingClassifier(QClassifier *realizingClassifier)
{
    QTUML_D(QComponentRealization);
    if (d->realizingClassifiers->contains(realizingClassifier)) {
        d->removeRealizingClassifier(realizingClassifier);
    }
}

#include "moc_qcomponentrealization.cpp"

QT_END_NAMESPACE_QTUML

