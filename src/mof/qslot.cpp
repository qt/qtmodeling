/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qslot.h"
#include "qslot_p.h"

#include <QtMof/QStructuralFeature>
#include <QtMof/QInstanceSpecification>
#include <QtMof/QValueSpecification>

QT_BEGIN_NAMESPACE_QTMOF

QSlotPrivate::QSlotPrivate() :
    values(new QList<QValueSpecification *>),
    definingFeature(0),
    owningInstance(0)
{
}

QSlotPrivate::~QSlotPrivate()
{
    delete values;
}

/*!
    \class QSlot

    \inmodule QtMof

    \brief A slot specifies that an entity modeled by an instance specification has a value or values for a specific structural feature.
 */

QSlot::QSlot(QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(*new QSlotPrivate, parent, wrapper)
{
}

QSlot::QSlot(QSlotPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(dd, parent, wrapper)
{
}

QSlot::~QSlot()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QSlot
// ---------------------------------------------------------------

/*!
    The value or values corresponding to the defining feature for the owning instance specification.
 */
const QList<QValueSpecification *> *QSlot::values() const
{
    // This is a read-write association end

    Q_D(const QSlot);
    return d->values;
}

void QSlot::addValue(QValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QSlot);
    if (!d->values->contains(value)) {
        d->values->append(value);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(value));
    }
}

void QSlot::removeValue(QValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QSlot);
    if (d->values->contains(value)) {
        d->values->removeAll(value);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(value));
    }
}

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QStructuralFeature *QSlot::definingFeature() const
{
    // This is a read-write association end

    Q_D(const QSlot);
    return d->definingFeature;
}

void QSlot::setDefiningFeature(QStructuralFeature *definingFeature)
{
    // This is a read-write association end

    Q_D(QSlot);
    if (d->definingFeature != definingFeature) {
        d->definingFeature = definingFeature;
    }
}

/*!
    The instance specification that owns this slot.
 */
QInstanceSpecification *QSlot::owningInstance() const
{
    // This is a read-write association end

    Q_D(const QSlot);
    return d->owningInstance;
}

void QSlot::setOwningInstance(QInstanceSpecification *owningInstance)
{
    // This is a read-write association end

    Q_D(QSlot);
    if (d->owningInstance != owningInstance) {
        // Adjust opposite property
        if (d->owningInstance)
            d->owningInstance->removeSlot_(this);

        d->owningInstance = owningInstance;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(owningInstance));

        // Adjust opposite property
        if (owningInstance)
            owningInstance->addSlot_(this);
    }
}

void QSlot::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QSlot) *>("QT_PREPEND_NAMESPACE_QTMOF(QSlot) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QSlot) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QSlot) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QSlot) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QSlot) *> *");
    qRegisterMetaType<QSlot *>("QSlot *");
    qRegisterMetaType<const QSet<QSlot *> *>("const QSet<QSlot *> *");
    qRegisterMetaType<const QList<QSlot *> *>("const QList<QSlot *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QStructuralFeature) *>("QT_PREPEND_NAMESPACE_QTMOF(QStructuralFeature) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QStructuralFeature) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QStructuralFeature) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QStructuralFeature) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QStructuralFeature) *> *");
    qRegisterMetaType<QStructuralFeature *>("QStructuralFeature *");
    qRegisterMetaType<const QSet<QStructuralFeature *> *>("const QSet<QStructuralFeature *> *");
    qRegisterMetaType<const QList<QStructuralFeature *> *>("const QList<QStructuralFeature *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QInstanceSpecification) *>("QT_PREPEND_NAMESPACE_QTMOF(QInstanceSpecification) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QInstanceSpecification) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QInstanceSpecification) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QInstanceSpecification) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QInstanceSpecification) *> *");
    qRegisterMetaType<QInstanceSpecification *>("QInstanceSpecification *");
    qRegisterMetaType<const QSet<QInstanceSpecification *> *>("const QSet<QInstanceSpecification *> *");
    qRegisterMetaType<const QList<QInstanceSpecification *> *>("const QList<QInstanceSpecification *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *>("QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *> *");
    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
    qRegisterMetaType<const QSet<QValueSpecification *> *>("const QSet<QValueSpecification *> *");
    qRegisterMetaType<const QList<QValueSpecification *> *>("const QList<QValueSpecification *> *");

    QElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qslot.cpp"

QT_END_NAMESPACE_QTMOF

