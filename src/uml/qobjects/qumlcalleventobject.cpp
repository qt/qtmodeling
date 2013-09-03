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
#include "qumlcalleventobject_p.h"

#include <QtUml/QUmlCallEvent>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlCallEventObject::QUmlCallEventObject(QUmlCallEvent *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlCallEventObject::~QUmlCallEventObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCallEventObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallEventObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCallEventObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlCallEventObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlCallEventObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCallEventObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlCallEventObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->name();
}

QObject *QUmlCallEventObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->nameExpression()->asQObject();
}

QObject *QUmlCallEventObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->namespace_()->asQObject();
}

QString QUmlCallEventObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlCallEventObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->visibility();
}

// OWNED ATTRIBUTES [CallEvent]

QObject *QUmlCallEventObject::operation() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->operation()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCallEventObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCallEventObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlCallEventObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlCallEventObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCallEventObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCallEventObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCallEventObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCallEventObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCallEventObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallEventObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallEventObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallEventObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallEventObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlCallEventObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlCallEventObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCallEventObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallEventObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallEventObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->setName(name);
}
    
void QUmlCallEventObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCallEventObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCallEventObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlCallEventObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [CallEvent]

void QUmlCallEventObject::setOperation(QObject *operation)
{
    qmodelingobjectproperty_cast<QUmlCallEvent *>(this)->setOperation(qmodelingobjectproperty_cast<QUmlOperation *>(operation));
}

QT_END_NAMESPACE

