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

#include "qdirectedrelationship.h"

#include <QtUml/QElement>

QT_BEGIN_NAMESPACE_QTUML

class QDirectedRelationshipPrivate
{
public:
    explicit QDirectedRelationshipPrivate();
    virtual ~QDirectedRelationshipPrivate();

    QSet<QElement *> *sources;
    QSet<QElement *> *targets;
};

QDirectedRelationshipPrivate::QDirectedRelationshipPrivate() :
    sources(new QSet<QElement *>),
    targets(new QSet<QElement *>)
{
}

QDirectedRelationshipPrivate::~QDirectedRelationshipPrivate()
{
    delete sources;
    delete targets;
}

/*!
    \class QDirectedRelationship

    \inmodule QtUml

    \brief A directed relationship represents a relationship between a collection of source model elements and a collection of target model elements.
 */

QDirectedRelationship::QDirectedRelationship()
    : d_ptr(new QDirectedRelationshipPrivate)
{
}

QDirectedRelationship::~QDirectedRelationship()
{
    delete d_ptr;
}

/*!
    Specifies the sources of the DirectedRelationship.
 */
const QSet<QElement *> *QDirectedRelationship::sources() const
{
    return d_ptr->sources;
}

void QDirectedRelationship::addSource(const QElement *source)
{
    d_ptr->sources->insert(const_cast<QElement *>(source));
    // Adjust subsetted property(ies)
    addRelatedElement(source);
}

void QDirectedRelationship::removeSource(const QElement *source)
{
    d_ptr->sources->remove(const_cast<QElement *>(source));
    // Adjust subsetted property(ies)
    removeRelatedElement(source);
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
const QSet<QElement *> *QDirectedRelationship::targets() const
{
    return d_ptr->targets;
}

void QDirectedRelationship::addTarget(const QElement *target)
{
    d_ptr->targets->insert(const_cast<QElement *>(target));
    // Adjust subsetted property(ies)
    addRelatedElement(target);
}

void QDirectedRelationship::removeTarget(const QElement *target)
{
    d_ptr->targets->remove(const_cast<QElement *>(target));
    // Adjust subsetted property(ies)
    removeRelatedElement(target);
}

QT_END_NAMESPACE_QTUML
