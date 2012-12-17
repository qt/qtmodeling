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

#include "qextent.h"
#include "qextent_p.h"

#include <QtMof/QLink>
#include <QtMof/QAssociation>
#include <QtMof/QClass>
#include <QtMof/QReflectiveSequence>
#include <QtMof/QElement>

QT_BEGIN_NAMESPACE_QTMOF

QExtentPrivate::QExtentPrivate()
{
}

QExtentPrivate::~QExtentPrivate()
{
}


QExtent::QExtent(QWrappedObject *parent, QWrappedObject *wrapper) :
    QMofObject(*new QExtentPrivate, parent, wrapper)
{
}

QExtent::QExtent(QExtentPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QMofObject(dd, parent, wrapper)
{
}

QExtent::~QExtent()
{
}

bool QExtent::useContainment() const
{
    qWarning("QExtent::useContainment: operation to be implemented");

    return bool(); // change here to your derived return
}

QReflectiveSequence *QExtent::elements() const
{
    qWarning("QExtent::elements: operation to be implemented");

    return 0; // change here to your derived return
}

const QSet<QElement *> *QExtent::elementsOfType(const QClass *type, bool includesSubtypes) const
{
    qWarning("QExtent::elementsOfType: operation to be implemented");
    Q_UNUSED(type);
    Q_UNUSED(includesSubtypes);

    return 0; // change here to your derived return
}

const QSet<QLink *> *QExtent::linksOfType(const QAssociation *type) const
{
    qWarning("QExtent::linksOfType: operation to be implemented");
    Q_UNUSED(type);

    return 0; // change here to your derived return
}

const QSet<QElement *> *QExtent::linkedElements(const QAssociation *association, const QElement *endElement, bool end1ToEnd2Direction) const
{
    qWarning("QExtent::linkedElements: operation to be implemented");
    Q_UNUSED(association);
    Q_UNUSED(endElement);
    Q_UNUSED(end1ToEnd2Direction);

    return 0; // change here to your derived return
}

bool QExtent::linkExists(const QAssociation *association, const QElement *firstElement, const QElement *secondElement) const
{
    qWarning("QExtent::linkExists: operation to be implemented");
    Q_UNUSED(association);
    Q_UNUSED(firstElement);
    Q_UNUSED(secondElement);

    return bool(); // change here to your derived return
}

void QExtent::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QExtent) *>("QT_PREPEND_NAMESPACE_QTMOF(QExtent) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QExtent) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QExtent) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QExtent) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QExtent) *> *");
    qRegisterMetaType<QExtent *>("QExtent *");
    qRegisterMetaType<const QSet<QExtent *> *>("const QSet<QExtent *> *");
    qRegisterMetaType<const QList<QExtent *> *>("const QList<QExtent *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QLink) *>("QT_PREPEND_NAMESPACE_QTMOF(QLink) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QLink) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QLink) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QLink) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QLink) *> *");
    qRegisterMetaType<QLink *>("QLink *");
    qRegisterMetaType<const QSet<QLink *> *>("const QSet<QLink *> *");
    qRegisterMetaType<const QList<QLink *> *>("const QList<QLink *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *>("QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *> *");
    qRegisterMetaType<QAssociation *>("QAssociation *");
    qRegisterMetaType<const QSet<QAssociation *> *>("const QSet<QAssociation *> *");
    qRegisterMetaType<const QList<QAssociation *> *>("const QList<QAssociation *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QClass) *>("QT_PREPEND_NAMESPACE_QTMOF(QClass) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *");
    qRegisterMetaType<QClass *>("QClass *");
    qRegisterMetaType<const QSet<QClass *> *>("const QSet<QClass *> *");
    qRegisterMetaType<const QList<QClass *> *>("const QList<QClass *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *>("QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *> *");
    qRegisterMetaType<QReflectiveSequence *>("QReflectiveSequence *");
    qRegisterMetaType<const QSet<QReflectiveSequence *> *>("const QSet<QReflectiveSequence *> *");
    qRegisterMetaType<const QList<QReflectiveSequence *> *>("const QList<QReflectiveSequence *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QElement) *>("QT_PREPEND_NAMESPACE_QTMOF(QElement) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *");
    qRegisterMetaType<QElement *>("QElement *");
    qRegisterMetaType<const QSet<QElement *> *>("const QSet<QElement *> *");
    qRegisterMetaType<const QList<QElement *> *>("const QList<QElement *> *");

    QMofObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qextent.cpp"

QT_END_NAMESPACE_QTMOF

