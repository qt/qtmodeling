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
#include "qumlinterruptibleactivityregionobject_p.h"

#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlInterruptibleActivityRegionObject::QUmlInterruptibleActivityRegionObject(QUmlInterruptibleActivityRegion *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlInterruptibleActivityRegionObject::~QUmlInterruptibleActivityRegionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInterruptibleActivityRegionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInterruptibleActivityRegionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->name();
}

QObject *QUmlInterruptibleActivityRegionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInterruptibleActivityRegionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->namespace_()->asQObject();
}

QString QUmlInterruptibleActivityRegionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlInterruptibleActivityRegionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->visibility();
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::containedEdge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->containedEdge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::containedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->containedNode())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInterruptibleActivityRegionObject::inActivity() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->inActivity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->inActivity()->asQObject();
}

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::subgroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->subgroup())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInterruptibleActivityRegionObject::superGroup() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->superGroup())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->superGroup()->asQObject();
}

// OWNED ATTRIBUTES [InterruptibleActivityRegion]

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::interruptingEdge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->interruptingEdge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::node() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->node())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInterruptibleActivityRegionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInterruptibleActivityRegionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInterruptibleActivityRegionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInterruptibleActivityRegionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInterruptibleActivityRegionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInterruptibleActivityRegionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInterruptibleActivityRegionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInterruptibleActivityRegionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInterruptibleActivityRegionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInterruptibleActivityRegionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInterruptibleActivityRegionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInterruptibleActivityRegionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInterruptibleActivityRegionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInterruptibleActivityRegionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setName(name);
}

void QUmlInterruptibleActivityRegionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInterruptibleActivityRegionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInterruptibleActivityRegionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setQualifiedName(qualifiedName);
}

void QUmlInterruptibleActivityRegionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlInterruptibleActivityRegionObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlInterruptibleActivityRegionObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlInterruptibleActivityRegionObject::addContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlInterruptibleActivityRegionObject::removeContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlInterruptibleActivityRegionObject::setInActivity(QObject *inActivity)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setInActivity(qmodelingobjectproperty_cast<QUmlActivity *>(inActivity));
}

void QUmlInterruptibleActivityRegionObject::addSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlInterruptibleActivityRegionObject::removeSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlInterruptibleActivityRegionObject::setSuperGroup(QObject *superGroup)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setSuperGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [InterruptibleActivityRegion]

void QUmlInterruptibleActivityRegionObject::addInterruptingEdge(QObject *interruptingEdge)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addInterruptingEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(interruptingEdge));
}

void QUmlInterruptibleActivityRegionObject::removeInterruptingEdge(QObject *interruptingEdge)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeInterruptingEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(interruptingEdge));
}

void QUmlInterruptibleActivityRegionObject::addNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlInterruptibleActivityRegionObject::removeNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

QT_END_NAMESPACE

