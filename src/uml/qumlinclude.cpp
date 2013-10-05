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
#include "qumlinclude.h"

#include "private/qumlincludeobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlUseCase>
/*!
    \class QUmlInclude

    \inmodule QtUml

    \brief An include relationship defines that a use case contains the behavior defined in another use case.
 */
QUmlInclude::QUmlInclude(bool createQObject) :
    _addition(0),
    _includingCase(0)
{
    if (createQObject)
        _qObject = new QUmlIncludeObject(this);
    setPropertyData();
}

QUmlInclude::~QUmlInclude()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlInclude::clone() const
{
    QUmlInclude *c = new QUmlInclude;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (addition())
        c->setAddition(dynamic_cast<QUmlUseCase *>(addition()->clone()));
    if (includingCase())
        c->setIncludingCase(dynamic_cast<QUmlUseCase *>(includingCase()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the use case that is to be included.
 */
QUmlUseCase *QUmlInclude::addition() const
{
    // This is a read-write association end

    return _addition;
}

void QUmlInclude::setAddition(QUmlUseCase *addition)
{
    // This is a read-write association end

    if (_addition != addition) {
        // Adjust subsetted properties
        removeTarget(_addition);

        _addition = addition;
        if (addition && addition->asQObject() && this->asQObject())
            QObject::connect(addition->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setAddition()));

        // Adjust subsetted properties
        if (addition) {
            addTarget(addition);
        }
    }
}

/*!
    References the use case which will include the addition and owns the include relationship.
 */
QUmlUseCase *QUmlInclude::includingCase() const
{
    // This is a read-write association end

    return _includingCase;
}

void QUmlInclude::setIncludingCase(QUmlUseCase *includingCase)
{
    // This is a read-write association end

    if (_includingCase != includingCase) {
        // Adjust subsetted properties
        removeSource(_includingCase);

        _includingCase = includingCase;
        if (includingCase && includingCase->asQObject() && this->asQObject())
            QObject::connect(includingCase->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setIncludingCase()));

        // Adjust subsetted properties
        if (includingCase) {
            addSource(includingCase);
        }
        setNamespace(includingCase);
    }
}

void QUmlInclude::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("addition")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("addition")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("addition")][QtModeling::DocumentationRole] = QStringLiteral("References the use case that is to be included.");
    QModelingObject::propertyDataHash[QStringLiteral("addition")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("addition")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("DirectedRelationship-target");
    QModelingObject::propertyDataHash[QStringLiteral("addition")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("includingCase")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("includingCase")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("includingCase")][QtModeling::DocumentationRole] = QStringLiteral("References the use case which will include the addition and owns the include relationship.");
    QModelingObject::propertyDataHash[QStringLiteral("includingCase")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("includingCase")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("DirectedRelationship-source NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("includingCase")][QtModeling::OppositeEndRole] = QStringLiteral("UseCase-include");

}

