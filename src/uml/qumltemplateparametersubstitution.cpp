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
#include "qumltemplateparametersubstitution.h"
#include "qumltemplateparametersubstitution_p.h"

#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlTemplateParameterSubstitutionPrivate::QUmlTemplateParameterSubstitutionPrivate() :
    actual(0),
    formal(0),
    ownedActual(0),
    templateBinding(0)
{
}

/*!
    \class QUmlTemplateParameterSubstitution

    \inmodule QtUml

    \brief A template parameter substitution relates the actual parameter to a formal template parameter as part of a template binding.
 */

QUmlTemplateParameterSubstitution::QUmlTemplateParameterSubstitution(bool create_d_ptr) :
    QUmlElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlTemplateParameterSubstitutionPrivate);
}

// Owned attributes

/*!
    The element that is the actual parameter for this substitution.
 */
QUmlParameterableElement *QUmlTemplateParameterSubstitution::actual() const
{
    return 0;
}

void QUmlTemplateParameterSubstitution::setActual(QUmlParameterableElement *actual)
{
    Q_UNUSED(actual);
}

/*!
    The formal template parameter that is associated with this substitution.
 */
QUmlTemplateParameter *QUmlTemplateParameterSubstitution::formal() const
{
    return 0;
}

void QUmlTemplateParameterSubstitution::setFormal(QUmlTemplateParameter *formal)
{
    Q_UNUSED(formal);
}

/*!
    The actual parameter that is owned by this substitution.
 */
QUmlParameterableElement *QUmlTemplateParameterSubstitution::ownedActual() const
{
    return 0;
}

void QUmlTemplateParameterSubstitution::setOwnedActual(QUmlParameterableElement *ownedActual)
{
    Q_UNUSED(ownedActual);
}

/*!
    The optional bindings from this element to templates.
 */
QUmlTemplateBinding *QUmlTemplateParameterSubstitution::templateBinding() const
{
    return 0;
}

void QUmlTemplateParameterSubstitution::setTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    Q_UNUSED(templateBinding);
}

QT_END_NAMESPACE

