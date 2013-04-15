/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlcontinuation.h"
#include "qumlcontinuation_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlContinuationPrivate::QUmlContinuationPrivate() :
    setting(true)
{
}

QUmlContinuationPrivate::~QUmlContinuationPrivate()
{
}

/*!
    \class QUmlContinuation

    \inmodule QtUml

    \brief A continuation is a syntactic way to define continuations of different branches of an alternative combined fragment. Continuations is intuitively similar to labels representing intermediate points in a flow of control.
 */

QUmlContinuation::QUmlContinuation(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(*new QUmlContinuationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlContinuation::QUmlContinuation(QUmlContinuationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlContinuation::~QUmlContinuation()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlContinuation
// ---------------------------------------------------------------

/*!
    True: when the Continuation is at the end of the enclosing InteractionFragment and False when it is in the beginning.
 */
bool QUmlContinuation::setting() const
{
    // This is a read-write attribute

    Q_D(const QUmlContinuation);
    return d->setting;
}

void QUmlContinuation::setSetting(bool setting)
{
    // This is a read-write attribute

    Q_D(QUmlContinuation);
    if (d->setting != setting) {
        d->setting = setting;
    }
    d->modifiedResettableProperties << QString::fromLatin1("setting");
}

void QUmlContinuation::unsetSetting()
{
    setSetting(true);
    Q_D(QUmlContinuation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("setting"));
}

void QUmlContinuation::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("True: when the Continuation is at the end of the enclosing InteractionFragment and False when it is in the beginning.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlContinuation")][QString::fromLatin1("setting")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlInteractionFragment::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlcontinuation.cpp"

