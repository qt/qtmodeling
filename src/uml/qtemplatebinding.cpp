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

/*!
    \class QTemplateBinding

    \inmodule QtUml

    \brief A template binding represents a relationship between a templateable element and a template. A template binding specifies the substitutions of actual parameters for the formal parameters of the template.
 */

QTemplateBinding::QTemplateBinding(QWrappedObject *parent, QWrappedObject *wrapper) :
    QDirectedRelationship(*new QTemplateBindingPrivate, parent, wrapper)
{
}

QTemplateBinding::QTemplateBinding(QTemplateBindingPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QDirectedRelationship(dd, parent, wrapper)
{
}

QTemplateBinding::~QTemplateBinding()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTemplateBinding
// ---------------------------------------------------------------

/*!
    The template signature for the template that is the target of the binding.
 */
QTemplateSignature *QTemplateBinding::signature() const
{
    // This is a read-write association end

    Q_D(const QTemplateBinding);
    return d->signature;
}

void QTemplateBinding::setSignature(QTemplateSignature *signature)
{
    // This is a read-write association end

    Q_D(QTemplateBinding);
    if (d->signature != signature) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QElement *>(d->signature));

        d->signature = signature;

        // Adjust subsetted property(ies)
        if (signature) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QElement *>(signature));
        }
    }
}

/*!
    The element that is bound by this binding.
 */
QTemplateableElement *QTemplateBinding::boundElement() const
{
    // This is a read-write association end

    Q_D(const QTemplateBinding);
    return d->boundElement;
}

void QTemplateBinding::setBoundElement(QTemplateableElement *boundElement)
{
    // This is a read-write association end

    Q_D(QTemplateBinding);
    if (d->boundElement != boundElement) {
        // Adjust opposite property
        if (d->boundElement)
            d->boundElement->removeTemplateBinding(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QElement *>(d->boundElement));

        d->boundElement = boundElement;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(boundElement));
        if (boundElement) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QElement *>(boundElement));
        }

        // Adjust opposite property
        if (boundElement)
            boundElement->addTemplateBinding(this);
    }
}

/*!
    The parameter substitutions owned by this template binding.
 */
const QSet<QTemplateParameterSubstitution *> *QTemplateBinding::parameterSubstitutions() const
{
    // This is a read-write association end

    Q_D(const QTemplateBinding);
    return d->parameterSubstitutions;
}

void QTemplateBinding::addParameterSubstitution(QTemplateParameterSubstitution *parameterSubstitution)
{
    // This is a read-write association end

    Q_D(QTemplateBinding);
    if (!d->parameterSubstitutions->contains(parameterSubstitution)) {
        d->parameterSubstitutions->insert(parameterSubstitution);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(parameterSubstitution));

        // Adjust opposite property
        parameterSubstitution->setTemplateBinding(this);
    }
}

void QTemplateBinding::removeParameterSubstitution(QTemplateParameterSubstitution *parameterSubstitution)
{
    // This is a read-write association end

    Q_D(QTemplateBinding);
    if (d->parameterSubstitutions->contains(parameterSubstitution)) {
        d->parameterSubstitutions->remove(parameterSubstitution);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(parameterSubstitution));

        // Adjust opposite property
        parameterSubstitution->setTemplateBinding(0);
    }
}

#include "moc_qtemplatebinding.cpp"

QT_END_NAMESPACE_QTUML

