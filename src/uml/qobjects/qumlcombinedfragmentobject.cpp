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
#include "qumlcombinedfragmentobject_p.h"

#include <QtUml/QUmlCombinedFragment>
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

QUmlCombinedFragmentObject::QUmlCombinedFragmentObject(QUmlCombinedFragment *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlCombinedFragmentObject::~QUmlCombinedFragmentObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCombinedFragmentObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCombinedFragmentObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCombinedFragmentObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCombinedFragmentObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlCombinedFragmentObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->name();
}

QObject *QUmlCombinedFragmentObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->nameExpression()->asQObject();
}

QObject *QUmlCombinedFragmentObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->namespace_()->asQObject();
}

QString QUmlCombinedFragmentObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCombinedFragmentObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlCombinedFragmentObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->covered())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCombinedFragmentObject::enclosingInteraction() const
{
    if (!qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlCombinedFragmentObject::enclosingOperand() const
{
    if (!qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlCombinedFragmentObject::generalOrdering() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->generalOrdering())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [CombinedFragment]

const QSet<QObject *> QUmlCombinedFragmentObject::cfragmentGate() const
{
    QSet<QObject *> set;
    foreach (QUmlGate *element, qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->cfragmentGate())
        set.insert(element->asQObject());
    return set;
}

QtUml::InteractionOperatorKind QUmlCombinedFragmentObject::interactionOperator() const
{
    return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->interactionOperator();
}

const QList<QObject *> QUmlCombinedFragmentObject::operand() const
{
    QList<QObject *> list;
    foreach (QUmlInteractionOperand *element, qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->operand())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCombinedFragmentObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCombinedFragmentObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCombinedFragmentObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCombinedFragmentObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCombinedFragmentObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCombinedFragmentObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCombinedFragmentObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCombinedFragmentObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCombinedFragmentObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCombinedFragmentObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCombinedFragmentObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCombinedFragmentObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCombinedFragmentObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCombinedFragmentObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->setName(name);
}

void QUmlCombinedFragmentObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCombinedFragmentObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCombinedFragmentObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->setQualifiedName(qualifiedName);
}

void QUmlCombinedFragmentObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlCombinedFragmentObject::addCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->addCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlCombinedFragmentObject::removeCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->removeCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlCombinedFragmentObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlCombinedFragmentObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlCombinedFragmentObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlCombinedFragmentObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [CombinedFragment]

void QUmlCombinedFragmentObject::addCfragmentGate(QObject *cfragmentGate)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->addCfragmentGate(qmodelingobjectproperty_cast<QUmlGate *>(cfragmentGate));
}

void QUmlCombinedFragmentObject::removeCfragmentGate(QObject *cfragmentGate)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->removeCfragmentGate(qmodelingobjectproperty_cast<QUmlGate *>(cfragmentGate));
}

void QUmlCombinedFragmentObject::setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->setInteractionOperator(interactionOperator);
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->modifiedResettableProperties() << QStringLiteral("interactionOperator");
}

void QUmlCombinedFragmentObject::unsetInteractionOperator()
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("interactionOperator"));
}

void QUmlCombinedFragmentObject::addOperand(QObject *operand)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->addOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(operand));
}

void QUmlCombinedFragmentObject::removeOperand(QObject *operand)
{
    qmodelingobjectproperty_cast<QUmlCombinedFragment *>(this)->removeOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(operand));
}

QT_END_NAMESPACE

