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
#include "qumlliteralintegerobject_p.h"

#include <QtUml/QUmlLiteralInteger>
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

QT_BEGIN_NAMESPACE

QUmlLiteralIntegerObject::QUmlLiteralIntegerObject(QUmlLiteralInteger *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlLiteralIntegerObject::~QUmlLiteralIntegerObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLiteralIntegerObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLiteralIntegerObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLiteralIntegerObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLiteralIntegerObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlLiteralIntegerObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->name();
}

QObject *QUmlLiteralIntegerObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->nameExpression()->asQObject();
}

QObject *QUmlLiteralIntegerObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->namespace_()->asQObject();
}

QString QUmlLiteralIntegerObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlLiteralIntegerObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlLiteralIntegerObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlLiteralIntegerObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlLiteralIntegerObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->visibility();
}

// OWNED ATTRIBUTES [LiteralInteger]

int QUmlLiteralIntegerObject::value() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->value();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLiteralIntegerObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralIntegerObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLiteralIntegerObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlLiteralIntegerObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralIntegerObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLiteralIntegerObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlLiteralIntegerObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlLiteralIntegerObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->booleanValue();
}

bool QUmlLiteralIntegerObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlLiteralIntegerObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->isNull();
}

double QUmlLiteralIntegerObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->realValue();
}

QString QUmlLiteralIntegerObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->stringValue();
}

int QUmlLiteralIntegerObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->unlimitedValue();
}

// OPERATIONS [LiteralInteger]

int QUmlLiteralIntegerObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->integerValue();
}

bool QUmlLiteralIntegerObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->isComputable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLiteralIntegerObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralIntegerObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralIntegerObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralIntegerObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralIntegerObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLiteralIntegerObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralIntegerObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralIntegerObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->setName(name);
}

void QUmlLiteralIntegerObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLiteralIntegerObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLiteralIntegerObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlLiteralIntegerObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlLiteralIntegerObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlLiteralIntegerObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlLiteralIntegerObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->setVisibility(visibility);
}

void QUmlLiteralIntegerObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [LiteralInteger]

void QUmlLiteralIntegerObject::setValue(int value)
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->setValue(value);
}

void QUmlLiteralIntegerObject::unsetValue()
{
    qmodelingobjectproperty_cast<QUmlLiteralInteger *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("value"));
}

QT_END_NAMESPACE

