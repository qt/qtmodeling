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
#include "qumlcomponentrealizationobject_p.h"

#include <QtUml/QUmlComponentRealization>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlComponent>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlComponentRealizationObject::QUmlComponentRealizationObject(QUmlComponentRealization *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlComponentRealizationObject::~QUmlComponentRealizationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlComponentRealizationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentRealizationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlComponentRealizationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlComponentRealizationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlComponentRealizationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlComponentRealizationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlComponentRealizationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->name();
}

QObject *QUmlComponentRealizationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->nameExpression()->asQObject();
}

QObject *QUmlComponentRealizationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->namespace_()->asQObject();
}

QString QUmlComponentRealizationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlComponentRealizationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlComponentRealizationObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlComponentRealizationObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentRealizationObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlComponentRealizationObject::client() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->client())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlComponentRealizationObject::supplier() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->supplier())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Abstraction]

QObject *QUmlComponentRealizationObject::mapping() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->mapping())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->mapping()->asQObject();
}

// OWNED ATTRIBUTES [ComponentRealization]

QObject *QUmlComponentRealizationObject::abstraction() const
{
    if (!qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->abstraction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->abstraction()->asQObject();
}

const QSet<QObject *> QUmlComponentRealizationObject::realizingClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->realizingClassifier())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlComponentRealizationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlComponentRealizationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlComponentRealizationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlComponentRealizationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlComponentRealizationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlComponentRealizationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlComponentRealizationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlComponentRealizationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlComponentRealizationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlComponentRealizationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlComponentRealizationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlComponentRealizationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlComponentRealizationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlComponentRealizationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlComponentRealizationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlComponentRealizationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlComponentRealizationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlComponentRealizationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->setName(name);
}

void QUmlComponentRealizationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlComponentRealizationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlComponentRealizationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlComponentRealizationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlComponentRealizationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlComponentRealizationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlComponentRealizationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlComponentRealizationObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlComponentRealizationObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlComponentRealizationObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlComponentRealizationObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlComponentRealizationObject::addClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->addClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlComponentRealizationObject::removeClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->removeClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlComponentRealizationObject::addSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->addSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlComponentRealizationObject::removeSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->removeSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Abstraction]

void QUmlComponentRealizationObject::setMapping(QObject *mapping)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->setMapping(qmodelingobjectproperty_cast<QUmlOpaqueExpression *>(mapping));
}

// SLOTS FOR OWNED ATTRIBUTES [ComponentRealization]

void QUmlComponentRealizationObject::setAbstraction(QObject *abstraction)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->setAbstraction(qmodelingobjectproperty_cast<QUmlComponent *>(abstraction));
}

void QUmlComponentRealizationObject::addRealizingClassifier(QObject *realizingClassifier)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->addRealizingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(realizingClassifier));
}

void QUmlComponentRealizationObject::removeRealizingClassifier(QObject *realizingClassifier)
{
    qmodelingobjectproperty_cast<QUmlComponentRealization *>(this)->removeRealizingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(realizingClassifier));
}

QT_END_NAMESPACE

