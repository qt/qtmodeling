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
#include "qumlexecutionoccurrencespecificationobject_p.h"

#include <QtUml/QUmlExecutionOccurrenceSpecification>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExecutionSpecification>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlExecutionOccurrenceSpecificationObject::QUmlExecutionOccurrenceSpecificationObject(QUmlExecutionOccurrenceSpecification *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlExecutionOccurrenceSpecificationObject::~QUmlExecutionOccurrenceSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExecutionOccurrenceSpecificationObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlExecutionOccurrenceSpecificationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->name();
}

QObject *QUmlExecutionOccurrenceSpecificationObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->nameExpression()->asQObject();
}

QObject *QUmlExecutionOccurrenceSpecificationObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->namespace_()->asQObject();
}

QString QUmlExecutionOccurrenceSpecificationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlExecutionOccurrenceSpecificationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

QObject *QUmlExecutionOccurrenceSpecificationObject::enclosingInteraction() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlExecutionOccurrenceSpecificationObject::enclosingOperand() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::generalOrdering() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->generalOrdering())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [OccurrenceSpecification]

QObject *QUmlExecutionOccurrenceSpecificationObject::covered() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->covered()->asQObject();
}

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::toAfter() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->toAfter())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::toBefore() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->toBefore())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutionOccurrenceSpecification]

QObject *QUmlExecutionOccurrenceSpecificationObject::execution() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->execution()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExecutionOccurrenceSpecificationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExecutionOccurrenceSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExecutionOccurrenceSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExecutionOccurrenceSpecificationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExecutionOccurrenceSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExecutionOccurrenceSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExecutionOccurrenceSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExecutionOccurrenceSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExecutionOccurrenceSpecificationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExecutionOccurrenceSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExecutionOccurrenceSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExecutionOccurrenceSpecificationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setName(name);
}
    
void QUmlExecutionOccurrenceSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExecutionOccurrenceSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExecutionOccurrenceSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlExecutionOccurrenceSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlExecutionOccurrenceSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlExecutionOccurrenceSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlExecutionOccurrenceSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlExecutionOccurrenceSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [OccurrenceSpecification]

void QUmlExecutionOccurrenceSpecificationObject::setCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlExecutionOccurrenceSpecificationObject::addToAfter(QObject *toAfter)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addToAfter(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlExecutionOccurrenceSpecificationObject::removeToAfter(QObject *toAfter)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeToAfter(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlExecutionOccurrenceSpecificationObject::addToBefore(QObject *toBefore)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addToBefore(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

void QUmlExecutionOccurrenceSpecificationObject::removeToBefore(QObject *toBefore)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeToBefore(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutionOccurrenceSpecification]

void QUmlExecutionOccurrenceSpecificationObject::setExecution(QObject *execution)
{
    qmodelingobjectproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setExecution(qmodelingobjectproperty_cast<QUmlExecutionSpecification *>(execution));
}

QT_END_NAMESPACE

