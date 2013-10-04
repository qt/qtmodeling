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
#include "qumlbehaviorexecutionspecificationobject_p.h"

#include <QtUml/QUmlBehaviorExecutionSpecification>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOccurrenceSpecification>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlBehaviorExecutionSpecificationObject::QUmlBehaviorExecutionSpecificationObject(QUmlBehaviorExecutionSpecification *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlBehaviorExecutionSpecificationObject::~QUmlBehaviorExecutionSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlBehaviorExecutionSpecificationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlBehaviorExecutionSpecificationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->name();
}

QObject *QUmlBehaviorExecutionSpecificationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->nameExpression()->asQObject();
}

QObject *QUmlBehaviorExecutionSpecificationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->namespace_()->asQObject();
}

QString QUmlBehaviorExecutionSpecificationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlBehaviorExecutionSpecificationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->covered())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlBehaviorExecutionSpecificationObject::enclosingInteraction() const
{
    if (!qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlBehaviorExecutionSpecificationObject::enclosingOperand() const
{
    if (!qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::generalOrdering() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->generalOrdering())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutionSpecification]

QObject *QUmlBehaviorExecutionSpecificationObject::finish() const
{
    if (!qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->finish())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->finish()->asQObject();
}

QObject *QUmlBehaviorExecutionSpecificationObject::start() const
{
    if (!qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->start())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->start()->asQObject();
}

// OWNED ATTRIBUTES [BehaviorExecutionSpecification]

QObject *QUmlBehaviorExecutionSpecificationObject::behavior() const
{
    if (!qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->behavior())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->behavior()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlBehaviorExecutionSpecificationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlBehaviorExecutionSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlBehaviorExecutionSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlBehaviorExecutionSpecificationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlBehaviorExecutionSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlBehaviorExecutionSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlBehaviorExecutionSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlBehaviorExecutionSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlBehaviorExecutionSpecificationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlBehaviorExecutionSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlBehaviorExecutionSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlBehaviorExecutionSpecificationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setName(name);
}

void QUmlBehaviorExecutionSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlBehaviorExecutionSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlBehaviorExecutionSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setQualifiedName(qualifiedName);
}

void QUmlBehaviorExecutionSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlBehaviorExecutionSpecificationObject::addCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlBehaviorExecutionSpecificationObject::removeCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlBehaviorExecutionSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlBehaviorExecutionSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlBehaviorExecutionSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlBehaviorExecutionSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutionSpecification]

void QUmlBehaviorExecutionSpecificationObject::setFinish(QObject *finish)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setFinish(qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(finish));
}

void QUmlBehaviorExecutionSpecificationObject::setStart(QObject *start)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setStart(qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(start));
}

// SLOTS FOR OWNED ATTRIBUTES [BehaviorExecutionSpecification]

void QUmlBehaviorExecutionSpecificationObject::setBehavior(QObject *behavior)
{
    qmodelingobjectproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(behavior));
}

QT_END_NAMESPACE

