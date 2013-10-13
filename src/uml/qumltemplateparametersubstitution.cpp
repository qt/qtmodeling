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

#include "private/qumltemplateparametersubstitutionobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>

/*!
    \class QUmlTemplateParameterSubstitution

    \inmodule QtUml

    \brief A template parameter substitution relates the actual parameter to a formal template parameter as part of a template binding.
 */
QUmlTemplateParameterSubstitution::QUmlTemplateParameterSubstitution(bool createQModelingObject) :
    _actual(0),
    _formal(0),
    _ownedActual(0),
    _templateBinding(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlTemplateParameterSubstitutionObject(this));
}

QModelingElement *QUmlTemplateParameterSubstitution::clone() const
{
    QUmlTemplateParameterSubstitution *c = new QUmlTemplateParameterSubstitution;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (actual())
        c->setActual(dynamic_cast<QUmlParameterableElement *>(actual()->clone()));
    if (formal())
        c->setFormal(dynamic_cast<QUmlTemplateParameter *>(formal()->clone()));
    if (ownedActual())
        c->setOwnedActual(dynamic_cast<QUmlParameterableElement *>(ownedActual()->clone()));
    if (templateBinding())
        c->setTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(templateBinding()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The element that is the actual parameter for this substitution.
 */
QUmlParameterableElement *QUmlTemplateParameterSubstitution::actual() const
{
    // This is a read-write association end

    return _actual;
}

void QUmlTemplateParameterSubstitution::setActual(QUmlParameterableElement *actual)
{
    // This is a read-write association end

    if (_actual != actual) {
        _actual = actual;
        if (actual && actual->asQModelingObject() && this->asQModelingObject())
            QObject::connect(actual->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setActual()));
    }
}

/*!
    The formal template parameter that is associated with this substitution.
 */
QUmlTemplateParameter *QUmlTemplateParameterSubstitution::formal() const
{
    // This is a read-write association end

    return _formal;
}

void QUmlTemplateParameterSubstitution::setFormal(QUmlTemplateParameter *formal)
{
    // This is a read-write association end

    if (_formal != formal) {
        _formal = formal;
        if (formal && formal->asQModelingObject() && this->asQModelingObject())
            QObject::connect(formal->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setFormal()));
    }
}

/*!
    The actual parameter that is owned by this substitution.
 */
QUmlParameterableElement *QUmlTemplateParameterSubstitution::ownedActual() const
{
    // This is a read-write association end

    return _ownedActual;
}

void QUmlTemplateParameterSubstitution::setOwnedActual(QUmlParameterableElement *ownedActual)
{
    // This is a read-write association end

    if (_ownedActual != ownedActual) {
        // Adjust subsetted properties
        removeOwnedElement(_ownedActual);

        _ownedActual = ownedActual;
        if (ownedActual && ownedActual->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedActual->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOwnedActual()));
        ownedActual->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (ownedActual) {
            addOwnedElement(ownedActual);
        }
        setActual(ownedActual);
    }
}

/*!
    The optional bindings from this element to templates.
 */
QUmlTemplateBinding *QUmlTemplateParameterSubstitution::templateBinding() const
{
    // This is a read-write association end

    return _templateBinding;
}

void QUmlTemplateParameterSubstitution::setTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    // This is a read-write association end

    if (_templateBinding != templateBinding) {
        // Adjust subsetted properties

        _templateBinding = templateBinding;
        if (templateBinding && templateBinding->asQModelingObject() && this->asQModelingObject())
            QObject::connect(templateBinding->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setTemplateBinding()));

        // Adjust subsetted properties
        setOwner(templateBinding);
    }
}

