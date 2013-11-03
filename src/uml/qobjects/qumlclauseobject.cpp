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
#include "qumlclauseobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlClause>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlClauseObject::QUmlClauseObject(QUmlClause *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlClauseObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlClause *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlClauseObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlClause *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlClauseObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlClause *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlClause *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Clause]

const QSet<QObject *> QUmlClauseObject::bodies() const
{
    QSet<QObject *> set;
    foreach (QUmlExecutableNode *element, qmodelingelementproperty_cast<QUmlClause *>(this)->bodies())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlClauseObject::bodyOutputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlClause *>(this)->bodyOutputs())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlClauseObject::decider() const
{
    if (!qmodelingelementproperty_cast<QUmlClause *>(this)->decider())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlClause *>(this)->decider()->asQModelingObject();
}

const QSet<QObject *> QUmlClauseObject::predecessorClauses() const
{
    QSet<QObject *> set;
    foreach (QUmlClause *element, qmodelingelementproperty_cast<QUmlClause *>(this)->predecessorClauses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlClauseObject::successorClauses() const
{
    QSet<QObject *> set;
    foreach (QUmlClause *element, qmodelingelementproperty_cast<QUmlClause *>(this)->successorClauses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlClauseObject::tests() const
{
    QSet<QObject *> set;
    foreach (QUmlExecutableNode *element, qmodelingelementproperty_cast<QUmlClause *>(this)->tests())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlClauseObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlClause *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlClauseObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlClause *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlClauseObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlClauseObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlClauseObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlClauseObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlClauseObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [Clause]

void QUmlClauseObject::addBody(QObject *body)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->addBody(qmodelingelementproperty_cast<QUmlExecutableNode *>(body));
    emit bodiesChanged(this->bodies());
}

void QUmlClauseObject::removeBody(QObject *body)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->removeBody(qmodelingelementproperty_cast<QUmlExecutableNode *>(body));
    emit bodiesChanged(this->bodies());
}

void QUmlClauseObject::addBodyOutput(QObject *bodyOutput)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->addBodyOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(bodyOutput));
    emit bodyOutputsChanged(this->bodyOutputs());
}

void QUmlClauseObject::removeBodyOutput(QObject *bodyOutput)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->removeBodyOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(bodyOutput));
    emit bodyOutputsChanged(this->bodyOutputs());
}

void QUmlClauseObject::setDecider(QObject *decider)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->setDecider(qmodelingelementproperty_cast<QUmlOutputPin *>(decider));
    emit deciderChanged(this->decider());
}

void QUmlClauseObject::addPredecessorClause(QObject *predecessorClause)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->addPredecessorClause(qmodelingelementproperty_cast<QUmlClause *>(predecessorClause));
    emit predecessorClausesChanged(this->predecessorClauses());
}

void QUmlClauseObject::removePredecessorClause(QObject *predecessorClause)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->removePredecessorClause(qmodelingelementproperty_cast<QUmlClause *>(predecessorClause));
    emit predecessorClausesChanged(this->predecessorClauses());
}

void QUmlClauseObject::addSuccessorClause(QObject *successorClause)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->addSuccessorClause(qmodelingelementproperty_cast<QUmlClause *>(successorClause));
    emit successorClausesChanged(this->successorClauses());
}

void QUmlClauseObject::removeSuccessorClause(QObject *successorClause)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->removeSuccessorClause(qmodelingelementproperty_cast<QUmlClause *>(successorClause));
    emit successorClausesChanged(this->successorClauses());
}

void QUmlClauseObject::addTest(QObject *test)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->addTest(qmodelingelementproperty_cast<QUmlExecutableNode *>(test));
    emit testsChanged(this->tests());
}

void QUmlClauseObject::removeTest(QObject *test)
{
    qmodelingelementproperty_cast<QUmlClause *>(this)->removeTest(qmodelingelementproperty_cast<QUmlExecutableNode *>(test));
    emit testsChanged(this->tests());
}


void QUmlClauseObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlClause");
    d->groupProperties.insert(QStringLiteral("QUmlClause"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("bodies"))));
    d->groupProperties.insert(QStringLiteral("QUmlClause"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("bodyOutputs"))));
    d->groupProperties.insert(QStringLiteral("QUmlClause"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("decider"))));
    d->groupProperties.insert(QStringLiteral("QUmlClause"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("predecessorClauses"))));
    d->groupProperties.insert(QStringLiteral("QUmlClause"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("successorClauses"))));
    d->groupProperties.insert(QStringLiteral("QUmlClause"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("tests"))));
}

void QUmlClauseObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodies, PropertyClassRole, QStringLiteral("QUmlClause"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodies, DocumentationRole, QStringLiteral("A nested activity fragment that is executed if the test evaluates to true and the clause is chosen over any concurrent clauses that also evaluate to true."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodies, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodies, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodyOutputs, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodyOutputs, PropertyClassRole, QStringLiteral("QUmlClause"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodyOutputs, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodyOutputs, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodyOutputs, DocumentationRole, QStringLiteral("A list of output pins within the body fragment whose values are moved to the result pins of the containing conditional node after execution of the clause body."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodyOutputs, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodyOutputs, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, bodyOutputs, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, decider, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, decider, PropertyClassRole, QStringLiteral("QUmlClause"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, decider, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, decider, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, decider, DocumentationRole, QStringLiteral("An output pin within the test fragment the value of which is examined after execution of the test to determine whether the body should be executed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, decider, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, decider, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, decider, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, predecessorClauses, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, predecessorClauses, PropertyClassRole, QStringLiteral("QUmlClause"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, predecessorClauses, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, predecessorClauses, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, predecessorClauses, DocumentationRole, QStringLiteral("A set of clauses whose tests must all evaluate false before the current clause can be tested."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, predecessorClauses, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, predecessorClauses, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, predecessorClauses, OppositeEndRole, QStringLiteral("Clause-successorClause"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, successorClauses, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, successorClauses, PropertyClassRole, QStringLiteral("QUmlClause"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, successorClauses, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, successorClauses, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, successorClauses, DocumentationRole, QStringLiteral("A set of clauses which may not be tested unless the current clause tests false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, successorClauses, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, successorClauses, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, successorClauses, OppositeEndRole, QStringLiteral("Clause-predecessorClause"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, tests, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, tests, PropertyClassRole, QStringLiteral("QUmlClause"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, tests, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, tests, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, tests, DocumentationRole, QStringLiteral("A nested activity fragment with a designated output pin that specifies the result of the test."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, tests, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, tests, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClause, tests, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

