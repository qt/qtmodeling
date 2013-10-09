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
#include "qumltrigger.h"

#include "private/qumltriggerobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlEvent>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlStringExpression>

/*!
    \class QUmlTrigger

    \inmodule QtUml

    \brief A trigger specification may be qualified by the port on which the event occurred.A trigger relates an event to a behavior that may affect an instance of the classifier.
 */
QUmlTrigger::QUmlTrigger(bool createQObject) :
    _event(0)
{
    if (createQObject)
        _qObject = new QUmlTriggerObject(this);
    setGroupProperties();
    setPropertyData();
}

QUmlTrigger::~QUmlTrigger()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlTrigger::clone() const
{
    QUmlTrigger *c = new QUmlTrigger;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (event())
        c->setEvent(dynamic_cast<QUmlEvent *>(event()->clone()));
    foreach (QUmlPort *element, ports())
        c->addPort(dynamic_cast<QUmlPort *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The event that causes the trigger.
 */
QUmlEvent *QUmlTrigger::event() const
{
    // This is a read-write association end

    return _event;
}

void QUmlTrigger::setEvent(QUmlEvent *event)
{
    // This is a read-write association end

    if (_event != event) {
        _event = event;
        if (event && event->asQObject() && this->asQObject())
            QObject::connect(event->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setEvent()));
    }
}

/*!
    A optional port of the receiver object on which the behavioral feature is invoked.
 */
const QSet<QUmlPort *> QUmlTrigger::ports() const
{
    // This is a read-write association end

    return _ports;
}

void QUmlTrigger::addPort(QUmlPort *port)
{
    // This is a read-write association end

    if (!_ports.contains(port)) {
        _ports.insert(port);
        if (port && port->asQObject() && this->asQObject())
            QObject::connect(port->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removePort(QObject *)));
    }
}

void QUmlTrigger::removePort(QUmlPort *port)
{
    // This is a read-write association end

    if (_ports.contains(port)) {
        _ports.remove(port);
    }
}

void QUmlTrigger::setGroupProperties()
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
    _groupProperties.insert(QStringLiteral("QUmlTrigger"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("event"))));
    _groupProperties.insert(QStringLiteral("QUmlTrigger"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ports"))));
}

void QUmlTrigger::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("event")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("event")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTrigger");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("event")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("event")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("event")][QtModeling::DocumentationRole] = QStringLiteral("The event that causes the trigger.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("event")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("event")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("event")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("ports")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("ports")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTrigger");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("ports")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("ports")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("ports")][QtModeling::DocumentationRole] = QStringLiteral("A optional port of the receiver object on which the behavioral feature is invoked.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("ports")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("ports")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTrigger")][QStringLiteral("ports")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

