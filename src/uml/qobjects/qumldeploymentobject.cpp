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
#include "qumldeploymentobject_p.h"

#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployedArtifact>
#include <QtUml/QUmlDeploymentSpecification>
#include <QtUml/QUmlDeploymentTarget>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlDeploymentObject::QUmlDeploymentObject(QUmlDeployment *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlDeploymentObject::~QUmlDeploymentObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDeployment *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDeploymentObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDeploymentObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDeploymentObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlDeploymentObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDeploymentObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDeploymentObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->name();
}

QObject *QUmlDeploymentObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDeploymentObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->namespace_()->asQObject();
}

QString QUmlDeploymentObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDeploymentObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlDeploymentObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlDeploymentObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlDeploymentObject::client() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->client())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentObject::supplier() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->supplier())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Deployment]

const QSet<QObject *> QUmlDeploymentObject::configuration() const
{
    QSet<QObject *> set;
    foreach (QUmlDeploymentSpecification *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->configuration())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDeploymentObject::deployedArtifact() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployedArtifact *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->deployedArtifact())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDeploymentObject::location() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->location()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDeploymentObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDeploymentObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlDeploymentObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDeploymentObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDeploymentObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDeploymentObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDeployment *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDeploymentObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDeploymentObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDeployment *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDeploymentObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDeploymentObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDeploymentObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDeploymentObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDeploymentObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDeploymentObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlDeploymentObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDeploymentObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDeploymentObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDeploymentObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->setName(name);
}
    
void QUmlDeploymentObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDeploymentObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDeploymentObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDeploymentObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlDeploymentObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlDeploymentObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlDeploymentObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlDeploymentObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlDeploymentObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlDeploymentObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlDeploymentObject::addClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->addClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlDeploymentObject::removeClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->removeClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlDeploymentObject::addSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->addSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlDeploymentObject::removeSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->removeSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Deployment]

void QUmlDeploymentObject::addConfiguration(QObject *configuration)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->addConfiguration(qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(configuration));
}

void QUmlDeploymentObject::removeConfiguration(QObject *configuration)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->removeConfiguration(qmodelingobjectproperty_cast<QUmlDeploymentSpecification *>(configuration));
}

void QUmlDeploymentObject::addDeployedArtifact(QObject *deployedArtifact)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->addDeployedArtifact(qmodelingobjectproperty_cast<QUmlDeployedArtifact *>(deployedArtifact));
}

void QUmlDeploymentObject::removeDeployedArtifact(QObject *deployedArtifact)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->removeDeployedArtifact(qmodelingobjectproperty_cast<QUmlDeployedArtifact *>(deployedArtifact));
}

void QUmlDeploymentObject::setLocation(QObject *location)
{
    qmodelingobjectproperty_cast<QUmlDeployment *>(this)->setLocation(qmodelingobjectproperty_cast<QUmlDeploymentTarget *>(location));
}

QT_END_NAMESPACE

