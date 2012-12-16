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

#include "qcommunicationpath.h"
#include "qcommunicationpath_p.h"

QT_BEGIN_NAMESPACE_QTUML

QCommunicationPathPrivate::QCommunicationPathPrivate()
{
}

QCommunicationPathPrivate::~QCommunicationPathPrivate()
{
}

/*!
    \class QCommunicationPath

    \inmodule QtUml

    \brief A communication path is an association between two deployment targets, through which they are able to exchange signals and messages.
 */

QCommunicationPath::QCommunicationPath(QWrappedObject *parent, QWrappedObject *wrapper) :
    QAssociation(*new QCommunicationPathPrivate, parent, wrapper)
{
}

QCommunicationPath::QCommunicationPath(QCommunicationPathPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QAssociation(dd, parent, wrapper)
{
}

QCommunicationPath::~QCommunicationPath()
{
}

void QCommunicationPath::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QCommunicationPath) *>("QT_PREPEND_NAMESPACE_QTUML(QCommunicationPath) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QCommunicationPath) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QCommunicationPath) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QCommunicationPath) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QCommunicationPath) *> *");
    qRegisterMetaType<QCommunicationPath *>("QCommunicationPath *");
    qRegisterMetaType<const QSet<QCommunicationPath *> *>("const QSet<QCommunicationPath *> *");
    qRegisterMetaType<const QList<QCommunicationPath *> *>("const QList<QCommunicationPath *> *");


    QAssociation::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qcommunicationpath.cpp"

QT_END_NAMESPACE_QTUML

