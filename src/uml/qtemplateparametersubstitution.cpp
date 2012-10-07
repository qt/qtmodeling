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

#include "qtemplateparametersubstitution.h"

#include <QtUml/QParameterableElement>
#include <QtUml/QTemplateParameter>
#include <QtUml/QTemplateBinding>

QT_BEGIN_NAMESPACE_QTUML

class QTemplateParameterSubstitutionPrivate
{
public:
    explicit QTemplateParameterSubstitutionPrivate();
    virtual ~QTemplateParameterSubstitutionPrivate();

    QParameterableElement *actual;
    QTemplateParameter *formal;
    QParameterableElement *ownedActual;
    QTemplateBinding *templateBinding;
};

QTemplateParameterSubstitutionPrivate::QTemplateParameterSubstitutionPrivate() :
    actual(0),
    formal(0),
    ownedActual(0),
    templateBinding(0)
{
}

QTemplateParameterSubstitutionPrivate::~QTemplateParameterSubstitutionPrivate()
{
}

/*!
    \class QTemplateParameterSubstitution

    \inmodule QtUml

    \brief A template parameter substitution relates the actual parameter to a formal template parameter as part of a template binding.
 */

QTemplateParameterSubstitution::QTemplateParameterSubstitution(QObject *parent)
    : QObject(parent), d_ptr(new QTemplateParameterSubstitutionPrivate)
{
}

QTemplateParameterSubstitution::~QTemplateParameterSubstitution()
{
    delete d_ptr;
}

/*!
    The element that is the actual parameter for this substitution.
 */
QParameterableElement *QTemplateParameterSubstitution::actual() const
{
    return d_ptr->actual;
}

void QTemplateParameterSubstitution::setActual(const QParameterableElement *actual)
{
    d_ptr->actual = const_cast<QParameterableElement *>(actual);
}

/*!
    The formal template parameter that is associated with this substitution.
 */
QTemplateParameter *QTemplateParameterSubstitution::formal() const
{
    return d_ptr->formal;
}

void QTemplateParameterSubstitution::setFormal(const QTemplateParameter *formal)
{
    d_ptr->formal = const_cast<QTemplateParameter *>(formal);
}

/*!
    The actual parameter that is owned by this substitution.
 */
QParameterableElement *QTemplateParameterSubstitution::ownedActual() const
{
    return d_ptr->ownedActual;
}

void QTemplateParameterSubstitution::setOwnedActual(const QParameterableElement *ownedActual)
{
    d_ptr->ownedActual = const_cast<QParameterableElement *>(ownedActual);
}

/*!
    The optional bindings from this element to templates.
 */
QTemplateBinding *QTemplateParameterSubstitution::templateBinding() const
{
    return d_ptr->templateBinding;
}

void QTemplateParameterSubstitution::setTemplateBinding(const QTemplateBinding *templateBinding)
{
    d_ptr->templateBinding = const_cast<QTemplateBinding *>(templateBinding);
}

#include "moc_qtemplateparametersubstitution.cpp"

QT_END_NAMESPACE_QTUML

