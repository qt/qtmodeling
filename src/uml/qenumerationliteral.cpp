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

#include "qenumerationliteral.h"
#include "qenumerationliteral_p.h"

#include <QtUml/QEnumeration>

QT_BEGIN_NAMESPACE_QTUML

QEnumerationLiteralPrivate::QEnumerationLiteralPrivate() :
    enumeration(0)
{
}

QEnumerationLiteralPrivate::~QEnumerationLiteralPrivate()
{
}

/*!
    \class QEnumerationLiteral

    \inmodule QtUml

    \brief An enumeration literal is a user-defined data value for an enumeration.
 */

QEnumerationLiteral::QEnumerationLiteral(QWrappedObject *parent, QWrappedObject *wrapper) :
    QInstanceSpecification(*new QEnumerationLiteralPrivate, parent, wrapper)
{
}

QEnumerationLiteral::QEnumerationLiteral(QEnumerationLiteralPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QInstanceSpecification(dd, parent, wrapper)
{
}

QEnumerationLiteral::~QEnumerationLiteral()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QEnumerationLiteral
// ---------------------------------------------------------------

/*!
    The classifier of this EnumerationLiteral derived to be equal to its enumeration.
 */
QEnumeration *QEnumerationLiteral::classifier() const
{
    // This is a read-only derived association end

    qWarning("QEnumerationLiteral::classifier: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The Enumeration that this EnumerationLiteral is a member of.
 */
QEnumeration *QEnumerationLiteral::enumeration() const
{
    // This is a read-write association end

    Q_D(const QEnumerationLiteral);
    return d->enumeration;
}

void QEnumerationLiteral::setEnumeration(QEnumeration *enumeration)
{
    // This is a read-write association end

    Q_D(QEnumerationLiteral);
    if (d->enumeration != enumeration) {
        // Adjust opposite property
        if (d->enumeration)
            d->enumeration->removeOwnedLiteral(this);

        d->enumeration = enumeration;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(enumeration));

        // Adjust opposite property
        if (enumeration)
            enumeration->addOwnedLiteral(this);
    }
}

void QEnumerationLiteral::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QEnumerationLiteral) *>("QT_PREPEND_NAMESPACE_QTUML(QEnumerationLiteral) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QEnumerationLiteral) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QEnumerationLiteral) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QEnumerationLiteral) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QEnumerationLiteral) *> *");
    qRegisterMetaType<QEnumerationLiteral *>("QEnumerationLiteral *");
    qRegisterMetaType<const QSet<QEnumerationLiteral *> *>("const QSet<QEnumerationLiteral *> *");
    qRegisterMetaType<const QList<QEnumerationLiteral *> *>("const QList<QEnumerationLiteral *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QEnumeration) *>("QT_PREPEND_NAMESPACE_QTUML(QEnumeration) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QEnumeration) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QEnumeration) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QEnumeration) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QEnumeration) *> *");
    qRegisterMetaType<QEnumeration *>("QEnumeration *");
    qRegisterMetaType<const QSet<QEnumeration *> *>("const QSet<QEnumeration *> *");
    qRegisterMetaType<const QList<QEnumeration *> *>("const QList<QEnumeration *> *");

    QInstanceSpecification::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qenumerationliteral.cpp"

QT_END_NAMESPACE_QTUML

