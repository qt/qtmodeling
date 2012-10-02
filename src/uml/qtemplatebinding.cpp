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

#include "qtemplatebinding.h"
//#include "qtemplatebinding_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QTemplateBinding

    \inmodule QtUml

    \brief A template binding represents a relationship between a templateable element and a template. A template binding specifies the substitutions of actual parameters for the formal parameters of the template.
 */

QTemplateBinding::QTemplateBinding(QObject *parent)
    : QObject(parent)
{
}

QTemplateBinding::~QTemplateBinding()
{
}

/*!
    The element that is bound by this binding.
 */
QTemplateableElement *QTemplateBinding::boundElement() const
{
}

void QTemplateBinding::setBoundElement(QTemplateableElement *boundElement)
{
}

/*!
    The parameter substitutions owned by this template binding.
 */
QList<QTemplateParameterSubstitution *> *QTemplateBinding::parameterSubstitutions()
{
}

/*!
    The template signature for the template that is the target of the binding.
 */
QTemplateSignature *QTemplateBinding::signature() const
{
}

void QTemplateBinding::setSignature(QTemplateSignature *signature)
{
}

#include "moc_qtemplatebinding.cpp"

QT_END_NAMESPACE_QTUML

