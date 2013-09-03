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
#include "qumlconnectionpointreferenceobject_p.h"

#include <QtUml/QUmlConnectionPointReference>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>

QT_BEGIN_NAMESPACE

QUmlConnectionPointReferenceObject::QUmlConnectionPointReferenceObject(QUmlConnectionPointReference *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlConnectionPointReferenceObject::~QUmlConnectionPointReferenceObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConnectionPointReferenceObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConnectionPointReferenceObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConnectionPointReferenceObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlConnectionPointReferenceObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlConnectionPointReferenceObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->name();
}

QObject *QUmlConnectionPointReferenceObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->nameExpression()->asQObject();
}

QObject *QUmlConnectionPointReferenceObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->namespace_()->asQObject();
}

QString QUmlConnectionPointReferenceObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlConnectionPointReferenceObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->visibility();
}

// OWNED ATTRIBUTES [Vertex]

QObject *QUmlConnectionPointReferenceObject::container() const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->container()->asQObject();
}

const QSet<QObject *> QUmlConnectionPointReferenceObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConnectionPointReferenceObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ConnectionPointReference]

const QSet<QObject *> QUmlConnectionPointReferenceObject::entry() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->entry())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConnectionPointReferenceObject::exit() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->exit())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConnectionPointReferenceObject::state() const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->state()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConnectionPointReferenceObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConnectionPointReferenceObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlConnectionPointReferenceObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlConnectionPointReferenceObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConnectionPointReferenceObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlConnectionPointReferenceObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->separator();
}

// OPERATIONS [Vertex]

QObject *QUmlConnectionPointReferenceObject::containingStateMachine() const
{
    return qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->containingStateMachine()->asQObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConnectionPointReferenceObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectionPointReferenceObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectionPointReferenceObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectionPointReferenceObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectionPointReferenceObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlConnectionPointReferenceObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConnectionPointReferenceObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConnectionPointReferenceObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->setName(name);
}
    
void QUmlConnectionPointReferenceObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlConnectionPointReferenceObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlConnectionPointReferenceObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlConnectionPointReferenceObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [Vertex]

void QUmlConnectionPointReferenceObject::setContainer(QObject *container)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->setContainer(qmodelingobjectproperty_cast<QUmlRegion *>(container));
}

void QUmlConnectionPointReferenceObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlTransition *>(incoming));
}

void QUmlConnectionPointReferenceObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlTransition *>(incoming));
}

void QUmlConnectionPointReferenceObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlTransition *>(outgoing));
}

void QUmlConnectionPointReferenceObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlTransition *>(outgoing));
}

// SLOTS FOR OWNED ATTRIBUTES [ConnectionPointReference]

void QUmlConnectionPointReferenceObject::addEntry(QObject *entry)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->addEntry(qmodelingobjectproperty_cast<QUmlPseudostate *>(entry));
}

void QUmlConnectionPointReferenceObject::removeEntry(QObject *entry)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->removeEntry(qmodelingobjectproperty_cast<QUmlPseudostate *>(entry));
}

void QUmlConnectionPointReferenceObject::addExit(QObject *exit)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->addExit(qmodelingobjectproperty_cast<QUmlPseudostate *>(exit));
}

void QUmlConnectionPointReferenceObject::removeExit(QObject *exit)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->removeExit(qmodelingobjectproperty_cast<QUmlPseudostate *>(exit));
}

void QUmlConnectionPointReferenceObject::setState(QObject *state)
{
    qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(this)->setState(qmodelingobjectproperty_cast<QUmlState *>(state));
}

QT_END_NAMESPACE

