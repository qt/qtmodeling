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

/*!
    \class QTemplateParameterSubstitution

    \inmodule QtUml

    \brief A template parameter substitution relates the actual parameter to a formal template parameter as part of a template binding.
 */

QTemplateParameterSubstitution::QTemplateParameterSubstitution(QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QElement(*new QTemplateParameterSubstitutionPrivate, parent, wrapper)
{
}

QTemplateParameterSubstitution::QTemplateParameterSubstitution(QTemplateParameterSubstitutionPrivate &dd, QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QElement(dd, parent, wrapper)
{
}

QTemplateParameterSubstitution::~QTemplateParameterSubstitution()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTemplateParameterSubstitution
// ---------------------------------------------------------------

/*!
    The actual parameter that is owned by this substitution.
 */
QParameterableElement *QTemplateParameterSubstitution::ownedActual() const
{
    // This is a read-write association end

    Q_D(const QTemplateParameterSubstitution);
    return d->ownedActual;
}

void QTemplateParameterSubstitution::setOwnedActual(QParameterableElement *ownedActual)
{
    // This is a read-write association end

    Q_D(QTemplateParameterSubstitution);
    if (d->ownedActual != ownedActual) {
        // Adjust subsetted property(ies)
        (qmofobject_cast<QElementPrivate *>(d))->removeOwnedElement(qmofobject_cast<QElement *>(d->ownedActual));

        d->ownedActual = ownedActual;

        // Adjust subsetted property(ies)
        if (ownedActual) {
            (qmofobject_cast<QElementPrivate *>(d))->addOwnedElement(qmofobject_cast<QElement *>(ownedActual));
        }
        (qmofobject_cast<QTemplateParameterSubstitution *>(this))->setActual(qmofobject_cast<QParameterableElement *>(ownedActual));
    }
}

/*!
    The formal template parameter that is associated with this substitution.
 */
QTemplateParameter *QTemplateParameterSubstitution::formal() const
{
    // This is a read-write association end

    Q_D(const QTemplateParameterSubstitution);
    return d->formal;
}

void QTemplateParameterSubstitution::setFormal(QTemplateParameter *formal)
{
    // This is a read-write association end

    Q_D(QTemplateParameterSubstitution);
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

    Q_D(const QTemplateParameterSubstitution);
    return d->actual;
}

void QTemplateParameterSubstitution::setActual(QParameterableElement *actual)
{
    // This is a read-write association end

    Q_D(QTemplateParameterSubstitution);
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

    Q_D(const QTemplateParameterSubstitution);
    return d->templateBinding;
}

void QTemplateParameterSubstitution::setTemplateBinding(QTemplateBinding *templateBinding)
{
    // This is a read-write association end

    Q_D(QTemplateParameterSubstitution);
    if (d->templateBinding != templateBinding) {
        // Adjust opposite property
        if (d->templateBinding)
            d->templateBinding->removeParameterSubstitution(this);

        d->templateBinding = templateBinding;

        // Adjust subsetted property(ies)
        (qmofobject_cast<QElementPrivate *>(d))->setOwner(qmofobject_cast<QElement *>(templateBinding));

        // Adjust opposite property
        if (templateBinding)
            templateBinding->addParameterSubstitution(this);
    }
}

#include "moc_qtemplateparametersubstitution.cpp"

QT_END_NAMESPACE_QTUML

