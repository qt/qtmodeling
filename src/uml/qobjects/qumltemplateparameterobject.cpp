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
#include "qumltemplateparameterobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

QUmlTemplateParameterObject::QUmlTemplateParameterObject(QUmlTemplateParameter *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlTemplateParameterObject::~QUmlTemplateParameterObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTemplateParameterObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTemplateParameterObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTemplateParameterObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [TemplateParameter]

QObject *QUmlTemplateParameterObject::default_() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->default_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->default_()->asQModelingObject();
}

QObject *QUmlTemplateParameterObject::ownedDefault() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->ownedDefault())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->ownedDefault()->asQModelingObject();
}

QObject *QUmlTemplateParameterObject::ownedParameteredElement() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->ownedParameteredElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->ownedParameteredElement()->asQModelingObject();
}

QObject *QUmlTemplateParameterObject::parameteredElement() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->parameteredElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->parameteredElement()->asQModelingObject();
}

QObject *QUmlTemplateParameterObject::signature() const
{
    if (!qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->signature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->signature()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTemplateParameterObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTemplateParameterObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateParameterObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateParameterObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateParameterObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateParameterObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateParameterObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateParameter]

void QUmlTemplateParameterObject::setDefault(QObject *default_)
{
    qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->setDefault(qmodelingelementproperty_cast<QUmlParameterableElement *>(default_));
}

void QUmlTemplateParameterObject::setOwnedDefault(QObject *ownedDefault)
{
    qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->setOwnedDefault(qmodelingelementproperty_cast<QUmlParameterableElement *>(ownedDefault));
}

void QUmlTemplateParameterObject::setOwnedParameteredElement(QObject *ownedParameteredElement)
{
    qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->setOwnedParameteredElement(qmodelingelementproperty_cast<QUmlParameterableElement *>(ownedParameteredElement));
}

void QUmlTemplateParameterObject::setParameteredElement(QObject *parameteredElement)
{
    qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->setParameteredElement(qmodelingelementproperty_cast<QUmlParameterableElement *>(parameteredElement));
}

void QUmlTemplateParameterObject::setSignature(QObject *signature)
{
    qmodelingelementproperty_cast<QUmlTemplateParameter *>(this)->setSignature(qmodelingelementproperty_cast<QUmlTemplateSignature *>(signature));
}


void QUmlTemplateParameterObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateParameter");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("default_"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedDefault"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameteredElement"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parameteredElement"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("signature"))));
}

void QUmlTemplateParameterObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, default_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, default_, PropertyClassRole, QStringLiteral("QUmlTemplateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, default_, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, default_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, default_, DocumentationRole, QStringLiteral("The element that is the default for this formal template parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, default_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, default_, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, default_, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedDefault, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedDefault, PropertyClassRole, QStringLiteral("QUmlTemplateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedDefault, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedDefault, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedDefault, DocumentationRole, QStringLiteral("The element that is owned by this template parameter for the purpose of providing a default."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedDefault, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedDefault, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement TemplateParameter-default"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedDefault, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedParameteredElement, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedParameteredElement, PropertyClassRole, QStringLiteral("QUmlTemplateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedParameteredElement, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedParameteredElement, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedParameteredElement, DocumentationRole, QStringLiteral("The element that is owned by this template parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedParameteredElement, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedParameteredElement, SubsettedPropertiesRole, QStringLiteral("TemplateParameter-parameteredElement Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, ownedParameteredElement, OppositeEndRole, QStringLiteral("ParameterableElement-owningTemplateParameter"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, parameteredElement, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, parameteredElement, PropertyClassRole, QStringLiteral("QUmlTemplateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, parameteredElement, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, parameteredElement, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, parameteredElement, DocumentationRole, QStringLiteral("The element exposed by this template parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, parameteredElement, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, parameteredElement, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, parameteredElement, OppositeEndRole, QStringLiteral("ParameterableElement-templateParameter"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, signature, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, signature, PropertyClassRole, QStringLiteral("QUmlTemplateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, signature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, signature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, signature, DocumentationRole, QStringLiteral("The template signature that owns this template parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, signature, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, signature, SubsettedPropertiesRole, QStringLiteral("Element-owner A_parameter_templateSignature-templateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateParameter, signature, OppositeEndRole, QStringLiteral("TemplateSignature-ownedParameter"));

}

QT_END_NAMESPACE

