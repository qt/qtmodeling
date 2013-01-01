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

#include "qconsiderignorefragment.h"
#include "qconsiderignorefragment_p.h"

#include <QtUml/QNamedElement>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QConsiderIgnoreFragmentPrivate::QConsiderIgnoreFragmentPrivate()
{
}

QConsiderIgnoreFragmentPrivate::~QConsiderIgnoreFragmentPrivate()
{
}

/*!
    \class QConsiderIgnoreFragment

    \inmodule QtUml

    \brief A consider ignore fragment is a kind of combined fragment that is used for the consider and ignore cases, which require lists of pertinent messages to be specified.
 */

QConsiderIgnoreFragment::QConsiderIgnoreFragment(QWrappedObject *parent, QWrappedObject *wrapper) :
    QCombinedFragment(*new QConsiderIgnoreFragmentPrivate, parent, wrapper)
{
    setPropertyData();
}

QConsiderIgnoreFragment::QConsiderIgnoreFragment(QConsiderIgnoreFragmentPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QCombinedFragment(dd, parent, wrapper)
{
    setPropertyData();
}

QConsiderIgnoreFragment::~QConsiderIgnoreFragment()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QConsiderIgnoreFragment
// ---------------------------------------------------------------

/*!
    The set of messages that apply to this fragment
 */
QSet<QNamedElement *> QConsiderIgnoreFragment::messages() const
{
    // This is a read-write association end

    Q_D(const QConsiderIgnoreFragment);
    return d->messages;
}

void QConsiderIgnoreFragment::addMessage(QNamedElement *message)
{
    // This is a read-write association end

    Q_D(QConsiderIgnoreFragment);
    if (!d->messages.contains(message)) {
        d->messages.insert(message);
    }
}

void QConsiderIgnoreFragment::removeMessage(QNamedElement *message)
{
    // This is a read-write association end

    Q_D(QConsiderIgnoreFragment);
    if (d->messages.contains(message)) {
        d->messages.remove(message);
    }
}

void QConsiderIgnoreFragment::registerMetaTypes() const
{
    qRegisterMetaType<QNamedElement *>("QNamedElement *");
    qRegisterMetaType<QSet<QNamedElement *>>("QSet<QNamedElement *>");
    qRegisterMetaType<QList<QNamedElement *>>("QList<QNamedElement *>");

    QCombinedFragment::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QConsiderIgnoreFragment::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConsiderIgnoreFragment")][QString::fromLatin1("messages")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConsiderIgnoreFragment")][QString::fromLatin1("messages")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConsiderIgnoreFragment")][QString::fromLatin1("messages")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of messages that apply to this fragment");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConsiderIgnoreFragment")][QString::fromLatin1("messages")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConsiderIgnoreFragment")][QString::fromLatin1("messages")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QCombinedFragment::setPropertyData();
}

#include "moc_qconsiderignorefragment.cpp"

QT_END_NAMESPACE_QTUML

