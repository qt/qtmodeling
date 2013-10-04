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
#include "qumlremovevariablevalueaction.h"

#include "private/qumlremovevariablevalueactionobject_p.h"

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
#include <QtUml/QUmlVariable>
/*!
    \class QUmlRemoveVariableValueAction

    \inmodule QtUml

    \brief A remove variable value action is a write variable action that removes values from variables.
 */
QUmlRemoveVariableValueAction::QUmlRemoveVariableValueAction(bool createQObject) :
    _isRemoveDuplicates(false),
    _removeAt(0)
{
    if (createQObject)
        _qObject = new QUmlRemoveVariableValueActionObject(this);
    setPropertyData();
}

QUmlRemoveVariableValueAction::~QUmlRemoveVariableValueAction()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlRemoveVariableValueAction::clone() const
{
    QUmlRemoveVariableValueAction *c = new QUmlRemoveVariableValueAction;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (activity())
        c->setActivity(dynamic_cast<QUmlActivity *>(activity()->clone()));
    foreach (QUmlInterruptibleActivityRegion *element, inInterruptibleRegion())
        c->addInInterruptibleRegion(dynamic_cast<QUmlInterruptibleActivityRegion *>(element->clone()));
    foreach (QUmlActivityPartition *element, inPartition())
        c->addInPartition(dynamic_cast<QUmlActivityPartition *>(element->clone()));
    if (inStructuredNode())
        c->setInStructuredNode(dynamic_cast<QUmlStructuredActivityNode *>(inStructuredNode()->clone()));
    foreach (QUmlActivityEdge *element, incoming())
        c->addIncoming(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityEdge *element, outgoing())
        c->addOutgoing(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlActivityNode *element, redefinedNode())
        c->addRedefinedNode(dynamic_cast<QUmlActivityNode *>(element->clone()));
    foreach (QUmlExceptionHandler *element, handler())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    c->setLocallyReentrant(isLocallyReentrant());
    foreach (QUmlConstraint *element, localPostcondition())
        c->addLocalPostcondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlConstraint *element, localPrecondition())
        c->addLocalPrecondition(dynamic_cast<QUmlConstraint *>(element->clone()));
    if (variable())
        c->setVariable(dynamic_cast<QUmlVariable *>(variable()->clone()));
    if (value())
        c->setValue(dynamic_cast<QUmlInputPin *>(value()->clone()));
    c->setRemoveDuplicates(isRemoveDuplicates());
    if (removeAt())
        c->setRemoveAt(dynamic_cast<QUmlInputPin *>(removeAt()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies whether to remove duplicates of the value in nonunique variables.
 */
bool QUmlRemoveVariableValueAction::isRemoveDuplicates() const
{
    // This is a read-write property

    return _isRemoveDuplicates;
}

void QUmlRemoveVariableValueAction::setRemoveDuplicates(bool isRemoveDuplicates)
{
    // This is a read-write property

    if (_isRemoveDuplicates != isRemoveDuplicates) {
        _isRemoveDuplicates = isRemoveDuplicates;
    }
}

/*!
    Specifies the position of an existing value to remove in ordered nonunique variables. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QUmlInputPin *QUmlRemoveVariableValueAction::removeAt() const
{
    // This is a read-write association end

    return _removeAt;
}

void QUmlRemoveVariableValueAction::setRemoveAt(QUmlInputPin *removeAt)
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

void QUmlRemoveVariableValueAction::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("isRemoveDuplicates")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("isRemoveDuplicates")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isRemoveDuplicates")][QtModeling::DocumentationRole] = QStringLiteral("Specifies whether to remove duplicates of the value in nonunique variables.");
    QModelingObject::propertyDataHash[QStringLiteral("isRemoveDuplicates")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isRemoveDuplicates")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isRemoveDuplicates")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("removeAt")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("removeAt")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("removeAt")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the position of an existing value to remove in ordered nonunique variables. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.");
    QModelingObject::propertyDataHash[QStringLiteral("removeAt")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("removeAt")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Action-input");
    QModelingObject::propertyDataHash[QStringLiteral("removeAt")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

