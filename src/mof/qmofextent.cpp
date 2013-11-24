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
#include "qmofextent.h"

#include "private/qmofextentobject_p.h"

#include <QtMof/QMofAssociation>
#include <QtMof/QMofClass>
#include <QtMof/QMofElement>
#include <QtMof/QMofLink>
#include <QtMof/QMofReflectiveSequence>

QT_BEGIN_NAMESPACE

QMofExtent::QMofExtent(bool createQModelingObject) :
    QMofObject(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofExtentObject(this));
}

QModelingElement *QMofExtent::clone() const
{
    QMofExtent *c = new QMofExtent;
    return c;
}

// OPERATIONS

bool QMofExtent::useContainment() const
{
    qWarning("QMofExtent::useContainment(): to be implemented (operation)");

    return bool ();
}

QMofReflectiveSequence *QMofExtent::elements() const
{
    qWarning("QMofExtent::elements(): to be implemented (operation)");

    return 0;
}

QSet<QMofElement *> QMofExtent::elementsOfType(QMofClass *type, bool includesSubtypes) const
{
    qWarning("QMofExtent::elementsOfType(): to be implemented (operation)");

    Q_UNUSED(type);
    Q_UNUSED(includesSubtypes);
    return QSet<QMofElement *> ();
}

QSet<QMofLink *> QMofExtent::linksOfType(QMofAssociation *type) const
{
    qWarning("QMofExtent::linksOfType(): to be implemented (operation)");

    Q_UNUSED(type);
    return QSet<QMofLink *> ();
}

QSet<QMofElement *> QMofExtent::linkedElements(QMofAssociation *association, QMofElement *endElement, bool end1ToEnd2Direction) const
{
    qWarning("QMofExtent::linkedElements(): to be implemented (operation)");

    Q_UNUSED(association);
    Q_UNUSED(endElement);
    Q_UNUSED(end1ToEnd2Direction);
    return QSet<QMofElement *> ();
}

bool QMofExtent::linkExists(QMofAssociation *association, QMofElement *firstElement, QMofElement *secondElement) const
{
    qWarning("QMofExtent::linkExists(): to be implemented (operation)");

    Q_UNUSED(association);
    Q_UNUSED(firstElement);
    Q_UNUSED(secondElement);
    return bool ();
}

QT_END_NAMESPACE

