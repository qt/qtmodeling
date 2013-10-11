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
#include "qumltemplateparametersubstitutionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlTemplateParameterSubstitution>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlTemplateParameterSubstitutionObject::QUmlTemplateParameterSubstitutionObject(QUmlTemplateParameterSubstitution *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlTemplateParameterSubstitutionObject::~QUmlTemplateParameterSubstitutionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTemplateParameterSubstitutionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTemplateParameterSubstitutionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTemplateParameterSubstitutionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [TemplateParameterSubstitution]

QObject *QUmlTemplateParameterSubstitutionObject::actual() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->actual())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->actual()->asQModelingObject();
}

QObject *QUmlTemplateParameterSubstitutionObject::formal() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->formal())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->formal()->asQModelingObject();
}

QObject *QUmlTemplateParameterSubstitutionObject::ownedActual() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->ownedActual())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->ownedActual()->asQModelingObject();
}

QObject *QUmlTemplateParameterSubstitutionObject::templateBinding() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->templateBinding())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->templateBinding()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTemplateParameterSubstitutionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTemplateParameterSubstitutionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateParameterSubstitutionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateParameterSubstitutionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateParameterSubstitutionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateParameterSubstitutionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateParameterSubstitutionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateParameterSubstitution]

void QUmlTemplateParameterSubstitutionObject::setActual(QObject *actual)
{
    qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->setActual(qmodelingelementproperty_cast<QUmlParameterableElement *>(actual));
}

void QUmlTemplateParameterSubstitutionObject::setFormal(QObject *formal)
{
    qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->setFormal(qmodelingelementproperty_cast<QUmlTemplateParameter *>(formal));
}

void QUmlTemplateParameterSubstitutionObject::setOwnedActual(QObject *ownedActual)
{
    qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->setOwnedActual(qmodelingelementproperty_cast<QUmlParameterableElement *>(ownedActual));
}

void QUmlTemplateParameterSubstitutionObject::setTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlTemplateParameterSubstitution *>(this)->setTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}


void QUmlTemplateParameterSubstitutionObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateParameterSubstitution");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateParameterSubstitution"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("actual"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateParameterSubstitution"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("formal"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateParameterSubstitution"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedActual"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateParameterSubstitution"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateBinding"))));
}

void QUmlTemplateParameterSubstitutionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, actual, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, actual, PropertyClassRole, QStringLiteral("QUmlTemplateParameterSubstitution"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, actual, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, actual, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, actual, DocumentationRole, QStringLiteral("The element that is the actual parameter for this substitution."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, actual, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, actual, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, actual, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, formal, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, formal, PropertyClassRole, QStringLiteral("QUmlTemplateParameterSubstitution"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, formal, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, formal, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, formal, DocumentationRole, QStringLiteral("The formal template parameter that is associated with this substitution."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, formal, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, formal, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, formal, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, ownedActual, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, ownedActual, PropertyClassRole, QStringLiteral("QUmlTemplateParameterSubstitution"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, ownedActual, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, ownedActual, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, ownedActual, DocumentationRole, QStringLiteral("The actual parameter that is owned by this substitution."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, ownedActual, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, ownedActual, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement TemplateParameterSubstitution-actual"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, ownedActual, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, templateBinding, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, templateBinding, PropertyClassRole, QStringLiteral("QUmlTemplateParameterSubstitution"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, templateBinding, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, templateBinding, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, templateBinding, DocumentationRole, QStringLiteral("The optional bindings from this element to templates."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, templateBinding, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, templateBinding, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameterSubstitution, templateBinding, OppositeEndRole, QStringLiteral("TemplateBinding-parameterSubstitution"));

}

QT_END_NAMESPACE

