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

void QTemplateParameterPrivate::setDefault_(const QParameterableElement *default_)
{
    this->default_ = const_cast<QParameterableElement *>(default_);
}

void QTemplateParameterPrivate::setParameteredElement(const QParameterableElement *parameteredElement)
{
    this->parameteredElement = const_cast<QParameterableElement *>(parameteredElement);
}

void QTemplateParameterPrivate::setOwnedParameteredElement(const QParameterableElement *ownedParameteredElement)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->ownedParameteredElement);
    this->ownedParameteredElement = const_cast<QParameterableElement *>(ownedParameteredElement);
    // Adjust subsetted property(ies)
    setParameteredElement(ownedParameteredElement);
    addOwnedElement(ownedParameteredElement);
}

void QTemplateParameterPrivate::setOwnedDefault(const QParameterableElement *ownedDefault)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->ownedDefault);
    this->ownedDefault = const_cast<QParameterableElement *>(ownedDefault);
    // Adjust subsetted property(ies)
    addOwnedElement(ownedDefault);
    setDefault_(ownedDefault);
}

void QTemplateParameterPrivate::setSignature(const QTemplateSignature *signature)
{
    this->signature = const_cast<QTemplateSignature *>(signature);
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
    Q_D(const QTemplateParameter);
    return d->default_;
}

void QTemplateParameter::setDefault_(const QParameterableElement *default_)
{
    Q_D(QTemplateParameter);
    d->setDefault_(const_cast<QParameterableElement *>(default_));
}

/*!
    The element exposed by this template parameter.
 */
QParameterableElement *QTemplateParameter::parameteredElement() const
{
    Q_D(const QTemplateParameter);
    return d->parameteredElement;
}

void QTemplateParameter::setParameteredElement(const QParameterableElement *parameteredElement)
{
    Q_D(QTemplateParameter);
    d->setParameteredElement(const_cast<QParameterableElement *>(parameteredElement));
}

/*!
    The element that is owned by this template parameter.
 */
QParameterableElement *QTemplateParameter::ownedParameteredElement() const
{
    Q_D(const QTemplateParameter);
    return d->ownedParameteredElement;
}

void QTemplateParameter::setOwnedParameteredElement(const QParameterableElement *ownedParameteredElement)
{
    Q_D(QTemplateParameter);
    d->setOwnedParameteredElement(const_cast<QParameterableElement *>(ownedParameteredElement));
}

/*!
    The element that is owned by this template parameter for the purpose of providing a default.
 */
QParameterableElement *QTemplateParameter::ownedDefault() const
{
    Q_D(const QTemplateParameter);
    return d->ownedDefault;
}

void QTemplateParameter::setOwnedDefault(const QParameterableElement *ownedDefault)
{
    Q_D(QTemplateParameter);
    d->setOwnedDefault(const_cast<QParameterableElement *>(ownedDefault));
}

/*!
    The template signature that owns this template parameter.
 */
QTemplateSignature *QTemplateParameter::signature() const
{
    Q_D(const QTemplateParameter);
    return d->signature;
}

void QTemplateParameter::setSignature(const QTemplateSignature *signature)
{
    Q_D(QTemplateParameter);
    d->setSignature(const_cast<QTemplateSignature *>(signature));
}

#include "moc_qtemplateparameter.cpp"

QT_END_NAMESPACE_QTUML

