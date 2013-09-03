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
#include "qumlconsiderignorefragmentobject_p.h"

#include <QtUml/QUmlConsiderIgnoreFragment>
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
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlConsiderIgnoreFragmentObject::QUmlConsiderIgnoreFragmentObject(QUmlConsiderIgnoreFragment *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlConsiderIgnoreFragmentObject::~QUmlConsiderIgnoreFragmentObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConsiderIgnoreFragmentObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlConsiderIgnoreFragmentObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->name();
}

QObject *QUmlConsiderIgnoreFragmentObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->nameExpression()->asQObject();
}

QObject *QUmlConsiderIgnoreFragmentObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->namespace_()->asQObject();
}

QString QUmlConsiderIgnoreFragmentObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlConsiderIgnoreFragmentObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->covered())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConsiderIgnoreFragmentObject::enclosingInteraction() const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlConsiderIgnoreFragmentObject::enclosingOperand() const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::generalOrdering() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->generalOrdering())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [CombinedFragment]

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::cfragmentGate() const
{
    QSet<QObject *> set;
    foreach (QUmlGate *element, qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->cfragmentGate())
        set.insert(element->asQObject());
    return set;
}

QtUml::InteractionOperatorKind QUmlConsiderIgnoreFragmentObject::interactionOperator() const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->interactionOperator();
}

const QList<QObject *> QUmlConsiderIgnoreFragmentObject::operand() const
{
    QList<QObject *> list;
    foreach (QUmlInteractionOperand *element, qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->operand())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [ConsiderIgnoreFragment]

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::message() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->message())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConsiderIgnoreFragmentObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConsiderIgnoreFragmentObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlConsiderIgnoreFragmentObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlConsiderIgnoreFragmentObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConsiderIgnoreFragmentObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlConsiderIgnoreFragmentObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConsiderIgnoreFragmentObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConsiderIgnoreFragmentObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConsiderIgnoreFragmentObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConsiderIgnoreFragmentObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConsiderIgnoreFragmentObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlConsiderIgnoreFragmentObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConsiderIgnoreFragmentObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConsiderIgnoreFragmentObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setName(name);
}
    
void QUmlConsiderIgnoreFragmentObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlConsiderIgnoreFragmentObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlConsiderIgnoreFragmentObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlConsiderIgnoreFragmentObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlConsiderIgnoreFragmentObject::addCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlConsiderIgnoreFragmentObject::removeCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlConsiderIgnoreFragmentObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlConsiderIgnoreFragmentObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlConsiderIgnoreFragmentObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlConsiderIgnoreFragmentObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [CombinedFragment]

void QUmlConsiderIgnoreFragmentObject::addCfragmentGate(QObject *cfragmentGate)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addCfragmentGate(qmodelingobjectproperty_cast<QUmlGate *>(cfragmentGate));
}

void QUmlConsiderIgnoreFragmentObject::removeCfragmentGate(QObject *cfragmentGate)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeCfragmentGate(qmodelingobjectproperty_cast<QUmlGate *>(cfragmentGate));
}

void QUmlConsiderIgnoreFragmentObject::setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setInteractionOperator(interactionOperator);
}
    
void QUmlConsiderIgnoreFragmentObject::addOperand(QObject *operand)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(operand));
}

void QUmlConsiderIgnoreFragmentObject::removeOperand(QObject *operand)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(operand));
}

// SLOTS FOR OWNED ATTRIBUTES [ConsiderIgnoreFragment]

void QUmlConsiderIgnoreFragmentObject::addMessage(QObject *message)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addMessage(qmodelingobjectproperty_cast<QUmlNamedElement *>(message));
}

void QUmlConsiderIgnoreFragmentObject::removeMessage(QObject *message)
{
    qmodelingobjectproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeMessage(qmodelingobjectproperty_cast<QUmlNamedElement *>(message));
}

QT_END_NAMESPACE

