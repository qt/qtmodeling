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
#include "qumldurationintervalobject_p.h"

#include <QtUml/QUmlDurationInterval>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDuration>
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

QUmlDurationIntervalObject::QUmlDurationIntervalObject(QUmlDurationInterval *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlDurationIntervalObject::~QUmlDurationIntervalObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDurationIntervalObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDurationIntervalObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDurationIntervalObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDurationIntervalObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDurationIntervalObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->name();
}

QObject *QUmlDurationIntervalObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDurationIntervalObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->namespace_()->asQObject();
}

QString QUmlDurationIntervalObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlDurationIntervalObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDurationIntervalObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlDurationIntervalObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDurationIntervalObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->visibility();
}

// OWNED ATTRIBUTES [DurationInterval]

QObject *QUmlDurationIntervalObject::max() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->max())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->max()->asQObject();
}

QObject *QUmlDurationIntervalObject::min() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->min())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->min()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDurationIntervalObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDurationIntervalObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDurationIntervalObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDurationIntervalObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDurationIntervalObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDurationIntervalObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlDurationIntervalObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlDurationIntervalObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->booleanValue();
}

int QUmlDurationIntervalObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->integerValue();
}

bool QUmlDurationIntervalObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDurationIntervalObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->isComputable();
}

bool QUmlDurationIntervalObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->isNull();
}

double QUmlDurationIntervalObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->realValue();
}

QString QUmlDurationIntervalObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->stringValue();
}

int QUmlDurationIntervalObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDurationIntervalObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationIntervalObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationIntervalObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationIntervalObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationIntervalObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDurationIntervalObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationIntervalObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationIntervalObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->setName(name);
}

void QUmlDurationIntervalObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDurationIntervalObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDurationIntervalObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlDurationIntervalObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDurationIntervalObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlDurationIntervalObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDurationIntervalObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->setVisibility(visibility);
}

void QUmlDurationIntervalObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [DurationInterval]

void QUmlDurationIntervalObject::setMax(QObject *max)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->setMax(qmodelingobjectproperty_cast<QUmlDuration *>(max));
}

void QUmlDurationIntervalObject::setMin(QObject *min)
{
    qmodelingobjectproperty_cast<QUmlDurationInterval *>(this)->setMin(qmodelingobjectproperty_cast<QUmlDuration *>(min));
}

QT_END_NAMESPACE

