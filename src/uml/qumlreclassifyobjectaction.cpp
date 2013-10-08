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
#include "qumlreclassifyobjectaction.h"

#include "private/qumlreclassifyobjectactionobject_p.h"

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
    \class QUmlReclassifyObjectAction

    \inmodule QtUml

    \brief A reclassify object action is an action that changes which classifiers classify an object.
 */
QUmlReclassifyObjectAction::QUmlReclassifyObjectAction(bool createQObject) :
    _isReplaceAll(false),
    _object(0)
{
    if (createQObject)
        _qObject = new QUmlReclassifyObjectActionObject(this);
    setClassForProperty();
    setPropertyData();
}

QUmlReclassifyObjectAction::~QUmlReclassifyObjectAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlReclassifyObjectAction::clone() const
{
    QUmlReclassifyObjectAction *c = new QUmlReclassifyObjectAction;
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
    c->setReplaceAll(isReplaceAll());
    foreach (QUmlClassifier *element, newClassifiers())
        c->addNewClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    if (object())
        c->setObject(dynamic_cast<QUmlInputPin *>(object()->clone()));
    foreach (QUmlClassifier *element, oldClassifiers())
        c->addOldClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies whether existing classifiers should be removed before adding the new classifiers.
 */
bool QUmlReclassifyObjectAction::isReplaceAll() const
{
    // This is a read-write property

    return _isReplaceAll;
}

void QUmlReclassifyObjectAction::setReplaceAll(bool isReplaceAll)
{
    // This is a read-write property

    if (_isReplaceAll != isReplaceAll) {
        _isReplaceAll = isReplaceAll;
        _modifiedResettableProperties << QStringLiteral("isReplaceAll");
    }
}

/*!
    A set of classifiers to be added to the classifiers of the object.
 */
const QSet<QUmlClassifier *> QUmlReclassifyObjectAction::newClassifiers() const
{
    // This is a read-write association end

    return _newClassifiers;
}

void QUmlReclassifyObjectAction::addNewClassifier(QUmlClassifier *newClassifier)
{
    // This is a read-write association end

    if (!_newClassifiers.contains(newClassifier)) {
        _newClassifiers.insert(newClassifier);
        if (newClassifier && newClassifier->asQObject() && this->asQObject())
            QObject::connect(newClassifier->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeNewClassifier(QObject *)));
    }
}

void QUmlReclassifyObjectAction::removeNewClassifier(QUmlClassifier *newClassifier)
{
    // This is a read-write association end

    if (_newClassifiers.contains(newClassifier)) {
        _newClassifiers.remove(newClassifier);
    }
}

/*!
    Holds the object to be reclassified.
 */
QUmlInputPin *QUmlReclassifyObjectAction::object() const
{
    // This is a read-write association end

    return _object;
}

void QUmlReclassifyObjectAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    if (_object != object) {
        // Adjust subsetted properties
        removeInput(_object);

        _object = object;
        if (object && object->asQObject() && this->asQObject())
            QObject::connect(object->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setObject()));
        object->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (object) {
            addInput(object);
        }
    }
}

/*!
    A set of classifiers to be removed from the classifiers of the object.
 */
const QSet<QUmlClassifier *> QUmlReclassifyObjectAction::oldClassifiers() const
{
    // This is a read-write association end

    return _oldClassifiers;
}

void QUmlReclassifyObjectAction::addOldClassifier(QUmlClassifier *oldClassifier)
{
    // This is a read-write association end

    if (!_oldClassifiers.contains(oldClassifier)) {
        _oldClassifiers.insert(oldClassifier);
        if (oldClassifier && oldClassifier->asQObject() && this->asQObject())
            QObject::connect(oldClassifier->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOldClassifier(QObject *)));
    }
}

void QUmlReclassifyObjectAction::removeOldClassifier(QUmlClassifier *oldClassifier)
{
    // This is a read-write association end

    if (_oldClassifiers.contains(oldClassifier)) {
        _oldClassifiers.remove(oldClassifier);
    }
}

void QUmlReclassifyObjectAction::setClassForProperty()
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
    _classForProperty[QStringLiteral("isReplaceAll")] = QStringLiteral("QUmlReclassifyObjectAction");
    _classForProperty[QStringLiteral("newClassifiers")] = QStringLiteral("QUmlReclassifyObjectAction");
    _classForProperty[QStringLiteral("object")] = QStringLiteral("QUmlReclassifyObjectAction");
    _classForProperty[QStringLiteral("oldClassifiers")] = QStringLiteral("QUmlReclassifyObjectAction");
}

void QUmlReclassifyObjectAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("isReplaceAll")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("isReplaceAll")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlReclassifyObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("isReplaceAll")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("isReplaceAll")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("isReplaceAll")][QtModeling::DocumentationRole] = QStringLiteral("Specifies whether existing classifiers should be removed before adding the new classifiers.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("isReplaceAll")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("isReplaceAll")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("isReplaceAll")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("newClassifiers")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("newClassifiers")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlReclassifyObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("newClassifiers")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("newClassifiers")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("newClassifiers")][QtModeling::DocumentationRole] = QStringLiteral("A set of classifiers to be added to the classifiers of the object.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("newClassifiers")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("newClassifiers")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("newClassifiers")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("object")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("object")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlReclassifyObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("object")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("object")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("object")][QtModeling::DocumentationRole] = QStringLiteral("Holds the object to be reclassified.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("object")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("object")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("object")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("oldClassifiers")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("oldClassifiers")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlReclassifyObjectAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("oldClassifiers")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("oldClassifiers")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("oldClassifiers")][QtModeling::DocumentationRole] = QStringLiteral("A set of classifiers to be removed from the classifiers of the object.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("oldClassifiers")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("oldClassifiers")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReclassifyObjectAction")][QStringLiteral("oldClassifiers")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

