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
#include "qumlinformationflowobject_p.h"

#include <QtUml/QUmlInformationFlow>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlRelationship>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlInformationFlowObject::QUmlInformationFlowObject(QUmlInformationFlow *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlInformationFlowObject::~QUmlInformationFlowObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInformationFlowObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInformationFlowObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlInformationFlowObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlInformationFlowObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlInformationFlowObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlInformationFlowObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInformationFlowObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInformationFlowObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->name();
}

QObject *QUmlInformationFlowObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInformationFlowObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->namespace_()->asQObject();
}

QString QUmlInformationFlowObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlInformationFlowObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->visibility();
}

// OWNED ATTRIBUTES [InformationFlow]

const QSet<QObject *> QUmlInformationFlowObject::conveyed() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->conveyed())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::informationSource() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->informationSource())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::informationTarget() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->informationTarget())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::realization() const
{
    QSet<QObject *> set;
    foreach (QUmlRelationship *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->realization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::realizingActivityEdge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->realizingActivityEdge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::realizingConnector() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->realizingConnector())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationFlowObject::realizingMessage() const
{
    QSet<QObject *> set;
    foreach (QUmlMessage *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->realizingMessage())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInformationFlowObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInformationFlowObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlInformationFlowObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlInformationFlowObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInformationFlowObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInformationFlowObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInformationFlowObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInformationFlowObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInformationFlowObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInformationFlowObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInformationFlowObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInformationFlowObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInformationFlowObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlInformationFlowObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlInformationFlowObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlInformationFlowObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlInformationFlowObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlInformationFlowObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlInformationFlowObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInformationFlowObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlInformationFlowObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInformationFlowObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInformationFlowObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInformationFlowObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->setName(name);
}
    
void QUmlInformationFlowObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInformationFlowObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInformationFlowObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInformationFlowObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [InformationFlow]

void QUmlInformationFlowObject::addConveyed(QObject *conveyed)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addConveyed(qmodelingobjectproperty_cast<QUmlClassifier *>(conveyed));
}

void QUmlInformationFlowObject::removeConveyed(QObject *conveyed)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeConveyed(qmodelingobjectproperty_cast<QUmlClassifier *>(conveyed));
}

void QUmlInformationFlowObject::addInformationSource(QObject *informationSource)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addInformationSource(qmodelingobjectproperty_cast<QUmlNamedElement *>(informationSource));
}

void QUmlInformationFlowObject::removeInformationSource(QObject *informationSource)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeInformationSource(qmodelingobjectproperty_cast<QUmlNamedElement *>(informationSource));
}

void QUmlInformationFlowObject::addInformationTarget(QObject *informationTarget)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addInformationTarget(qmodelingobjectproperty_cast<QUmlNamedElement *>(informationTarget));
}

void QUmlInformationFlowObject::removeInformationTarget(QObject *informationTarget)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeInformationTarget(qmodelingobjectproperty_cast<QUmlNamedElement *>(informationTarget));
}

void QUmlInformationFlowObject::addRealization(QObject *realization)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addRealization(qmodelingobjectproperty_cast<QUmlRelationship *>(realization));
}

void QUmlInformationFlowObject::removeRealization(QObject *realization)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeRealization(qmodelingobjectproperty_cast<QUmlRelationship *>(realization));
}

void QUmlInformationFlowObject::addRealizingActivityEdge(QObject *realizingActivityEdge)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addRealizingActivityEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(realizingActivityEdge));
}

void QUmlInformationFlowObject::removeRealizingActivityEdge(QObject *realizingActivityEdge)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeRealizingActivityEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(realizingActivityEdge));
}

void QUmlInformationFlowObject::addRealizingConnector(QObject *realizingConnector)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addRealizingConnector(qmodelingobjectproperty_cast<QUmlConnector *>(realizingConnector));
}

void QUmlInformationFlowObject::removeRealizingConnector(QObject *realizingConnector)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeRealizingConnector(qmodelingobjectproperty_cast<QUmlConnector *>(realizingConnector));
}

void QUmlInformationFlowObject::addRealizingMessage(QObject *realizingMessage)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->addRealizingMessage(qmodelingobjectproperty_cast<QUmlMessage *>(realizingMessage));
}

void QUmlInformationFlowObject::removeRealizingMessage(QObject *realizingMessage)
{
    qmodelingobjectproperty_cast<QUmlInformationFlow *>(this)->removeRealizingMessage(qmodelingobjectproperty_cast<QUmlMessage *>(realizingMessage));
}

QT_END_NAMESPACE

