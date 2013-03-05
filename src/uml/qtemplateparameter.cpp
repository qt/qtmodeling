/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qtemplateparameter.h"
#include "qtemplateparameter_p.h"

#include <QtUml/QParameterableElement>
#include <QtUml/QTemplateSignature>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QTemplateParameterPrivate::QTemplateParameterPrivate() :
    default_(0),
    parameteredElement(0),
    ownedParameteredElement(0),
    ownedDefault(0),
    signature(0)
{
}

QTemplateParameterPrivate::~QTemplateParameterPrivate()
{
}

/*!
    \class QTemplateParameter

    \inmodule QtUml

    \brief A template parameter exposes a parameterable element as a formal template parameter of a template.
 */

QTemplateParameter::QTemplateParameter(QWrappedObject *wrapper, QWrappedObject *parent) :
    QElement(*new QTemplateParameterPrivate, wrapper, parent)
{
    setPropertyData();
}

QTemplateParameter::QTemplateParameter(QTemplateParameterPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QElement(dd, wrapper, parent)
{
    setPropertyData();
}

QTemplateParameter::~QTemplateParameter()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTemplateParameter
// ---------------------------------------------------------------

/*!
    The element that is the default for this formal template parameter.
 */
QParameterableElement *QTemplateParameter::default_() const
{
    // This is a read-write association end

    Q_D(const QTemplateParameter);
    return d->default_;
}

void QTemplateParameter::setDefault_(QParameterableElement *default_)
{
    // This is a read-write association end

    Q_D(QTemplateParameter);
    if (d->default_ != default_) {
        d->default_ = default_;
    }
}

/*!
    The element exposed by this template parameter.
 */
QParameterableElement *QTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    Q_D(const QTemplateParameter);
    return d->parameteredElement;
}

void QTemplateParameter::setParameteredElement(QParameterableElement *parameteredElement)
{
    // This is a read-write association end

    Q_D(QTemplateParameter);
    if (d->parameteredElement != parameteredElement) {
        // Adjust opposite property

        d->parameteredElement = parameteredElement;

        // Adjust opposite property
        parameteredElement->setTemplateParameter(this);
    }
}

/*!
    The element that is owned by this template parameter.
 */
QParameterableElement *QTemplateParameter::ownedParameteredElement() const
{
    // This is a read-write association end

    Q_D(const QTemplateParameter);
    return d->ownedParameteredElement;
}

void QTemplateParameter::setOwnedParameteredElement(QParameterableElement *ownedParameteredElement)
{
    // This is a read-write association end

    Q_D(QTemplateParameter);
    if (d->ownedParameteredElement != ownedParameteredElement) {
        // Adjust opposite property

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->ownedParameteredElement));

        d->ownedParameteredElement = ownedParameteredElement;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QTemplateParameter *>(this))->setParameteredElement(qwrappedobject_cast<QParameterableElement *>(ownedParameteredElement));
        if (ownedParameteredElement) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(ownedParameteredElement));
        }

        // Adjust opposite property
        ownedParameteredElement->setOwningTemplateParameter(this);
    }
}

/*!
    The element that is owned by this template parameter for the purpose of providing a default.
 */
QParameterableElement *QTemplateParameter::ownedDefault() const
{
    // This is a read-write association end

    Q_D(const QTemplateParameter);
    return d->ownedDefault;
}

void QTemplateParameter::setOwnedDefault(QParameterableElement *ownedDefault)
{
    // This is a read-write association end

    Q_D(QTemplateParameter);
    if (d->ownedDefault != ownedDefault) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->ownedDefault));

        d->ownedDefault = ownedDefault;

        // Adjust subsetted property(ies)
        if (ownedDefault) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(ownedDefault));
        }
        (qwrappedobject_cast<QTemplateParameter *>(this))->setDefault_(qwrappedobject_cast<QParameterableElement *>(ownedDefault));
    }
}

/*!
    The template signature that owns this template parameter.
 */
QTemplateSignature *QTemplateParameter::signature() const
{
    // This is a read-write association end

    Q_D(const QTemplateParameter);
    return d->signature;
}

void QTemplateParameter::setSignature(QTemplateSignature *signature)
{
    // This is a read-write association end

    Q_D(QTemplateParameter);
    if (d->signature != signature) {
        // Adjust opposite property
        if (d->signature)
            d->signature->removeOwnedParameter(this);

        d->signature = signature;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(signature));

        // Adjust opposite property
        if (signature)
            signature->addOwnedParameter(this);
    }
}

void QTemplateParameter::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element that is the default for this formal template parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element exposed by this template parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QParameterableElement::templateParameter");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element that is owned by this template parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QTemplateParameter::parameteredElement QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QParameterableElement::owningTemplateParameter");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element that is owned by this template parameter for the purpose of providing a default.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements QTemplateParameter::default");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The template signature that owns this template parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QTemplateSignature::ownedParameter");

    QElement::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qtemplateparameter.cpp"

