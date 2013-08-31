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
#include "qumlgeneralization.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralizationSet>

QT_BEGIN_NAMESPACE

/*!
    \class UmlGeneralization

    \inmodule QtUml

    \brief A generalization is a taxonomic relationship between a more general classifier and a more specific classifier. Each instance of the specific classifier is also an indirect instance of the general classifier. Thus, the specific classifier inherits the features of the more general classifier.A generalization relates a specific classifier to a more general classifier, and is owned by the specific classifier.
 */

QUmlGeneralization::QUmlGeneralization(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlGeneralization::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlGeneralization::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlGeneralization::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [Relationship]

/*!
    Specifies the elements related by the Relationship.
 */
const QSet<QUmlElement *> QUmlGeneralization::relatedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_relatedElement));
}

// OWNED ATTRIBUTES [DirectedRelationship]

/*!
    Specifies the sources of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlGeneralization::source() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_source));
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlGeneralization::target() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_target));
}

// OWNED ATTRIBUTES [Generalization]

/*!
    References the general classifier in the Generalization relationship.
 */
QUmlClassifier *QUmlGeneralization::general() const
{
    return reinterpret_cast<QUmlClassifier *>(_general);
}

/*!
    Designates a set in which instances of Generalization is considered members.
 */
const QSet<QUmlGeneralizationSet *> QUmlGeneralization::generalizationSet() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralizationSet *> *>(&_generalizationSet));
}

/*!
    Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier.
 */
bool QUmlGeneralization::isSubstitutable() const
{
    return _isSubstitutable;
}

/*!
    References the specializing classifier in the Generalization relationship.
 */
QUmlClassifier *QUmlGeneralization::specific() const
{
    return reinterpret_cast<QUmlClassifier *>(_specific);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlGeneralization::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlGeneralization::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlGeneralization::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlGeneralization::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

// SLOTS FOR OWNED ATTRIBUTES [Generalization]

void QUmlGeneralization::setGeneral(QUmlClassifier *general)
{
    UmlGeneralization::setGeneral(general);
}

void QUmlGeneralization::addGeneralizationSet(UmlGeneralizationSet *generalizationSet)
{
    UmlGeneralization::addGeneralizationSet(generalizationSet);
}

void QUmlGeneralization::removeGeneralizationSet(UmlGeneralizationSet *generalizationSet)
{
    UmlGeneralization::removeGeneralizationSet(generalizationSet);
}

void QUmlGeneralization::setSubstitutable(bool isSubstitutable)
{
    UmlGeneralization::setSubstitutable(isSubstitutable);
}

void QUmlGeneralization::setSpecific(QUmlClassifier *specific)
{
    UmlGeneralization::setSpecific(specific);
}

QT_END_NAMESPACE

