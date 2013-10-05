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
#include "qumlconnectorobject_p.h"

#include <QtUml/QUmlConnector>
#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlConnectorObject::QUmlConnectorObject(QUmlConnector *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlConnectorObject::~QUmlConnectorObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlConnector *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConnectorObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConnectorObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConnectorObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnector *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnector *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlConnectorObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlConnectorObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlConnector *>(this)->name();
}

QObject *QUmlConnectorObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnector *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnector *>(this)->nameExpression()->asQObject();
}

QObject *QUmlConnectorObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnector *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnector *>(this)->namespace_()->asQObject();
}

QString QUmlConnectorObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlConnector *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlConnectorObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlConnector *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlConnectorObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlConnector *>(this)->isLeaf();
}

const QSet<QObject *> QUmlConnectorObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConnectorObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlConnectorObject::featuringClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->featuringClassifier())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConnectorObject::isStatic() const
{
    return qmodelingobjectproperty_cast<QUmlConnector *>(this)->isStatic();
}

// OWNED ATTRIBUTES [Connector]

const QSet<QObject *> QUmlConnectorObject::contract() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->contract())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlConnectorObject::end() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->end())
        list.append(element->asQObject());
    return list;
}

QtUml::ConnectorKind QUmlConnectorObject::kind() const
{
    return qmodelingobjectproperty_cast<QUmlConnector *>(this)->kind();
}

const QSet<QObject *> QUmlConnectorObject::redefinedConnector() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->redefinedConnector())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConnectorObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlConnector *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConnector *>(this)->type()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConnectorObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConnectorObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlConnector *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlConnectorObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlConnectorObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlConnector *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConnectorObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlConnector *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlConnectorObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlConnector *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlConnectorObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlConnector *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlConnectorObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlConnector *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConnectorObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectorObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectorObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectorObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectorObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlConnectorObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConnectorObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConnectorObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->setName(name);
}

void QUmlConnectorObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlConnectorObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlConnectorObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->setQualifiedName(qualifiedName);
}

void QUmlConnectorObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlConnectorObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->setLeaf(isLeaf);
}

void QUmlConnectorObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlConnectorObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlConnectorObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlConnectorObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlConnectorObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlConnectorObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->addFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlConnectorObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->removeFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlConnectorObject::setStatic(bool isStatic)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->setStatic(isStatic);
}

void QUmlConnectorObject::unsetStatic()
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("static"));
}

// SLOTS FOR OWNED ATTRIBUTES [Connector]

void QUmlConnectorObject::addContract(QObject *contract)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->addContract(qmodelingobjectproperty_cast<QUmlBehavior *>(contract));
}

void QUmlConnectorObject::removeContract(QObject *contract)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->removeContract(qmodelingobjectproperty_cast<QUmlBehavior *>(contract));
}

void QUmlConnectorObject::addEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->addEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlConnectorObject::removeEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->removeEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlConnectorObject::setKind(QtUml::ConnectorKind kind)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->setKind(kind);
}

void QUmlConnectorObject::addRedefinedConnector(QObject *redefinedConnector)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->addRedefinedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(redefinedConnector));
}

void QUmlConnectorObject::removeRedefinedConnector(QObject *redefinedConnector)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->removeRedefinedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(redefinedConnector));
}

void QUmlConnectorObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlConnector *>(this)->setType(qmodelingobjectproperty_cast<QUmlAssociation *>(type));
}

QT_END_NAMESPACE

