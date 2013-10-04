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
#include "qumlinstancespecificationobject_p.h"

#include <QtUml/QUmlInstanceSpecification>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlSlot>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlInstanceSpecificationObject::QUmlInstanceSpecificationObject(QUmlInstanceSpecification *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlInstanceSpecificationObject::~QUmlInstanceSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInstanceSpecificationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInstanceSpecificationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInstanceSpecificationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInstanceSpecificationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInstanceSpecificationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->name();
}

QObject *QUmlInstanceSpecificationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInstanceSpecificationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->namespace_()->asQObject();
}

QString QUmlInstanceSpecificationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlInstanceSpecificationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlInstanceSpecificationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlInstanceSpecificationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [DeploymentTarget]

const QSet<QObject *> QUmlInstanceSpecificationObject::deployedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->deployedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInstanceSpecificationObject::deployment() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployment *element, qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->deployment())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [InstanceSpecification]

const QSet<QObject *> QUmlInstanceSpecificationObject::classifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->classifier())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInstanceSpecificationObject::slot_() const
{
    QSet<QObject *> set;
    foreach (QUmlSlot *element, qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->slot_())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInstanceSpecificationObject::specification() const
{
    if (!qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->specification())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->specification()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInstanceSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInstanceSpecificationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInstanceSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInstanceSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInstanceSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInstanceSpecificationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlInstanceSpecificationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlInstanceSpecificationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->isTemplateParameter();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInstanceSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInstanceSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInstanceSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInstanceSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInstanceSpecificationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInstanceSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInstanceSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInstanceSpecificationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->setName(name);
}

void QUmlInstanceSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInstanceSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInstanceSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInstanceSpecificationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlInstanceSpecificationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInstanceSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlInstanceSpecificationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlInstanceSpecificationObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->addDeployedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlInstanceSpecificationObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->removeDeployedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlInstanceSpecificationObject::addDeployment(QObject *deployment)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->addDeployment(qmodelingobjectproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlInstanceSpecificationObject::removeDeployment(QObject *deployment)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->removeDeployment(qmodelingobjectproperty_cast<QUmlDeployment *>(deployment));
}

// SLOTS FOR OWNED ATTRIBUTES [InstanceSpecification]

void QUmlInstanceSpecificationObject::addClassifier(QObject *classifier)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->addClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(classifier));
}

void QUmlInstanceSpecificationObject::removeClassifier(QObject *classifier)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->removeClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(classifier));
}

void QUmlInstanceSpecificationObject::addSlot(QObject *slot_)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->addSlot(qmodelingobjectproperty_cast<QUmlSlot *>(slot_));
}

void QUmlInstanceSpecificationObject::removeSlot(QObject *slot_)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->removeSlot(qmodelingobjectproperty_cast<QUmlSlot *>(slot_));
}

void QUmlInstanceSpecificationObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlInstanceSpecification *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlValueSpecification *>(specification));
}

QT_END_NAMESPACE

