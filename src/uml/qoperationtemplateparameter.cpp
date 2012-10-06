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

#include "qoperationtemplateparameter.h"

#include <QtUml/QOperation>

QT_BEGIN_NAMESPACE_QTUML

class QOperationTemplateParameterPrivate
{
public:
    explicit QOperationTemplateParameterPrivate();
    virtual ~QOperationTemplateParameterPrivate();

    QOperation *parameteredElement;
};

QOperationTemplateParameterPrivate::QOperationTemplateParameterPrivate()
{
}

QOperationTemplateParameterPrivate::~QOperationTemplateParameterPrivate()
{
}

/*!
    \class QOperationTemplateParameter

    \inmodule QtUml

    \brief An operation template parameter exposes an operation as a formal parameter for a template.
 */

QOperationTemplateParameter::QOperationTemplateParameter(QObject *parent)
    : QTemplateParameter(parent), d_ptr(new QOperationTemplateParameterPrivate)
{
}

QOperationTemplateParameter::~QOperationTemplateParameter()
{
    delete d_ptr;
}

/*!
    The operation for this template parameter.
 */
QOperation *QOperationTemplateParameter::parameteredElement() const
{
    return d_ptr->parameteredElement;
}

void QOperationTemplateParameter::setParameteredElement(const QOperation *parameteredElement)
{
    d_ptr->parameteredElement = const_cast<QOperation *>(parameteredElement);
}

#include "moc_qoperationtemplateparameter.cpp"

QT_END_NAMESPACE_QTUML

