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

#include "qgeneralordering.h"
#include "qgeneralordering_p.h"

#include <QtUml/QOccurrenceSpecification>

QT_BEGIN_NAMESPACE_QTUML

QGeneralOrderingPrivate::QGeneralOrderingPrivate() :
    before(0),
    after(0)
{
}

QGeneralOrderingPrivate::~QGeneralOrderingPrivate()
{
}

/*!
    \class QGeneralOrdering

    \inmodule QtUml

    \brief A general ordering represents a binary relation between two occurrence specifications, to describe that one occurrence specification must occur before the other in a valid trace. This mechanism provides the ability to define partial orders of occurrence cpecifications that may otherwise not have a specified order.
 */

QGeneralOrdering::QGeneralOrdering(QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(*new QGeneralOrderingPrivate, parent, wrapper)
{
}

QGeneralOrdering::QGeneralOrdering(QGeneralOrderingPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(dd, parent, wrapper)
{
}

QGeneralOrdering::~QGeneralOrdering()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QGeneralOrdering
// ---------------------------------------------------------------

/*!
    The OccurrenceSpecification referenced comes before the OccurrenceSpecification referenced by after.
 */
QOccurrenceSpecification *QGeneralOrdering::before() const
{
    // This is a read-write association end

    Q_D(const QGeneralOrdering);
    return d->before;
}

void QGeneralOrdering::setBefore(QOccurrenceSpecification *before)
{
    // This is a read-write association end

    Q_D(QGeneralOrdering);
    if (d->before != before) {
        // Adjust opposite property
        if (d->before)
            d->before->removeToAfter(this);

        d->before = before;

        // Adjust opposite property
        if (before)
            before->addToAfter(this);
    }
}

/*!
    The OccurrenceSpecification referenced comes after the OccurrenceSpecification referenced by before.
 */
QOccurrenceSpecification *QGeneralOrdering::after() const
{
    // This is a read-write association end

    Q_D(const QGeneralOrdering);
    return d->after;
}

void QGeneralOrdering::setAfter(QOccurrenceSpecification *after)
{
    // This is a read-write association end

    Q_D(QGeneralOrdering);
    if (d->after != after) {
        // Adjust opposite property
        if (d->after)
            d->after->removeToBefore(this);

        d->after = after;

        // Adjust opposite property
        if (after)
            after->addToBefore(this);
    }
}

void QGeneralOrdering::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QGeneralOrdering) *>("QT_PREPEND_NAMESPACE_QTUML(QGeneralOrdering) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QGeneralOrdering) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QGeneralOrdering) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QGeneralOrdering) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QGeneralOrdering) *> *");
    qRegisterMetaType<QGeneralOrdering *>("QGeneralOrdering *");
    qRegisterMetaType<const QSet<QGeneralOrdering *> *>("const QSet<QGeneralOrdering *> *");
    qRegisterMetaType<const QList<QGeneralOrdering *> *>("const QList<QGeneralOrdering *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QOccurrenceSpecification) *>("QT_PREPEND_NAMESPACE_QTUML(QOccurrenceSpecification) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QOccurrenceSpecification) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QOccurrenceSpecification) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QOccurrenceSpecification) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QOccurrenceSpecification) *> *");
    qRegisterMetaType<QOccurrenceSpecification *>("QOccurrenceSpecification *");
    qRegisterMetaType<const QSet<QOccurrenceSpecification *> *>("const QSet<QOccurrenceSpecification *> *");
    qRegisterMetaType<const QList<QOccurrenceSpecification *> *>("const QList<QOccurrenceSpecification *> *");

    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qgeneralordering.cpp"

QT_END_NAMESPACE_QTUML

