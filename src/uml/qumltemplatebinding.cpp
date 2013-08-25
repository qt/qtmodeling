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
#include "qumltemplatebinding.h"
#include "qumltemplatebinding_p.h"

#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameterSubstitution>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

QUmlTemplateBindingPrivate::QUmlTemplateBindingPrivate() :
    boundElement(0),
    signature(0)
{
}

/*!
    \class QUmlTemplateBinding

    \inmodule QtUml

    \brief A template binding represents a relationship between a templateable element and a template. A template binding specifies the substitutions of actual parameters for the formal parameters of the template.
 */

QUmlTemplateBinding::QUmlTemplateBinding(bool create_d_ptr) :
    QUmlDirectedRelationship(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlTemplateBindingPrivate);
}

// OWNED ATTRIBUTES

/*!
    The element that is bound by this binding.
 */
QUmlTemplateableElement *QUmlTemplateBinding::boundElement() const
{
    // This is a read-write association end

    QM_D(const QUmlTemplateBinding);
    return d->boundElement;
}

void QUmlTemplateBinding::setBoundElement(QUmlTemplateableElement *boundElement)
{
    // This is a read-write association end

    QM_D(QUmlTemplateBinding);
    if (d->boundElement != boundElement) {
        d->boundElement = boundElement;
    }
}

/*!
    The parameter substitutions owned by this template binding.
 */
QSet<QUmlTemplateParameterSubstitution *> QUmlTemplateBinding::parameterSubstitution() const
{
    // This is a read-write association end

    QM_D(const QUmlTemplateBinding);
    return d->parameterSubstitution;
}

void QUmlTemplateBinding::addParameterSubstitution(QUmlTemplateParameterSubstitution *parameterSubstitution)
{
    // This is a read-write association end

    QM_D(QUmlTemplateBinding);
    if (!d->parameterSubstitution.contains(parameterSubstitution)) {
        d->parameterSubstitution.insert(parameterSubstitution);
    }
}

void QUmlTemplateBinding::removeParameterSubstitution(QUmlTemplateParameterSubstitution *parameterSubstitution)
{
    // This is a read-write association end

    QM_D(QUmlTemplateBinding);
    if (d->parameterSubstitution.contains(parameterSubstitution)) {
        d->parameterSubstitution.remove(parameterSubstitution);
    }
}

/*!
    The template signature for the template that is the target of the binding.
 */
QUmlTemplateSignature *QUmlTemplateBinding::signature() const
{
    // This is a read-write association end

    QM_D(const QUmlTemplateBinding);
    return d->signature;
}

void QUmlTemplateBinding::setSignature(QUmlTemplateSignature *signature)
{
    // This is a read-write association end

    QM_D(QUmlTemplateBinding);
    if (d->signature != signature) {
        d->signature = signature;
    }
}

QT_END_NAMESPACE

