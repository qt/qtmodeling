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

#include "qtag.h"
#include "qtag_p.h"

QT_BEGIN_NAMESPACE_QTMOF

QTagPrivate::QTagPrivate() :
    elements(new QSet<QElement *>),
    tagOwner(0)
{
}

QTagPrivate::~QTagPrivate()
{
    delete elements;
}


QTag::QTag(QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(*new QTagPrivate, parent, wrapper)
{
}

QTag::QTag(QTagPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(dd, parent, wrapper)
{
}

QTag::~QTag()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QTag
// ---------------------------------------------------------------

const QSet<QElement *> *QTag::elements() const
{
    // This is a read-write attribute

    Q_D(const QTag);
    return d->elements;
}

void QTag::addElement(QElement *element)
{
    // This is a read-write attribute

    Q_D(QTag);
    if (!d->elements->contains(element)) {
        d->elements->insert(element);
    }
}

void QTag::removeElement(QElement *element)
{
    // This is a read-write attribute

    Q_D(QTag);
    if (d->elements->contains(element)) {
        d->elements->remove(element);
    }
}

QString QTag::value() const
{
    // This is a read-write attribute

    Q_D(const QTag);
    return d->value;
}

void QTag::setValue(QString value)
{
    // This is a read-write attribute

    Q_D(QTag);
    if (d->value != value) {
        d->value = value;
    }
}

QString QTag::name() const
{
    // This is a read-write attribute

    Q_D(const QTag);
    return d->name;
}

void QTag::setName(QString name)
{
    // This is a read-write attribute

    Q_D(QTag);
    if (d->name != name) {
        d->name = name;
    }
}

QElement *QTag::tagOwner() const
{
    // This is a read-write attribute

    Q_D(const QTag);
    return d->tagOwner;
}

void QTag::setTagOwner(QElement *tagOwner)
{
    // This is a read-write attribute

    Q_D(QTag);
    if (d->tagOwner != tagOwner) {
        d->tagOwner = tagOwner;
    }
}

#include "moc_qtag.cpp"

QT_END_NAMESPACE_QTMOF

