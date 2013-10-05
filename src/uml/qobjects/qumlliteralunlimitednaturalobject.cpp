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
#include "qumlliteralunlimitednaturalobject_p.h"

#include <QtUml/QUmlLiteralUnlimitedNatural>
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

QUmlLiteralUnlimitedNaturalObject::QUmlLiteralUnlimitedNaturalObject(QUmlLiteralUnlimitedNatural *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlLiteralUnlimitedNaturalObject::~QUmlLiteralUnlimitedNaturalObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLiteralUnlimitedNaturalObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLiteralUnlimitedNaturalObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLiteralUnlimitedNaturalObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLiteralUnlimitedNaturalObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlLiteralUnlimitedNaturalObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->name();
}

QObject *QUmlLiteralUnlimitedNaturalObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->nameExpression()->asQObject();
}

QObject *QUmlLiteralUnlimitedNaturalObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->namespace_()->asQObject();
}

QString QUmlLiteralUnlimitedNaturalObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlLiteralUnlimitedNaturalObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlLiteralUnlimitedNaturalObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlLiteralUnlimitedNaturalObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlLiteralUnlimitedNaturalObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->visibility();
}

// OWNED ATTRIBUTES [LiteralUnlimitedNatural]

int QUmlLiteralUnlimitedNaturalObject::value() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->value();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLiteralUnlimitedNaturalObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralUnlimitedNaturalObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLiteralUnlimitedNaturalObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlLiteralUnlimitedNaturalObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralUnlimitedNaturalObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLiteralUnlimitedNaturalObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlLiteralUnlimitedNaturalObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlLiteralUnlimitedNaturalObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->booleanValue();
}

int QUmlLiteralUnlimitedNaturalObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->integerValue();
}

bool QUmlLiteralUnlimitedNaturalObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlLiteralUnlimitedNaturalObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->isNull();
}

double QUmlLiteralUnlimitedNaturalObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->realValue();
}

QString QUmlLiteralUnlimitedNaturalObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->stringValue();
}
// OPERATIONS [LiteralUnlimitedNatural]

bool QUmlLiteralUnlimitedNaturalObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->isComputable();
}

int QUmlLiteralUnlimitedNaturalObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLiteralUnlimitedNaturalObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralUnlimitedNaturalObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralUnlimitedNaturalObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralUnlimitedNaturalObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralUnlimitedNaturalObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLiteralUnlimitedNaturalObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralUnlimitedNaturalObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralUnlimitedNaturalObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setName(name);
}

void QUmlLiteralUnlimitedNaturalObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLiteralUnlimitedNaturalObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLiteralUnlimitedNaturalObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlLiteralUnlimitedNaturalObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlLiteralUnlimitedNaturalObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlLiteralUnlimitedNaturalObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlLiteralUnlimitedNaturalObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setVisibility(visibility);
}

void QUmlLiteralUnlimitedNaturalObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [LiteralUnlimitedNatural]

void QUmlLiteralUnlimitedNaturalObject::setValue(int value)
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setValue(value);
}

void QUmlLiteralUnlimitedNaturalObject::unsetValue()
{
    qmodelingobjectproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("value"));
}

QT_END_NAMESPACE

