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
#include "private/qmodelingobject_p.h"

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

QUmlBehaviorExecutionSpecificationObject::QUmlBehaviorExecutionSpecificationObject(QUmlBehaviorExecutionSpecification *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlBehaviorExecutionSpecificationObject::~QUmlBehaviorExecutionSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlBehaviorExecutionSpecificationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlBehaviorExecutionSpecificationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->name();
}

QObject *QUmlBehaviorExecutionSpecificationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlBehaviorExecutionSpecificationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->namespace_()->asQModelingObject();
}

QString QUmlBehaviorExecutionSpecificationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlBehaviorExecutionSpecificationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->covered())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlBehaviorExecutionSpecificationObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlBehaviorExecutionSpecificationObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutionSpecification]

QObject *QUmlBehaviorExecutionSpecificationObject::finish() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->finish())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->finish()->asQModelingObject();
}

QObject *QUmlBehaviorExecutionSpecificationObject::start() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->start())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->start()->asQModelingObject();
}

// OWNED ATTRIBUTES [BehaviorExecutionSpecification]

QObject *QUmlBehaviorExecutionSpecificationObject::behavior() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->behavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->behavior()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlBehaviorExecutionSpecificationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlBehaviorExecutionSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlBehaviorExecutionSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlBehaviorExecutionSpecificationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlBehaviorExecutionSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlBehaviorExecutionSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlBehaviorExecutionSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlBehaviorExecutionSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlBehaviorExecutionSpecificationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlBehaviorExecutionSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlBehaviorExecutionSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlBehaviorExecutionSpecificationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setName(name);
}

void QUmlBehaviorExecutionSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlBehaviorExecutionSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlBehaviorExecutionSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setQualifiedName(qualifiedName);
}

void QUmlBehaviorExecutionSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlBehaviorExecutionSpecificationObject::addCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlBehaviorExecutionSpecificationObject::removeCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlBehaviorExecutionSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlBehaviorExecutionSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlBehaviorExecutionSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlBehaviorExecutionSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutionSpecification]

void QUmlBehaviorExecutionSpecificationObject::setFinish(QObject *finish)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setFinish(qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(finish));
}

void QUmlBehaviorExecutionSpecificationObject::setStart(QObject *start)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setStart(qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(start));
}

// SLOTS FOR OWNED ATTRIBUTES [BehaviorExecutionSpecification]

void QUmlBehaviorExecutionSpecificationObject::setBehavior(QObject *behavior)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(behavior));
}


void QUmlBehaviorExecutionSpecificationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlInteractionFragment");
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("covered"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingInteraction"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingOperand"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalOrderings"))));

    d->propertyGroups << QStringLiteral("QUmlExecutionSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlExecutionSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("finish"))));
    d->groupProperties.insert(QStringLiteral("QUmlExecutionSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("start"))));

    d->propertyGroups << QStringLiteral("QUmlBehaviorExecutionSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlBehaviorExecutionSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("behavior"))));
}

void QUmlBehaviorExecutionSpecificationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, PropertyClassRole, QStringLiteral("QUmlBehaviorExecutionSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, DocumentationRole, QStringLiteral("Behavior whose execution is occurring."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

