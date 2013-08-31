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

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class UmlTemplateSignature

    \inmodule QtUml

    \brief A template signature bundles the set of formal template parameters for a templated element.
 */

QUmlTemplateSignature::QUmlTemplateSignature(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlTemplateSignature::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlTemplateSignature::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlTemplateSignature::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [TemplateSignature]

/*!
    The formal template parameters that are owned by this template signature.
 */
const QList<QUmlTemplateParameter *> QUmlTemplateSignature::ownedParameter() const
{
    return *(reinterpret_cast<const QList<QUmlTemplateParameter *> *>(&_ownedParameter));
}

/*!
    The ordered set of all formal template parameters for this template signature.
 */
const QList<QUmlTemplateParameter *> QUmlTemplateSignature::parameter() const
{
    return *(reinterpret_cast<const QList<QUmlTemplateParameter *> *>(&_parameter));
}

/*!
    The element that owns this template signature.
 */
QUmlTemplateableElement *QUmlTemplateSignature::template_() const
{
    return reinterpret_cast<QUmlTemplateableElement *>(_template_);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlTemplateSignature::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlTemplateSignature::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateSignature::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlTemplateSignature::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateSignature]

void QUmlTemplateSignature::addOwnedParameter(UmlTemplateParameter *ownedParameter)
{
    UmlTemplateSignature::addOwnedParameter(ownedParameter);
}

void QUmlTemplateSignature::removeOwnedParameter(UmlTemplateParameter *ownedParameter)
{
    UmlTemplateSignature::removeOwnedParameter(ownedParameter);
}

void QUmlTemplateSignature::addParameter(UmlTemplateParameter *parameter)
{
    UmlTemplateSignature::addParameter(parameter);
}

void QUmlTemplateSignature::removeParameter(UmlTemplateParameter *parameter)
{
    UmlTemplateSignature::removeParameter(parameter);
}

void QUmlTemplateSignature::setTemplate(QUmlTemplateableElement *template_)
{
    UmlTemplateSignature::setTemplate(template_);
}

QT_END_NAMESPACE

