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
#include "qumltimeexpressionobject_p.h"

#include <QtUml/QUmlTimeExpression>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlObservation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlTimeExpressionObject::QUmlTimeExpressionObject(QUmlTimeExpression *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlTimeExpressionObject::~QUmlTimeExpressionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTimeExpressionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTimeExpressionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTimeExpressionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTimeExpressionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlTimeExpressionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->name();
}

QObject *QUmlTimeExpressionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->nameExpression()->asQObject();
}

QObject *QUmlTimeExpressionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->namespace_()->asQObject();
}

QString QUmlTimeExpressionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlTimeExpressionObject::type() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlTimeExpressionObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlTimeExpressionObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlTimeExpressionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->visibility();
}

// OWNED ATTRIBUTES [TimeExpression]

QObject *QUmlTimeExpressionObject::expr() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->expr()->asQObject();
}

const QSet<QObject *> QUmlTimeExpressionObject::observation() const
{
    QSet<QObject *> set;
    foreach (QUmlObservation *element, qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->observation())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTimeExpressionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTimeExpressionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTimeExpressionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlTimeExpressionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTimeExpressionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTimeExpressionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlTimeExpressionObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlTimeExpressionObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->booleanValue();
}

int QUmlTimeExpressionObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->integerValue();
}

bool QUmlTimeExpressionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlTimeExpressionObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->isComputable();
}

bool QUmlTimeExpressionObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->isNull();
}

double QUmlTimeExpressionObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->realValue();
}

QString QUmlTimeExpressionObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->stringValue();
}

int QUmlTimeExpressionObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTimeExpressionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeExpressionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeExpressionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeExpressionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeExpressionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTimeExpressionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeExpressionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeExpressionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->setName(name);
}
    
void QUmlTimeExpressionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTimeExpressionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTimeExpressionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlTimeExpressionObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlTimeExpressionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlTimeExpressionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlTimeExpressionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [TimeExpression]

void QUmlTimeExpressionObject::setExpr(QObject *expr)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->setExpr(qmodelingobjectproperty_cast<QUmlValueSpecification *>(expr));
}

void QUmlTimeExpressionObject::addObservation(QObject *observation)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->addObservation(qmodelingobjectproperty_cast<QUmlObservation *>(observation));
}

void QUmlTimeExpressionObject::removeObservation(QObject *observation)
{
    qmodelingobjectproperty_cast<QUmlTimeExpression *>(this)->removeObservation(qmodelingobjectproperty_cast<QUmlObservation *>(observation));
}

QT_END_NAMESPACE

