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
#include "qelement_p.h"
#include "qelement_p.h"
#include "qelement_p.h"

#include <QtUml/QParameterableElement>
#include <QtUml/QTemplateSignature>

QT_BEGIN_NAMESPACE_QTUML

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

void QTemplateParameterPrivate::setDefault_(QParameterableElement *default_)
{
    this->default_ = default_;
}

void QTemplateParameterPrivate::setParameteredElement(QParameterableElement *parameteredElement)
{
    this->parameteredElement = parameteredElement;
}

void QTemplateParameterPrivate::setOwnedParameteredElement(QParameterableElement *ownedParameteredElement)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->ownedParameteredElement);

    this->ownedParameteredElement = ownedParameteredElement;

    // Adjust subsetted property(ies)
    setParameteredElement(ownedParameteredElement);
    addOwnedElement(ownedParameteredElement);
}

void QTemplateParameterPrivate::setOwnedDefault(QParameterableElement *ownedDefault)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->ownedDefault);

    this->ownedDefault = ownedDefault;

    // Adjust subsetted property(ies)
    addOwnedElement(ownedDefault);
    setDefault_(ownedDefault);
}

void QTemplateParameterPrivate::setSignature(QTemplateSignature *signature)
{
    this->signature = signature;

    // Adjust subsetted property(ies)
    setOwner(signature);
}

/*!
    \class QTemplateParameter

    \inmodule QtUml

    \brief A template parameter exposes a parameterable element as a formal template parameter of a template.
 */

QTemplateParameter::QTemplateParameter(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QTemplateParameterPrivate;
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
    QTUML_D(const QTemplateParameter);
    return d->default_;
}

void QTemplateParameter::setDefault_(QParameterableElement *default_)
{
    QTUML_D(QTemplateParameter);
    if (d->default_ != default_) {
        d->setDefault_(default_);
    }
}

/*!
    The element exposed by this template parameter.
 */
QParameterableElement *QTemplateParameter::parameteredElement() const
{
    QTUML_D(const QTemplateParameter);
    return d->parameteredElement;
}

void QTemplateParameter::setParameteredElement(QParameterableElement *parameteredElement)
{
    QTUML_D(QTemplateParameter);
    if (d->parameteredElement != parameteredElement) {
        d->setParameteredElement(parameteredElement);

        // Adjust opposite property
        parameteredElement->setTemplateParameter(this);
    }
}

/*!
    The element that is owned by this template parameter.
 */
QParameterableElement *QTemplateParameter::ownedParameteredElement() const
{
    QTUML_D(const QTemplateParameter);
    return d->ownedParameteredElement;
}

void QTemplateParameter::setOwnedParameteredElement(QParameterableElement *ownedParameteredElement)
{
    QTUML_D(QTemplateParameter);
    if (d->ownedParameteredElement != ownedParameteredElement) {
        d->setOwnedParameteredElement(ownedParameteredElement);

        // Adjust opposite property
        ownedParameteredElement->setOwningTemplateParameter(this);
    }
}

/*!
    The element that is owned by this template parameter for the purpose of providing a default.
 */
QParameterableElement *QTemplateParameter::ownedDefault() const
{
    QTUML_D(const QTemplateParameter);
    return d->ownedDefault;
}

void QTemplateParameter::setOwnedDefault(QParameterableElement *ownedDefault)
{
    QTUML_D(QTemplateParameter);
    if (d->ownedDefault != ownedDefault) {
        d->setOwnedDefault(ownedDefault);
    }
}

/*!
    The template signature that owns this template parameter.
 */
QTemplateSignature *QTemplateParameter::signature() const
{
    QTUML_D(const QTemplateParameter);
    return d->signature;
}

void QTemplateParameter::setSignature(QTemplateSignature *signature)
{
    QTUML_D(QTemplateParameter);
    if (d->signature != signature) {
        d->setSignature(signature);

        // Adjust opposite property
        signature->addOwnedParameter(this);
    }
}

#include "moc_qtemplateparameter.cpp"

QT_END_NAMESPACE_QTUML

