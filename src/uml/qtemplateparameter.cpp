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

QT_BEGIN_NAMESPACE_QTUML

QTemplateParameterPrivate::QTemplateParameterPrivate(QTemplateParameter *q_umlptr) :
    default_(0),
    parameteredElement(0),
    ownedParameteredElement(0),
    ownedDefault(0),
    signature(0)
{
    this->q_umlptr = q_umlptr;
}

QTemplateParameterPrivate::~QTemplateParameterPrivate()
{
}

/*!
    \class QTemplateParameter

    \inmodule QtUml

    \brief A template parameter exposes a parameterable element as a formal template parameter of a template.
 */

QTemplateParameter::QTemplateParameter(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QTemplateParameterPrivate(this);
}

QTemplateParameter::QTemplateParameter(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QTemplateParameterPrivate;
}

QTemplateParameter::~QTemplateParameter()
{
}

/*!
    The element that is the default for this formal template parameter.
 */
QParameterableElement *QTemplateParameter::default_() const
{
    // This is a read-write association end

    QTUML_D(const QTemplateParameter);
    return d->default_;
}

void QTemplateParameter::setDefault_(QParameterableElement *default_)
{
    // This is a read-write association end

    QTUML_D(QTemplateParameter);
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

    QTUML_D(const QTemplateParameter);
    return d->parameteredElement;
}

void QTemplateParameter::setParameteredElement(QParameterableElement *parameteredElement)
{
    // This is a read-write association end

    QTUML_D(QTemplateParameter);
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

    QTUML_D(const QTemplateParameter);
    return d->ownedParameteredElement;
}

void QTemplateParameter::setOwnedParameteredElement(QParameterableElement *ownedParameteredElement)
{
    // This is a read-write association end

    QTUML_D(QTemplateParameter);
    if (d->ownedParameteredElement != ownedParameteredElement) {
        // Adjust opposite property

        // Adjust subsetted property(ies)
        d->QElementPrivate::removeOwnedElement(dynamic_cast<QElement *>(d->ownedParameteredElement));

        d->ownedParameteredElement = ownedParameteredElement;

        // Adjust subsetted property(ies)
        QTemplateParameter::setParameteredElement(dynamic_cast<QParameterableElement *>(ownedParameteredElement));
        if (ownedParameteredElement) {
            d->QElementPrivate::addOwnedElement(dynamic_cast<QElement *>(ownedParameteredElement));
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

    QTUML_D(const QTemplateParameter);
    return d->ownedDefault;
}

void QTemplateParameter::setOwnedDefault(QParameterableElement *ownedDefault)
{
    // This is a read-write association end

    QTUML_D(QTemplateParameter);
    if (d->ownedDefault != ownedDefault) {
        // Adjust subsetted property(ies)
        d->QElementPrivate::removeOwnedElement(dynamic_cast<QElement *>(d->ownedDefault));

        d->ownedDefault = ownedDefault;

        // Adjust subsetted property(ies)
        if (ownedDefault) {
            d->QElementPrivate::addOwnedElement(dynamic_cast<QElement *>(ownedDefault));
        }
        QTemplateParameter::setDefault_(dynamic_cast<QParameterableElement *>(ownedDefault));
    }
}

/*!
    The template signature that owns this template parameter.
 */
QTemplateSignature *QTemplateParameter::signature() const
{
    // This is a read-write association end

    QTUML_D(const QTemplateParameter);
    return d->signature;
}

void QTemplateParameter::setSignature(QTemplateSignature *signature)
{
    // This is a read-write association end

    QTUML_D(QTemplateParameter);
    if (d->signature != signature) {
        // Adjust opposite property
        if (d->signature)
            d->signature->removeOwnedParameter(this);

        d->signature = signature;

        // Adjust subsetted property(ies)
        d->QElementPrivate::setOwner(dynamic_cast<QElement *>(signature));

        // Adjust opposite property
        if (signature)
            signature->addOwnedParameter(this);
    }
}

#include "moc_qtemplateparameter.cpp"

QT_END_NAMESPACE_QTUML

