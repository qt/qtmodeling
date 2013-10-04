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
#include "qumlparameterobject_p.h"

#include <QtUml/QUmlParameter>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlParameterObject::QUmlParameterObject(QUmlParameter *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlParameterObject::~QUmlParameterObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlParameter *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlParameterObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlParameter *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlParameterObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlParameter *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlParameterObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameter *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameter *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlParameterObject::isOrdered() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->isOrdered();
}

bool QUmlParameterObject::isUnique() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->isUnique();
}

int QUmlParameterObject::lower() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->lower();
}

QObject *QUmlParameterObject::lowerValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameter *>(this)->lowerValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameter *>(this)->lowerValue()->asQObject();
}

int QUmlParameterObject::upper() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->upper();
}

QObject *QUmlParameterObject::upperValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameter *>(this)->upperValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameter *>(this)->upperValue()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlParameterObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlParameter *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlParameterObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->name();
}

QObject *QUmlParameterObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameter *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameter *>(this)->nameExpression()->asQObject();
}

QObject *QUmlParameterObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameter *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameter *>(this)->namespace_()->asQObject();
}

QString QUmlParameterObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlParameterObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlParameterObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameter *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameter *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlParameterObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameter *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameter *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [ConnectableElement]

const QList<QObject *> QUmlParameterObject::end() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingobjectproperty_cast<QUmlParameter *>(this)->end())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlParameterObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameter *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameter *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [Parameter]

QString QUmlParameterObject::default_() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->default_();
}

QObject *QUmlParameterObject::defaultValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameter *>(this)->defaultValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameter *>(this)->defaultValue()->asQObject();
}

QtUml::ParameterDirectionKind QUmlParameterObject::direction() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->direction();
}

QtUml::ParameterEffectKind QUmlParameterObject::effect() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->effect();
}

bool QUmlParameterObject::isException() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->isException();
}

bool QUmlParameterObject::isStream() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->isStream();
}

QObject *QUmlParameterObject::operation() const
{
    if (!qmodelingobjectproperty_cast<QUmlParameter *>(this)->operation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlParameter *>(this)->operation()->asQObject();
}

const QSet<QObject *> QUmlParameterObject::parameterSet() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingobjectproperty_cast<QUmlParameter *>(this)->parameterSet())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlParameterObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlParameter *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlParameterObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlParameterObject::compatibleWith(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->compatibleWith(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlParameterObject::includesCardinality(int C) const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->includesCardinality(C);
}

bool QUmlParameterObject::includesMultiplicity(QObject *M) const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->includesMultiplicity(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlParameterObject::is(int lowerbound, int upperbound) const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->is(lowerbound, upperbound);
}

bool QUmlParameterObject::isMultivalued() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->isMultivalued();
}

int QUmlParameterObject::lowerBound() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->lowerBound();
}

//int QUmlParameterObject::upperBound() const
//{
//    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlParameterObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlParameter *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlParameterObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlParameter *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlParameterObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlParameterObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlParameterObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlParameterObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlParameter *>(this)->isTemplateParameter();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlParameterObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlParameterObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlParameterObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlParameterObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlParameterObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlParameterObject::setOrdered(bool isOrdered)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setOrdered(isOrdered);
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties() << QStringLiteral("ordered");
}

void QUmlParameterObject::unsetOrdered()
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordered"));
}

void QUmlParameterObject::setUnique(bool isUnique)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setUnique(isUnique);
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties() << QStringLiteral("unique");
}

void QUmlParameterObject::unsetUnique()
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("unique"));
}

void QUmlParameterObject::setLower(int lower)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setLower(lower);
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties() << QStringLiteral("lower");
}

void QUmlParameterObject::unsetLower()
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("lower"));
}

void QUmlParameterObject::setLowerValue(QObject *lowerValue)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setLowerValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlParameterObject::setUpper(int upper)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setUpper(upper);
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties() << QStringLiteral("upper");
}

void QUmlParameterObject::unsetUpper()
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("upper"));
}

void QUmlParameterObject::setUpperValue(QObject *upperValue)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setUpperValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlParameterObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlParameterObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlParameterObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setName(name);
}

void QUmlParameterObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlParameterObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlParameterObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setQualifiedName(qualifiedName);
}

void QUmlParameterObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlParameterObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlParameterObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlParameterObject::addEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->addEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlParameterObject::removeEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->removeEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlParameterObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [Parameter]

void QUmlParameterObject::setDefault(QString default_)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setDefault(default_);
}

void QUmlParameterObject::setDefaultValue(QObject *defaultValue)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setDefaultValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(defaultValue));
}

void QUmlParameterObject::setDirection(QtUml::ParameterDirectionKind direction)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setDirection(direction);
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties() << QStringLiteral("direction");
}

void QUmlParameterObject::unsetDirection()
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("direction"));
}

void QUmlParameterObject::setEffect(QtUml::ParameterEffectKind effect)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setEffect(effect);
}

void QUmlParameterObject::setException(bool isException)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setException(isException);
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties() << QStringLiteral("exception");
}

void QUmlParameterObject::unsetException()
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("exception"));
}

void QUmlParameterObject::setStream(bool isStream)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setStream(isStream);
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties() << QStringLiteral("stream");
}

void QUmlParameterObject::unsetStream()
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("stream"));
}

void QUmlParameterObject::setOperation(QObject *operation)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->setOperation(qmodelingobjectproperty_cast<QUmlOperation *>(operation));
}

void QUmlParameterObject::addParameterSet(QObject *parameterSet)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->addParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(parameterSet));
}

void QUmlParameterObject::removeParameterSet(QObject *parameterSet)
{
    qmodelingobjectproperty_cast<QUmlParameter *>(this)->removeParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(parameterSet));
}

QT_END_NAMESPACE

