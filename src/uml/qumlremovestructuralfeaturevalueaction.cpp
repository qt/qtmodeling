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
#include "qumlremovestructuralfeaturevalueaction.h"

#include "private/qumlremovestructuralfeaturevalueactionobject_p.h"

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
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlStructuredActivityNode>

/*!
    \class QUmlRemoveStructuralFeatureValueAction

    \inmodule QtUml

    \brief A remove structural feature value action is a write structural feature action that removes values from structural features.
 */
QUmlRemoveStructuralFeatureValueAction::QUmlRemoveStructuralFeatureValueAction(bool createQObject) :
    _isRemoveDuplicates(false),
    _removeAt(0)
{
    if (createQObject)
        _qObject = new QUmlRemoveStructuralFeatureValueActionObject(this);
    setGroupProperties();
    setPropertyData();
}

QUmlRemoveStructuralFeatureValueAction::~QUmlRemoveStructuralFeatureValueAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlRemoveStructuralFeatureValueAction::clone() const
{
    QUmlRemoveStructuralFeatureValueAction *c = new QUmlRemoveStructuralFeatureValueAction;
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
    if (object())
        c->setObject(dynamic_cast<QUmlInputPin *>(object()->clone()));
    if (structuralFeature())
        c->setStructuralFeature(dynamic_cast<QUmlStructuralFeature *>(structuralFeature()->clone()));
    if (result())
        c->setResult(dynamic_cast<QUmlOutputPin *>(result()->clone()));
    if (value())
        c->setValue(dynamic_cast<QUmlInputPin *>(value()->clone()));
    c->setRemoveDuplicates(isRemoveDuplicates());
    if (removeAt())
        c->setRemoveAt(dynamic_cast<QUmlInputPin *>(removeAt()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies whether to remove duplicates of the value in nonunique structural features.
 */
bool QUmlRemoveStructuralFeatureValueAction::isRemoveDuplicates() const
{
    // This is a read-write property

    return _isRemoveDuplicates;
}

void QUmlRemoveStructuralFeatureValueAction::setRemoveDuplicates(bool isRemoveDuplicates)
{
    // This is a read-write property

    if (_isRemoveDuplicates != isRemoveDuplicates) {
        _isRemoveDuplicates = isRemoveDuplicates;
        _modifiedResettableProperties << QStringLiteral("isRemoveDuplicates");
    }
}

/*!
    Specifies the position of an existing value to remove in ordered nonunique structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QUmlInputPin *QUmlRemoveStructuralFeatureValueAction::removeAt() const
{
    // This is a read-write association end

    return _removeAt;
}

void QUmlRemoveStructuralFeatureValueAction::setRemoveAt(QUmlInputPin *removeAt)
{
    // This is a read-write association end

    if (_removeAt != removeAt) {
        // Adjust subsetted properties
        removeInput(_removeAt);

        _removeAt = removeAt;
        if (removeAt && removeAt->asQObject() && this->asQObject())
            QObject::connect(removeAt->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setRemoveAt()));
        removeAt->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (removeAt) {
            addInput(removeAt);
        }
    }
}

void QUmlRemoveStructuralFeatureValueAction::setGroupProperties()
{
    const QMetaObject *metaObject = _qObject->metaObject();

    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("activity"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inGroups"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inInterruptibleRegions"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inPartitions"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inStructuredNode"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("incomings"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outgoings"))));
    _groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedNodes"))));
    _groupProperties.insert(QStringLiteral("QUmlExecutableNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("handlers"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("context"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inputs"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLocallyReentrant"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("localPostconditions"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("localPreconditions"))));
    _groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outputs"))));
    _groupProperties.insert(QStringLiteral("QUmlStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("object"))));
    _groupProperties.insert(QStringLiteral("QUmlStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("structuralFeature"))));
    _groupProperties.insert(QStringLiteral("QUmlWriteStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("result"))));
    _groupProperties.insert(QStringLiteral("QUmlWriteStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));
    _groupProperties.insert(QStringLiteral("QUmlRemoveStructuralFeatureValueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isRemoveDuplicates"))));
    _groupProperties.insert(QStringLiteral("QUmlRemoveStructuralFeatureValueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("removeAt"))));
}

void QUmlRemoveStructuralFeatureValueAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("isRemoveDuplicates")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("isRemoveDuplicates")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlRemoveStructuralFeatureValueAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("isRemoveDuplicates")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("isRemoveDuplicates")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("isRemoveDuplicates")][QtModeling::DocumentationRole] = QStringLiteral("Specifies whether to remove duplicates of the value in nonunique structural features.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("isRemoveDuplicates")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("isRemoveDuplicates")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("isRemoveDuplicates")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("removeAt")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("removeAt")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlRemoveStructuralFeatureValueAction");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("removeAt")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("removeAt")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("removeAt")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the position of an existing value to remove in ordered nonunique structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("removeAt")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("removeAt")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlRemoveStructuralFeatureValueAction")][QStringLiteral("removeAt")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

