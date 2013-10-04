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
#include "qumlinterfacerealizationobject_p.h"

#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlInterfaceRealizationObject::QUmlInterfaceRealizationObject(QUmlInterfaceRealization *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlInterfaceRealizationObject::~QUmlInterfaceRealizationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInterfaceRealizationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceRealizationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInterfaceRealizationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlInterfaceRealizationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlInterfaceRealizationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInterfaceRealizationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInterfaceRealizationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->name();
}

QObject *QUmlInterfaceRealizationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInterfaceRealizationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->namespace_()->asQObject();
}

QString QUmlInterfaceRealizationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlInterfaceRealizationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlInterfaceRealizationObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlInterfaceRealizationObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceRealizationObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlInterfaceRealizationObject::client() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->client())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceRealizationObject::supplier() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->supplier())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Abstraction]

QObject *QUmlInterfaceRealizationObject::mapping() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->mapping())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->mapping()->asQObject();
}

// OWNED ATTRIBUTES [InterfaceRealization]

QObject *QUmlInterfaceRealizationObject::contract() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->contract())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->contract()->asQObject();
}

QObject *QUmlInterfaceRealizationObject::implementingClassifier() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->implementingClassifier())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->implementingClassifier()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInterfaceRealizationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInterfaceRealizationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlInterfaceRealizationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlInterfaceRealizationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInterfaceRealizationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInterfaceRealizationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInterfaceRealizationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInterfaceRealizationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInterfaceRealizationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInterfaceRealizationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInterfaceRealizationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInterfaceRealizationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInterfaceRealizationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInterfaceRealizationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlInterfaceRealizationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInterfaceRealizationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInterfaceRealizationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInterfaceRealizationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->setName(name);
}

void QUmlInterfaceRealizationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInterfaceRealizationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInterfaceRealizationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInterfaceRealizationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlInterfaceRealizationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlInterfaceRealizationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlInterfaceRealizationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlInterfaceRealizationObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlInterfaceRealizationObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlInterfaceRealizationObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlInterfaceRealizationObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlInterfaceRealizationObject::addClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->addClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlInterfaceRealizationObject::removeClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->removeClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlInterfaceRealizationObject::addSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->addSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlInterfaceRealizationObject::removeSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->removeSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Abstraction]

void QUmlInterfaceRealizationObject::setMapping(QObject *mapping)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->setMapping(qmodelingobjectproperty_cast<QUmlOpaqueExpression *>(mapping));
}

// SLOTS FOR OWNED ATTRIBUTES [InterfaceRealization]

void QUmlInterfaceRealizationObject::setContract(QObject *contract)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->setContract(qmodelingobjectproperty_cast<QUmlInterface *>(contract));
}

void QUmlInterfaceRealizationObject::setImplementingClassifier(QObject *implementingClassifier)
{
    qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(this)->setImplementingClassifier(qmodelingobjectproperty_cast<QUmlBehavioredClassifier *>(implementingClassifier));
}

QT_END_NAMESPACE

