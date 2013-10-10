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
#include "qumlpseudostateobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>

QT_BEGIN_NAMESPACE

QUmlPseudostateObject::QUmlPseudostateObject(QUmlPseudostate *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlPseudostateObject::~QUmlPseudostateObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlPseudostate *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPseudostateObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPseudostateObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlPseudostateObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlPseudostateObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlPseudostateObject::name() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->name();
}

QObject *QUmlPseudostateObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlPseudostateObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->namespace_()->asQModelingObject();
}

QString QUmlPseudostateObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlPseudostateObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->visibility();
}

// OWNED ATTRIBUTES [Vertex]

QObject *QUmlPseudostateObject::container() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->container()->asQModelingObject();
}

const QSet<QObject *> QUmlPseudostateObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPseudostateObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Pseudostate]

QtUml::PseudostateKind QUmlPseudostateObject::kind() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->kind();
}

QObject *QUmlPseudostateObject::state() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->state())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->state()->asQModelingObject();
}

QObject *QUmlPseudostateObject::stateMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->stateMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->stateMachine()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPseudostateObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPseudostateObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlPseudostateObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlPseudostateObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPseudostateObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlPseudostateObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->separator();
}

// OPERATIONS [Vertex]

QObject *QUmlPseudostateObject::containingStateMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->containingStateMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->containingStateMachine()->asQModelingObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPseudostateObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPseudostateObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPseudostateObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPseudostateObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPseudostateObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlPseudostateObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPseudostateObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPseudostateObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setName(name);
}

void QUmlPseudostateObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlPseudostateObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlPseudostateObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setQualifiedName(qualifiedName);
}

void QUmlPseudostateObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Vertex]

void QUmlPseudostateObject::setContainer(QObject *container)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setContainer(qmodelingelementproperty_cast<QUmlRegion *>(container));
}

void QUmlPseudostateObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlTransition *>(incoming));
}

void QUmlPseudostateObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlTransition *>(incoming));
}

void QUmlPseudostateObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlTransition *>(outgoing));
}

void QUmlPseudostateObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlTransition *>(outgoing));
}

// SLOTS FOR OWNED ATTRIBUTES [Pseudostate]

void QUmlPseudostateObject::setKind(QtUml::PseudostateKind kind)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setKind(kind);
}

void QUmlPseudostateObject::unsetKind()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("kind"));
}

void QUmlPseudostateObject::setState(QObject *state)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setState(qmodelingelementproperty_cast<QUmlState *>(state));
}

void QUmlPseudostateObject::setStateMachine(QObject *stateMachine)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setStateMachine(qmodelingelementproperty_cast<QUmlStateMachine *>(stateMachine));
}


void QUmlPseudostateObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlVertex");
    d->groupProperties.insert(QStringLiteral("QUmlVertex"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("container"))));
    d->groupProperties.insert(QStringLiteral("QUmlVertex"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("incomings"))));
    d->groupProperties.insert(QStringLiteral("QUmlVertex"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outgoings"))));

    d->propertyGroups << QStringLiteral("QUmlPseudostate");
    d->groupProperties.insert(QStringLiteral("QUmlPseudostate"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("kind"))));
    d->groupProperties.insert(QStringLiteral("QUmlPseudostate"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("state"))));
    d->groupProperties.insert(QStringLiteral("QUmlPseudostate"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("stateMachine"))));
}

void QUmlPseudostateObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, PropertyClassRole, QStringLiteral("QUmlPseudostate"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, DocumentationRole, QStringLiteral("Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, PropertyClassRole, QStringLiteral("QUmlPseudostate"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, DocumentationRole, QStringLiteral("The State that owns this pseudostate and in which it appears."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, OppositeEndRole, QStringLiteral("State-connectionPoint"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, PropertyClassRole, QStringLiteral("QUmlPseudostate"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, DocumentationRole, QStringLiteral("The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, OppositeEndRole, QStringLiteral("StateMachine-connectionPoint"));

}

QT_END_NAMESPACE

