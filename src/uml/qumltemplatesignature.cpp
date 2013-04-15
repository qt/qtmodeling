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
#include "qumltemplatesignature.h"
#include "qumltemplatesignature_p.h"

#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateableElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTemplateSignaturePrivate::QUmlTemplateSignaturePrivate() :
    template_(0)
{
}

QUmlTemplateSignaturePrivate::~QUmlTemplateSignaturePrivate()
{
}

/*!
    \class QUmlTemplateSignature

    \inmodule QtUml

    \brief A template signature bundles the set of formal template parameters for a templated element.
 */

QUmlTemplateSignature::QUmlTemplateSignature(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(*new QUmlTemplateSignaturePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlTemplateSignature::QUmlTemplateSignature(QUmlTemplateSignaturePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlTemplateSignature::~QUmlTemplateSignature()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlTemplateSignature
// ---------------------------------------------------------------

/*!
    The ordered set of all formal template parameters for this template signature.
 */
QList<QUmlTemplateParameter *> QUmlTemplateSignature::parameters() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateSignature);
    return d->parameters;
}

void QUmlTemplateSignature::addParameter(QUmlTemplateParameter *parameter)
{
    // This is a read-write association end

    Q_D(QUmlTemplateSignature);
    if (!d->parameters.contains(parameter)) {
        d->parameters.append(parameter);
    }
}

void QUmlTemplateSignature::removeParameter(QUmlTemplateParameter *parameter)
{
    // This is a read-write association end

    Q_D(QUmlTemplateSignature);
    if (d->parameters.contains(parameter)) {
        d->parameters.removeAll(parameter);
    }
}

/*!
    The element that owns this template signature.
 */
QUmlTemplateableElement *QUmlTemplateSignature::template_() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateSignature);
    return d->template_;
}

void QUmlTemplateSignature::setTemplate_(QUmlTemplateableElement *template_)
{
    // This is a read-write association end

    Q_D(QUmlTemplateSignature);
    if (d->template_ != template_) {
        // Adjust opposite property

        d->template_ = template_;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(template_));

        // Adjust opposite property
        template_->setOwnedTemplateSignature(this);
    }
}

/*!
    The formal template parameters that are owned by this template signature.
 */
QList<QUmlTemplateParameter *> QUmlTemplateSignature::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateSignature);
    return d->ownedParameters;
}

void QUmlTemplateSignature::addOwnedParameter(QUmlTemplateParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QUmlTemplateSignature);
    if (!d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.append(ownedParameter);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlTemplateSignature *>(this))->addParameter(qwrappedobject_cast<QUmlTemplateParameter *>(ownedParameter));
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(ownedParameter));

        // Adjust opposite property
        ownedParameter->setSignature(this);
    }
}

void QUmlTemplateSignature::removeOwnedParameter(QUmlTemplateParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QUmlTemplateSignature);
    if (d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.removeAll(ownedParameter);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlTemplateSignature *>(this))->removeParameter(qwrappedobject_cast<QUmlTemplateParameter *>(ownedParameter));
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(ownedParameter));

        // Adjust opposite property
        ownedParameter->setSignature(0);
    }
}

void QUmlTemplateSignature::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("parameters")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("parameters")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("parameters")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ordered set of all formal template parameters for this template signature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("parameters")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("parameters")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("parameters")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("template_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("template_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("template_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element that owns this template signature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("template_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("template_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("template_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlTemplateableElement::ownedTemplateSignature");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The formal template parameters that are owned by this template signature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlTemplateSignature::parameters QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateSignature")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlTemplateParameter::signature");

    QUmlElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltemplatesignature.cpp"

