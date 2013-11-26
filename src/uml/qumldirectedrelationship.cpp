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
#include "qumldirectedrelationship.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlDirectedRelationship

    \inmodule QtUml

    \brief A directed relationship represents a relationship between a collection of source model elements and a collection of target model elements.

    \b {QUmlDirectedRelationship is an abstract class.}
 */

/*!
    Creates a new QUmlDirectedRelationship.
*/
QUmlDirectedRelationship::QUmlDirectedRelationship()
{
}

/*!
    Destroys the QUmlDirectedRelationship.
 */
QUmlDirectedRelationship::~QUmlDirectedRelationship()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlDirectedRelationship.
*/
QModelingElement *QUmlDirectedRelationship::clone() const
{
    QUmlDirectedRelationship *c = new QUmlDirectedRelationship;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the sources of the DirectedRelationship.

    \b {This is a read-only derived union property.}

    \b {Subsetted property(ies):} QUmlRelationship::relatedElements().
 */
const QSet<QUmlElement *> QUmlDirectedRelationship::sources() const
{
    // This is a read-only derived union association end

    return _sources;
}

/*!
    Adds \a source to sources.

    \sa sources(), removeSource()
 */
void QUmlDirectedRelationship::addSource(QUmlElement *source)
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

/*!
    Removes \a source from sources.

    \sa sources(), addSource()
 */
void QUmlDirectedRelationship::removeSource(QUmlElement *source)
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

    \b {This is a read-only derived union property.}

    \b {Subsetted property(ies):} QUmlRelationship::relatedElements().
 */
const QSet<QUmlElement *> QUmlDirectedRelationship::targets() const
{
    // This is a read-only derived union association end

    return _targets;
}

/*!
    Adds \a target to targets.

    \sa targets(), removeTarget()
 */
void QUmlDirectedRelationship::addTarget(QUmlElement *target)
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

/*!
    Removes \a target from targets.

    \sa targets(), addTarget()
 */
void QUmlDirectedRelationship::removeTarget(QUmlElement *target)
{
    // This is a read-only derived union association end

    if (_targets.contains(target)) {
        _targets.remove(target);

        // Adjust subsetted properties
        removeRelatedElement(target);
    }
}

QT_END_NAMESPACE

