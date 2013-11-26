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
#include "qumloccurrencespecification.h"

#include "private/qumloccurrencespecificationobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlOccurrenceSpecification

    \inmodule QtUml

    \brief An occurrence specification is the basic semantic unit of interactions. The sequences of occurrences specified by them are the meanings of interactions.
 */

/*!
    Creates a new QUmlOccurrenceSpecification. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlOccurrenceSpecification::QUmlOccurrenceSpecification(bool createQModelingObject) :
    _covered(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlOccurrenceSpecificationObject(this));
}

/*!
    Destroys the QUmlOccurrenceSpecification.
 */
QUmlOccurrenceSpecification::~QUmlOccurrenceSpecification()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlOccurrenceSpecification.
*/
QModelingElement *QUmlOccurrenceSpecification::clone() const
{
    QUmlOccurrenceSpecification *c = new QUmlOccurrenceSpecification;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlGeneralOrdering *element, generalOrderings())
        c->addGeneralOrdering(dynamic_cast<QUmlGeneralOrdering *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Lifeline on which the OccurrenceSpecification appears.

    \b {Redefined property(ies):} QUmlInteractionFragment::covered().
 */
QUmlLifeline *QUmlOccurrenceSpecification::covered() const
{
    // This is a read-write association end

    return _covered;
}

/*!
    Adjusts covered to \a covered.
 */
void QUmlOccurrenceSpecification::setCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    if (_covered != covered) {
        // Adjust redefined properties        QUmlInteractionFragment::removeCovered(_covered);

        _covered = covered;
        if (covered && covered->asQModelingObject() && this->asQModelingObject())
            QObject::connect(covered->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setCovered()));

        // Adjust redefined properties
        if (covered) {
            QUmlInteractionFragment::addCovered(covered);
        }
    }
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification

    \sa addToAfter(), removeToAfter()

    \b {Opposite property(ies):} QUmlGeneralOrdering::before().
 */
const QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toAfters() const
{
    // This is a read-write association end

    return _toAfters;
}

/*!
    Adds \a toAfter to toAfters.

    \sa toAfters(), removeToAfter()
 */
void QUmlOccurrenceSpecification::addToAfter(QUmlGeneralOrdering *toAfter)
{
    // This is a read-write association end

    if (!_toAfters.contains(toAfter)) {
        _toAfters.insert(toAfter);
        if (toAfter && toAfter->asQModelingObject() && this->asQModelingObject())
            QObject::connect(toAfter->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeToAfter(QObject *)));

        // Adjust opposite properties
        if (toAfter) {
            toAfter->setBefore(this);
        }
    }
}

/*!
    Removes \a toAfter from toAfters.

    \sa toAfters(), addToAfter()
 */
void QUmlOccurrenceSpecification::removeToAfter(QUmlGeneralOrdering *toAfter)
{
    // This is a read-write association end

    if (_toAfters.contains(toAfter)) {
        _toAfters.remove(toAfter);

        // Adjust opposite properties
        if (toAfter) {
            toAfter->setBefore(0);
        }
    }
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification

    \sa addToBefore(), removeToBefore()

    \b {Opposite property(ies):} QUmlGeneralOrdering::after().
 */
const QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toBefores() const
{
    // This is a read-write association end

    return _toBefores;
}

/*!
    Adds \a toBefore to toBefores.

    \sa toBefores(), removeToBefore()
 */
void QUmlOccurrenceSpecification::addToBefore(QUmlGeneralOrdering *toBefore)
{
    // This is a read-write association end

    if (!_toBefores.contains(toBefore)) {
        _toBefores.insert(toBefore);
        if (toBefore && toBefore->asQModelingObject() && this->asQModelingObject())
            QObject::connect(toBefore->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeToBefore(QObject *)));

        // Adjust opposite properties
        if (toBefore) {
            toBefore->setAfter(this);
        }
    }
}

/*!
    Removes \a toBefore from toBefores.

    \sa toBefores(), addToBefore()
 */
void QUmlOccurrenceSpecification::removeToBefore(QUmlGeneralOrdering *toBefore)
{
    // This is a read-write association end

    if (_toBefores.contains(toBefore)) {
        _toBefores.remove(toBefore);

        // Adjust opposite properties
        if (toBefore) {
            toBefore->setAfter(0);
        }
    }
}

QT_END_NAMESPACE

