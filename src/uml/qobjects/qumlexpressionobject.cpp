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
#include "qumlexpressionobject_p.h"

#include <QtUml/QUmlExpression>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlExpressionObject::QUmlExpressionObject(QUmlExpression *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlExpressionObject::~QUmlExpressionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlExpression *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExpressionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlExpression *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpressionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExpression *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExpressionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpression *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpression *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExpressionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlExpression *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlExpressionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->name();
}

QObject *QUmlExpressionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpression *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpression *>(this)->nameExpression()->asQObject();
}

QObject *QUmlExpressionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpression *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpression *>(this)->namespace_()->asQObject();
}

QString QUmlExpressionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlExpressionObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpression *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpression *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlExpressionObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpression *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpression *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlExpressionObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlExpression *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExpression *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlExpressionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->visibility();
}

// OWNED ATTRIBUTES [Expression]

const QList<QObject *> QUmlExpressionObject::operand() const
{
    QList<QObject *> list;
    foreach (QUmlValueSpecification *element, qmodelingobjectproperty_cast<QUmlExpression *>(this)->operand())
        list.append(element->asQObject());
    return list;
}

QString QUmlExpressionObject::symbol() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->symbol();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExpressionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExpression *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExpressionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExpressionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlExpression *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlExpressionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlExpression *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExpressionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExpressionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlExpressionObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlExpressionObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->booleanValue();
}

int QUmlExpressionObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->integerValue();
}

bool QUmlExpressionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlExpressionObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->isComputable();
}

bool QUmlExpressionObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->isNull();
}

double QUmlExpressionObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->realValue();
}

QString QUmlExpressionObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->stringValue();
}

int QUmlExpressionObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlExpression *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExpressionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpressionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpressionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpressionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpressionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExpressionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpressionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpressionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->setName(name);
}

void QUmlExpressionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExpressionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExpressionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlExpressionObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlExpressionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlExpressionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlExpressionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->setVisibility(visibility);
}

void QUmlExpressionObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Expression]

void QUmlExpressionObject::addOperand(QObject *operand)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->addOperand(qmodelingobjectproperty_cast<QUmlValueSpecification *>(operand));
}

void QUmlExpressionObject::removeOperand(QObject *operand)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->removeOperand(qmodelingobjectproperty_cast<QUmlValueSpecification *>(operand));
}

void QUmlExpressionObject::setSymbol(QString symbol)
{
    qmodelingobjectproperty_cast<QUmlExpression *>(this)->setSymbol(symbol);
}

QT_END_NAMESPACE

