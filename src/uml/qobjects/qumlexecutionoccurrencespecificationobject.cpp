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
#include "private/qmodelingobject_p.h"

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

QUmlExecutionOccurrenceSpecificationObject::QUmlExecutionOccurrenceSpecificationObject(QUmlExecutionOccurrenceSpecification *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlExecutionOccurrenceSpecificationObject::~QUmlExecutionOccurrenceSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExecutionOccurrenceSpecificationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlExecutionOccurrenceSpecificationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->name();
}

QObject *QUmlExecutionOccurrenceSpecificationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlExecutionOccurrenceSpecificationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->namespace_()->asQModelingObject();
}

QString QUmlExecutionOccurrenceSpecificationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlExecutionOccurrenceSpecificationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

QObject *QUmlExecutionOccurrenceSpecificationObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlExecutionOccurrenceSpecificationObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [OccurrenceSpecification]

QObject *QUmlExecutionOccurrenceSpecificationObject::covered() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->covered())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->covered()->asQModelingObject();
}

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::toAfters() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->toAfters())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::toBefores() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->toBefores())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutionOccurrenceSpecification]

QObject *QUmlExecutionOccurrenceSpecificationObject::execution() const
{
    if (!qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->execution())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->execution()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExecutionOccurrenceSpecificationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExecutionOccurrenceSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlExecutionOccurrenceSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExecutionOccurrenceSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExecutionOccurrenceSpecificationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExecutionOccurrenceSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExecutionOccurrenceSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExecutionOccurrenceSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExecutionOccurrenceSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExecutionOccurrenceSpecificationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExecutionOccurrenceSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExecutionOccurrenceSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExecutionOccurrenceSpecificationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setName(name);
}

void QUmlExecutionOccurrenceSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExecutionOccurrenceSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExecutionOccurrenceSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setQualifiedName(qualifiedName);
}

void QUmlExecutionOccurrenceSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlExecutionOccurrenceSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlExecutionOccurrenceSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlExecutionOccurrenceSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlExecutionOccurrenceSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [OccurrenceSpecification]

void QUmlExecutionOccurrenceSpecificationObject::setCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlExecutionOccurrenceSpecificationObject::addToAfter(QObject *toAfter)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addToAfter(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlExecutionOccurrenceSpecificationObject::removeToAfter(QObject *toAfter)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeToAfter(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlExecutionOccurrenceSpecificationObject::addToBefore(QObject *toBefore)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->addToBefore(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

void QUmlExecutionOccurrenceSpecificationObject::removeToBefore(QObject *toBefore)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->removeToBefore(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutionOccurrenceSpecification]

void QUmlExecutionOccurrenceSpecificationObject::setExecution(QObject *execution)
{
    qmodelingelementproperty_cast<QUmlExecutionOccurrenceSpecification *>(this)->setExecution(qmodelingelementproperty_cast<QUmlExecutionSpecification *>(execution));
}


void QUmlExecutionOccurrenceSpecificationObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingInteraction"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingOperand"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalOrderings"))));

    d->propertyGroups << QStringLiteral("QUmlOccurrenceSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlOccurrenceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("covered"))));
    d->groupProperties.insert(QStringLiteral("QUmlOccurrenceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("toAfters"))));
    d->groupProperties.insert(QStringLiteral("QUmlOccurrenceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("toBefores"))));

    d->propertyGroups << QStringLiteral("QUmlExecutionOccurrenceSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlExecutionOccurrenceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("execution"))));
}

void QUmlExecutionOccurrenceSpecificationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionOccurrenceSpecification, execution, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionOccurrenceSpecification, execution, PropertyClassRole, QStringLiteral("QUmlExecutionOccurrenceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionOccurrenceSpecification, execution, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionOccurrenceSpecification, execution, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionOccurrenceSpecification, execution, DocumentationRole, QStringLiteral("References the execution specification describing the execution that is started or finished at this execution event."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionOccurrenceSpecification, execution, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionOccurrenceSpecification, execution, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionOccurrenceSpecification, execution, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

