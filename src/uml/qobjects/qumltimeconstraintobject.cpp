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
#include "qumltimeconstraintobject_p.h"

#include <QtUml/QUmlTimeConstraint>
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
#include <QtUml/QUmlTimeInterval>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlTimeConstraintObject::QUmlTimeConstraintObject(QUmlTimeConstraint *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlTimeConstraintObject::~QUmlTimeConstraintObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTimeConstraintObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTimeConstraintObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTimeConstraintObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlTimeConstraintObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlTimeConstraintObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTimeConstraintObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlTimeConstraintObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->name();
}

QObject *QUmlTimeConstraintObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->nameExpression()->asQObject();
}

QObject *QUmlTimeConstraintObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->namespace_()->asQObject();
}

QString QUmlTimeConstraintObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlTimeConstraintObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->visibility();
}

// OWNED ATTRIBUTES [Constraint]

const QList<QObject *> QUmlTimeConstraintObject::constrainedElement() const
{
    QList<QObject *> list;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->constrainedElement())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlTimeConstraintObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->context()->asQObject();
}
// OWNED ATTRIBUTES [TimeConstraint]

bool QUmlTimeConstraintObject::firstEvent() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->firstEvent();
}

QObject *QUmlTimeConstraintObject::specification() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->specification()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTimeConstraintObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTimeConstraintObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlTimeConstraintObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlTimeConstraintObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTimeConstraintObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlTimeConstraintObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTimeConstraintObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTimeConstraintObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTimeConstraintObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeConstraintObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeConstraintObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeConstraintObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeConstraintObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlTimeConstraintObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlTimeConstraintObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTimeConstraintObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeConstraintObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeConstraintObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->setName(name);
}
    
void QUmlTimeConstraintObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTimeConstraintObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTimeConstraintObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlTimeConstraintObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [Constraint]

void QUmlTimeConstraintObject::addConstrainedElement(QObject *constrainedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->addConstrainedElement(qmodelingobjectproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlTimeConstraintObject::removeConstrainedElement(QObject *constrainedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->removeConstrainedElement(qmodelingobjectproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlTimeConstraintObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->setContext(qmodelingobjectproperty_cast<QUmlNamespace *>(context));
}
// SLOTS FOR OWNED ATTRIBUTES [TimeConstraint]

void QUmlTimeConstraintObject::setFirstEvent(bool firstEvent)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->setFirstEvent(firstEvent);
}
    
void QUmlTimeConstraintObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlTimeConstraint *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlTimeInterval *>(specification));
}

QT_END_NAMESPACE

