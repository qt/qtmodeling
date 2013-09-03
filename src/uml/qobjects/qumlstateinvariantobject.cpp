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
#include "qumlstateinvariantobject_p.h"

#include <QtUml/QUmlStateInvariant>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
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

QUmlStateInvariantObject::QUmlStateInvariantObject(QUmlStateInvariant *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlStateInvariantObject::~QUmlStateInvariantObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStateInvariantObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateInvariantObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStateInvariantObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStateInvariantObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlStateInvariantObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->name();
}

QObject *QUmlStateInvariantObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->nameExpression()->asQObject();
}

QObject *QUmlStateInvariantObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->namespace_()->asQObject();
}

QString QUmlStateInvariantObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlStateInvariantObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

QObject *QUmlStateInvariantObject::enclosingInteraction() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlStateInvariantObject::enclosingOperand() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlStateInvariantObject::generalOrdering() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->generalOrdering())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StateInvariant]

QObject *QUmlStateInvariantObject::covered() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->covered()->asQObject();
}

QObject *QUmlStateInvariantObject::invariant() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->invariant()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStateInvariantObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateInvariantObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStateInvariantObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlStateInvariantObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateInvariantObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStateInvariantObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStateInvariantObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStateInvariantObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStateInvariantObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStateInvariantObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStateInvariantObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStateInvariantObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStateInvariantObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStateInvariantObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->setName(name);
}
    
void QUmlStateInvariantObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStateInvariantObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStateInvariantObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlStateInvariantObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlStateInvariantObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlStateInvariantObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlStateInvariantObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlStateInvariantObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [StateInvariant]

void QUmlStateInvariantObject::setCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->setCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlStateInvariantObject::setInvariant(QObject *invariant)
{
    qmodelingobjectproperty_cast<QUmlStateInvariant *>(this)->setInvariant(qmodelingobjectproperty_cast<QUmlConstraint *>(invariant));
}

QT_END_NAMESPACE

