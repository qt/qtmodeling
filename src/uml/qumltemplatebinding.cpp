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

#include "private/qumltemplatebindingobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameterSubstitution>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlTemplateBinding

    \inmodule QtUml

    \brief A template binding represents a relationship between a templateable element and a template. A template binding specifies the substitutions of actual parameters for the formal parameters of the template.
 */

/*!
    Creates a new QUmlTemplateBinding. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlTemplateBinding::QUmlTemplateBinding(bool createQModelingObject) :
    _boundElement(0),
    _signature(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlTemplateBindingObject(this));
}

/*!
    Returns a deep-copied clone of the QUmlTemplateBinding.
*/
QModelingElement *QUmlTemplateBinding::clone() const
{
    QUmlTemplateBinding *c = new QUmlTemplateBinding;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (boundElement())
        c->setBoundElement(dynamic_cast<QUmlTemplateableElement *>(boundElement()->clone()));
    foreach (QUmlTemplateParameterSubstitution *element, parameterSubstitutions())
        c->addParameterSubstitution(dynamic_cast<QUmlTemplateParameterSubstitution *>(element->clone()));
    if (signature())
        c->setSignature(dynamic_cast<QUmlTemplateSignature *>(signature()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The element that is bound by this binding.

    \b {Subsetted property(ies):} QUmlElement::owner(), QUmlDirectedRelationship::sources().

    \b {Opposite property(ies):} QUmlTemplateableElement::templateBindings().
 */
QUmlTemplateableElement *QUmlTemplateBinding::boundElement() const
{
    // This is a read-write association end

    return _boundElement;
}

/*!
    Adjusts boundElement to \a boundElement.
 */
void QUmlTemplateBinding::setBoundElement(QUmlTemplateableElement *boundElement)
{
    // This is a read-write association end

    if (_boundElement != boundElement) {
        // Adjust subsetted properties
        removeSource(_boundElement);

        _boundElement = boundElement;
        if (boundElement && boundElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(boundElement->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setBoundElement()));

        // Adjust subsetted properties
        setOwner(boundElement);
        if (boundElement) {
            addSource(boundElement);
        }
    }
}

/*!
    The parameter substitutions owned by this template binding.

    \sa addParameterSubstitution(), removeParameterSubstitution()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().

    \b {Opposite property(ies):} QUmlTemplateParameterSubstitution::templateBinding().
 */
const QSet<QUmlTemplateParameterSubstitution *> QUmlTemplateBinding::parameterSubstitutions() const
{
    // This is a read-write association end

    return _parameterSubstitutions;
}

/*!
    Adds \a parameterSubstitution to parameterSubstitutions.

    \sa parameterSubstitutions(), removeParameterSubstitution()
 */
void QUmlTemplateBinding::addParameterSubstitution(QUmlTemplateParameterSubstitution *parameterSubstitution)
{
    // This is a read-write association end

    if (!_parameterSubstitutions.contains(parameterSubstitution)) {
        _parameterSubstitutions.insert(parameterSubstitution);
        if (parameterSubstitution && parameterSubstitution->asQModelingObject() && this->asQModelingObject())
            QObject::connect(parameterSubstitution->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeParameterSubstitution(QObject *)));
        parameterSubstitution->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(parameterSubstitution);

        // Adjust opposite properties
        if (parameterSubstitution) {
            parameterSubstitution->setTemplateBinding(this);
        }
    }
}

/*!
    Removes \a parameterSubstitution from parameterSubstitutions.

    \sa parameterSubstitutions(), addParameterSubstitution()
 */
void QUmlTemplateBinding::removeParameterSubstitution(QUmlTemplateParameterSubstitution *parameterSubstitution)
{
    // This is a read-write association end

    if (_parameterSubstitutions.contains(parameterSubstitution)) {
        _parameterSubstitutions.remove(parameterSubstitution);
        if (parameterSubstitution->asQModelingObject())
            parameterSubstitution->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(parameterSubstitution);

        // Adjust opposite properties
        if (parameterSubstitution) {
            parameterSubstitution->setTemplateBinding(0);
        }
    }
}

/*!
    The template signature for the template that is the target of the binding.

    \b {Subsetted property(ies):} QUmlDirectedRelationship::targets().
 */
QUmlTemplateSignature *QUmlTemplateBinding::signature() const
{
    // This is a read-write association end

    return _signature;
}

/*!
    Adjusts signature to \a signature.
 */
void QUmlTemplateBinding::setSignature(QUmlTemplateSignature *signature)
{
    // This is a read-write association end

    if (_signature != signature) {
        // Adjust subsetted properties
        removeTarget(_signature);

        _signature = signature;
        if (signature && signature->asQModelingObject() && this->asQModelingObject())
            QObject::connect(signature->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSignature()));

        // Adjust subsetted properties
        if (signature) {
            addTarget(signature);
        }
    }
}

QT_END_NAMESPACE

