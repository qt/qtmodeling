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
#include "qmofrelationship.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>

QT_BEGIN_NAMESPACE

/*!
    \class QMofRelationship

    \inmodule QtMof

    \brief Relationship is an abstract concept that specifies some kind of relationship between elements.

    \b {QMofRelationship is an abstract class.}
 */

/*!
    Creates a new QMofRelationship.
*/
QMofRelationship::QMofRelationship()
{
}

/*!
    Destroys the QMofRelationship.
 */
QMofRelationship::~QMofRelationship()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofRelationship.
*/
QModelingElement *QMofRelationship::clone() const
{
    QMofRelationship *c = new QMofRelationship;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the elements related by the Relationship.

    \b {This is a read-only derived union property.}
 */
const QSet<QMofElement *> QMofRelationship::relatedElements() const
{
    // This is a read-only derived union association end

    return _relatedElements;
}

/*!
    Adds \a relatedElement to relatedElements.

    \sa relatedElements(), removeRelatedElement()
 */
void QMofRelationship::addRelatedElement(QMofElement *relatedElement)
{
    // This is a read-only derived union association end

    if (!_relatedElements.contains(relatedElement)) {
        _relatedElements.insert(relatedElement);
        if (relatedElement && relatedElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(relatedElement->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRelatedElement(QObject *)));
    }
}

/*!
    Removes \a relatedElement from relatedElements.

    \sa relatedElements(), addRelatedElement()
 */
void QMofRelationship::removeRelatedElement(QMofElement *relatedElement)
{
    // This is a read-only derived union association end

    if (_relatedElements.contains(relatedElement)) {
        _relatedElements.remove(relatedElement);
    }
}

QT_END_NAMESPACE

