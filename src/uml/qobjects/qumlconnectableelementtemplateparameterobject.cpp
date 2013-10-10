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
#include "qumlconnectableelementtemplateparameterobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

QUmlConnectableElementTemplateParameterObject::QUmlConnectableElementTemplateParameterObject(QUmlConnectableElementTemplateParameter *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlConnectableElementTemplateParameterObject::~QUmlConnectableElementTemplateParameterObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConnectableElementTemplateParameterObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConnectableElementTemplateParameterObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConnectableElementTemplateParameterObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [TemplateParameter]

QObject *QUmlConnectableElementTemplateParameterObject::default_() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->default_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->default_()->asQModelingObject();
}

QObject *QUmlConnectableElementTemplateParameterObject::ownedDefault() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedDefault())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedDefault()->asQModelingObject();
}

QObject *QUmlConnectableElementTemplateParameterObject::ownedParameteredElement() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedParameteredElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->ownedParameteredElement()->asQModelingObject();
}

QObject *QUmlConnectableElementTemplateParameterObject::signature() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->signature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->signature()->asQModelingObject();
}

// OWNED ATTRIBUTES [ConnectableElementTemplateParameter]

QObject *QUmlConnectableElementTemplateParameterObject::parameteredElement() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->parameteredElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->parameteredElement()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConnectableElementTemplateParameterObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConnectableElementTemplateParameterObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConnectableElementTemplateParameterObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectableElementTemplateParameterObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectableElementTemplateParameterObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectableElementTemplateParameterObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectableElementTemplateParameterObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateParameter]

void QUmlConnectableElementTemplateParameterObject::setDefault(QObject *default_)
{
    qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setDefault(qmodelingelementproperty_cast<QUmlParameterableElement *>(default_));
}

void QUmlConnectableElementTemplateParameterObject::setOwnedDefault(QObject *ownedDefault)
{
    qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setOwnedDefault(qmodelingelementproperty_cast<QUmlParameterableElement *>(ownedDefault));
}

void QUmlConnectableElementTemplateParameterObject::setOwnedParameteredElement(QObject *ownedParameteredElement)
{
    qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setOwnedParameteredElement(qmodelingelementproperty_cast<QUmlParameterableElement *>(ownedParameteredElement));
}

void QUmlConnectableElementTemplateParameterObject::setSignature(QObject *signature)
{
    qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setSignature(qmodelingelementproperty_cast<QUmlTemplateSignature *>(signature));
}

// SLOTS FOR OWNED ATTRIBUTES [ConnectableElementTemplateParameter]

void QUmlConnectableElementTemplateParameterObject::setParameteredElement(QObject *parameteredElement)
{
    qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(this)->setParameteredElement(qmodelingelementproperty_cast<QUmlConnectableElement *>(parameteredElement));
}


void QUmlConnectableElementTemplateParameterObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlTemplateParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("signature"))));

    d->propertyGroups << QStringLiteral("QUmlConnectableElementTemplateParameter");
    d->groupProperties.insert(QStringLiteral("QUmlConnectableElementTemplateParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parameteredElement"))));
}

void QUmlConnectableElementTemplateParameterObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElementTemplateParameter, parameteredElement, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElementTemplateParameter, parameteredElement, PropertyClassRole, QStringLiteral("QUmlConnectableElementTemplateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElementTemplateParameter, parameteredElement, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElementTemplateParameter, parameteredElement, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElementTemplateParameter, parameteredElement, DocumentationRole, QStringLiteral("The ConnectableElement for this template parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElementTemplateParameter, parameteredElement, RedefinedPropertiesRole, QStringLiteral("TemplateParameter-parameteredElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElementTemplateParameter, parameteredElement, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElementTemplateParameter, parameteredElement, OppositeEndRole, QStringLiteral("ConnectableElement-templateParameter"));

}

QT_END_NAMESPACE

