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

#include "qumlconsiderignorefragment.h"
#include "qumlconsiderignorefragment_p.h"

#include <QtUml/QUmlNamedElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlConsiderIgnoreFragmentPrivate::QUmlConsiderIgnoreFragmentPrivate()
{
}

QUmlConsiderIgnoreFragmentPrivate::~QUmlConsiderIgnoreFragmentPrivate()
{
}

/*!
    \class QUmlConsiderIgnoreFragment

    \inmodule QtUml

    \brief A consider ignore fragment is a kind of combined fragment that is used for the consider and ignore cases, which require lists of pertinent messages to be specified.
 */

QUmlConsiderIgnoreFragment::QUmlConsiderIgnoreFragment(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlCombinedFragment(*new QUmlConsiderIgnoreFragmentPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlConsiderIgnoreFragment::QUmlConsiderIgnoreFragment(QUmlConsiderIgnoreFragmentPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlCombinedFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlConsiderIgnoreFragment::~QUmlConsiderIgnoreFragment()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlConsiderIgnoreFragment
// ---------------------------------------------------------------

/*!
    The set of messages that apply to this fragment
 */
QSet<QUmlNamedElement *> QUmlConsiderIgnoreFragment::messages() const
{
    // This is a read-write association end

    Q_D(const QUmlConsiderIgnoreFragment);
    return d->messages;
}

void QUmlConsiderIgnoreFragment::addMessage(QUmlNamedElement *message)
{
    // This is a read-write association end

    Q_D(QUmlConsiderIgnoreFragment);
    if (!d->messages.contains(message)) {
        d->messages.insert(message);
    }
}

void QUmlConsiderIgnoreFragment::removeMessage(QUmlNamedElement *message)
{
    // This is a read-write association end

    Q_D(QUmlConsiderIgnoreFragment);
    if (d->messages.contains(message)) {
        d->messages.remove(message);
    }
}

void QUmlConsiderIgnoreFragment::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConsiderIgnoreFragment")][QString::fromLatin1("messages")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConsiderIgnoreFragment")][QString::fromLatin1("messages")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConsiderIgnoreFragment")][QString::fromLatin1("messages")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of messages that apply to this fragment");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConsiderIgnoreFragment")][QString::fromLatin1("messages")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConsiderIgnoreFragment")][QString::fromLatin1("messages")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConsiderIgnoreFragment")][QString::fromLatin1("messages")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlCombinedFragment::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlconsiderignorefragment.cpp"

