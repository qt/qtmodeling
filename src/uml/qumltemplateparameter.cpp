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
#include "qumltemplateparameter.h"
#include "qumltemplateparameter_p.h"

#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTemplateParameterPrivate::QUmlTemplateParameterPrivate() :
    default_(0),
    parameteredElement(0),
    ownedParameteredElement(0),
    ownedDefault(0),
    signature(0)
{
}

QUmlTemplateParameterPrivate::~QUmlTemplateParameterPrivate()
{
}

/*!
    \class QUmlTemplateParameter

    \inmodule QtUml

    \brief A template parameter exposes a parameterable element as a formal template parameter of a template.
 */

QUmlTemplateParameter::QUmlTemplateParameter(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(*new QUmlTemplateParameterPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlTemplateParameter::QUmlTemplateParameter(QUmlTemplateParameterPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlTemplateParameter::~QUmlTemplateParameter()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlTemplateParameter
// ---------------------------------------------------------------

/*!
    The element that is the default for this formal template parameter.
 */
QUmlParameterableElement *QUmlTemplateParameter::default_() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateParameter);
    return d->default_;
}

void QUmlTemplateParameter::setDefault_(QUmlParameterableElement *default_)
{
    // This is a read-write association end

    Q_D(QUmlTemplateParameter);
    if (d->default_ != default_) {
        d->default_ = default_;
    }
}

/*!
    The element exposed by this template parameter.
 */
QUmlParameterableElement *QUmlTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateParameter);
    return d->parameteredElement;
}

void QUmlTemplateParameter::setParameteredElement(QUmlParameterableElement *parameteredElement)
{
    // This is a read-write association end

    Q_D(QUmlTemplateParameter);
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
QUmlParameterableElement *QUmlTemplateParameter::ownedParameteredElement() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateParameter);
    return d->ownedParameteredElement;
}

void QUmlTemplateParameter::setOwnedParameteredElement(QUmlParameterableElement *ownedParameteredElement)
{
    // This is a read-write association end

    Q_D(QUmlTemplateParameter);
    if (d->ownedParameteredElement != ownedParameteredElement) {
        // Adjust opposite property

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->ownedParameteredElement));

        d->ownedParameteredElement = ownedParameteredElement;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlTemplateParameter *>(this))->setParameteredElement(qwrappedobject_cast<QUmlParameterableElement *>(ownedParameteredElement));
        if (ownedParameteredElement) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(ownedParameteredElement));
        }

        // Adjust opposite property
        ownedParameteredElement->setOwningTemplateParameter(this);
    }
}

/*!
    The element that is owned by this template parameter for the purpose of providing a default.
 */
QUmlParameterableElement *QUmlTemplateParameter::ownedDefault() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateParameter);
    return d->ownedDefault;
}

void QUmlTemplateParameter::setOwnedDefault(QUmlParameterableElement *ownedDefault)
{
    // This is a read-write association end

    Q_D(QUmlTemplateParameter);
    if (d->ownedDefault != ownedDefault) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->ownedDefault));

        d->ownedDefault = ownedDefault;

        // Adjust subsetted property(ies)
        if (ownedDefault) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(ownedDefault));
        }
        (qwrappedobject_cast<QUmlTemplateParameter *>(this))->setDefault_(qwrappedobject_cast<QUmlParameterableElement *>(ownedDefault));
    }
}

/*!
    The template signature that owns this template parameter.
 */
QUmlTemplateSignature *QUmlTemplateParameter::signature() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateParameter);
    return d->signature;
}

void QUmlTemplateParameter::setSignature(QUmlTemplateSignature *signature)
{
    // This is a read-write association end

    Q_D(QUmlTemplateParameter);
    if (d->signature != signature) {
        // Adjust opposite property
        if (d->signature)
            d->signature->removeOwnedParameter(this);

        d->signature = signature;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(signature));

        // Adjust opposite property
        if (signature)
            signature->addOwnedParameter(this);
    }
}

void QUmlTemplateParameter::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element that is the default for this formal template parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("default_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element exposed by this template parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlParameterableElement::templateParameter");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element that is owned by this template parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlTemplateParameter::parameteredElement QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedParameteredElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlParameterableElement::owningTemplateParameter");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element that is owned by this template parameter for the purpose of providing a default.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements QUmlTemplateParameter::default");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("ownedDefault")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The template signature that owns this template parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameter")][QString::fromLatin1("signature")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlTemplateSignature::ownedParameter");

    QUmlElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltemplateparameter.cpp"

