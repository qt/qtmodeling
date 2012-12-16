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

/*!
    \class QComponentRealization

    \inmodule QtUml

    \brief The realization concept is specialized to (optionally) define the classifiers that realize the contract offered by a component in terms of its provided and required interfaces. The component forms an abstraction from these various classifiers.
 */

QComponentRealization::QComponentRealization(QWrappedObject *parent, QWrappedObject *wrapper) :
    QRealization(*new QComponentRealizationPrivate, parent, wrapper)
{
}

QComponentRealization::QComponentRealization(QComponentRealizationPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QRealization(dd, parent, wrapper)
{
}

QComponentRealization::~QComponentRealization()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QComponentRealization
// ---------------------------------------------------------------

/*!
    The Component that owns this ComponentRealization and which is implemented by its realizing classifiers.
 */
QComponent *QComponentRealization::abstraction() const
{
    // This is a read-write association end

    Q_D(const QComponentRealization);
    return d->abstraction;
}

void QComponentRealization::setAbstraction(QComponent *abstraction)
{
    // This is a read-write association end

    Q_D(QComponentRealization);
    if (d->abstraction != abstraction) {
        // Adjust opposite property
        if (d->abstraction)
            d->abstraction->removeRealization(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDependency *>(this))->removeSupplier(qwrappedobject_cast<QNamedElement *>(d->abstraction));

        d->abstraction = abstraction;

        // Adjust subsetted property(ies)
        if (abstraction) {
            (qwrappedobject_cast<QDependency *>(this))->addSupplier(qwrappedobject_cast<QNamedElement *>(abstraction));
        }
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(abstraction));

        // Adjust opposite property
        if (abstraction)
            abstraction->addRealization(this);
    }
}

/*!
    The classifiers that are involved in the implementation of the Component that owns this Realization.
 */
const QSet<QClassifier *> *QComponentRealization::realizingClassifiers() const
{
    // This is a read-write association end

    Q_D(const QComponentRealization);
    return d->realizingClassifiers;
}

void QComponentRealization::addRealizingClassifier(QClassifier *realizingClassifier)
{
    // This is a read-write association end

    Q_D(QComponentRealization);
    if (!d->realizingClassifiers->contains(realizingClassifier)) {
        d->realizingClassifiers->insert(realizingClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDependency *>(this))->addClient(qwrappedobject_cast<QNamedElement *>(realizingClassifier));
    }
}

void QComponentRealization::removeRealizingClassifier(QClassifier *realizingClassifier)
{
    // This is a read-write association end

    Q_D(QComponentRealization);
    if (d->realizingClassifiers->contains(realizingClassifier)) {
        d->realizingClassifiers->remove(realizingClassifier);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDependency *>(this))->removeClient(qwrappedobject_cast<QNamedElement *>(realizingClassifier));
    }
}

void QComponentRealization::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QComponentRealization) *>("QT_PREPEND_NAMESPACE_QTUML(QComponentRealization) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QComponentRealization) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QComponentRealization) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QComponentRealization) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QComponentRealization) *> *");
    qRegisterMetaType<QComponentRealization *>("QComponentRealization *");
    qRegisterMetaType<const QSet<QComponentRealization *> *>("const QSet<QComponentRealization *> *");
    qRegisterMetaType<const QList<QComponentRealization *> *>("const QList<QComponentRealization *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QComponent) *>("QT_PREPEND_NAMESPACE_QTUML(QComponent) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QComponent) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QComponent) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QComponent) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QComponent) *> *");
    qRegisterMetaType<QComponent *>("QComponent *");
    qRegisterMetaType<const QSet<QComponent *> *>("const QSet<QComponent *> *");
    qRegisterMetaType<const QList<QComponent *> *>("const QList<QComponent *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *>("QT_PREPEND_NAMESPACE_QTUML(QClassifier) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *");
    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<const QSet<QClassifier *> *>("const QSet<QClassifier *> *");
    qRegisterMetaType<const QList<QClassifier *> *>("const QList<QClassifier *> *");


    QRealization::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

// Overriden methods for subsetted properties

void QComponentRealization::addSupplier(QWrappedObjectPointer<QComponent> abstraction)
{
    setAbstraction(abstraction);
}

void QComponentRealization::removeSupplier(QWrappedObjectPointer<QComponent> abstraction)
{
    Q_UNUSED(abstraction);
    setAbstraction(0);
}

void QComponentRealization::addClient(QWrappedObjectPointer<QClassifier> realizingClassifier)
{
    addRealizingClassifier(realizingClassifier);
}

void QComponentRealization::removeClient(QWrappedObjectPointer<QClassifier> realizingClassifier)
{
    removeRealizingClassifier(realizingClassifier);
}

#include "moc_qcomponentrealization.cpp"

QT_END_NAMESPACE_QTUML

