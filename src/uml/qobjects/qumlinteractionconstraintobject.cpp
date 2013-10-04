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
#include "qumlinteractionconstraintobject_p.h"

#include <QtUml/QUmlInteractionConstraint>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlInteractionConstraintObject::QUmlInteractionConstraintObject(QUmlInteractionConstraint *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlInteractionConstraintObject::~QUmlInteractionConstraintObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInteractionConstraintObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionConstraintObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInteractionConstraintObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlInteractionConstraintObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlInteractionConstraintObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInteractionConstraintObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInteractionConstraintObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->name();
}

QObject *QUmlInteractionConstraintObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInteractionConstraintObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->namespace_()->asQObject();
}

QString QUmlInteractionConstraintObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlInteractionConstraintObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->visibility();
}

// OWNED ATTRIBUTES [Constraint]

const QList<QObject *> QUmlInteractionConstraintObject::constrainedElement() const
{
    QList<QObject *> list;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->constrainedElement())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlInteractionConstraintObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->context()->asQObject();
}

QObject *QUmlInteractionConstraintObject::specification() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->specification())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->specification()->asQObject();
}

// OWNED ATTRIBUTES [InteractionConstraint]

QObject *QUmlInteractionConstraintObject::maxint() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->maxint())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->maxint()->asQObject();
}

QObject *QUmlInteractionConstraintObject::minint() const
{
    if (!qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->minint())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->minint()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInteractionConstraintObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionConstraintObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlInteractionConstraintObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlInteractionConstraintObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInteractionConstraintObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInteractionConstraintObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionConstraintObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInteractionConstraintObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInteractionConstraintObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionConstraintObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionConstraintObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionConstraintObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionConstraintObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInteractionConstraintObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlInteractionConstraintObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInteractionConstraintObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionConstraintObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionConstraintObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setName(name);
}

void QUmlInteractionConstraintObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInteractionConstraintObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInteractionConstraintObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInteractionConstraintObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlInteractionConstraintObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Constraint]

void QUmlInteractionConstraintObject::addConstrainedElement(QObject *constrainedElement)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->addConstrainedElement(qmodelingobjectproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlInteractionConstraintObject::removeConstrainedElement(QObject *constrainedElement)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->removeConstrainedElement(qmodelingobjectproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlInteractionConstraintObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setContext(qmodelingobjectproperty_cast<QUmlNamespace *>(context));
}

void QUmlInteractionConstraintObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlValueSpecification *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionConstraint]

void QUmlInteractionConstraintObject::setMaxint(QObject *maxint)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setMaxint(qmodelingobjectproperty_cast<QUmlValueSpecification *>(maxint));
}

void QUmlInteractionConstraintObject::setMinint(QObject *minint)
{
    qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(this)->setMinint(qmodelingobjectproperty_cast<QUmlValueSpecification *>(minint));
}

QT_END_NAMESPACE

