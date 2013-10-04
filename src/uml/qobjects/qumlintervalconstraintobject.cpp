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
#include "qumlintervalconstraintobject_p.h"

#include <QtUml/QUmlIntervalConstraint>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterval>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlIntervalConstraintObject::QUmlIntervalConstraintObject(QUmlIntervalConstraint *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlIntervalConstraintObject::~QUmlIntervalConstraintObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlIntervalConstraintObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlIntervalConstraintObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlIntervalConstraintObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlIntervalConstraintObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlIntervalConstraintObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlIntervalConstraintObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlIntervalConstraintObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->name();
}

QObject *QUmlIntervalConstraintObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->nameExpression()->asQObject();
}

QObject *QUmlIntervalConstraintObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->namespace_()->asQObject();
}

QString QUmlIntervalConstraintObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlIntervalConstraintObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->visibility();
}

// OWNED ATTRIBUTES [Constraint]

const QList<QObject *> QUmlIntervalConstraintObject::constrainedElement() const
{
    QList<QObject *> list;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->constrainedElement())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlIntervalConstraintObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->context()->asQObject();
}
// OWNED ATTRIBUTES [IntervalConstraint]

QObject *QUmlIntervalConstraintObject::specification() const
{
    if (!qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->specification())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->specification()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlIntervalConstraintObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlIntervalConstraintObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlIntervalConstraintObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlIntervalConstraintObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlIntervalConstraintObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlIntervalConstraintObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlIntervalConstraintObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlIntervalConstraintObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlIntervalConstraintObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlIntervalConstraintObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlIntervalConstraintObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlIntervalConstraintObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlIntervalConstraintObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlIntervalConstraintObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlIntervalConstraintObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlIntervalConstraintObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlIntervalConstraintObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlIntervalConstraintObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->setName(name);
}

void QUmlIntervalConstraintObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlIntervalConstraintObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlIntervalConstraintObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlIntervalConstraintObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlIntervalConstraintObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Constraint]

void QUmlIntervalConstraintObject::addConstrainedElement(QObject *constrainedElement)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->addConstrainedElement(qmodelingobjectproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlIntervalConstraintObject::removeConstrainedElement(QObject *constrainedElement)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->removeConstrainedElement(qmodelingobjectproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlIntervalConstraintObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->setContext(qmodelingobjectproperty_cast<QUmlNamespace *>(context));
}
// SLOTS FOR OWNED ATTRIBUTES [IntervalConstraint]

void QUmlIntervalConstraintObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlIntervalConstraint *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlInterval *>(specification));
}

QT_END_NAMESPACE

