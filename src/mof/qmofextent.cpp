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

#include "qmofextent.h"
#include "qmofextent_p.h"

#include <QtMof/QMofLink>
#include <QtMof/QMofAssociation>
#include <QtMof/QMofClass>
#include <QtMof/QMofReflectiveSequence>
#include <QtMof/QMofElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofExtentPrivate::QMofExtentPrivate()
{
}

QMofExtentPrivate::~QMofExtentPrivate()
{
}


QMofExtent::QMofExtent(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(*new QMofExtentPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofExtent::QMofExtent(QMofExtentPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(dd, wrapper, parent)
{
    setPropertyData();
}

QMofExtent::~QMofExtent()
{
}

bool QMofExtent::useContainment() const
{
    qWarning("QMofExtent::useContainment: operation to be implemented");

    return bool(); // change here to your derived return
}

QMofReflectiveSequence *QMofExtent::elements() const
{
    qWarning("QMofExtent::elements: operation to be implemented");

    return 0; // change here to your derived return
}

QSet<QMofElement *> QMofExtent::elementsOfType(const QMofClass *type, bool includesSubtypes) const
{
    qWarning("QMofExtent::elementsOfType: operation to be implemented");
    Q_UNUSED(type);
    Q_UNUSED(includesSubtypes);

    return QSet<QMofElement *>(); // change here to your derived return
}

QSet<QMofLink *> QMofExtent::linksOfType(const QMofAssociation *type) const
{
    qWarning("QMofExtent::linksOfType: operation to be implemented");
    Q_UNUSED(type);

    return QSet<QMofLink *>(); // change here to your derived return
}

QSet<QMofElement *> QMofExtent::linkedElements(const QMofAssociation *association, const QMofElement *endElement, bool end1ToEnd2Direction) const
{
    qWarning("QMofExtent::linkedElements: operation to be implemented");
    Q_UNUSED(association);
    Q_UNUSED(endElement);
    Q_UNUSED(end1ToEnd2Direction);

    return QSet<QMofElement *>(); // change here to your derived return
}

bool QMofExtent::linkExists(const QMofAssociation *association, const QMofElement *firstElement, const QMofElement *secondElement) const
{
    qWarning("QMofExtent::linkExists: operation to be implemented");
    Q_UNUSED(association);
    Q_UNUSED(firstElement);
    Q_UNUSED(secondElement);

    return bool(); // change here to your derived return
}

void QMofExtent::setPropertyData()
{
    QMofObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofextent.cpp"

