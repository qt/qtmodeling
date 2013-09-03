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
#include "qumltimeintervalobject_p.h"

#include <QtUml/QUmlTimeInterval>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTimeExpression>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlTimeIntervalObject::QUmlTimeIntervalObject(QUmlTimeInterval *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlTimeIntervalObject::~QUmlTimeIntervalObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTimeIntervalObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTimeIntervalObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTimeIntervalObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTimeIntervalObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlTimeIntervalObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->name();
}

QObject *QUmlTimeIntervalObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->nameExpression()->asQObject();
}

QObject *QUmlTimeIntervalObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->namespace_()->asQObject();
}

QString QUmlTimeIntervalObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlTimeIntervalObject::type() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlTimeIntervalObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlTimeIntervalObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlTimeIntervalObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->visibility();
}

// OWNED ATTRIBUTES [TimeInterval]

QObject *QUmlTimeIntervalObject::max() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->max()->asQObject();
}

QObject *QUmlTimeIntervalObject::min() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->min()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTimeIntervalObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTimeIntervalObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTimeIntervalObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlTimeIntervalObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTimeIntervalObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTimeIntervalObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlTimeIntervalObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlTimeIntervalObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->booleanValue();
}

int QUmlTimeIntervalObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->integerValue();
}

bool QUmlTimeIntervalObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlTimeIntervalObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->isComputable();
}

bool QUmlTimeIntervalObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->isNull();
}

double QUmlTimeIntervalObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->realValue();
}

QString QUmlTimeIntervalObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->stringValue();
}

int QUmlTimeIntervalObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTimeIntervalObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeIntervalObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeIntervalObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeIntervalObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeIntervalObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTimeIntervalObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeIntervalObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeIntervalObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->setName(name);
}
    
void QUmlTimeIntervalObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTimeIntervalObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTimeIntervalObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlTimeIntervalObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlTimeIntervalObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlTimeIntervalObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlTimeIntervalObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [TimeInterval]

void QUmlTimeIntervalObject::setMax(QObject *max)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->setMax(qmodelingobjectproperty_cast<QUmlTimeExpression *>(max));
}

void QUmlTimeIntervalObject::setMin(QObject *min)
{
    qmodelingobjectproperty_cast<QUmlTimeInterval *>(this)->setMin(qmodelingobjectproperty_cast<QUmlTimeExpression *>(min));
}

QT_END_NAMESPACE

