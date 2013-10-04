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
#include "qumlinteractionuseobject_p.h"

#include <QtUml/QUmlInteractionUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGate>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlInteractionUseObject::QUmlInteractionUseObject(QUmlInteractionUse *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlInteractionUseObject::~QUmlInteractionUseObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInteractionUseObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionUseObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInteractionUseObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInteractionUseObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInteractionUseObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->name();
}

QObject *QUmlInteractionUseObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInteractionUseObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->namespace_()->asQObject();
}

QString QUmlInteractionUseObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlInteractionUseObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlInteractionUseObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->covered())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInteractionUseObject::enclosingInteraction() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlInteractionUseObject::enclosingOperand() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlInteractionUseObject::generalOrdering() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->generalOrdering())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [InteractionUse]

const QSet<QObject *> QUmlInteractionUseObject::actualGate() const
{
    QSet<QObject *> set;
    foreach (QUmlGate *element, qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->actualGate())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlInteractionUseObject::argument() const
{
    QList<QObject *> list;
    foreach (QUmlValueSpecification *element, qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->argument())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlInteractionUseObject::refersTo() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->refersTo())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->refersTo()->asQObject();
}

QObject *QUmlInteractionUseObject::returnValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->returnValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->returnValue()->asQObject();
}

QObject *QUmlInteractionUseObject::returnValueRecipient() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->returnValueRecipient())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->returnValueRecipient()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInteractionUseObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionUseObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInteractionUseObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInteractionUseObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionUseObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInteractionUseObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInteractionUseObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionUseObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionUseObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionUseObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionUseObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInteractionUseObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionUseObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionUseObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->setName(name);
}

void QUmlInteractionUseObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInteractionUseObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInteractionUseObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->setQualifiedName(qualifiedName);
}

void QUmlInteractionUseObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlInteractionUseObject::addCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->addCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionUseObject::removeCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->removeCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionUseObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlInteractionUseObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlInteractionUseObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlInteractionUseObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionUse]

void QUmlInteractionUseObject::addActualGate(QObject *actualGate)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->addActualGate(qmodelingobjectproperty_cast<QUmlGate *>(actualGate));
}

void QUmlInteractionUseObject::removeActualGate(QObject *actualGate)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->removeActualGate(qmodelingobjectproperty_cast<QUmlGate *>(actualGate));
}

void QUmlInteractionUseObject::addArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->addArgument(qmodelingobjectproperty_cast<QUmlValueSpecification *>(argument));
}

void QUmlInteractionUseObject::removeArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->removeArgument(qmodelingobjectproperty_cast<QUmlValueSpecification *>(argument));
}

void QUmlInteractionUseObject::setRefersTo(QObject *refersTo)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->setRefersTo(qmodelingobjectproperty_cast<QUmlInteraction *>(refersTo));
}

void QUmlInteractionUseObject::setReturnValue(QObject *returnValue)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->setReturnValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(returnValue));
}

void QUmlInteractionUseObject::setReturnValueRecipient(QObject *returnValueRecipient)
{
    qmodelingobjectproperty_cast<QUmlInteractionUse *>(this)->setReturnValueRecipient(qmodelingobjectproperty_cast<QUmlProperty *>(returnValueRecipient));
}

QT_END_NAMESPACE

