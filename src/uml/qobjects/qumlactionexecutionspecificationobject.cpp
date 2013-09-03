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
#include "qumlactionexecutionspecificationobject_p.h"

#include <QtUml/QUmlActionExecutionSpecification>
#include <QtUml/QUmlAction>
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

QUmlActionExecutionSpecificationObject::QUmlActionExecutionSpecificationObject(QUmlActionExecutionSpecification *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlActionExecutionSpecificationObject::~QUmlActionExecutionSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActionExecutionSpecificationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActionExecutionSpecificationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActionExecutionSpecificationObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActionExecutionSpecificationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlActionExecutionSpecificationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->name();
}

QObject *QUmlActionExecutionSpecificationObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->nameExpression()->asQObject();
}

QObject *QUmlActionExecutionSpecificationObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->namespace_()->asQObject();
}

QString QUmlActionExecutionSpecificationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlActionExecutionSpecificationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlActionExecutionSpecificationObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->covered())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActionExecutionSpecificationObject::enclosingInteraction() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlActionExecutionSpecificationObject::enclosingOperand() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlActionExecutionSpecificationObject::generalOrdering() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->generalOrdering())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutionSpecification]

QObject *QUmlActionExecutionSpecificationObject::finish() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->finish()->asQObject();
}

QObject *QUmlActionExecutionSpecificationObject::start() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->start()->asQObject();
}

// OWNED ATTRIBUTES [ActionExecutionSpecification]

QObject *QUmlActionExecutionSpecificationObject::action() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->action()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActionExecutionSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActionExecutionSpecificationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActionExecutionSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlActionExecutionSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActionExecutionSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActionExecutionSpecificationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActionExecutionSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActionExecutionSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActionExecutionSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActionExecutionSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActionExecutionSpecificationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActionExecutionSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActionExecutionSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActionExecutionSpecificationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->setName(name);
}
    
void QUmlActionExecutionSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActionExecutionSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActionExecutionSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlActionExecutionSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlActionExecutionSpecificationObject::addCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->addCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlActionExecutionSpecificationObject::removeCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->removeCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlActionExecutionSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlActionExecutionSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlActionExecutionSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlActionExecutionSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutionSpecification]

void QUmlActionExecutionSpecificationObject::setFinish(QObject *finish)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->setFinish(qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(finish));
}

void QUmlActionExecutionSpecificationObject::setStart(QObject *start)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->setStart(qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(start));
}

// SLOTS FOR OWNED ATTRIBUTES [ActionExecutionSpecification]

void QUmlActionExecutionSpecificationObject::setAction(QObject *action)
{
    qmodelingobjectproperty_cast<QUmlActionExecutionSpecification *>(this)->setAction(qmodelingobjectproperty_cast<QUmlAction *>(action));
}

QT_END_NAMESPACE

