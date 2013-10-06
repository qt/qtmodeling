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
#include "qumlparametersetobject_p.h"

#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlParameterSetObject::QUmlParameterSetObject(QUmlParameterSet *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlParameterSetObject::~QUmlParameterSetObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlParameterSetObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlParameterSetObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlParameterSetObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlParameterSetObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlParameterSetObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->name();
}

QObject *QUmlParameterSetObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->nameExpression()->asQObject();
}

QObject *QUmlParameterSetObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->namespace_()->asQObject();
}

QString QUmlParameterSetObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlParameterSetObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->visibility();
}

// OWNED ATTRIBUTES [ParameterSet]

const QSet<QObject *> QUmlParameterSetObject::conditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->conditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlParameterSetObject::parameters() const
{
    QSet<QObject *> set;
    foreach (QUmlParameter *element, qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->parameters())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlParameterSetObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlParameterSetObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlParameterSetObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlParameterSetObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlParameterSetObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlParameterSetObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlParameterSetObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlParameterSetObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlParameterSetObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlParameterSetObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlParameterSetObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlParameterSetObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlParameterSetObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlParameterSetObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->setName(name);
}

void QUmlParameterSetObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlParameterSetObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlParameterSetObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->setQualifiedName(qualifiedName);
}

void QUmlParameterSetObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterSet]

void QUmlParameterSetObject::addCondition(QObject *condition)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->addCondition(qmodelingobjectproperty_cast<QUmlConstraint *>(condition));
}

void QUmlParameterSetObject::removeCondition(QObject *condition)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->removeCondition(qmodelingobjectproperty_cast<QUmlConstraint *>(condition));
}

void QUmlParameterSetObject::addParameter(QObject *parameter)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->addParameter(qmodelingobjectproperty_cast<QUmlParameter *>(parameter));
}

void QUmlParameterSetObject::removeParameter(QObject *parameter)
{
    qmodelingobjectproperty_cast<QUmlParameterSet *>(this)->removeParameter(qmodelingobjectproperty_cast<QUmlParameter *>(parameter));
}

QT_END_NAMESPACE

