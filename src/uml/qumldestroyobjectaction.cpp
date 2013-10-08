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

/*!
    \class QUmlDestroyObjectAction

    \inmodule QtUml

    \brief A destroy object action is an action that destroys objects.
 */
QUmlDestroyObjectAction::QUmlDestroyObjectAction(bool createQObject) :
    _isDestroyLinks(false),
    _isDestroyOwnedObjects(false),
    _target(0)
{
    if (createQObject)
        _qObject = new QUmlDestroyObjectActionObject(this);
    setClassForProperty();
    setPropertyData();
}

QUmlDestroyObjectAction::~QUmlDestroyObjectAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlDestroyObjectAction::clone() const
{
    QUmlDestroyObjectAction *c = new QUmlDestroyObjectAction;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
    foreach (QUmlInterruptibleActivityRegion *element, inInterruptibleRegions())
        c->addInInterruptibleRegion(dynamic_cast<QUmlInterruptibleActivityRegion *>(element->clone()));
    foreach (QUmlActivityPartition *element, inPartitions())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    foreach (QUmlActivityEdge *element, incomings())
        c->addIncoming(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityEdge *element, outgoings())
        c->addOutgoing(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, redefinedNodes())
        c->addRedefinedNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
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

void QUmlDestroyObjectAction::setDestroyLinks(bool isDestroyLinks)
{
    // This is a read-write property

    if (_isDestroyLinks != isDestroyLinks) {
        _isDestroyLinks = isDestroyLinks;
        _modifiedResettableProperties << QStringLiteral("isDestroyLinks");
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

void QUmlDestroyObjectAction::setDestroyOwnedObjects(bool isDestroyOwnedObjects)
{
    // This is a read-write property

    if (_isDestroyOwnedObjects != isDestroyOwnedObjects) {
        _isDestroyOwnedObjects = isDestroyOwnedObjects;
        _modifiedResettableProperties << QStringLiteral("isDestroyOwnedObjects");
    }
}

/*!
    The input pin providing the object to be destroyed.
 */
QUmlInputPin *QUmlDestroyObjectAction::target() const
{
    // This is a read-write association end

    return _target;
}

void QUmlDestroyObjectAction::setTarget(QUmlInputPin *target)
{
    // This is a read-write association end

    if (_target != target) {
        // Adjust subsetted properties
        removeInput(_target);

        _target = target;
        if (target && target->asQObject() && this->asQObject())
            QObject::connect(target->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setTarget()));
        target->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (target) {
            addInput(target);
        }
    }
}

void QUmlDestroyObjectAction::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("isLeaf")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinedElements")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("redefinitionContexts")] = QStringLiteral("QUmlRedefinableElement");
    _classForProperty[QStringLiteral("activity")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inGroups")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inInterruptibleRegions")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inPartitions")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("inStructuredNode")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("incomings")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("outgoings")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("redefinedNodes")] = QStringLiteral("QUmlActivityNode");
    _classForProperty[QStringLiteral("handlers")] = QStringLiteral("QUmlExecutableNode");
    _classForProperty[QStringLiteral("context")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("inputs")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("isLocallyReentrant")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("localPostconditions")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("localPreconditions")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("outputs")] = QStringLiteral("QUmlAction");
    _classForProperty[QStringLiteral("isDestroyLinks")] = QStringLiteral("QUmlDestroyObjectAction");
    _classForProperty[QStringLiteral("isDestroyOwnedObjects")] = QStringLiteral("QUmlDestroyObjectAction");
    _classForProperty[QStringLiteral("target")] = QStringLiteral("QUmlDestroyObjectAction");
}

void QUmlDestroyObjectAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyLinks")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyLinks")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDestroyObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyLinks")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyLinks")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyLinks")][QtModeling::DocumentationRole] = QStringLiteral("Specifies whether links in which the object participates are destroyed along with the object.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyLinks")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyLinks")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyLinks")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyOwnedObjects")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyOwnedObjects")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDestroyObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyOwnedObjects")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyOwnedObjects")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyOwnedObjects")][QtModeling::DocumentationRole] = QStringLiteral("Specifies whether objects owned by the object are destroyed along with the object.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyOwnedObjects")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyOwnedObjects")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("isDestroyOwnedObjects")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("target")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("target")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlDestroyObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("target")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("target")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("target")][QtModeling::DocumentationRole] = QStringLiteral("The input pin providing the object to be destroyed.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("target")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("target")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlDestroyObjectAction")][QStringLiteral("target")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

