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
#include "qumlvariableobject_p.h"

#include <QtUml/QUmlVariable>
#include <QtUml/QUmlAction>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlVariableObject::QUmlVariableObject(QUmlVariable *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlVariableObject::~QUmlVariableObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlVariable *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlVariableObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlVariable *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlVariableObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlVariable *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlVariableObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlVariable *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlVariable *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlVariableObject::isOrdered() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->isOrdered();
}

bool QUmlVariableObject::isUnique() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->isUnique();
}

int QUmlVariableObject::lower() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->lower();
}

QObject *QUmlVariableObject::lowerValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlVariable *>(this)->lowerValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlVariable *>(this)->lowerValue()->asQObject();
}

int QUmlVariableObject::upper() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->upper();
}

QObject *QUmlVariableObject::upperValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlVariable *>(this)->upperValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlVariable *>(this)->upperValue()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlVariableObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlVariable *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlVariableObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->name();
}

QObject *QUmlVariableObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlVariable *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlVariable *>(this)->nameExpression()->asQObject();
}

QObject *QUmlVariableObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlVariable *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlVariable *>(this)->namespace_()->asQObject();
}

QString QUmlVariableObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlVariableObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlVariableObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlVariable *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlVariable *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlVariableObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlVariable *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlVariable *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [ConnectableElement]

const QList<QObject *> QUmlVariableObject::end() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingobjectproperty_cast<QUmlVariable *>(this)->end())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlVariableObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlVariable *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlVariable *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [Variable]

QObject *QUmlVariableObject::activityScope() const
{
    if (!qmodelingobjectproperty_cast<QUmlVariable *>(this)->activityScope())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlVariable *>(this)->activityScope()->asQObject();
}

QObject *QUmlVariableObject::scope() const
{
    if (!qmodelingobjectproperty_cast<QUmlVariable *>(this)->scope())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlVariable *>(this)->scope()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlVariableObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlVariable *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlVariableObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlVariableObject::compatibleWith(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->compatibleWith(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlVariableObject::includesCardinality(int C) const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->includesCardinality(C);
}

bool QUmlVariableObject::includesMultiplicity(QObject *M) const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->includesMultiplicity(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlVariableObject::is(int lowerbound, int upperbound) const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->is(lowerbound, upperbound);
}

bool QUmlVariableObject::isMultivalued() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->isMultivalued();
}

int QUmlVariableObject::lowerBound() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->lowerBound();
}

//int QUmlVariableObject::upperBound() const
//{
//    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlVariableObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlVariable *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlVariableObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlVariable *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlVariableObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlVariableObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlVariableObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlVariableObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->isTemplateParameter();
}

// OPERATIONS [Variable]

bool QUmlVariableObject::isAccessibleBy(QObject *a) const
{
    return qmodelingobjectproperty_cast<QUmlVariable *>(this)->isAccessibleBy(qmodelingobjectproperty_cast<QUmlAction *>(a));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlVariableObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlVariableObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlVariableObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlVariableObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlVariableObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlVariableObject::setOrdered(bool isOrdered)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setOrdered(isOrdered);
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->modifiedResettableProperties() << QStringLiteral("ordered");
}

void QUmlVariableObject::unsetOrdered()
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordered"));
}

void QUmlVariableObject::setUnique(bool isUnique)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setUnique(isUnique);
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->modifiedResettableProperties() << QStringLiteral("unique");
}

void QUmlVariableObject::unsetUnique()
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("unique"));
}

void QUmlVariableObject::setLower(int lower)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setLower(lower);
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->modifiedResettableProperties() << QStringLiteral("lower");
}

void QUmlVariableObject::unsetLower()
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("lower"));
}

void QUmlVariableObject::setLowerValue(QObject *lowerValue)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setLowerValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlVariableObject::setUpper(int upper)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setUpper(upper);
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->modifiedResettableProperties() << QStringLiteral("upper");
}

void QUmlVariableObject::unsetUpper()
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("upper"));
}

void QUmlVariableObject::setUpperValue(QObject *upperValue)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setUpperValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlVariableObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlVariableObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlVariableObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setName(name);
}

void QUmlVariableObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlVariableObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlVariableObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setQualifiedName(qualifiedName);
}

void QUmlVariableObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlVariableObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlVariableObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlVariableObject::addEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->addEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlVariableObject::removeEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->removeEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlVariableObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [Variable]

void QUmlVariableObject::setActivityScope(QObject *activityScope)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setActivityScope(qmodelingobjectproperty_cast<QUmlActivity *>(activityScope));
}

void QUmlVariableObject::setScope(QObject *scope)
{
    qmodelingobjectproperty_cast<QUmlVariable *>(this)->setScope(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(scope));
}

QT_END_NAMESPACE

