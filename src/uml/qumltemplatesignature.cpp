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
#include "qumltemplatesignature.h"

#include "private/qumltemplatesignatureobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlTemplateSignature

    \inmodule QtUml

    \brief A template signature bundles the set of formal template parameters for a templated element.
 */

/*!
    Creates a new QUmlTemplateSignature. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlTemplateSignature::QUmlTemplateSignature(bool createQModelingObject) :
    _template_(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlTemplateSignatureObject(this));
}

/*!
    Destroys the QUmlTemplateSignature.
 */
QUmlTemplateSignature::~QUmlTemplateSignature()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlTemplateSignature.
*/
QModelingElement *QUmlTemplateSignature::clone() const
{
    QUmlTemplateSignature *c = new QUmlTemplateSignature;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlTemplateParameter *element, ownedParameters())
        c->addOwnedParameter(dynamic_cast<QUmlTemplateParameter *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The formal template parameters that are owned by this template signature.

    \sa addOwnedParameter(), removeOwnedParameter()

    \b {Subsetted property(ies):} QUmlTemplateSignature::parameters(), QUmlElement::ownedElements().

    \b {Opposite property(ies):} QUmlTemplateParameter::signature().
 */
const QList<QUmlTemplateParameter *> QUmlTemplateSignature::ownedParameters() const
{
    // This is a read-write association end

    return _ownedParameters;
}

/*!
    Adds \a ownedParameter to ownedParameters.

    \sa ownedParameters(), removeOwnedParameter()
 */
void QUmlTemplateSignature::addOwnedParameter(QUmlTemplateParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.append(ownedParameter);
        if (ownedParameter && ownedParameter->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedParameter->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedParameter(QObject *)));
        ownedParameter->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addParameter(ownedParameter);
        addOwnedElement(ownedParameter);

        // Adjust opposite properties
        if (ownedParameter) {
            ownedParameter->setSignature(this);
        }
    }
}

/*!
    Removes \a ownedParameter from ownedParameters.

    \sa ownedParameters(), addOwnedParameter()
 */
void QUmlTemplateSignature::removeOwnedParameter(QUmlTemplateParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameters.contains(ownedParameter)) {
        _ownedParameters.removeAll(ownedParameter);
        if (ownedParameter->asQModelingObject())
            ownedParameter->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeParameter(ownedParameter);
        removeOwnedElement(ownedParameter);

        // Adjust opposite properties
        if (ownedParameter) {
            ownedParameter->setSignature(0);
        }
    }
}

/*!
    The ordered set of all formal template parameters for this template signature.

    \sa addParameter(), removeParameter()
 */
const QList<QUmlTemplateParameter *> QUmlTemplateSignature::parameters() const
{
    // This is a read-write association end

    return _parameters;
}

/*!
    Adds \a parameter to parameters.

    \sa parameters(), removeParameter()
 */
void QUmlTemplateSignature::addParameter(QUmlTemplateParameter *parameter)
{
    // This is a read-write association end

    if (!_parameters.contains(parameter)) {
        _parameters.append(parameter);
        if (parameter && parameter->asQModelingObject() && this->asQModelingObject())
            QObject::connect(parameter->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeParameter(QObject *)));
    }
}

/*!
    Removes \a parameter from parameters.

    \sa parameters(), addParameter()
 */
void QUmlTemplateSignature::removeParameter(QUmlTemplateParameter *parameter)
{
    // This is a read-write association end

    if (_parameters.contains(parameter)) {
        _parameters.removeAll(parameter);
    }
}

/*!
    The element that owns this template signature.

    \b {Subsetted property(ies):} QUmlElement::owner().

    \b {Opposite property(ies):} QUmlTemplateableElement::ownedTemplateSignature().
 */
QUmlTemplateableElement *QUmlTemplateSignature::template_() const
{
    // This is a read-write association end

    return _template_;
}

/*!
    Adjusts template_ to \a template_.
 */
void QUmlTemplateSignature::setTemplate(QUmlTemplateableElement *template_)
{
    // This is a read-write association end

    if (_template_ != template_) {
        // Adjust subsetted properties

        _template_ = template_;
        if (template_ && template_->asQModelingObject() && this->asQModelingObject())
            QObject::connect(template_->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setTemplate()));

        // Adjust subsetted properties
        setOwner(template_);
    }
}

QT_END_NAMESPACE

