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
#include "qumlintervalobject_p.h"

#include <QtUml/QUmlInterval>
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

QUmlIntervalObject::QUmlIntervalObject(QUmlInterval *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlIntervalObject::~QUmlIntervalObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInterval *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlIntervalObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInterval *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlIntervalObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInterval *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlIntervalObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterval *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterval *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlIntervalObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInterval *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlIntervalObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->name();
}

QObject *QUmlIntervalObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterval *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterval *>(this)->nameExpression()->asQObject();
}

QObject *QUmlIntervalObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterval *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterval *>(this)->namespace_()->asQObject();
}

QString QUmlIntervalObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlIntervalObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterval *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterval *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlIntervalObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterval *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterval *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlIntervalObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterval *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterval *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlIntervalObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->visibility();
}

// OWNED ATTRIBUTES [Interval]

QObject *QUmlIntervalObject::max() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterval *>(this)->max())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterval *>(this)->max()->asQObject();
}

QObject *QUmlIntervalObject::min() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterval *>(this)->min())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterval *>(this)->min()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlIntervalObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInterval *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlIntervalObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlIntervalObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInterval *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlIntervalObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInterval *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlIntervalObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlIntervalObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlIntervalObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlIntervalObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->booleanValue();
}

int QUmlIntervalObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->integerValue();
}

bool QUmlIntervalObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlIntervalObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->isComputable();
}

bool QUmlIntervalObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->isNull();
}

double QUmlIntervalObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->realValue();
}

QString QUmlIntervalObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->stringValue();
}

int QUmlIntervalObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlInterval *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlIntervalObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlIntervalObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlIntervalObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlIntervalObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlIntervalObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlIntervalObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlIntervalObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlIntervalObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->setName(name);
}

void QUmlIntervalObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlIntervalObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlIntervalObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlIntervalObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlIntervalObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlIntervalObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlIntervalObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->setVisibility(visibility);
}

void QUmlIntervalObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Interval]

void QUmlIntervalObject::setMax(QObject *max)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->setMax(qmodelingobjectproperty_cast<QUmlValueSpecification *>(max));
}

void QUmlIntervalObject::setMin(QObject *min)
{
    qmodelingobjectproperty_cast<QUmlInterval *>(this)->setMin(qmodelingobjectproperty_cast<QUmlValueSpecification *>(min));
}

QT_END_NAMESPACE

