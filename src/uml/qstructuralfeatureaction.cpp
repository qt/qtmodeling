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

#include "qstructuralfeatureaction.h"
#include "qstructuralfeatureaction_p.h"

#include <QtUml/QInputPin>
#include <QtUml/QStructuralFeature>

QT_BEGIN_NAMESPACE_QTUML

QStructuralFeatureActionPrivate::QStructuralFeatureActionPrivate() :
    object(0),
    structuralFeature(0)
{
}

QStructuralFeatureActionPrivate::~QStructuralFeatureActionPrivate()
{
}

/*!
    \class QStructuralFeatureAction

    \inmodule QtUml

    \brief StructuralFeatureAction is an abstract class for all structural feature actions.
 */

QStructuralFeatureAction::QStructuralFeatureAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(*new QStructuralFeatureActionPrivate, parent, wrapper)
{
}

QStructuralFeatureAction::QStructuralFeatureAction(QStructuralFeatureActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(dd, parent, wrapper)
{
}

QStructuralFeatureAction::~QStructuralFeatureAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QStructuralFeatureAction
// ---------------------------------------------------------------

/*!
    Gives the input pin from which the object whose structural feature is to be read or written is obtained.
 */
QInputPin *QStructuralFeatureAction::object() const
{
    // This is a read-write association end

    Q_D(const QStructuralFeatureAction);
    return d->object;
}

void QStructuralFeatureAction::setObject(QInputPin *object)
{
    // This is a read-write association end

    Q_D(QStructuralFeatureAction);
    if (d->object != object) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->object));

        d->object = object;

        // Adjust subsetted property(ies)
        if (object) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(object));
        }
    }
}

/*!
    Structural feature to be read.
 */
QStructuralFeature *QStructuralFeatureAction::structuralFeature() const
{
    // This is a read-write association end

    Q_D(const QStructuralFeatureAction);
    return d->structuralFeature;
}

void QStructuralFeatureAction::setStructuralFeature(QStructuralFeature *structuralFeature)
{
    // This is a read-write association end

    Q_D(QStructuralFeatureAction);
    if (d->structuralFeature != structuralFeature) {
        d->structuralFeature = structuralFeature;
    }
}

void QStructuralFeatureAction::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QStructuralFeatureAction) *>("QT_PREPEND_NAMESPACE_QTUML(QStructuralFeatureAction) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QStructuralFeatureAction) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QStructuralFeatureAction) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QStructuralFeatureAction) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QStructuralFeatureAction) *> *");
    qRegisterMetaType<QStructuralFeatureAction *>("QStructuralFeatureAction *");
    qRegisterMetaType<const QSet<QStructuralFeatureAction *> *>("const QSet<QStructuralFeatureAction *> *");
    qRegisterMetaType<const QList<QStructuralFeatureAction *> *>("const QList<QStructuralFeatureAction *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *>("QT_PREPEND_NAMESPACE_QTUML(QInputPin) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *");
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<const QSet<QInputPin *> *>("const QSet<QInputPin *> *");
    qRegisterMetaType<const QList<QInputPin *> *>("const QList<QInputPin *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QStructuralFeature) *>("QT_PREPEND_NAMESPACE_QTUML(QStructuralFeature) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QStructuralFeature) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QStructuralFeature) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QStructuralFeature) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QStructuralFeature) *> *");
    qRegisterMetaType<QStructuralFeature *>("QStructuralFeature *");
    qRegisterMetaType<const QSet<QStructuralFeature *> *>("const QSet<QStructuralFeature *> *");
    qRegisterMetaType<const QList<QStructuralFeature *> *>("const QList<QStructuralFeature *> *");

    QAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qstructuralfeatureaction.cpp"

QT_END_NAMESPACE_QTUML

