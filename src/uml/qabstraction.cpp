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

#include "qabstraction.h"
#include "qabstraction_p.h"

#include <QtUml/QOpaqueExpression>

QT_BEGIN_NAMESPACE_QTUML

QAbstractionPrivate::QAbstractionPrivate() :
    mapping(0)
{
}

QAbstractionPrivate::~QAbstractionPrivate()
{
}

/*!
    \class QAbstraction

    \inmodule QtUml

    \brief An abstraction is a relationship that relates two elements or sets of elements that represent the same concept at different levels of abstraction or from different viewpoints.
 */

QAbstraction::QAbstraction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QDependency(*new QAbstractionPrivate, parent, wrapper)
{
}

QAbstraction::QAbstraction(QAbstractionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QDependency(dd, parent, wrapper)
{
}

QAbstraction::~QAbstraction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QAbstraction
// ---------------------------------------------------------------

/*!
    An composition of an Expression that states the abstraction relationship between the supplier and the client. In some cases, such as Derivation, it is usually formal and unidirectional; in other cases, such as Trace, it is usually informal and bidirectional. The mapping expression is optional and may be omitted if the precise relationship between the elements is not specified.
 */
QOpaqueExpression *QAbstraction::mapping() const
{
    // This is a read-write association end

    Q_D(const QAbstraction);
    return d->mapping;
}

void QAbstraction::setMapping(QOpaqueExpression *mapping)
{
    // This is a read-write association end

    Q_D(QAbstraction);
    if (d->mapping != mapping) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->mapping));

        d->mapping = mapping;

        // Adjust subsetted property(ies)
        if (mapping) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(mapping));
        }
    }
}

void QAbstraction::registerMetaTypes() const
{
    qRegisterMetaType<QOpaqueExpression *>("QOpaqueExpression *");
    qRegisterMetaType<QSet<QOpaqueExpression *>>("QSet<QOpaqueExpression *>");
    qRegisterMetaType<QList<QOpaqueExpression *>>("QList<QOpaqueExpression *>");

    QDependency::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qabstraction.cpp"

QT_END_NAMESPACE_QTUML

