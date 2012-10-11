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

#include "qconnectableelementtemplateparameter.h"
#include "qconnectableelementtemplateparameter_p.h"

#include <QtUml/QConnectableElement>

QT_BEGIN_NAMESPACE_QTUML

QConnectableElementTemplateParameterPrivate::QConnectableElementTemplateParameterPrivate() :
    parameteredElement(0)
{
}

QConnectableElementTemplateParameterPrivate::~QConnectableElementTemplateParameterPrivate()
{
}

void QConnectableElementTemplateParameterPrivate::setParameteredElement(const QConnectableElement *parameteredElement)
{
    this->parameteredElement = const_cast<QConnectableElement *>(parameteredElement);
}

/*!
    \class QConnectableElementTemplateParameter

    \inmodule QtUml

    \brief A connectable element template parameter exposes a connectable element as a formal parameter for a template.
 */

QConnectableElementTemplateParameter::QConnectableElementTemplateParameter(QObject *parent)
    : QTemplateParameter(false, parent)
{
    d_umlptr = new QConnectableElementTemplateParameterPrivate;
}

QConnectableElementTemplateParameter::QConnectableElementTemplateParameter(bool createPimpl, QObject *parent)
    : QTemplateParameter(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QConnectableElementTemplateParameterPrivate;
}

QConnectableElementTemplateParameter::~QConnectableElementTemplateParameter()
{
}

/*!
    The ConnectableElement for this template parameter.
 */
QConnectableElement *QConnectableElementTemplateParameter::parameteredElement() const
{
    QTUML_D(const QConnectableElementTemplateParameter);
    return d->parameteredElement;
}

void QConnectableElementTemplateParameter::setParameteredElement(const QConnectableElement *parameteredElement)
{
    QTUML_D(QConnectableElementTemplateParameter);
    d->setParameteredElement(const_cast<QConnectableElement *>(parameteredElement));
}

#include "moc_qconnectableelementtemplateparameter.cpp"

QT_END_NAMESPACE_QTUML

