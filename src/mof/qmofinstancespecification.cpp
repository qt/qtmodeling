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
#include "qmofinstancespecification.h"

#include "private/qmofinstancespecificationobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofSlot>
#include <QtMof/QMofValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QMofInstanceSpecification

    \inmodule QtMof

    \brief An instance specification is a model element that represents an instance in a modeled system.
 */

/*!
    Creates a new QMofInstanceSpecification. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QMofInstanceSpecification::QMofInstanceSpecification(bool createQModelingObject) :
    _specification(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofInstanceSpecificationObject(this));
}

/*!
    Returns a deep-copied clone of the QMofInstanceSpecification.
*/
QModelingElement *QMofInstanceSpecification::clone() const
{
    QMofInstanceSpecification *c = new QMofInstanceSpecification;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    foreach (QMofClassifier *element, classifiers())
        c->addClassifier(dynamic_cast<QMofClassifier *>(element->clone()));
    foreach (QMofSlot *element, slots_())
        c->addSlot(dynamic_cast<QMofSlot *>(element->clone()));
    if (specification())
        c->setSpecification(dynamic_cast<QMofValueSpecification *>(specification()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them.

    \sa addClassifier(), removeClassifier()
 */
const QSet<QMofClassifier *> QMofInstanceSpecification::classifiers() const
{
    // This is a read-write association end

    return _classifiers;
}

/*!
    Adds \a classifier to classifiers.

    \sa classifiers(), removeClassifier()
 */
void QMofInstanceSpecification::addClassifier(QMofClassifier *classifier)
{
    // This is a read-write association end

    if (!_classifiers.contains(classifier)) {
        _classifiers.insert(classifier);
        if (classifier && classifier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(classifier->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeClassifier(QObject *)));
    }
}

/*!
    Removes \a classifier from classifiers.

    \sa classifiers(), addClassifier()
 */
void QMofInstanceSpecification::removeClassifier(QMofClassifier *classifier)
{
    // This is a read-write association end

    if (_classifiers.contains(classifier)) {
        _classifiers.remove(classifier);
    }
}

/*!
    A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.

    \sa addSlot(), removeSlot()

    \b {Subsetted property(ies):} QMofElement::ownedElements().

    \b {Opposite property(ies):} QMofSlot::owningInstance().
 */
const QSet<QMofSlot *> QMofInstanceSpecification::slots_() const
{
    // This is a read-write association end

    return _slots_;
}

/*!
    Adds \a slot_ to slots_.

    \sa slots_(), removeSlot()
 */
void QMofInstanceSpecification::addSlot(QMofSlot *slot_)
{
    // This is a read-write association end

    if (!_slots_.contains(slot_)) {
        _slots_.insert(slot_);
        if (slot_ && slot_->asQModelingObject() && this->asQModelingObject())
            QObject::connect(slot_->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeSlot(QObject *)));
        slot_->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(slot_);

        // Adjust opposite properties
        if (slot_) {
            slot_->setOwningInstance(this);
        }
    }
}

/*!
    Removes \a slot_ from slots_.

    \sa slots_(), addSlot()
 */
void QMofInstanceSpecification::removeSlot(QMofSlot *slot_)
{
    // This is a read-write association end

    if (_slots_.contains(slot_)) {
        _slots_.remove(slot_);
        if (slot_->asQModelingObject())
            slot_->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(slot_);

        // Adjust opposite properties
        if (slot_) {
            slot_->setOwningInstance(0);
        }
    }
}

/*!
    A specification of how to compute, derive, or construct the instance.

    \b {Subsetted property(ies):} QMofElement::ownedElements().
 */
QMofValueSpecification *QMofInstanceSpecification::specification() const
{
    // This is a read-write association end

    return _specification;
}

/*!
    Adjusts specification to \a specification.
 */
void QMofInstanceSpecification::setSpecification(QMofValueSpecification *specification)
{
    // This is a read-write association end

    if (_specification != specification) {
        // Adjust subsetted properties
        removeOwnedElement(_specification);

        _specification = specification;
        if (specification && specification->asQModelingObject() && this->asQModelingObject())
            QObject::connect(specification->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSpecification()));
        specification->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (specification) {
            addOwnedElement(specification);
        }
    }
}

QT_END_NAMESPACE

