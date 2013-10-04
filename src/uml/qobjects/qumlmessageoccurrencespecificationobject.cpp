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
#include "qumlmessageoccurrencespecificationobject_p.h"

#include <QtUml/QUmlMessageOccurrenceSpecification>
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

QUmlMessageOccurrenceSpecificationObject::QUmlMessageOccurrenceSpecificationObject(QUmlMessageOccurrenceSpecification *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlMessageOccurrenceSpecificationObject::~QUmlMessageOccurrenceSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlMessageOccurrenceSpecificationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlMessageOccurrenceSpecificationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->name();
}

QObject *QUmlMessageOccurrenceSpecificationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->nameExpression()->asQObject();
}

QObject *QUmlMessageOccurrenceSpecificationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->namespace_()->asQObject();
}

QString QUmlMessageOccurrenceSpecificationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlMessageOccurrenceSpecificationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

QObject *QUmlMessageOccurrenceSpecificationObject::enclosingInteraction() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlMessageOccurrenceSpecificationObject::enclosingOperand() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::generalOrdering() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->generalOrdering())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [OccurrenceSpecification]

QObject *QUmlMessageOccurrenceSpecificationObject::covered() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->covered())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->covered()->asQObject();
}

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::toAfter() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->toAfter())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::toBefore() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->toBefore())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [MessageEnd]

QObject *QUmlMessageOccurrenceSpecificationObject::message() const
{
    if (!qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->message())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->message()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlMessageOccurrenceSpecificationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlMessageOccurrenceSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlMessageOccurrenceSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlMessageOccurrenceSpecificationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlMessageOccurrenceSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlMessageOccurrenceSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlMessageOccurrenceSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlMessageOccurrenceSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlMessageOccurrenceSpecificationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlMessageOccurrenceSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlMessageOccurrenceSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlMessageOccurrenceSpecificationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setName(name);
}

void QUmlMessageOccurrenceSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlMessageOccurrenceSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlMessageOccurrenceSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setQualifiedName(qualifiedName);
}

void QUmlMessageOccurrenceSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlMessageOccurrenceSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlMessageOccurrenceSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlMessageOccurrenceSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlMessageOccurrenceSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [OccurrenceSpecification]

void QUmlMessageOccurrenceSpecificationObject::setCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlMessageOccurrenceSpecificationObject::addToAfter(QObject *toAfter)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addToAfter(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlMessageOccurrenceSpecificationObject::removeToAfter(QObject *toAfter)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeToAfter(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlMessageOccurrenceSpecificationObject::addToBefore(QObject *toBefore)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addToBefore(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

void QUmlMessageOccurrenceSpecificationObject::removeToBefore(QObject *toBefore)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeToBefore(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

// SLOTS FOR OWNED ATTRIBUTES [MessageEnd]

void QUmlMessageOccurrenceSpecificationObject::setMessage(QObject *message)
{
    qmodelingobjectproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setMessage(qmodelingobjectproperty_cast<QUmlMessage *>(message));
}

QT_END_NAMESPACE

