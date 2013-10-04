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

#include <QtUml/QUmlClause>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlClauseObject::QUmlClauseObject(QUmlClause *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlClauseObject::~QUmlClauseObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlClause *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlClauseObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlClause *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClauseObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlClause *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlClauseObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlClause *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClause *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Clause]

const QSet<QObject *> QUmlClauseObject::body() const
{
    QSet<QObject *> set;
    foreach (QUmlExecutableNode *element, qmodelingobjectproperty_cast<QUmlClause *>(this)->body())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlClauseObject::bodyOutput() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlClause *>(this)->bodyOutput())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlClauseObject::decider() const
{
    if (!qmodelingobjectproperty_cast<QUmlClause *>(this)->decider())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClause *>(this)->decider()->asQObject();
}

const QSet<QObject *> QUmlClauseObject::predecessorClause() const
{
    QSet<QObject *> set;
    foreach (QUmlClause *element, qmodelingobjectproperty_cast<QUmlClause *>(this)->predecessorClause())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClauseObject::successorClause() const
{
    QSet<QObject *> set;
    foreach (QUmlClause *element, qmodelingobjectproperty_cast<QUmlClause *>(this)->successorClause())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClauseObject::test() const
{
    QSet<QObject *> set;
    foreach (QUmlExecutableNode *element, qmodelingobjectproperty_cast<QUmlClause *>(this)->test())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlClauseObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlClause *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlClauseObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlClause *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlClauseObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClauseObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClauseObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClauseObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClauseObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Clause]

void QUmlClauseObject::addBody(QObject *body)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->addBody(qmodelingobjectproperty_cast<QUmlExecutableNode *>(body));
}

void QUmlClauseObject::removeBody(QObject *body)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->removeBody(qmodelingobjectproperty_cast<QUmlExecutableNode *>(body));
}

void QUmlClauseObject::addBodyOutput(QObject *bodyOutput)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->addBodyOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(bodyOutput));
}

void QUmlClauseObject::removeBodyOutput(QObject *bodyOutput)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->removeBodyOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(bodyOutput));
}

void QUmlClauseObject::setDecider(QObject *decider)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->setDecider(qmodelingobjectproperty_cast<QUmlOutputPin *>(decider));
}

void QUmlClauseObject::addPredecessorClause(QObject *predecessorClause)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->addPredecessorClause(qmodelingobjectproperty_cast<QUmlClause *>(predecessorClause));
}

void QUmlClauseObject::removePredecessorClause(QObject *predecessorClause)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->removePredecessorClause(qmodelingobjectproperty_cast<QUmlClause *>(predecessorClause));
}

void QUmlClauseObject::addSuccessorClause(QObject *successorClause)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->addSuccessorClause(qmodelingobjectproperty_cast<QUmlClause *>(successorClause));
}

void QUmlClauseObject::removeSuccessorClause(QObject *successorClause)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->removeSuccessorClause(qmodelingobjectproperty_cast<QUmlClause *>(successorClause));
}

void QUmlClauseObject::addTest(QObject *test)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->addTest(qmodelingobjectproperty_cast<QUmlExecutableNode *>(test));
}

void QUmlClauseObject::removeTest(QObject *test)
{
    qmodelingobjectproperty_cast<QUmlClause *>(this)->removeTest(qmodelingobjectproperty_cast<QUmlExecutableNode *>(test));
}

QT_END_NAMESPACE

