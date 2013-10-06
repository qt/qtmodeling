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
#include "qumlconstraintobject_p.h"

#include <QtUml/QUmlConstraint>
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

QUmlConstraintObject::QUmlConstraintObject(QUmlConstraint *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlConstraintObject::~QUmlConstraintObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlConstraint *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConstraintObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlConstraint *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConstraintObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConstraint *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConstraintObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlConstraint *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlConstraintObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlConstraint *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlConstraintObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlConstraint *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlConstraintObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlConstraint *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlConstraintObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->name();
}

QObject *QUmlConstraintObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlConstraint *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->nameExpression()->asQObject();
}

QObject *QUmlConstraintObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlConstraint *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->namespace_()->asQObject();
}

QString QUmlConstraintObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlConstraintObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->visibility();
}

// OWNED ATTRIBUTES [Constraint]

const QList<QObject *> QUmlConstraintObject::constrainedElements() const
{
    QList<QObject *> list;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConstraint *>(this)->constrainedElements())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlConstraintObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlConstraint *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->context()->asQObject();
}

QObject *QUmlConstraintObject::specification() const
{
    if (!qmodelingobjectproperty_cast<QUmlConstraint *>(this)->specification())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->specification()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConstraintObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConstraint *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConstraintObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlConstraintObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlConstraintObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlConstraintObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlConstraint *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlConstraintObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlConstraint *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConstraintObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlConstraintObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlConstraint *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConstraintObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConstraintObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConstraintObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConstraintObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConstraintObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlConstraintObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlConstraintObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlConstraintObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConstraintObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConstraintObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->setName(name);
}

void QUmlConstraintObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlConstraintObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlConstraintObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlConstraintObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->setVisibility(visibility);
}

void QUmlConstraintObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Constraint]

void QUmlConstraintObject::addConstrainedElement(QObject *constrainedElement)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->addConstrainedElement(qmodelingobjectproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlConstraintObject::removeConstrainedElement(QObject *constrainedElement)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->removeConstrainedElement(qmodelingobjectproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlConstraintObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->setContext(qmodelingobjectproperty_cast<QUmlNamespace *>(context));
}

void QUmlConstraintObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlConstraint *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlValueSpecification *>(specification));
}

QT_END_NAMESPACE

