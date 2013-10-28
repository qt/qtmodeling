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
#include "qmofdirectedrelationship.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>

QT_BEGIN_NAMESPACE

/*!
    \class QMofDirectedRelationship

    \inmodule QtMof

    \brief A directed relationship represents a relationship between a collection of source model elements and a collection of target model elements.
 */
QMofDirectedRelationship::QMofDirectedRelationship()
{
}

QModelingElement *QMofDirectedRelationship::clone() const
{
    QMofDirectedRelationship *c = new QMofDirectedRelationship;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the sources of the DirectedRelationship.
 */
const QSet<QMofElement *> QMofDirectedRelationship::sources() const
{
    // This is a read-only derived union association end

    return _sources;
}

void QMofDirectedRelationship::addSource(QMofElement *source)
{
    // This is a read-only derived union association end

    if (!_sources.contains(source)) {
        _sources.insert(source);
        if (source && source->asQModelingObject() && this->asQModelingObject())
            QObject::connect(source->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeSource(QObject *)));

        // Adjust subsetted properties
        addRelatedElement(source);
    }
}

void QMofDirectedRelationship::removeSource(QMofElement *source)
{
    // This is a read-only derived union association end

    if (_sources.contains(source)) {
        _sources.remove(source);

        // Adjust subsetted properties
        removeRelatedElement(source);
    }
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
const QSet<QMofElement *> QMofDirectedRelationship::targets() const
{
    // This is a read-only derived union association end

    return _targets;
}

void QMofDirectedRelationship::addTarget(QMofElement *target)
{
    // This is a read-only derived union association end

    if (!_targets.contains(target)) {
        _targets.insert(target);
        if (target && target->asQModelingObject() && this->asQModelingObject())
            QObject::connect(target->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeTarget(QObject *)));

        // Adjust subsetted properties
        addRelatedElement(target);
    }
}

void QMofDirectedRelationship::removeTarget(QMofElement *target)
{
    // This is a read-only derived union association end

    if (_targets.contains(target)) {
        _targets.remove(target);

        // Adjust subsetted properties
        removeRelatedElement(target);
    }
}

QT_END_NAMESPACE

