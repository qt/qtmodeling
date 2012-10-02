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
//#include "qtemplateparameter_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QTemplateParameter

    \inmodule QtUml

    \brief A template parameter exposes a parameterable element as a formal template parameter of a template.
 */

QTemplateParameter::QTemplateParameter(QObject *parent)
    : QObject(parent)
{
}

QTemplateParameter::~QTemplateParameter()
{
}

/*!
    The element that is the default for this formal template parameter.
 */
QParameterableElement *QTemplateParameter::default_() const
{
}

void QTemplateParameter::setDefault_(QParameterableElement *default_)
{
}

/*!
    The element that is owned by this template parameter for the purpose of providing a default.
 */
QParameterableElement *QTemplateParameter::ownedDefault() const
{
}

void QTemplateParameter::setOwnedDefault(QParameterableElement *ownedDefault)
{
}

/*!
    The element that is owned by this template parameter.
 */
QParameterableElement *QTemplateParameter::ownedParameteredElement() const
{
}

void QTemplateParameter::setOwnedParameteredElement(QParameterableElement *ownedParameteredElement)
{
}

/*!
    The element exposed by this template parameter.
 */
QParameterableElement *QTemplateParameter::parameteredElement() const
{
}

void QTemplateParameter::setParameteredElement(QParameterableElement *parameteredElement)
{
}

/*!
    The template signature that owns this template parameter.
 */
QTemplateSignature *QTemplateParameter::signature() const
{
}

void QTemplateParameter::setSignature(QTemplateSignature *signature)
{
}

#include "moc_qtemplateparameter.cpp"

QT_END_NAMESPACE_QTUML

