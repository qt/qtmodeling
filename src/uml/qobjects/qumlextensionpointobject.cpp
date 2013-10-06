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
#include "qumlextensionpointobject_p.h"

#include <QtUml/QUmlExtensionPoint>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlExtensionPointObject::QUmlExtensionPointObject(QUmlExtensionPoint *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlExtensionPointObject::~QUmlExtensionPointObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExtensionPointObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionPointObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExtensionPointObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExtensionPointObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlExtensionPointObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->name();
}

QObject *QUmlExtensionPointObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->nameExpression()->asQObject();
}

QObject *QUmlExtensionPointObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->namespace_()->asQObject();
}

QString QUmlExtensionPointObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlExtensionPointObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlExtensionPointObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->isLeaf();
}

const QSet<QObject *> QUmlExtensionPointObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionPointObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExtensionPoint]

QObject *QUmlExtensionPointObject::useCase() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->useCase())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->useCase()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExtensionPointObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtensionPointObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExtensionPointObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlExtensionPointObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtensionPointObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExtensionPointObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlExtensionPointObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlExtensionPointObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExtensionPointObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExtensionPointObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExtensionPointObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtensionPointObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtensionPointObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExtensionPointObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtensionPointObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtensionPointObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->setName(name);
}

void QUmlExtensionPointObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExtensionPointObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExtensionPointObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->setQualifiedName(qualifiedName);
}

void QUmlExtensionPointObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExtensionPointObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->setLeaf(isLeaf);
}

void QUmlExtensionPointObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlExtensionPointObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExtensionPointObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExtensionPointObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlExtensionPointObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ExtensionPoint]

void QUmlExtensionPointObject::setUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlExtensionPoint *>(this)->setUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

QT_END_NAMESPACE

