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
#include "qelement_p.h"
#include "qelement_p.h"

#include <QtUml/QParameterableElement>
#include <QtUml/QTemplateParameter>
#include <QtUml/QTemplateBinding>

QT_BEGIN_NAMESPACE_QTUML

QTemplateParameterSubstitutionPrivate::QTemplateParameterSubstitutionPrivate() :
    ownedActual(0),
    formal(0),
    actual(0),
    templateBinding(0)
{
}

QTemplateParameterSubstitutionPrivate::~QTemplateParameterSubstitutionPrivate()
{
}

void QTemplateParameterSubstitutionPrivate::setOwnedActual(const QParameterableElement *ownedActual)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->ownedActual);

    this->ownedActual = const_cast<QParameterableElement *>(ownedActual);

    // Adjust subsetted property(ies)
    addOwnedElement(ownedActual);
    setActual(ownedActual);
}

void QTemplateParameterSubstitutionPrivate::setFormal(const QTemplateParameter *formal)
{
    this->formal = const_cast<QTemplateParameter *>(formal);
}

void QTemplateParameterSubstitutionPrivate::setActual(const QParameterableElement *actual)
{
    this->actual = const_cast<QParameterableElement *>(actual);
}

void QTemplateParameterSubstitutionPrivate::setTemplateBinding(const QTemplateBinding *templateBinding)
{
    this->templateBinding = const_cast<QTemplateBinding *>(templateBinding);

    // Adjust subsetted property(ies)
    setOwner(templateBinding);
}

/*!
    \class QTemplateParameterSubstitution

    \inmodule QtUml

    \brief A template parameter substitution relates the actual parameter to a formal template parameter as part of a template binding.
 */

QTemplateParameterSubstitution::QTemplateParameterSubstitution(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QTemplateParameterSubstitutionPrivate;
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
    Q_D(const QTemplateParameterSubstitution);
    return d->ownedActual;
}

void QTemplateParameterSubstitution::setOwnedActual(const QParameterableElement *ownedActual)
{
    Q_D(QTemplateParameterSubstitution);
    d->setOwnedActual(const_cast<QParameterableElement *>(ownedActual));
}

/*!
    The formal template parameter that is associated with this substitution.
 */
QTemplateParameter *QTemplateParameterSubstitution::formal() const
{
    Q_D(const QTemplateParameterSubstitution);
    return d->formal;
}

void QTemplateParameterSubstitution::setFormal(const QTemplateParameter *formal)
{
    Q_D(QTemplateParameterSubstitution);
    d->setFormal(const_cast<QTemplateParameter *>(formal));
}

/*!
    The element that is the actual parameter for this substitution.
 */
QParameterableElement *QTemplateParameterSubstitution::actual() const
{
    Q_D(const QTemplateParameterSubstitution);
    return d->actual;
}

void QTemplateParameterSubstitution::setActual(const QParameterableElement *actual)
{
    Q_D(QTemplateParameterSubstitution);
    d->setActual(const_cast<QParameterableElement *>(actual));
}

/*!
    The optional bindings from this element to templates.
 */
QTemplateBinding *QTemplateParameterSubstitution::templateBinding() const
{
    Q_D(const QTemplateParameterSubstitution);
    return d->templateBinding;
}

void QTemplateParameterSubstitution::setTemplateBinding(const QTemplateBinding *templateBinding)
{
    Q_D(QTemplateParameterSubstitution);
    d->setTemplateBinding(const_cast<QTemplateBinding *>(templateBinding));
}

#include "moc_qtemplateparametersubstitution.cpp"

QT_END_NAMESPACE_QTUML

