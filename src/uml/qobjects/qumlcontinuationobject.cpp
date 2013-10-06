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
#include "qumlcontinuationobject_p.h"

#include <QtUml/QUmlContinuation>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlContinuationObject::QUmlContinuationObject(QUmlContinuation *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlContinuationObject::~QUmlContinuationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlContinuation *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlContinuationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlContinuation *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlContinuationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlContinuation *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlContinuationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlContinuation *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlContinuationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlContinuation *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlContinuationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->name();
}

QObject *QUmlContinuationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlContinuation *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->nameExpression()->asQObject();
}

QObject *QUmlContinuationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlContinuation *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->namespace_()->asQObject();
}

QString QUmlContinuationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlContinuationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlContinuationObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingobjectproperty_cast<QUmlContinuation *>(this)->covered())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlContinuationObject::enclosingInteraction() const
{
    if (!qmodelingobjectproperty_cast<QUmlContinuation *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlContinuationObject::enclosingOperand() const
{
    if (!qmodelingobjectproperty_cast<QUmlContinuation *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlContinuationObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlContinuation *>(this)->generalOrderings())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Continuation]

bool QUmlContinuationObject::setting() const
{
    return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->setting();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlContinuationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlContinuation *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlContinuationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlContinuationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlContinuation *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlContinuationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlContinuation *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlContinuationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlContinuationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlContinuation *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlContinuationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlContinuationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlContinuationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlContinuationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlContinuationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlContinuationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlContinuationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlContinuationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->setName(name);
}

void QUmlContinuationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlContinuationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlContinuationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->setQualifiedName(qualifiedName);
}

void QUmlContinuationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlContinuationObject::addCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->addCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlContinuationObject::removeCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->removeCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlContinuationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlContinuationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlContinuationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlContinuationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [Continuation]

void QUmlContinuationObject::setSetting(bool setting)
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->setSetting(setting);
}

void QUmlContinuationObject::unsetSetting()
{
    qmodelingobjectproperty_cast<QUmlContinuation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("setting"));
}

QT_END_NAMESPACE

