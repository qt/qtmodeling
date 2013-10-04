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
#include "qumldurationobject_p.h"

#include <QtUml/QUmlDuration>
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

QUmlDurationObject::QUmlDurationObject(QUmlDuration *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlDurationObject::~QUmlDurationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDuration *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDurationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDuration *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDurationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDuration *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDurationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlDuration *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDuration *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDurationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDuration *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDurationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->name();
}

QObject *QUmlDurationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlDuration *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDuration *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDurationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlDuration *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDuration *>(this)->namespace_()->asQObject();
}

QString QUmlDurationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlDurationObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlDuration *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDuration *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDurationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlDuration *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDuration *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlDurationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlDuration *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDuration *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDurationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->visibility();
}

// OWNED ATTRIBUTES [Duration]

QObject *QUmlDurationObject::expr() const
{
    if (!qmodelingobjectproperty_cast<QUmlDuration *>(this)->expr())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDuration *>(this)->expr()->asQObject();
}

const QSet<QObject *> QUmlDurationObject::observation() const
{
    QSet<QObject *> set;
    foreach (QUmlObservation *element, qmodelingobjectproperty_cast<QUmlDuration *>(this)->observation())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDurationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDuration *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDurationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDurationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDuration *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDurationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDuration *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDurationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDurationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlDurationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlDurationObject::booleanValue() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->booleanValue();
}

int QUmlDurationObject::integerValue() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->integerValue();
}

bool QUmlDurationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDurationObject::isComputable() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->isComputable();
}

bool QUmlDurationObject::isNull() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->isNull();
}

double QUmlDurationObject::realValue() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->realValue();
}

QString QUmlDurationObject::stringValue() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->stringValue();
}

int QUmlDurationObject::unlimitedValue() const
{
    return qmodelingobjectproperty_cast<QUmlDuration *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDurationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDurationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->setName(name);
}

void QUmlDurationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDurationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDurationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlDurationObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDurationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlDurationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDurationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlDurationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Duration]

void QUmlDurationObject::setExpr(QObject *expr)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->setExpr(qmodelingobjectproperty_cast<QUmlValueSpecification *>(expr));
}

void QUmlDurationObject::addObservation(QObject *observation)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->addObservation(qmodelingobjectproperty_cast<QUmlObservation *>(observation));
}

void QUmlDurationObject::removeObservation(QObject *observation)
{
    qmodelingobjectproperty_cast<QUmlDuration *>(this)->removeObservation(qmodelingobjectproperty_cast<QUmlObservation *>(observation));
}

QT_END_NAMESPACE

