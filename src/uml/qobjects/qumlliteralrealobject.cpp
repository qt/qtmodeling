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
#include "qumlliteralrealobject_p.h"

#include <QtUml/QUmlLiteralReal>
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

QUmlLiteralRealObject::QUmlLiteralRealObject(QUmlLiteralReal *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlLiteralRealObject::~QUmlLiteralRealObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLiteralRealObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLiteralRealObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLiteralRealObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLiteralRealObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlLiteralRealObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->name();
}

QObject *QUmlLiteralRealObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->nameExpression()->asQObject();
}

QObject *QUmlLiteralRealObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->namespace_()->asQObject();
}

QString QUmlLiteralRealObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlLiteralRealObject::type() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlLiteralRealObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlLiteralRealObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlLiteralRealObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->visibility();
}

// OWNED ATTRIBUTES [LiteralReal]

double QUmlLiteralRealObject::value() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->value();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLiteralRealObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralRealObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLiteralRealObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlLiteralRealObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralRealObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLiteralRealObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlLiteralRealObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlLiteralRealObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->booleanValue();
}

int QUmlLiteralRealObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->integerValue();
}

bool QUmlLiteralRealObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlLiteralRealObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->isNull();
}

QString QUmlLiteralRealObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->stringValue();
}

int QUmlLiteralRealObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->unlimitedValue();
}

// OPERATIONS [LiteralReal]

bool QUmlLiteralRealObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->isComputable();
}

double QUmlLiteralRealObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->realValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLiteralRealObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralRealObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralRealObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralRealObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralRealObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLiteralRealObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralRealObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralRealObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->setName(name);
}
    
void QUmlLiteralRealObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLiteralRealObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLiteralRealObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlLiteralRealObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlLiteralRealObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlLiteralRealObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlLiteralRealObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [LiteralReal]

void QUmlLiteralRealObject::setValue(double value)
{
    qmodelingobjectproperty_cast<QUmlLiteralReal *>(this)->setValue(value);
}
    
QT_END_NAMESPACE

