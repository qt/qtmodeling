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
#include "qumlactivitygroup.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlActivityGroup

    \inmodule QtUml

    \brief ActivityGroup is an abstract class for defining sets of nodes and edges in an activity.

    \b {QUmlActivityGroup is an abstract class.}
 */

/*!
    Creates a new QUmlActivityGroup.
*/
QUmlActivityGroup::QUmlActivityGroup() :
    _inActivity(0),
    _superGroup(0)
{
}

/*!
    Destroys the QUmlActivityGroup.
 */
QUmlActivityGroup::~QUmlActivityGroup()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlActivityGroup.
*/
QModelingElement *QUmlActivityGroup::clone() const
{
    QUmlActivityGroup *c = new QUmlActivityGroup;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Edges immediately contained in the group.

    \b {This is a read-only derived union property.}

    \b {Opposite property(ies):} QUmlActivityEdge::inGroups().
 */
const QSet<QUmlActivityEdge *> QUmlActivityGroup::containedEdges() const
{
    // This is a read-only derived union association end

    return _containedEdges;
}

/*!
    Adds \a containedEdge to containedEdges.

    \sa containedEdges(), removeContainedEdge()
 */
void QUmlActivityGroup::addContainedEdge(QUmlActivityEdge *containedEdge)
{
    // This is a read-only derived union association end

    if (!_containedEdges.contains(containedEdge)) {
        _containedEdges.insert(containedEdge);
        if (containedEdge && containedEdge->asQModelingObject() && this->asQModelingObject())
            QObject::connect(containedEdge->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeContainedEdge(QObject *)));

        // Adjust opposite properties
        if (containedEdge) {
            containedEdge->addInGroup(this);
        }
    }
}

/*!
    Removes \a containedEdge from containedEdges.

    \sa containedEdges(), addContainedEdge()
 */
void QUmlActivityGroup::removeContainedEdge(QUmlActivityEdge *containedEdge)
{
    // This is a read-only derived union association end

    if (_containedEdges.contains(containedEdge)) {
        _containedEdges.remove(containedEdge);

        // Adjust opposite properties
        if (containedEdge) {
            containedEdge->removeInGroup(this);
        }
    }
}

/*!
    Nodes immediately contained in the group.

    \b {This is a read-only derived union property.}

    \b {Opposite property(ies):} QUmlActivityNode::inGroups().
 */
const QSet<QUmlActivityNode *> QUmlActivityGroup::containedNodes() const
{
    // This is a read-only derived union association end

    return _containedNodes;
}

/*!
    Adds \a containedNode to containedNodes.

    \sa containedNodes(), removeContainedNode()
 */
void QUmlActivityGroup::addContainedNode(QUmlActivityNode *containedNode)
{
    // This is a read-only derived union association end

    if (!_containedNodes.contains(containedNode)) {
        _containedNodes.insert(containedNode);
        if (containedNode && containedNode->asQModelingObject() && this->asQModelingObject())
            QObject::connect(containedNode->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeContainedNode(QObject *)));

        // Adjust opposite properties
        if (containedNode) {
            containedNode->addInGroup(this);
        }
    }
}

/*!
    Removes \a containedNode from containedNodes.

    \sa containedNodes(), addContainedNode()
 */
void QUmlActivityGroup::removeContainedNode(QUmlActivityNode *containedNode)
{
    // This is a read-only derived union association end

    if (_containedNodes.contains(containedNode)) {
        _containedNodes.remove(containedNode);

        // Adjust opposite properties
        if (containedNode) {
            containedNode->removeInGroup(this);
        }
    }
}

/*!
    Activity containing the group.

    \b {Subsetted property(ies):} QUmlElement::owner().

    \b {Opposite property(ies):} QUmlActivity::groups().
 */
QUmlActivity *QUmlActivityGroup::inActivity() const
{
    // This is a read-write association end

    return _inActivity;
}

/*!
    Adjusts inActivity to \a inActivity.
 */
void QUmlActivityGroup::setInActivity(QUmlActivity *inActivity)
{
    // This is a read-write association end

    if (_inActivity != inActivity) {
        // Adjust subsetted properties

        _inActivity = inActivity;
        if (inActivity && inActivity->asQModelingObject() && this->asQModelingObject())
            QObject::connect(inActivity->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setInActivity()));

        // Adjust subsetted properties
        setOwner(inActivity);
    }
}

/*!
    Groups immediately contained in the group.

    \b {This is a read-only derived union property.}

    \b {Subsetted property(ies):} QUmlElement::ownedElements().

    \b {Opposite property(ies):} QUmlActivityGroup::superGroup().
 */
const QSet<QUmlActivityGroup *> QUmlActivityGroup::subgroups() const
{
    // This is a read-only derived union association end

    return _subgroups;
}

/*!
    Adds \a subgroup to subgroups.

    \sa subgroups(), removeSubgroup()
 */
void QUmlActivityGroup::addSubgroup(QUmlActivityGroup *subgroup)
{
    // This is a read-only derived union association end

    if (!_subgroups.contains(subgroup)) {
        _subgroups.insert(subgroup);
        if (subgroup && subgroup->asQModelingObject() && this->asQModelingObject())
            QObject::connect(subgroup->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeSubgroup(QObject *)));
        subgroup->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(subgroup);

        // Adjust opposite properties
        if (subgroup) {
            subgroup->setSuperGroup(this);
        }
    }
}

/*!
    Removes \a subgroup from subgroups.

    \sa subgroups(), addSubgroup()
 */
void QUmlActivityGroup::removeSubgroup(QUmlActivityGroup *subgroup)
{
    // This is a read-only derived union association end

    if (_subgroups.contains(subgroup)) {
        _subgroups.remove(subgroup);
        if (subgroup->asQModelingObject())
            subgroup->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(subgroup);

        // Adjust opposite properties
        if (subgroup) {
            subgroup->setSuperGroup(0);
        }
    }
}

/*!
    Group immediately containing the group.

    \b {This is a read-only derived union property.}

    \b {Subsetted property(ies):} QUmlElement::owner().

    \b {Opposite property(ies):} QUmlActivityGroup::subgroups().
 */
QUmlActivityGroup *QUmlActivityGroup::superGroup() const
{
    // This is a read-only derived union association end

    return _superGroup;
}

/*!
    Adjusts superGroup to \a superGroup.
 */
void QUmlActivityGroup::setSuperGroup(QUmlActivityGroup *superGroup)
{
    // This is a read-only derived union association end

    if (_superGroup != superGroup) {
        // Adjust subsetted properties

        _superGroup = superGroup;
        if (superGroup && superGroup->asQModelingObject() && this->asQModelingObject())
            QObject::connect(superGroup->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSuperGroup()));

        // Adjust subsetted properties
        setOwner(superGroup);
    }
}

QT_END_NAMESPACE

