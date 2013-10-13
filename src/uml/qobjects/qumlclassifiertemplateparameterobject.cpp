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
#include "qumlclassifiertemplateparameterobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

QUmlClassifierTemplateParameterObject::QUmlClassifierTemplateParameterObject(QUmlClassifierTemplateParameter *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlClassifierTemplateParameterObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlClassifierTemplateParameterObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlClassifierTemplateParameterObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [TemplateParameter]

QObject *QUmlClassifierTemplateParameterObject::default_() const
{
    if (!qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->default_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->default_()->asQModelingObject();
}

QObject *QUmlClassifierTemplateParameterObject::ownedDefault() const
{
    if (!qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedDefault())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedDefault()->asQModelingObject();
}

QObject *QUmlClassifierTemplateParameterObject::ownedParameteredElement() const
{
    if (!qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedParameteredElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedParameteredElement()->asQModelingObject();
}

QObject *QUmlClassifierTemplateParameterObject::signature() const
{
    if (!qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->signature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->signature()->asQModelingObject();
}

// OWNED ATTRIBUTES [ClassifierTemplateParameter]

bool QUmlClassifierTemplateParameterObject::allowSubstitutable() const
{
    return qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->allowSubstitutable();
}

const QSet<QObject *> QUmlClassifierTemplateParameterObject::constrainingClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->constrainingClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlClassifierTemplateParameterObject::parameteredElement() const
{
    if (!qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->parameteredElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->parameteredElement()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlClassifierTemplateParameterObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlClassifierTemplateParameterObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlClassifierTemplateParameterObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClassifierTemplateParameterObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClassifierTemplateParameterObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClassifierTemplateParameterObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClassifierTemplateParameterObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateParameter]

void QUmlClassifierTemplateParameterObject::setDefault(QObject *default_)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->setDefault(qmodelingelementproperty_cast<QUmlParameterableElement *>(default_));
}

void QUmlClassifierTemplateParameterObject::setOwnedDefault(QObject *ownedDefault)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->setOwnedDefault(qmodelingelementproperty_cast<QUmlParameterableElement *>(ownedDefault));
}

void QUmlClassifierTemplateParameterObject::setOwnedParameteredElement(QObject *ownedParameteredElement)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->setOwnedParameteredElement(qmodelingelementproperty_cast<QUmlParameterableElement *>(ownedParameteredElement));
}

void QUmlClassifierTemplateParameterObject::setSignature(QObject *signature)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->setSignature(qmodelingelementproperty_cast<QUmlTemplateSignature *>(signature));
}

// SLOTS FOR OWNED ATTRIBUTES [ClassifierTemplateParameter]

void QUmlClassifierTemplateParameterObject::setAllowSubstitutable(bool allowSubstitutable)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->setAllowSubstitutable(allowSubstitutable);
}

void QUmlClassifierTemplateParameterObject::unsetAllowSubstitutable()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("allowSubstitutable"));
}

void QUmlClassifierTemplateParameterObject::addConstrainingClassifier(QObject *constrainingClassifier)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->addConstrainingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(constrainingClassifier));
}

void QUmlClassifierTemplateParameterObject::removeConstrainingClassifier(QObject *constrainingClassifier)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->removeConstrainingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(constrainingClassifier));
}

void QUmlClassifierTemplateParameterObject::setParameteredElement(QObject *parameteredElement)
{
    qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(this)->setParameteredElement(qmodelingelementproperty_cast<QUmlClassifier *>(parameteredElement));
}


void QUmlClassifierTemplateParameterObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlClassifierTemplateParameter");
    d->groupProperties.insert(QStringLiteral("QUmlClassifierTemplateParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("allowSubstitutable"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifierTemplateParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("constrainingClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifierTemplateParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parameteredElement"))));
}

void QUmlClassifierTemplateParameterObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, allowSubstitutable, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, allowSubstitutable, PropertyClassRole, QStringLiteral("QUmlClassifierTemplateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, allowSubstitutable, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, allowSubstitutable, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, allowSubstitutable, DocumentationRole, QStringLiteral("Constrains the required relationship between an actual parameter and the parameteredElement for this formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, allowSubstitutable, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, allowSubstitutable, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, allowSubstitutable, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, constrainingClassifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, constrainingClassifiers, PropertyClassRole, QStringLiteral("QUmlClassifierTemplateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, constrainingClassifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, constrainingClassifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, constrainingClassifiers, DocumentationRole, QStringLiteral("The classifiers that constrain the argument that can be used for the parameter. If the allowSubstitutable attribute is true, then any classifier that is compatible with this constraining classifier can be substituted; otherwise, it must be either this classifier or one of its subclasses. If this property is empty, there are no constraints on the classifier that can be used as an argument."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, constrainingClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, constrainingClassifiers, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, constrainingClassifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, parameteredElement, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, parameteredElement, PropertyClassRole, QStringLiteral("QUmlClassifierTemplateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, parameteredElement, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, parameteredElement, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, parameteredElement, DocumentationRole, QStringLiteral("The parameterable classifier for this template parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, parameteredElement, RedefinedPropertiesRole, QStringLiteral("TemplateParameter-parameteredElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, parameteredElement, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifierTemplateParameter, parameteredElement, OppositeEndRole, QStringLiteral("Classifier-templateParameter"));

}

QT_END_NAMESPACE

