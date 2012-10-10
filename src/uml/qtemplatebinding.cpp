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
#include "qtemplatebinding_p.h"
#include "qdirectedrelationship_p.h"
#include "qelement_p.h"
#include "qdirectedrelationship_p.h"
#include "qelement_p.h"

#include <QtUml/QTemplateableElement>
#include <QtUml/QTemplateParameterSubstitution>
#include <QtUml/QTemplateSignature>

QT_BEGIN_NAMESPACE_QTUML

QTemplateBindingPrivate::QTemplateBindingPrivate() :
    signature(0),
    boundElement(0),
    parameterSubstitutions(new QSet<QTemplateParameterSubstitution *>)
{
}

QTemplateBindingPrivate::~QTemplateBindingPrivate()
{
    delete parameterSubstitutions;
}

void QTemplateBindingPrivate::setSignature(const QTemplateSignature *signature)
{
    // Adjust subsetted property(ies)
    removeTarget(this->signature);
    this->signature = const_cast<QTemplateSignature *>(signature);
    // Adjust subsetted property(ies)
    addTarget(signature);
}

void QTemplateBindingPrivate::setBoundElement(const QTemplateableElement *boundElement)
{
    // Adjust subsetted property(ies)
    removeSource(this->boundElement);
    this->boundElement = const_cast<QTemplateableElement *>(boundElement);
    // Adjust subsetted property(ies)
    setOwner(boundElement);
    addSource(boundElement);
}

void QTemplateBindingPrivate::addParameterSubstitution(const QTemplateParameterSubstitution *parameterSubstitution)
{
    this->parameterSubstitutions->insert(const_cast<QTemplateParameterSubstitution *>(parameterSubstitution));
    // Adjust subsetted property(ies)
    addOwnedElement(parameterSubstitution);
}

void QTemplateBindingPrivate::removeParameterSubstitution(const QTemplateParameterSubstitution *parameterSubstitution)
{
    this->parameterSubstitutions->remove(const_cast<QTemplateParameterSubstitution *>(parameterSubstitution));
    // Adjust subsetted property(ies)
    removeOwnedElement(parameterSubstitution);
}

/*!
    \class QTemplateBinding

    \inmodule QtUml

    \brief A template binding represents a relationship between a templateable element and a template. A template binding specifies the substitutions of actual parameters for the formal parameters of the template.
 */

QTemplateBinding::QTemplateBinding(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QTemplateBindingPrivate;
}

QTemplateBinding::QTemplateBinding(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QTemplateBindingPrivate;
}

QTemplateBinding::~QTemplateBinding()
{
}

/*!
    The template signature for the template that is the target of the binding.
 */
QTemplateSignature *QTemplateBinding::signature() const
{
    Q_D(const QTemplateBinding);
    return d->signature;
}

void QTemplateBinding::setSignature(const QTemplateSignature *signature)
{
    Q_D(QTemplateBinding);
    d->setSignature(const_cast<QTemplateSignature *>(signature));
}

/*!
    The element that is bound by this binding.
 */
QTemplateableElement *QTemplateBinding::boundElement() const
{
    Q_D(const QTemplateBinding);
    return d->boundElement;
}

void QTemplateBinding::setBoundElement(const QTemplateableElement *boundElement)
{
    Q_D(QTemplateBinding);
    d->setBoundElement(const_cast<QTemplateableElement *>(boundElement));
}

/*!
    The parameter substitutions owned by this template binding.
 */
const QSet<QTemplateParameterSubstitution *> *QTemplateBinding::parameterSubstitutions() const
{
    Q_D(const QTemplateBinding);
    return d->parameterSubstitutions;
}

void QTemplateBinding::addParameterSubstitution(const QTemplateParameterSubstitution *parameterSubstitution)
{
    Q_D(QTemplateBinding);
    d->addParameterSubstitution(const_cast<QTemplateParameterSubstitution *>(parameterSubstitution));
}

void QTemplateBinding::removeParameterSubstitution(const QTemplateParameterSubstitution *parameterSubstitution)
{
    Q_D(QTemplateBinding);
    d->removeParameterSubstitution(const_cast<QTemplateParameterSubstitution *>(parameterSubstitution));
}

#include "moc_qtemplatebinding.cpp"

QT_END_NAMESPACE_QTUML

