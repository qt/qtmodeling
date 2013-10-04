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
#include "qumlpseudostateobject_p.h"

#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>

QT_BEGIN_NAMESPACE

QUmlPseudostateObject::QUmlPseudostateObject(QUmlPseudostate *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlPseudostateObject::~QUmlPseudostateObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPseudostateObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPseudostateObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPseudostateObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlPseudostateObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlPseudostateObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->name();
}

QObject *QUmlPseudostateObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->nameExpression()->asQObject();
}

QObject *QUmlPseudostateObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->namespace_()->asQObject();
}

QString QUmlPseudostateObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlPseudostateObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->visibility();
}

// OWNED ATTRIBUTES [Vertex]

QObject *QUmlPseudostateObject::container() const
{
    if (!qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->container())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->container()->asQObject();
}

const QSet<QObject *> QUmlPseudostateObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPseudostateObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Pseudostate]

QtUml::PseudostateKind QUmlPseudostateObject::kind() const
{
    return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->kind();
}

QObject *QUmlPseudostateObject::state() const
{
    if (!qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->state())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->state()->asQObject();
}

QObject *QUmlPseudostateObject::stateMachine() const
{
    if (!qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->stateMachine())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->stateMachine()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPseudostateObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPseudostateObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlPseudostateObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlPseudostateObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPseudostateObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlPseudostateObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->separator();
}

// OPERATIONS [Vertex]

QObject *QUmlPseudostateObject::containingStateMachine() const
{
    if (!qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->containingStateMachine())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->containingStateMachine()->asQObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPseudostateObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPseudostateObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPseudostateObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPseudostateObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPseudostateObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlPseudostateObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPseudostateObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPseudostateObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->setName(name);
}

void QUmlPseudostateObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlPseudostateObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlPseudostateObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->setQualifiedName(qualifiedName);
}

void QUmlPseudostateObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Vertex]

void QUmlPseudostateObject::setContainer(QObject *container)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->setContainer(qmodelingobjectproperty_cast<QUmlRegion *>(container));
}

void QUmlPseudostateObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlTransition *>(incoming));
}

void QUmlPseudostateObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlTransition *>(incoming));
}

void QUmlPseudostateObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlTransition *>(outgoing));
}

void QUmlPseudostateObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlTransition *>(outgoing));
}

// SLOTS FOR OWNED ATTRIBUTES [Pseudostate]

void QUmlPseudostateObject::setKind(QtUml::PseudostateKind kind)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->setKind(kind);
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->modifiedResettableProperties() << QStringLiteral("kind");
}

void QUmlPseudostateObject::unsetKind()
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("kind"));
}

void QUmlPseudostateObject::setState(QObject *state)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->setState(qmodelingobjectproperty_cast<QUmlState *>(state));
}

void QUmlPseudostateObject::setStateMachine(QObject *stateMachine)
{
    qmodelingobjectproperty_cast<QUmlPseudostate *>(this)->setStateMachine(qmodelingobjectproperty_cast<QUmlStateMachine *>(stateMachine));
}

QT_END_NAMESPACE

