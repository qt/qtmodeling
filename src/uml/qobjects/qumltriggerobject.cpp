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
#include "qumltriggerobject_p.h"

#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlEvent>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlTriggerObject::QUmlTriggerObject(QUmlTrigger *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlTriggerObject::~QUmlTriggerObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTrigger *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTriggerObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTrigger *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTriggerObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTrigger *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTriggerObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlTrigger *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTrigger *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTriggerObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlTrigger *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlTriggerObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlTrigger *>(this)->name();
}

QObject *QUmlTriggerObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlTrigger *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTrigger *>(this)->nameExpression()->asQObject();
}

QObject *QUmlTriggerObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlTrigger *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTrigger *>(this)->namespace_()->asQObject();
}

QString QUmlTriggerObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlTrigger *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlTriggerObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlTrigger *>(this)->visibility();
}

// OWNED ATTRIBUTES [Trigger]

QObject *QUmlTriggerObject::event() const
{
    if (!qmodelingobjectproperty_cast<QUmlTrigger *>(this)->event())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTrigger *>(this)->event()->asQObject();
}

const QSet<QObject *> QUmlTriggerObject::port() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingobjectproperty_cast<QUmlTrigger *>(this)->port())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTriggerObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTrigger *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTriggerObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTrigger *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTriggerObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlTrigger *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlTriggerObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlTrigger *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTriggerObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlTrigger *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTriggerObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlTrigger *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTriggerObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTriggerObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTriggerObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTriggerObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTriggerObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTriggerObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTriggerObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTriggerObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->setName(name);
}

void QUmlTriggerObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTriggerObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTriggerObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->setQualifiedName(qualifiedName);
}

void QUmlTriggerObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Trigger]

void QUmlTriggerObject::setEvent(QObject *event)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->setEvent(qmodelingobjectproperty_cast<QUmlEvent *>(event));
}

void QUmlTriggerObject::addPort(QObject *port)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->addPort(qmodelingobjectproperty_cast<QUmlPort *>(port));
}

void QUmlTriggerObject::removePort(QObject *port)
{
    qmodelingobjectproperty_cast<QUmlTrigger *>(this)->removePort(qmodelingobjectproperty_cast<QUmlPort *>(port));
}

QT_END_NAMESPACE

