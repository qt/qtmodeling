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
#include "qumlliteralnullobject_p.h"

#include <QtUml/QUmlLiteralNull>
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

QUmlLiteralNullObject::QUmlLiteralNullObject(QUmlLiteralNull *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlLiteralNullObject::~QUmlLiteralNullObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLiteralNullObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLiteralNullObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLiteralNullObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLiteralNullObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlLiteralNullObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->name();
}

QObject *QUmlLiteralNullObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->nameExpression()->asQObject();
}

QObject *QUmlLiteralNullObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->namespace_()->asQObject();
}

QString QUmlLiteralNullObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlLiteralNullObject::type() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlLiteralNullObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlLiteralNullObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlLiteralNullObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->visibility();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLiteralNullObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralNullObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLiteralNullObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlLiteralNullObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLiteralNullObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLiteralNullObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlLiteralNullObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlLiteralNullObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->booleanValue();
}

int QUmlLiteralNullObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->integerValue();
}

bool QUmlLiteralNullObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

double QUmlLiteralNullObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->realValue();
}

QString QUmlLiteralNullObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->stringValue();
}

int QUmlLiteralNullObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->unlimitedValue();
}

// OPERATIONS [LiteralNull]

bool QUmlLiteralNullObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->isComputable();
}

bool QUmlLiteralNullObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->isNull();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLiteralNullObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralNullObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralNullObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralNullObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralNullObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLiteralNullObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralNullObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralNullObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->setName(name);
}
    
void QUmlLiteralNullObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLiteralNullObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLiteralNullObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlLiteralNullObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlLiteralNullObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlLiteralNullObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlLiteralNullObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlLiteralNull *>(this)->setVisibility(visibility);
}
    
QT_END_NAMESPACE

