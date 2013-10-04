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
#include "qumlpartdecompositionobject_p.h"

#include <QtUml/QUmlPartDecomposition>
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

QUmlPartDecompositionObject::QUmlPartDecompositionObject(QUmlPartDecomposition *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlPartDecompositionObject::~QUmlPartDecompositionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPartDecompositionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPartDecompositionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPartDecompositionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlPartDecompositionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlPartDecompositionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->name();
}

QObject *QUmlPartDecompositionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->nameExpression()->asQObject();
}

QObject *QUmlPartDecompositionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->namespace_()->asQObject();
}

QString QUmlPartDecompositionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlPartDecompositionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlPartDecompositionObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->covered())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPartDecompositionObject::enclosingInteraction() const
{
    if (!qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlPartDecompositionObject::enclosingOperand() const
{
    if (!qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlPartDecompositionObject::generalOrdering() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->generalOrdering())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [InteractionUse]

const QSet<QObject *> QUmlPartDecompositionObject::actualGate() const
{
    QSet<QObject *> set;
    foreach (QUmlGate *element, qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->actualGate())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlPartDecompositionObject::argument() const
{
    QList<QObject *> list;
    foreach (QUmlValueSpecification *element, qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->argument())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlPartDecompositionObject::refersTo() const
{
    if (!qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->refersTo())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->refersTo()->asQObject();
}

QObject *QUmlPartDecompositionObject::returnValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->returnValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->returnValue()->asQObject();
}

QObject *QUmlPartDecompositionObject::returnValueRecipient() const
{
    if (!qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->returnValueRecipient())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->returnValueRecipient()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPartDecompositionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPartDecompositionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlPartDecompositionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlPartDecompositionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPartDecompositionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlPartDecompositionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPartDecompositionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPartDecompositionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPartDecompositionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPartDecompositionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPartDecompositionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlPartDecompositionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPartDecompositionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPartDecompositionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->setName(name);
}

void QUmlPartDecompositionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlPartDecompositionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlPartDecompositionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->setQualifiedName(qualifiedName);
}

void QUmlPartDecompositionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlPartDecompositionObject::addCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->addCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlPartDecompositionObject::removeCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->removeCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlPartDecompositionObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlPartDecompositionObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlPartDecompositionObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlPartDecompositionObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionUse]

void QUmlPartDecompositionObject::addActualGate(QObject *actualGate)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->addActualGate(qmodelingobjectproperty_cast<QUmlGate *>(actualGate));
}

void QUmlPartDecompositionObject::removeActualGate(QObject *actualGate)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->removeActualGate(qmodelingobjectproperty_cast<QUmlGate *>(actualGate));
}

void QUmlPartDecompositionObject::addArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->addArgument(qmodelingobjectproperty_cast<QUmlValueSpecification *>(argument));
}

void QUmlPartDecompositionObject::removeArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->removeArgument(qmodelingobjectproperty_cast<QUmlValueSpecification *>(argument));
}

void QUmlPartDecompositionObject::setRefersTo(QObject *refersTo)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->setRefersTo(qmodelingobjectproperty_cast<QUmlInteraction *>(refersTo));
}

void QUmlPartDecompositionObject::setReturnValue(QObject *returnValue)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->setReturnValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(returnValue));
}

void QUmlPartDecompositionObject::setReturnValueRecipient(QObject *returnValueRecipient)
{
    qmodelingobjectproperty_cast<QUmlPartDecomposition *>(this)->setReturnValueRecipient(qmodelingobjectproperty_cast<QUmlProperty *>(returnValueRecipient));
}

QT_END_NAMESPACE

