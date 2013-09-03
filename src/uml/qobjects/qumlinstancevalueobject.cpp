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
#include "qumlinstancevalueobject_p.h"

#include <QtUml/QUmlInstanceValue>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInstanceSpecification>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlInstanceValueObject::QUmlInstanceValueObject(QUmlInstanceValue *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlInstanceValueObject::~QUmlInstanceValueObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInstanceValueObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInstanceValueObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInstanceValueObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInstanceValueObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInstanceValueObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->name();
}

QObject *QUmlInstanceValueObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInstanceValueObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->namespace_()->asQObject();
}

QString QUmlInstanceValueObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlInstanceValueObject::type() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlInstanceValueObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlInstanceValueObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlInstanceValueObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->visibility();
}

// OWNED ATTRIBUTES [InstanceValue]

QObject *QUmlInstanceValueObject::instance() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->instance()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInstanceValueObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInstanceValueObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInstanceValueObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInstanceValueObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInstanceValueObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInstanceValueObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlInstanceValueObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlInstanceValueObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->booleanValue();
}

int QUmlInstanceValueObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->integerValue();
}

bool QUmlInstanceValueObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlInstanceValueObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->isComputable();
}

bool QUmlInstanceValueObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->isNull();
}

double QUmlInstanceValueObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->realValue();
}

QString QUmlInstanceValueObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->stringValue();
}

int QUmlInstanceValueObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInstanceValueObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInstanceValueObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInstanceValueObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInstanceValueObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInstanceValueObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInstanceValueObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInstanceValueObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInstanceValueObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->setName(name);
}
    
void QUmlInstanceValueObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInstanceValueObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInstanceValueObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlInstanceValueObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInstanceValueObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlInstanceValueObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInstanceValueObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [InstanceValue]

void QUmlInstanceValueObject::setInstance(QObject *instance)
{
    qmodelingobjectproperty_cast<QUmlInstanceValue *>(this)->setInstance(qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(instance));
}

QT_END_NAMESPACE

