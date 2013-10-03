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
#include "qumlenumerationliteralobject_p.h"

#include <QtUml/QUmlEnumerationLiteral>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlEnumeration>
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

QUmlEnumerationLiteralObject::QUmlEnumerationLiteralObject(QUmlEnumerationLiteral *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlEnumerationLiteralObject::~QUmlEnumerationLiteralObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlEnumerationLiteralObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationLiteralObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlEnumerationLiteralObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlEnumerationLiteralObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlEnumerationLiteralObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->name();
}

QObject *QUmlEnumerationLiteralObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->nameExpression()->asQObject();
}

QObject *QUmlEnumerationLiteralObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->namespace_()->asQObject();
}

QString QUmlEnumerationLiteralObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlEnumerationLiteralObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlEnumerationLiteralObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlEnumerationLiteralObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->visibility();
}

// OWNED ATTRIBUTES [DeploymentTarget]

const QSet<QObject *> QUmlEnumerationLiteralObject::deployedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->deployedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationLiteralObject::deployment() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployment *element, qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->deployment())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [InstanceSpecification]

const QSet<QObject *> QUmlEnumerationLiteralObject::slot_() const
{
    QSet<QObject *> set;
    foreach (QUmlSlot *element, qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->slot_())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlEnumerationLiteralObject::specification() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->specification())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->specification()->asQObject();
}

// OWNED ATTRIBUTES [EnumerationLiteral]

QObject *QUmlEnumerationLiteralObject::classifier() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->classifier())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->classifier()->asQObject();
}

QObject *QUmlEnumerationLiteralObject::enumeration() const
{
    return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->enumeration()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlEnumerationLiteralObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlEnumerationLiteralObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlEnumerationLiteralObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlEnumerationLiteralObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlEnumerationLiteralObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlEnumerationLiteralObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlEnumerationLiteralObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlEnumerationLiteralObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->isTemplateParameter();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlEnumerationLiteralObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlEnumerationLiteralObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlEnumerationLiteralObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlEnumerationLiteralObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlEnumerationLiteralObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlEnumerationLiteralObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlEnumerationLiteralObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlEnumerationLiteralObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->setName(name);
}
    
void QUmlEnumerationLiteralObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlEnumerationLiteralObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlEnumerationLiteralObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlEnumerationLiteralObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlEnumerationLiteralObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlEnumerationLiteralObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlEnumerationLiteralObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->addDeployedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlEnumerationLiteralObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->removeDeployedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlEnumerationLiteralObject::addDeployment(QObject *deployment)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->addDeployment(qmodelingobjectproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlEnumerationLiteralObject::removeDeployment(QObject *deployment)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->removeDeployment(qmodelingobjectproperty_cast<QUmlDeployment *>(deployment));
}

// SLOTS FOR OWNED ATTRIBUTES [InstanceSpecification]

void QUmlEnumerationLiteralObject::addSlot(QObject *slot_)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->addSlot(qmodelingobjectproperty_cast<QUmlSlot *>(slot_));
}

void QUmlEnumerationLiteralObject::removeSlot(QObject *slot_)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->removeSlot(qmodelingobjectproperty_cast<QUmlSlot *>(slot_));
}

void QUmlEnumerationLiteralObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlValueSpecification *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [EnumerationLiteral]

void QUmlEnumerationLiteralObject::setClassifier(QObject *classifier)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->setClassifier(qmodelingobjectproperty_cast<QUmlEnumeration *>(classifier));
}

void QUmlEnumerationLiteralObject::setEnumeration(QObject *enumeration)
{
    qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(this)->setEnumeration(qmodelingobjectproperty_cast<QUmlEnumeration *>(enumeration));
}

QT_END_NAMESPACE

