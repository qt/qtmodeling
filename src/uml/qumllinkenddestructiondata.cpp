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
#include "qumllinkenddestructiondata.h"

#include "private/qumllinkenddestructiondataobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

/*!
    \class QUmlLinkEndDestructionData

    \inmodule QtUml

    \brief A link end destruction data is not an action. It is an element that identifies links. It identifies one end of a link to be destroyed by destroy link action.
 */
QUmlLinkEndDestructionData::QUmlLinkEndDestructionData(bool createQObject) :
    QUmlLinkEndData(false),
    _destroyAt(0),
    _isDestroyDuplicates(false)
{
    if (createQObject)
        _qObject = new QUmlLinkEndDestructionDataObject(this);
    setPropertyData();
}

QUmlLinkEndDestructionData::~QUmlLinkEndDestructionData()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlLinkEndDestructionData::clone() const
{
    QUmlLinkEndDestructionData *c = new QUmlLinkEndDestructionData;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (end())
        c->setEnd(dynamic_cast<QUmlProperty *>(end()->clone()));
    foreach (QUmlQualifierValue *element, qualifiers())
        c->addQualifier(dynamic_cast<QUmlQualifierValue *>(element->clone()));
    if (value())
        c->setValue(dynamic_cast<QUmlInputPin *>(value()->clone()));
    if (destroyAt())
        c->setDestroyAt(dynamic_cast<QUmlInputPin *>(destroyAt()->clone()));
    c->setDestroyDuplicates(isDestroyDuplicates());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the position of an existing link to be destroyed in ordered nonunique association ends. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QUmlInputPin *QUmlLinkEndDestructionData::destroyAt() const
{
    // This is a read-write association end

    return _destroyAt;
}

void QUmlLinkEndDestructionData::setDestroyAt(QUmlInputPin *destroyAt)
{
    // This is a read-write association end

    if (_destroyAt != destroyAt) {
        _destroyAt = destroyAt;
        if (destroyAt && destroyAt->asQObject() && this->asQObject())
            QObject::connect(destroyAt->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setDestroyAt()));
    }
}

/*!
    Specifies whether to destroy duplicates of the value in nonunique association ends.
 */
bool QUmlLinkEndDestructionData::isDestroyDuplicates() const
{
    // This is a read-write property

    return _isDestroyDuplicates;
}

void QUmlLinkEndDestructionData::setDestroyDuplicates(bool isDestroyDuplicates)
{
    // This is a read-write property

    if (_isDestroyDuplicates != isDestroyDuplicates) {
        _isDestroyDuplicates = isDestroyDuplicates;
        _modifiedResettableProperties << QStringLiteral("isDestroyDuplicates");
    }
}

void QUmlLinkEndDestructionData::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("destroyAt")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("destroyAt")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlLinkEndDestructionData");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("destroyAt")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("destroyAt")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("destroyAt")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the position of an existing link to be destroyed in ordered nonunique association ends. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("destroyAt")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("destroyAt")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("destroyAt")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("isDestroyDuplicates")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("isDestroyDuplicates")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlLinkEndDestructionData");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("isDestroyDuplicates")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("isDestroyDuplicates")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("isDestroyDuplicates")][QtModeling::DocumentationRole] = QStringLiteral("Specifies whether to destroy duplicates of the value in nonunique association ends.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("isDestroyDuplicates")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("isDestroyDuplicates")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLinkEndDestructionData")][QStringLiteral("isDestroyDuplicates")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlLinkEndDestructionData::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("end")] = QStringLiteral("QUmlLinkEndData");
    _classForProperty[QStringLiteral("qualifiers")] = QStringLiteral("QUmlLinkEndData");
    _classForProperty[QStringLiteral("value")] = QStringLiteral("QUmlLinkEndData");
    _classForProperty[QStringLiteral("destroyAt")] = QStringLiteral("QUmlLinkEndDestructionData");
    _classForProperty[QStringLiteral("isDestroyDuplicates")] = QStringLiteral("QUmlLinkEndDestructionData");
}

