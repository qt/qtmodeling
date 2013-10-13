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
#include <QtUml/QUmlElement>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameter>

/*!
    \class QUmlTemplateSignature

    \inmodule QtUml

    \brief A template signature bundles the set of formal template parameters for a templated element.
 */
QUmlTemplateSignature::QUmlTemplateSignature(bool createQModelingObject) :
    _template_(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlTemplateSignatureObject(this));
}

QModelingElement *QUmlTemplateSignature::clone() const
{
    QUmlTemplateSignature *c = new QUmlTemplateSignature;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlTemplateParameter *element, ownedParameters())
        c->addOwnedParameter(dynamic_cast<QUmlTemplateParameter *>(element->clone()));
    foreach (QUmlTemplateParameter *element, parameters())
        c->addParameter(dynamic_cast<QUmlTemplateParameter *>(element->clone()));
    if (template_())
        c->setTemplate(dynamic_cast<QUmlTemplateableElement *>(template_()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The formal template parameters that are owned by this template signature.
 */
const QList<QUmlTemplateParameter *> QUmlTemplateSignature::ownedParameters() const
{
    // This is a read-write association end

    return _ownedParameters;
}

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
 */
const QList<QUmlTemplateParameter *> QUmlTemplateSignature::parameters() const
{
    // This is a read-write association end

    return _parameters;
}

void QUmlTemplateSignature::addParameter(QUmlTemplateParameter *parameter)
{
    // This is a read-write association end

    if (!_parameters.contains(parameter)) {
        _parameters.append(parameter);
        if (parameter && parameter->asQModelingObject() && this->asQModelingObject())
            QObject::connect(parameter->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeParameter(QObject *)));
    }
}

void QUmlTemplateSignature::removeParameter(QUmlTemplateParameter *parameter)
{
    // This is a read-write association end

    if (_parameters.contains(parameter)) {
        _parameters.removeAll(parameter);
    }
}

/*!
    The element that owns this template signature.
 */
QUmlTemplateableElement *QUmlTemplateSignature::template_() const
{
    // This is a read-write association end

    return _template_;
}

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

