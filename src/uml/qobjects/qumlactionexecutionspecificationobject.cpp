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
#include "private/qmodelingobject_p.h"

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

QUmlActionExecutionSpecificationObject::QUmlActionExecutionSpecificationObject(QUmlActionExecutionSpecification *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlActionExecutionSpecificationObject::~QUmlActionExecutionSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActionExecutionSpecificationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActionExecutionSpecificationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActionExecutionSpecificationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActionExecutionSpecificationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlActionExecutionSpecificationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->name();
}

QObject *QUmlActionExecutionSpecificationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlActionExecutionSpecificationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->namespace_()->asQModelingObject();
}

QString QUmlActionExecutionSpecificationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlActionExecutionSpecificationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlActionExecutionSpecificationObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->covered())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActionExecutionSpecificationObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlActionExecutionSpecificationObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlActionExecutionSpecificationObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutionSpecification]

QObject *QUmlActionExecutionSpecificationObject::finish() const
{
    if (!qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->finish())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->finish()->asQModelingObject();
}

QObject *QUmlActionExecutionSpecificationObject::start() const
{
    if (!qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->start())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->start()->asQModelingObject();
}

// OWNED ATTRIBUTES [ActionExecutionSpecification]

QObject *QUmlActionExecutionSpecificationObject::action() const
{
    if (!qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->action())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->action()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActionExecutionSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActionExecutionSpecificationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActionExecutionSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlActionExecutionSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActionExecutionSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActionExecutionSpecificationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActionExecutionSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActionExecutionSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActionExecutionSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActionExecutionSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActionExecutionSpecificationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActionExecutionSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActionExecutionSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActionExecutionSpecificationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->setName(name);
}

void QUmlActionExecutionSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActionExecutionSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActionExecutionSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->setQualifiedName(qualifiedName);
}

void QUmlActionExecutionSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlActionExecutionSpecificationObject::addCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->addCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlActionExecutionSpecificationObject::removeCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->removeCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlActionExecutionSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlActionExecutionSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlActionExecutionSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlActionExecutionSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutionSpecification]

void QUmlActionExecutionSpecificationObject::setFinish(QObject *finish)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->setFinish(qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(finish));
}

void QUmlActionExecutionSpecificationObject::setStart(QObject *start)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->setStart(qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(start));
}

// SLOTS FOR OWNED ATTRIBUTES [ActionExecutionSpecification]

void QUmlActionExecutionSpecificationObject::setAction(QObject *action)
{
    qmodelingelementproperty_cast<QUmlActionExecutionSpecification *>(this)->setAction(qmodelingelementproperty_cast<QUmlAction *>(action));
}


void QUmlActionExecutionSpecificationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlActionExecutionSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlActionExecutionSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("action"))));
}

void QUmlActionExecutionSpecificationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionExecutionSpecification, action, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionExecutionSpecification, action, PropertyClassRole, QStringLiteral("QUmlActionExecutionSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionExecutionSpecification, action, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionExecutionSpecification, action, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionExecutionSpecification, action, DocumentationRole, QStringLiteral("Action whose execution is occurring."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionExecutionSpecification, action, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionExecutionSpecification, action, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionExecutionSpecification, action, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

