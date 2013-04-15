/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofreflectivesequence.h"
#include "qmofreflectivesequence_p.h"

#include <QtMof/QMofObject>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofReflectiveSequencePrivate::QMofReflectiveSequencePrivate()
{
}

QMofReflectiveSequencePrivate::~QMofReflectiveSequencePrivate()
{
}


QMofReflectiveSequence::QMofReflectiveSequence(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofReflectiveCollection(*new QMofReflectiveSequencePrivate, wrapper, parent)
{
    setPropertyData();
}

QMofReflectiveSequence::QMofReflectiveSequence(QMofReflectiveSequencePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofReflectiveCollection(dd, wrapper, parent)
{
    setPropertyData();
}

QMofReflectiveSequence::~QMofReflectiveSequence()
{
}

void QMofReflectiveSequence::add(qint32 index, const QMofObject *object)
{
    qWarning("QMofReflectiveSequence::add: operation to be implemented");
    Q_UNUSED(index);
    Q_UNUSED(object);
}

QMofObject *QMofReflectiveSequence::get(qint32 index) const
{
    qWarning("QMofReflectiveSequence::get: operation to be implemented");
    Q_UNUSED(index);

    return 0; // change here to your derived return
}

QMofObject *QMofReflectiveSequence::remove(qint32 index)
{
    qWarning("QMofReflectiveSequence::remove: operation to be implemented");
    Q_UNUSED(index);

    return 0; // change here to your derived return
}

QMofObject *QMofReflectiveSequence::set(qint32 index, const QMofObject *object)
{
    qWarning("QMofReflectiveSequence::set: operation to be implemented");
    Q_UNUSED(index);
    Q_UNUSED(object);

    return 0; // change here to your derived return
}

void QMofReflectiveSequence::setPropertyData()
{
    QMofReflectiveCollection::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofreflectivesequence.cpp"

