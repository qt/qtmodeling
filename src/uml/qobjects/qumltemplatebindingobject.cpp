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
#include "qumltemplatebindingobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameterSubstitution>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

QUmlTemplateBindingObject::QUmlTemplateBindingObject(QUmlTemplateBinding *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlTemplateBindingObject::~QUmlTemplateBindingObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTemplateBindingObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTemplateBindingObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTemplateBindingObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlTemplateBindingObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlTemplateBindingObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTemplateBindingObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateBinding]

QObject *QUmlTemplateBindingObject::boundElement() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->boundElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->boundElement()->asQModelingObject();
}

const QSet<QObject *> QUmlTemplateBindingObject::parameterSubstitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateParameterSubstitution *element, qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->parameterSubstitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTemplateBindingObject::signature() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->signature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->signature()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTemplateBindingObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTemplateBindingObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateBindingObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateBindingObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateBindingObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateBindingObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateBindingObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlTemplateBindingObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlTemplateBindingObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlTemplateBindingObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlTemplateBindingObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlTemplateBindingObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlTemplateBindingObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateBinding]

void QUmlTemplateBindingObject::setBoundElement(QObject *boundElement)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->setBoundElement(qmodelingelementproperty_cast<QUmlTemplateableElement *>(boundElement));
}

void QUmlTemplateBindingObject::addParameterSubstitution(QObject *parameterSubstitution)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->addParameterSubstitution(qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(parameterSubstitution));
}

void QUmlTemplateBindingObject::removeParameterSubstitution(QObject *parameterSubstitution)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->removeParameterSubstitution(qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(parameterSubstitution));
}

void QUmlTemplateBindingObject::setSignature(QObject *signature)
{
    qmodelingelementproperty_cast<QUmlTemplateBinding *>(this)->setSignature(qmodelingelementproperty_cast<QUmlTemplateSignature *>(signature));
}


void QUmlTemplateBindingObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));

    d->propertyGroups << QStringLiteral("QUmlDirectedRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sources"))));
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targets"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateBinding");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateBinding"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("boundElement"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateBinding"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parameterSubstitutions"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateBinding"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("signature"))));
}

void QUmlTemplateBindingObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, boundElement, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, boundElement, PropertyClassRole, QStringLiteral("QUmlTemplateBinding"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, boundElement, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, boundElement, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, boundElement, DocumentationRole, QStringLiteral("The element that is bound by this binding."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, boundElement, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, boundElement, SubsettedPropertiesRole, QStringLiteral("Element-owner DirectedRelationship-source"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, boundElement, OppositeEndRole, QStringLiteral("TemplateableElement-templateBinding"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, parameterSubstitutions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, parameterSubstitutions, PropertyClassRole, QStringLiteral("QUmlTemplateBinding"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, parameterSubstitutions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, parameterSubstitutions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, parameterSubstitutions, DocumentationRole, QStringLiteral("The parameter substitutions owned by this template binding."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, parameterSubstitutions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, parameterSubstitutions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, parameterSubstitutions, OppositeEndRole, QStringLiteral("TemplateParameterSubstitution-templateBinding"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, signature, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, signature, PropertyClassRole, QStringLiteral("QUmlTemplateBinding"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, signature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, signature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, signature, DocumentationRole, QStringLiteral("The template signature for the template that is the target of the binding."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, signature, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, signature, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateBinding, signature, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

