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
#include "qumldependencyobject_p.h"

#include <QtUml/QUmlDependency>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlDependencyObject::QUmlDependencyObject(QUmlDependency *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlDependencyObject::~QUmlDependencyObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDependency *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDependencyObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDependency *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDependencyObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDependency *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDependencyObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDependencyObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlDependencyObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDependencyObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDependency *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDependencyObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->name();
}

QObject *QUmlDependencyObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDependencyObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->namespace_()->asQObject();
}

QString QUmlDependencyObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDependencyObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlDependencyObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDependency *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlDependencyObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDependency *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDependencyObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDependency *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlDependencyObject::client() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDependency *>(this)->client())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDependencyObject::supplier() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDependency *>(this)->supplier())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDependencyObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDependency *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDependencyObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlDependencyObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDependencyObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDependencyObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDependency *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDependencyObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDependency *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDependencyObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDependencyObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDependency *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDependencyObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDependencyObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDependencyObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDependencyObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDependencyObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDependencyObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlDependencyObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDependencyObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDependencyObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDependencyObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->setName(name);
}
    
void QUmlDependencyObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDependencyObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDependencyObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDependencyObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlDependencyObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlDependencyObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlDependencyObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlDependencyObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlDependencyObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlDependencyObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlDependencyObject::addClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->addClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlDependencyObject::removeClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->removeClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlDependencyObject::addSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->addSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlDependencyObject::removeSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlDependency *>(this)->removeSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

QT_END_NAMESPACE

