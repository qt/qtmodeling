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
#include "private/qmodelingobject_p.h"

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

QUmlConnectionPointReferenceObject::QUmlConnectionPointReferenceObject(QUmlConnectionPointReference *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlConnectionPointReferenceObject::~QUmlConnectionPointReferenceObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConnectionPointReferenceObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConnectionPointReferenceObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConnectionPointReferenceObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlConnectionPointReferenceObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlConnectionPointReferenceObject::name() const
{
    return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->name();
}

QObject *QUmlConnectionPointReferenceObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlConnectionPointReferenceObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->namespace_()->asQModelingObject();
}

QString QUmlConnectionPointReferenceObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlConnectionPointReferenceObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->visibility();
}

// OWNED ATTRIBUTES [Vertex]

QObject *QUmlConnectionPointReferenceObject::container() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->container()->asQModelingObject();
}

const QSet<QObject *> QUmlConnectionPointReferenceObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConnectionPointReferenceObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ConnectionPointReference]

const QSet<QObject *> QUmlConnectionPointReferenceObject::entries() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->entries())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConnectionPointReferenceObject::exits() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->exits())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConnectionPointReferenceObject::state() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->state())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->state()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConnectionPointReferenceObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConnectionPointReferenceObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlConnectionPointReferenceObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlConnectionPointReferenceObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConnectionPointReferenceObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlConnectionPointReferenceObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->separator();
}

// OPERATIONS [Vertex]

QObject *QUmlConnectionPointReferenceObject::containingStateMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->containingStateMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->containingStateMachine()->asQModelingObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConnectionPointReferenceObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectionPointReferenceObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectionPointReferenceObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectionPointReferenceObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectionPointReferenceObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlConnectionPointReferenceObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConnectionPointReferenceObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConnectionPointReferenceObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->setName(name);
}

void QUmlConnectionPointReferenceObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlConnectionPointReferenceObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlConnectionPointReferenceObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->setQualifiedName(qualifiedName);
}

void QUmlConnectionPointReferenceObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Vertex]

void QUmlConnectionPointReferenceObject::setContainer(QObject *container)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->setContainer(qmodelingelementproperty_cast<QUmlRegion *>(container));
}

void QUmlConnectionPointReferenceObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlTransition *>(incoming));
}

void QUmlConnectionPointReferenceObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlTransition *>(incoming));
}

void QUmlConnectionPointReferenceObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlTransition *>(outgoing));
}

void QUmlConnectionPointReferenceObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlTransition *>(outgoing));
}

// SLOTS FOR OWNED ATTRIBUTES [ConnectionPointReference]

void QUmlConnectionPointReferenceObject::addEntry(QObject *entry)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->addEntry(qmodelingelementproperty_cast<QUmlPseudostate *>(entry));
}

void QUmlConnectionPointReferenceObject::removeEntry(QObject *entry)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->removeEntry(qmodelingelementproperty_cast<QUmlPseudostate *>(entry));
}

void QUmlConnectionPointReferenceObject::addExit(QObject *exit)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->addExit(qmodelingelementproperty_cast<QUmlPseudostate *>(exit));
}

void QUmlConnectionPointReferenceObject::removeExit(QObject *exit)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->removeExit(qmodelingelementproperty_cast<QUmlPseudostate *>(exit));
}

void QUmlConnectionPointReferenceObject::setState(QObject *state)
{
    qmodelingelementproperty_cast<QUmlConnectionPointReference *>(this)->setState(qmodelingelementproperty_cast<QUmlState *>(state));
}


void QUmlConnectionPointReferenceObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlConnectionPointReference");
    d->groupProperties.insert(QStringLiteral("QUmlConnectionPointReference"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("entries"))));
    d->groupProperties.insert(QStringLiteral("QUmlConnectionPointReference"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("exits"))));
    d->groupProperties.insert(QStringLiteral("QUmlConnectionPointReference"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("state"))));
}

void QUmlConnectionPointReferenceObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, entries, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, entries, PropertyClassRole, QStringLiteral("QUmlConnectionPointReference"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, entries, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, entries, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, entries, DocumentationRole, QStringLiteral("The entryPoint kind pseudo states corresponding to this connection point."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, entries, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, entries, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, entries, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, exits, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, exits, PropertyClassRole, QStringLiteral("QUmlConnectionPointReference"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, exits, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, exits, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, exits, DocumentationRole, QStringLiteral("The exitPoints kind pseudo states corresponding to this connection point."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, exits, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, exits, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, exits, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, state, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, state, PropertyClassRole, QStringLiteral("QUmlConnectionPointReference"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, state, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, state, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, state, DocumentationRole, QStringLiteral("The State in which the connection point refreshens are defined."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, state, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, state, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectionPointReference, state, OppositeEndRole, QStringLiteral("State-connection"));

}

QT_END_NAMESPACE

