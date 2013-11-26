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
#include "qumldestroyobjectaction.h"

#include "private/qumldestroyobjectactionobject_p.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlDestroyObjectAction

    \inmodule QtUml

    \brief A destroy object action is an action that destroys objects.
 */

/*!
    Creates a new QUmlDestroyObjectAction. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlDestroyObjectAction::QUmlDestroyObjectAction(bool createQModelingObject) :
    _isDestroyLinks(false),
    _isDestroyOwnedObjects(false),
    _target(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlDestroyObjectActionObject(this));
}

/*!
    Destroys the QUmlDestroyObjectAction.
 */
QUmlDestroyObjectAction::~QUmlDestroyObjectAction()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlDestroyObjectAction.
*/
QModelingElement *QUmlDestroyObjectAction::clone() const
{
    QUmlDestroyObjectAction *c = new QUmlDestroyObjectAction;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlExceptionHandler *element, handlers())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostconditions())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPreconditions())
        c->addLocalPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    c->setDestroyLinks(isDestroyLinks());
    c->setDestroyOwnedObjects(isDestroyOwnedObjects());
    if (target())
        c->setTarget(dynamic_cast<QUmlInputPin *>(target()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies whether links in which the object participates are destroyed along with the object.
 */
bool QUmlDestroyObjectAction::isDestroyLinks() const
{
    // This is a read-write property

    return _isDestroyLinks;
}

/*!
    Adjusts isDestroyLinks to \a isDestroyLinks.
 */
void QUmlDestroyObjectAction::setDestroyLinks(bool isDestroyLinks)
{
    // This is a read-write property

    if (_isDestroyLinks != isDestroyLinks) {
        _isDestroyLinks = isDestroyLinks;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isDestroyLinks");
    }
}

/*!
    Specifies whether objects owned by the object are destroyed along with the object.
 */
bool QUmlDestroyObjectAction::isDestroyOwnedObjects() const
{
    // This is a read-write property

    return _isDestroyOwnedObjects;
}

/*!
    Adjusts isDestroyOwnedObjects to \a isDestroyOwnedObjects.
 */
void QUmlDestroyObjectAction::setDestroyOwnedObjects(bool isDestroyOwnedObjects)
{
    // This is a read-write property

    if (_isDestroyOwnedObjects != isDestroyOwnedObjects) {
        _isDestroyOwnedObjects = isDestroyOwnedObjects;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isDestroyOwnedObjects");
    }
}

/*!
    The input pin providing the object to be destroyed.

    \b {Subsetted property(ies):} QUmlAction::inputs().
 */
QUmlInputPin *QUmlDestroyObjectAction::target() const
{
    // This is a read-write association end

    return _target;
}

/*!
    Adjusts target to \a target.
 */
void QUmlDestroyObjectAction::setTarget(QUmlInputPin *target)
{
    // This is a read-write association end

    if (_target != target) {
        // Adjust subsetted properties
        removeInput(_target);

        _target = target;
        if (target && target->asQModelingObject() && this->asQModelingObject())
            QObject::connect(target->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setTarget()));
        target->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (target) {
            addInput(target);
        }
    }
}

QT_END_NAMESPACE

