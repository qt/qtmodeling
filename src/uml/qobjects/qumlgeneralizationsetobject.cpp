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
#include "qumlgeneralizationsetobject_p.h"

#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlGeneralizationSetObject::QUmlGeneralizationSetObject(QUmlGeneralizationSet *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlGeneralizationSetObject::~QUmlGeneralizationSetObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlGeneralizationSetObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlGeneralizationSetObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlGeneralizationSetObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlGeneralizationSetObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlGeneralizationSetObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlGeneralizationSetObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlGeneralizationSetObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->name();
}

QObject *QUmlGeneralizationSetObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->nameExpression()->asQObject();
}

QObject *QUmlGeneralizationSetObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->namespace_()->asQObject();
}

QString QUmlGeneralizationSetObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlGeneralizationSetObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->visibility();
}

// OWNED ATTRIBUTES [GeneralizationSet]

const QSet<QObject *> QUmlGeneralizationSetObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

bool QUmlGeneralizationSetObject::isCovering() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->isCovering();
}

bool QUmlGeneralizationSetObject::isDisjoint() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->isDisjoint();
}

QObject *QUmlGeneralizationSetObject::powertype() const
{
    if (!qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->powertype())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->powertype()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlGeneralizationSetObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlGeneralizationSetObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlGeneralizationSetObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlGeneralizationSetObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlGeneralizationSetObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlGeneralizationSetObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlGeneralizationSetObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlGeneralizationSetObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlGeneralizationSetObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGeneralizationSetObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGeneralizationSetObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGeneralizationSetObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGeneralizationSetObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlGeneralizationSetObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlGeneralizationSetObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlGeneralizationSetObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGeneralizationSetObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGeneralizationSetObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->setName(name);
}

void QUmlGeneralizationSetObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlGeneralizationSetObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlGeneralizationSetObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlGeneralizationSetObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlGeneralizationSetObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [GeneralizationSet]

void QUmlGeneralizationSetObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlGeneralizationSetObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlGeneralizationSetObject::setCovering(bool isCovering)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->setCovering(isCovering);
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->modifiedResettableProperties() << QStringLiteral("covering");
}

void QUmlGeneralizationSetObject::unsetCovering()
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("covering"));
}

void QUmlGeneralizationSetObject::setDisjoint(bool isDisjoint)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->setDisjoint(isDisjoint);
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->modifiedResettableProperties() << QStringLiteral("disjoint");
}

void QUmlGeneralizationSetObject::unsetDisjoint()
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("disjoint"));
}

void QUmlGeneralizationSetObject::setPowertype(QObject *powertype)
{
    qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(this)->setPowertype(qmodelingobjectproperty_cast<QUmlClassifier *>(powertype));
}

QT_END_NAMESPACE

