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
#include "qumlusageobject_p.h"

#include <QtUml/QUmlUsage>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlUsageObject::QUmlUsageObject(QUmlUsage *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlUsageObject::~QUmlUsageObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlUsage *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlUsageObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlUsage *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUsageObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlUsage *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlUsageObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlUsage *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUsage *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlUsageObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlUsage *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUsage *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlUsageObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlUsage *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUsage *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlUsageObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlUsage *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlUsageObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlUsage *>(this)->name();
}

QObject *QUmlUsageObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlUsage *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUsage *>(this)->nameExpression()->asQObject();
}

QObject *QUmlUsageObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlUsage *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUsage *>(this)->namespace_()->asQObject();
}

QString QUmlUsageObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlUsage *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlUsageObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlUsage *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlUsageObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlUsage *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlUsageObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlUsage *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUsageObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlUsage *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlUsageObject::client() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlUsage *>(this)->client())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUsageObject::supplier() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlUsage *>(this)->supplier())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlUsageObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlUsage *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlUsageObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlUsage *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlUsageObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlUsage *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlUsageObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlUsage *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlUsageObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlUsage *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlUsageObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlUsage *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlUsageObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlUsage *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlUsageObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlUsage *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlUsageObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUsageObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUsageObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUsageObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUsageObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlUsageObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlUsageObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlUsageObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUsageObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUsageObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->setName(name);
}

void QUmlUsageObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlUsageObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlUsageObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlUsageObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->setVisibility(visibility);
}

void QUmlUsageObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlUsageObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlUsageObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlUsageObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlUsageObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlUsageObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlUsageObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlUsageObject::addClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->addClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlUsageObject::removeClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->removeClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlUsageObject::addSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->addSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlUsageObject::removeSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlUsage *>(this)->removeSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

QT_END_NAMESPACE

