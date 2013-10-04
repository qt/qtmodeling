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
#include "qumlliteralstringobject_p.h"

#include <QtUml/QUmlLiteralString>
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

QUmlLiteralStringObject::QUmlLiteralStringObject(QUmlLiteralString *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlLiteralStringObject::~QUmlLiteralStringObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLiteralStringObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLiteralStringObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLiteralStringObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLiteralStringObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlLiteralStringObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->name();
}

QObject *QUmlLiteralStringObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->nameExpression()->asQObject();
}

QObject *QUmlLiteralStringObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->namespace_()->asQObject();
}

QString QUmlLiteralStringObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlLiteralStringObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlLiteralStringObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlLiteralStringObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlLiteralStringObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->visibility();
}

// OWNED ATTRIBUTES [LiteralString]

QString QUmlLiteralStringObject::value() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->value();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLiteralStringObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralStringObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLiteralStringObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlLiteralStringObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralStringObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLiteralStringObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlLiteralStringObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlLiteralStringObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->booleanValue();
}

int QUmlLiteralStringObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->integerValue();
}

bool QUmlLiteralStringObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlLiteralStringObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->isNull();
}

double QUmlLiteralStringObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->realValue();
}

int QUmlLiteralStringObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->unlimitedValue();
}

// OPERATIONS [LiteralString]

bool QUmlLiteralStringObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->isComputable();
}

QString QUmlLiteralStringObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->stringValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLiteralStringObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralStringObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralStringObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralStringObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralStringObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLiteralStringObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralStringObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralStringObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->setName(name);
}

void QUmlLiteralStringObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLiteralStringObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLiteralStringObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlLiteralStringObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlLiteralStringObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlLiteralStringObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlLiteralStringObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlLiteralStringObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [LiteralString]

void QUmlLiteralStringObject::setValue(QString value)
{
    qmodelingobjectproperty_cast<QUmlLiteralString *>(this)->setValue(value);
}

QT_END_NAMESPACE

