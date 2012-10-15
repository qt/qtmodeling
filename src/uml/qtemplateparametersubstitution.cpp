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
#include "qtemplateparametersubstitution_p.h"

#include <QtUml/QParameterableElement>
#include <QtUml/QTemplateParameter>
#include <QtUml/QTemplateBinding>

QT_BEGIN_NAMESPACE_QTUML

QTemplateParameterSubstitutionPrivate::QTemplateParameterSubstitutionPrivate(QTemplateParameterSubstitution *q_umlptr) :
    ownedActual(0),
    formal(0),
    actual(0),
    templateBinding(0)
{
    this->q_umlptr = q_umlptr;
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
    : QObject(parent)
{
    d_umlptr = new QTemplateParameterSubstitutionPrivate(this);
}

QTemplateParameterSubstitution::QTemplateParameterSubstitution(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QTemplateParameterSubstitutionPrivate;
}

QTemplateParameterSubstitution::~QTemplateParameterSubstitution()
{
}

/*!
    The actual parameter that is owned by this substitution.
 */
QParameterableElement *QTemplateParameterSubstitution::ownedActual() const
{
    // This is a read-write association end

    QTUML_D(const QTemplateParameterSubstitution);
    return d->ownedActual;
}

void QTemplateParameterSubstitution::setOwnedActual(QParameterableElement *ownedActual)
{
    // This is a read-write association end

    QTUML_D(QTemplateParameterSubstitution);
    if (d->ownedActual != ownedActual) {
        // Adjust subsetted property(ies)
        d->removeOwnedElement(d->ownedActual);

        d->ownedActual = ownedActual;

        // Adjust subsetted property(ies)
        d->addOwnedElement(ownedActual);
        setActual(ownedActual);
    }
}

/*!
    The formal template parameter that is associated with this substitution.
 */
QTemplateParameter *QTemplateParameterSubstitution::formal() const
{
    // This is a read-write association end

    QTUML_D(const QTemplateParameterSubstitution);
    return d->formal;
}

void QTemplateParameterSubstitution::setFormal(QTemplateParameter *formal)
{
    // This is a read-write association end

    QTUML_D(QTemplateParameterSubstitution);
    if (d->formal != formal) {
        d->formal = formal;
    }
}

/*!
    The element that is the actual parameter for this substitution.
 */
QParameterableElement *QTemplateParameterSubstitution::actual() const
{
    // This is a read-write association end

    QTUML_D(const QTemplateParameterSubstitution);
    return d->actual;
}

void QTemplateParameterSubstitution::setActual(QParameterableElement *actual)
{
    // This is a read-write association end

    QTUML_D(QTemplateParameterSubstitution);
    if (d->actual != actual) {
        d->actual = actual;
    }
}

/*!
    The optional bindings from this element to templates.
 */
QTemplateBinding *QTemplateParameterSubstitution::templateBinding() const
{
    // This is a read-write association end

    QTUML_D(const QTemplateParameterSubstitution);
    return d->templateBinding;
}

void QTemplateParameterSubstitution::setTemplateBinding(QTemplateBinding *templateBinding)
{
    // This is a read-write association end

    QTUML_D(QTemplateParameterSubstitution);
    if (d->templateBinding != templateBinding) {
        d->templateBinding = templateBinding;

        // Adjust subsetted property(ies)
        d->setOwner(templateBinding);

        // Adjust opposite property
        templateBinding->addParameterSubstitution(this);
    }
}

#include "moc_qtemplateparametersubstitution.cpp"

QT_END_NAMESPACE_QTUML

