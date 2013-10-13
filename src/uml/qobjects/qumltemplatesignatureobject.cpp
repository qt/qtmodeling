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
#include "qumltemplatesignatureobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlTemplateSignatureObject::QUmlTemplateSignatureObject(QUmlTemplateSignature *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTemplateSignatureObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTemplateSignatureObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTemplateSignatureObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [TemplateSignature]

const QList<QObject *> QUmlTemplateSignatureObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlTemplateParameter *element, qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlTemplateSignatureObject::parameters() const
{
    QList<QObject *> list;
    foreach (QUmlTemplateParameter *element, qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->parameters())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlTemplateSignatureObject::template_() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->template_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->template_()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTemplateSignatureObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTemplateSignatureObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateSignatureObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateSignatureObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateSignatureObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateSignatureObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateSignatureObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateSignature]

void QUmlTemplateSignatureObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(ownedParameter));
}

void QUmlTemplateSignatureObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(ownedParameter));
}

void QUmlTemplateSignatureObject::addParameter(QObject *parameter)
{
    qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->addParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(parameter));
}

void QUmlTemplateSignatureObject::removeParameter(QObject *parameter)
{
    qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->removeParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(parameter));
}

void QUmlTemplateSignatureObject::setTemplate(QObject *template_)
{
    qmodelingelementproperty_cast<QUmlTemplateSignature *>(this)->setTemplate(qmodelingelementproperty_cast<QUmlTemplateableElement *>(template_));
}


void QUmlTemplateSignatureObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateSignature");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateSignature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameters"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateSignature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parameters"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateSignature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("template_"))));
}

void QUmlTemplateSignatureObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, PropertyClassRole, QStringLiteral("QUmlTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, DocumentationRole, QStringLiteral("The formal template parameters that are owned by this template signature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, SubsettedPropertiesRole, QStringLiteral("TemplateSignature-parameter Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, ownedParameters, OppositeEndRole, QStringLiteral("TemplateParameter-signature"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, PropertyClassRole, QStringLiteral("QUmlTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, DocumentationRole, QStringLiteral("The ordered set of all formal template parameters for this template signature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, parameters, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, PropertyClassRole, QStringLiteral("QUmlTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, DocumentationRole, QStringLiteral("The element that owns this template signature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateSignature, template_, OppositeEndRole, QStringLiteral("TemplateableElement-ownedTemplateSignature"));

}

QT_END_NAMESPACE

