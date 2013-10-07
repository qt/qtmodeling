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
#include "qumlcallevent.h"

#include "private/qumlcalleventobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

/*!
    \class QUmlCallEvent

    \inmodule QtUml

    \brief A call event models the receipt by an object of a message invoking a call of an operation.
 */
QUmlCallEvent::QUmlCallEvent(bool createQObject) :
    _operation(0)
{
    if (createQObject)
        _qObject = new QUmlCallEventObject(this);
    setPropertyData();
}

QUmlCallEvent::~QUmlCallEvent()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlCallEvent::clone() const
{
    QUmlCallEvent *c = new QUmlCallEvent;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (operation())
        c->setOperation(dynamic_cast<QUmlOperation *>(operation()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Designates the operation whose invocation raised the call event.
 */
QUmlOperation *QUmlCallEvent::operation() const
{
    // This is a read-write association end

    return _operation;
}

void QUmlCallEvent::setOperation(QUmlOperation *operation)
{
    // This is a read-write association end

    if (_operation != operation) {
        _operation = operation;
        if (operation && operation->asQObject() && this->asQObject())
            QObject::connect(operation->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setOperation()));
    }
}

void QUmlCallEvent::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlCallEvent")][QStringLiteral("operation")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlCallEvent")][QStringLiteral("operation")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlCallEvent");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlCallEvent")][QStringLiteral("operation")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlCallEvent")][QStringLiteral("operation")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlCallEvent")][QStringLiteral("operation")][QtModeling::DocumentationRole] = QStringLiteral("Designates the operation whose invocation raised the call event.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlCallEvent")][QStringLiteral("operation")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlCallEvent")][QStringLiteral("operation")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlCallEvent")][QStringLiteral("operation")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

void QUmlCallEvent::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owningTemplateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("templateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlPackageableElement");
    _classForProperty[QStringLiteral("operation")] = QStringLiteral("QUmlCallEvent");
}

