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
#include "qumlgateobject_p.h"

#include <QtUml/QUmlGate>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlGateObject::QUmlGateObject(QUmlGate *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlGateObject::~QUmlGateObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlGate *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlGateObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlGate *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlGateObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlGate *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlGateObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlGate *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGate *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlGateObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlGate *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlGateObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlGate *>(this)->name();
}

QObject *QUmlGateObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlGate *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGate *>(this)->nameExpression()->asQObject();
}

QObject *QUmlGateObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlGate *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGate *>(this)->namespace_()->asQObject();
}

QString QUmlGateObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlGate *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlGateObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlGate *>(this)->visibility();
}

// OWNED ATTRIBUTES [MessageEnd]

QObject *QUmlGateObject::message() const
{
    if (!qmodelingobjectproperty_cast<QUmlGate *>(this)->message())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGate *>(this)->message()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlGateObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlGate *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlGateObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlGate *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlGateObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlGate *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlGateObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlGate *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlGateObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlGate *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlGateObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlGate *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlGateObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGateObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGateObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGateObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGateObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlGateObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGateObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGateObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->setName(name);
}

void QUmlGateObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlGateObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlGateObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->setQualifiedName(qualifiedName);
}

void QUmlGateObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [MessageEnd]

void QUmlGateObject::setMessage(QObject *message)
{
    qmodelingobjectproperty_cast<QUmlGate *>(this)->setMessage(qmodelingobjectproperty_cast<QUmlMessage *>(message));
}

QT_END_NAMESPACE

