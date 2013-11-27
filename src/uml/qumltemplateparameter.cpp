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
#include "qumltemplateparameter.h"

#include "private/qumltemplateparameterobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlTemplateParameter

    \inmodule QtUml

    \brief A template parameter exposes a parameterable element as a formal template parameter of a template.
 */

/*!
    Creates a new QUmlTemplateParameter. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlTemplateParameter::QUmlTemplateParameter(bool createQModelingObject) :
    _default_(0),
    _ownedDefault(0),
    _ownedParameteredElement(0),
    _parameteredElement(0),
    _signature(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlTemplateParameterObject(this));
}

/*!
    Destroys the QUmlTemplateParameter.
 */
QUmlTemplateParameter::~QUmlTemplateParameter()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlTemplateParameter.
*/
QModelingElement *QUmlTemplateParameter::clone() const
{
    QUmlTemplateParameter *c = new QUmlTemplateParameter;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (ownedDefault())
        c->setOwnedDefault(dynamic_cast<QUmlParameterableElement *>(ownedDefault()->clone()));
    if (ownedParameteredElement())
        c->setOwnedParameteredElement(dynamic_cast<QUmlParameterableElement *>(ownedParameteredElement()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The element that is the default for this formal template parameter.
 */
QUmlParameterableElement *QUmlTemplateParameter::default_() const
{
    // This is a read-write association end

    return _default_;
}

/*!
    Adjusts default_ to \a default_.
 */
void QUmlTemplateParameter::setDefault(QUmlParameterableElement *default_)
{
    // This is a read-write association end

    if (_default_ != default_) {
        _default_ = default_;
        if (default_ && default_->asQModelingObject() && this->asQModelingObject())
            QObject::connect(default_->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setDefault()));
    }
}

/*!
    The element that is owned by this template parameter for the purpose of providing a default.

    \b {Subsetted property(ies):} QUmlElement::ownedElements(), QUmlTemplateParameter::default_().
 */
QUmlParameterableElement *QUmlTemplateParameter::ownedDefault() const
{
    // This is a read-write association end

    return _ownedDefault;
}

/*!
    Adjusts ownedDefault to \a ownedDefault.
 */
void QUmlTemplateParameter::setOwnedDefault(QUmlParameterableElement *ownedDefault)
{
    // This is a read-write association end

    if (_ownedDefault != ownedDefault) {
        // Adjust subsetted properties
        removeOwnedElement(_ownedDefault);

        _ownedDefault = ownedDefault;
        if (ownedDefault && ownedDefault->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedDefault->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOwnedDefault()));
        ownedDefault->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (ownedDefault) {
            addOwnedElement(ownedDefault);
        }
        setDefault(ownedDefault);
    }
}

/*!
    The element that is owned by this template parameter.

    \b {Subsetted property(ies):} QUmlTemplateParameter::parameteredElement(), QUmlElement::ownedElements().

    \b {Opposite property(ies):} QUmlParameterableElement::owningTemplateParameter().
 */
QUmlParameterableElement *QUmlTemplateParameter::ownedParameteredElement() const
{
    // This is a read-write association end

    return _ownedParameteredElement;
}

/*!
    Adjusts ownedParameteredElement to \a ownedParameteredElement.
 */
void QUmlTemplateParameter::setOwnedParameteredElement(QUmlParameterableElement *ownedParameteredElement)
{
    // This is a read-write association end

    if (_ownedParameteredElement != ownedParameteredElement) {
        // Adjust subsetted properties
        removeOwnedElement(_ownedParameteredElement);

        _ownedParameteredElement = ownedParameteredElement;
        if (ownedParameteredElement && ownedParameteredElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedParameteredElement->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOwnedParameteredElement()));
        ownedParameteredElement->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        setParameteredElement(ownedParameteredElement);
        if (ownedParameteredElement) {
            addOwnedElement(ownedParameteredElement);
        }
    }
}

/*!
    The element exposed by this template parameter.

    \b {Opposite property(ies):} QUmlParameterableElement::templateParameter().
 */
QUmlParameterableElement *QUmlTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    return _parameteredElement;
}

/*!
    Adjusts parameteredElement to \a parameteredElement.
 */
void QUmlTemplateParameter::setParameteredElement(QUmlParameterableElement *parameteredElement)
{
    // This is a read-write association end

    if (_parameteredElement != parameteredElement) {
        _parameteredElement = parameteredElement;
        if (parameteredElement && parameteredElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(parameteredElement->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setParameteredElement()));
    }
}

/*!
    The template signature that owns this template parameter.

    \b {Subsetted property(ies):} QUmlElement::owner(), .

    \b {Opposite property(ies):} QUmlTemplateSignature::ownedParameters().
 */
QUmlTemplateSignature *QUmlTemplateParameter::signature() const
{
    // This is a read-write association end

    return _signature;
}

/*!
    Adjusts signature to \a signature.
 */
void QUmlTemplateParameter::setSignature(QUmlTemplateSignature *signature)
{
    // This is a read-write association end

    if (_signature != signature) {
        // Adjust subsetted properties

        _signature = signature;
        if (signature && signature->asQModelingObject() && this->asQModelingObject())
            QObject::connect(signature->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSignature()));

        // Adjust subsetted properties
        setOwner(signature);
    }
}

QT_END_NAMESPACE

