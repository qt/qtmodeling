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
#include "qumloccurrencespecificationobject_p.h"

#include <QtUml/QUmlOccurrenceSpecification>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlOccurrenceSpecificationObject::QUmlOccurrenceSpecificationObject(QUmlOccurrenceSpecification *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlOccurrenceSpecificationObject::~QUmlOccurrenceSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOccurrenceSpecificationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOccurrenceSpecificationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOccurrenceSpecificationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlOccurrenceSpecificationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlOccurrenceSpecificationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->name();
}

QObject *QUmlOccurrenceSpecificationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->nameExpression()->asQObject();
}

QObject *QUmlOccurrenceSpecificationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->namespace_()->asQObject();
}

QString QUmlOccurrenceSpecificationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlOccurrenceSpecificationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

QObject *QUmlOccurrenceSpecificationObject::enclosingInteraction() const
{
    if (!qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlOccurrenceSpecificationObject::enclosingOperand() const
{
    if (!qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlOccurrenceSpecificationObject::generalOrdering() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->generalOrdering())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [OccurrenceSpecification]

QObject *QUmlOccurrenceSpecificationObject::covered() const
{
    if (!qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->covered())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->covered()->asQObject();
}

const QSet<QObject *> QUmlOccurrenceSpecificationObject::toAfter() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->toAfter())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOccurrenceSpecificationObject::toBefore() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->toBefore())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOccurrenceSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOccurrenceSpecificationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlOccurrenceSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlOccurrenceSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOccurrenceSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlOccurrenceSpecificationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOccurrenceSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOccurrenceSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOccurrenceSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOccurrenceSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOccurrenceSpecificationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOccurrenceSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOccurrenceSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOccurrenceSpecificationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->setName(name);
}

void QUmlOccurrenceSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlOccurrenceSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlOccurrenceSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->setQualifiedName(qualifiedName);
}

void QUmlOccurrenceSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlOccurrenceSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlOccurrenceSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlOccurrenceSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlOccurrenceSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [OccurrenceSpecification]

void QUmlOccurrenceSpecificationObject::setCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->setCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlOccurrenceSpecificationObject::addToAfter(QObject *toAfter)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->addToAfter(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlOccurrenceSpecificationObject::removeToAfter(QObject *toAfter)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->removeToAfter(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlOccurrenceSpecificationObject::addToBefore(QObject *toBefore)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->addToBefore(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

void QUmlOccurrenceSpecificationObject::removeToBefore(QObject *toBefore)
{
    qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(this)->removeToBefore(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

QT_END_NAMESPACE

