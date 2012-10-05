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

QT_BEGIN_NAMESPACE_QTUML

class QTemplateBindingPrivate
{
public:
    explicit QTemplateBindingPrivate();
    virtual ~QTemplateBindingPrivate();

    QTemplateableElement *boundElement;
    QSet<QTemplateParameterSubstitution *> *parameterSubstitutions;
    QTemplateSignature *signature;
};

QTemplateBindingPrivate::QTemplateBindingPrivate() :
    parameterSubstitutions(new QSet<QTemplateParameterSubstitution *>)
{
}

QTemplateBindingPrivate::~QTemplateBindingPrivate()
{
    delete parameterSubstitutions;
}

/*!
    \class QTemplateBinding

    \inmodule QtUml

    \brief A template binding represents a relationship between a templateable element and a template. A template binding specifies the substitutions of actual parameters for the formal parameters of the template.
 */

QTemplateBinding::QTemplateBinding(QObject *parent)
    : QObject(parent), d_ptr(new QTemplateBindingPrivate)
{
}

QTemplateBinding::~QTemplateBinding()
{
    delete d_ptr;
}

/*!
    The element that is bound by this binding.
 */
QTemplateableElement *QTemplateBinding::boundElement() const
{
    return d_ptr->boundElement;
}

void QTemplateBinding::setBoundElement(const QTemplateableElement *boundElement)
{
    d_ptr->boundElement = const_cast<QTemplateableElement *>(boundElement);
}

/*!
    The parameter substitutions owned by this template binding.
 */
const QSet<QTemplateParameterSubstitution *> *QTemplateBinding::parameterSubstitutions() const
{
    return d_ptr->parameterSubstitutions;
}

void QTemplateBinding::addParameterSubstitution(const QTemplateParameterSubstitution *parameterSubstitution)
{
    d_ptr->parameterSubstitutions->insert(const_cast<QTemplateParameterSubstitution *>(parameterSubstitution));
}

void QTemplateBinding::removeParameterSubstitution(const QTemplateParameterSubstitution *parameterSubstitution)
{
    d_ptr->parameterSubstitutions->remove(const_cast<QTemplateParameterSubstitution *>(parameterSubstitution));
}

/*!
    The template signature for the template that is the target of the binding.
 */
QTemplateSignature *QTemplateBinding::signature() const
{
    return d_ptr->signature;
}

void QTemplateBinding::setSignature(const QTemplateSignature *signature)
{
    d_ptr->signature = const_cast<QTemplateSignature *>(signature);
}

#include "moc_qtemplatebinding.cpp"

QT_END_NAMESPACE_QTUML

