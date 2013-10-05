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
#include "qumlstringexpressionobject_p.h"

#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlStringExpressionObject::QUmlStringExpressionObject(QUmlStringExpression *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlStringExpressionObject::~QUmlStringExpressionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStringExpressionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStringExpressionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStringExpressionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStringExpressionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlStringExpressionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->name();
}

QObject *QUmlStringExpressionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->nameExpression()->asQObject();
}

QObject *QUmlStringExpressionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->namespace_()->asQObject();
}

QString QUmlStringExpressionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlStringExpressionObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlStringExpressionObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlStringExpressionObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlStringExpressionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->visibility();
}

// OWNED ATTRIBUTES [Expression]

const QList<QObject *> QUmlStringExpressionObject::operand() const
{
    QList<QObject *> list;
    foreach (QUmlValueSpecification *element, qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->operand())
        list.append(element->asQObject());
    return list;
}

QString QUmlStringExpressionObject::symbol() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->symbol();
}

// OWNED ATTRIBUTES [TemplateableElement]

QObject *QUmlStringExpressionObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlStringExpressionObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StringExpression]

QObject *QUmlStringExpressionObject::owningExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->owningExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->owningExpression()->asQObject();
}

const QSet<QObject *> QUmlStringExpressionObject::subExpression() const
{
    QSet<QObject *> set;
    foreach (QUmlStringExpression *element, qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->subExpression())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStringExpressionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStringExpressionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStringExpressionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlStringExpressionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStringExpressionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStringExpressionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlStringExpressionObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlStringExpressionObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->booleanValue();
}

int QUmlStringExpressionObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->integerValue();
}

bool QUmlStringExpressionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlStringExpressionObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->isComputable();
}

bool QUmlStringExpressionObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->isNull();
}

double QUmlStringExpressionObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->realValue();
}

int QUmlStringExpressionObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->unlimitedValue();
}

// OPERATIONS [TemplateableElement]

bool QUmlStringExpressionObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->isTemplate();
}

QSet<QObject *> QUmlStringExpressionObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [StringExpression]

QString QUmlStringExpressionObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->stringValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStringExpressionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStringExpressionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStringExpressionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStringExpressionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStringExpressionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStringExpressionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStringExpressionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStringExpressionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setName(name);
}

void QUmlStringExpressionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStringExpressionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStringExpressionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlStringExpressionObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlStringExpressionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlStringExpressionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlStringExpressionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setVisibility(visibility);
}

void QUmlStringExpressionObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Expression]

void QUmlStringExpressionObject::addOperand(QObject *operand)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->addOperand(qmodelingobjectproperty_cast<QUmlValueSpecification *>(operand));
}

void QUmlStringExpressionObject::removeOperand(QObject *operand)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->removeOperand(qmodelingobjectproperty_cast<QUmlValueSpecification *>(operand));
}

void QUmlStringExpressionObject::setSymbol(QString symbol)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setSymbol(symbol);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlStringExpressionObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlTemplateSignature *>(ownedTemplateSignature));
}

void QUmlStringExpressionObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlStringExpressionObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [StringExpression]

void QUmlStringExpressionObject::setOwningExpression(QObject *owningExpression)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->setOwningExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(owningExpression));
}

void QUmlStringExpressionObject::addSubExpression(QObject *subExpression)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->addSubExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(subExpression));
}

void QUmlStringExpressionObject::removeSubExpression(QObject *subExpression)
{
    qmodelingobjectproperty_cast<QUmlStringExpression *>(this)->removeSubExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(subExpression));
}

QT_END_NAMESPACE

