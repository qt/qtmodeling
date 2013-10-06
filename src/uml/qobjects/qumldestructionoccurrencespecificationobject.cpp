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
#include "qumldestructionoccurrencespecificationobject_p.h"

#include <QtUml/QUmlDestructionOccurrenceSpecification>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlDestructionOccurrenceSpecificationObject::QUmlDestructionOccurrenceSpecificationObject(QUmlDestructionOccurrenceSpecification *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlDestructionOccurrenceSpecificationObject::~QUmlDestructionOccurrenceSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDestructionOccurrenceSpecificationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDestructionOccurrenceSpecificationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->name();
}

QObject *QUmlDestructionOccurrenceSpecificationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDestructionOccurrenceSpecificationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->namespace_()->asQObject();
}

QString QUmlDestructionOccurrenceSpecificationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlDestructionOccurrenceSpecificationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

QObject *QUmlDestructionOccurrenceSpecificationObject::enclosingInteraction() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlDestructionOccurrenceSpecificationObject::enclosingOperand() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->generalOrderings())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [OccurrenceSpecification]

QObject *QUmlDestructionOccurrenceSpecificationObject::covered() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->covered())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->covered()->asQObject();
}

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::toAfters() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->toAfters())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::toBefores() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->toBefores())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [MessageEnd]

QObject *QUmlDestructionOccurrenceSpecificationObject::message() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->message())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->message()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDestructionOccurrenceSpecificationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDestructionOccurrenceSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDestructionOccurrenceSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDestructionOccurrenceSpecificationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDestructionOccurrenceSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDestructionOccurrenceSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDestructionOccurrenceSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDestructionOccurrenceSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDestructionOccurrenceSpecificationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDestructionOccurrenceSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDestructionOccurrenceSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDestructionOccurrenceSpecificationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setName(name);
}

void QUmlDestructionOccurrenceSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDestructionOccurrenceSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDestructionOccurrenceSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setQualifiedName(qualifiedName);
}

void QUmlDestructionOccurrenceSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlDestructionOccurrenceSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlDestructionOccurrenceSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlDestructionOccurrenceSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlDestructionOccurrenceSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [OccurrenceSpecification]

void QUmlDestructionOccurrenceSpecificationObject::setCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlDestructionOccurrenceSpecificationObject::addToAfter(QObject *toAfter)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addToAfter(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlDestructionOccurrenceSpecificationObject::removeToAfter(QObject *toAfter)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeToAfter(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlDestructionOccurrenceSpecificationObject::addToBefore(QObject *toBefore)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addToBefore(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

void QUmlDestructionOccurrenceSpecificationObject::removeToBefore(QObject *toBefore)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeToBefore(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

// SLOTS FOR OWNED ATTRIBUTES [MessageEnd]

void QUmlDestructionOccurrenceSpecificationObject::setMessage(QObject *message)
{
    qmodelingobjectproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setMessage(qmodelingobjectproperty_cast<QUmlMessage *>(message));
}

QT_END_NAMESPACE

