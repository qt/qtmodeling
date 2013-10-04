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
#include "qumlgeneralorderingobject_p.h"

#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOccurrenceSpecification>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlGeneralOrderingObject::QUmlGeneralOrderingObject(QUmlGeneralOrdering *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlGeneralOrderingObject::~QUmlGeneralOrderingObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlGeneralOrderingObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlGeneralOrderingObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlGeneralOrderingObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlGeneralOrderingObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlGeneralOrderingObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->name();
}

QObject *QUmlGeneralOrderingObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->nameExpression()->asQObject();
}

QObject *QUmlGeneralOrderingObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->namespace_()->asQObject();
}

QString QUmlGeneralOrderingObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlGeneralOrderingObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->visibility();
}

// OWNED ATTRIBUTES [GeneralOrdering]

QObject *QUmlGeneralOrderingObject::after() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->after())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->after()->asQObject();
}

QObject *QUmlGeneralOrderingObject::before() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->before())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->before()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlGeneralOrderingObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlGeneralOrderingObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlGeneralOrderingObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlGeneralOrderingObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlGeneralOrderingObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlGeneralOrderingObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlGeneralOrderingObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGeneralOrderingObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGeneralOrderingObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGeneralOrderingObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGeneralOrderingObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlGeneralOrderingObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGeneralOrderingObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGeneralOrderingObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->setName(name);
}

void QUmlGeneralOrderingObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlGeneralOrderingObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlGeneralOrderingObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->setQualifiedName(qualifiedName);
}

void QUmlGeneralOrderingObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [GeneralOrdering]

void QUmlGeneralOrderingObject::setAfter(QObject *after)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->setAfter(qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(after));
}

void QUmlGeneralOrderingObject::setBefore(QObject *before)
{
    qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(this)->setBefore(qmodelingobjectproperty_cast<QUmlOccurrenceSpecification *>(before));
}

QT_END_NAMESPACE

