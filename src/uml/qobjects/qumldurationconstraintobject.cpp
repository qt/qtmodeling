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
#include "qumldurationconstraintobject_p.h"

#include <QtUml/QUmlDurationConstraint>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDurationInterval>
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

QUmlDurationConstraintObject::QUmlDurationConstraintObject(QUmlDurationConstraint *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlDurationConstraintObject::~QUmlDurationConstraintObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDurationConstraintObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDurationConstraintObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDurationConstraintObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDurationConstraintObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlDurationConstraintObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDurationConstraintObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDurationConstraintObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->name();
}

QObject *QUmlDurationConstraintObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDurationConstraintObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->namespace_()->asQObject();
}

QString QUmlDurationConstraintObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDurationConstraintObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->visibility();
}

// OWNED ATTRIBUTES [Constraint]

const QList<QObject *> QUmlDurationConstraintObject::constrainedElement() const
{
    QList<QObject *> list;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->constrainedElement())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlDurationConstraintObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->context()->asQObject();
}
// OWNED ATTRIBUTES [DurationConstraint]

bool QUmlDurationConstraintObject::firstEvent() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->firstEvent();
}

QObject *QUmlDurationConstraintObject::specification() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->specification()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDurationConstraintObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDurationConstraintObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlDurationConstraintObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDurationConstraintObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDurationConstraintObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDurationConstraintObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDurationConstraintObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDurationConstraintObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDurationConstraintObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationConstraintObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationConstraintObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationConstraintObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationConstraintObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDurationConstraintObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlDurationConstraintObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDurationConstraintObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationConstraintObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationConstraintObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->setName(name);
}
    
void QUmlDurationConstraintObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDurationConstraintObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDurationConstraintObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDurationConstraintObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [Constraint]

void QUmlDurationConstraintObject::addConstrainedElement(QObject *constrainedElement)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->addConstrainedElement(qmodelingobjectproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlDurationConstraintObject::removeConstrainedElement(QObject *constrainedElement)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->removeConstrainedElement(qmodelingobjectproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlDurationConstraintObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->setContext(qmodelingobjectproperty_cast<QUmlNamespace *>(context));
}
// SLOTS FOR OWNED ATTRIBUTES [DurationConstraint]

void QUmlDurationConstraintObject::setFirstEvent(bool firstEvent)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->setFirstEvent(firstEvent);
}
    
void QUmlDurationConstraintObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlDurationConstraint *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlDurationInterval *>(specification));
}

QT_END_NAMESPACE

