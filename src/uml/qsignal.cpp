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

#include "qsignal.h"
#include "qsignal_p.h"

#include <QtUml/QProperty>

QT_BEGIN_NAMESPACE_QTUML

QSignalPrivate::QSignalPrivate() :
    ownedAttributes(new QList<QProperty *>)
{
}

QSignalPrivate::~QSignalPrivate()
{
    delete ownedAttributes;
}

/*!
    \class QSignal

    \inmodule QtUml

    \brief A signal is a specification of send request instances communicated between objects. The receiving object handles the received request instances as specified by its receptions. The data carried by a send request (which was passed to it by the send invocation occurrence that caused that request) are represented as attributes of the signal. A signal is defined independently of the classifiers handling the signal occurrence.
 */

QSignal::QSignal(QObject *parent) :
    QClassifier(*new QSignalPrivate, parent)
{
}

QSignal::QSignal(QSignalPrivate &dd, QObject *parent) :
    QClassifier(dd, parent)
{
}

QSignal::~QSignal()
{
}

/*!
    The attributes owned by the signal.
 */
const QList<QProperty *> *QSignal::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QSignal);
    return d->ownedAttributes;
}

void QSignal::addOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QSignal);
    if (!d->ownedAttributes->contains(ownedAttribute)) {
        d->ownedAttributes->append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->addOwnedMember(dynamic_cast<QNamedElement *>(ownedAttribute));
        d->QClassifierPrivate::addAttribute(dynamic_cast<QProperty *>(ownedAttribute));
    }
}

void QSignal::removeOwnedAttribute(QProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QSignal);
    if (d->ownedAttributes->contains(ownedAttribute)) {
        d->ownedAttributes->removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        d->QNamespacePrivate::removeOwnedMember(dynamic_cast<QNamedElement *>(ownedAttribute));
        d->QClassifierPrivate::removeAttribute(dynamic_cast<QProperty *>(ownedAttribute));
    }
}

#include "moc_qsignal.cpp"

QT_END_NAMESPACE_QTUML

