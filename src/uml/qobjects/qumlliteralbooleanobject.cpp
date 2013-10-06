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
#include "qumlliteralbooleanobject_p.h"

#include <QtUml/QUmlLiteralBoolean>
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

QUmlLiteralBooleanObject::QUmlLiteralBooleanObject(QUmlLiteralBoolean *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlLiteralBooleanObject::~QUmlLiteralBooleanObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLiteralBooleanObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLiteralBooleanObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLiteralBooleanObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLiteralBooleanObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlLiteralBooleanObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->name();
}

QObject *QUmlLiteralBooleanObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->nameExpression()->asQObject();
}

QObject *QUmlLiteralBooleanObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->namespace_()->asQObject();
}

QString QUmlLiteralBooleanObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlLiteralBooleanObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlLiteralBooleanObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlLiteralBooleanObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlLiteralBooleanObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->visibility();
}

// OWNED ATTRIBUTES [LiteralBoolean]

bool QUmlLiteralBooleanObject::value() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->value();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLiteralBooleanObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralBooleanObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLiteralBooleanObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlLiteralBooleanObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralBooleanObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLiteralBooleanObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlLiteralBooleanObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

int QUmlLiteralBooleanObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->integerValue();
}

bool QUmlLiteralBooleanObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlLiteralBooleanObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->isNull();
}

double QUmlLiteralBooleanObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->realValue();
}

QString QUmlLiteralBooleanObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->stringValue();
}

int QUmlLiteralBooleanObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->unlimitedValue();
}

// OPERATIONS [LiteralBoolean]

bool QUmlLiteralBooleanObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->booleanValue();
}

bool QUmlLiteralBooleanObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->isComputable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLiteralBooleanObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralBooleanObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralBooleanObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralBooleanObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralBooleanObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLiteralBooleanObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralBooleanObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralBooleanObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->setName(name);
}

void QUmlLiteralBooleanObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLiteralBooleanObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLiteralBooleanObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlLiteralBooleanObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlLiteralBooleanObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlLiteralBooleanObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlLiteralBooleanObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->setVisibility(visibility);
}

void QUmlLiteralBooleanObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [LiteralBoolean]

void QUmlLiteralBooleanObject::setValue(bool value)
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->setValue(value);
}

void QUmlLiteralBooleanObject::unsetValue()
{
    qmodelingobjectproperty_cast<QUmlLiteralBoolean *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("value"));
}

QT_END_NAMESPACE

