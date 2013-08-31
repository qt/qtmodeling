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

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameterSubstitution>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

/*!
    \class UmlTemplateBinding

    \inmodule QtUml

    \brief A template binding represents a relationship between a templateable element and a template. A template binding specifies the substitutions of actual parameters for the formal parameters of the template.
 */

QUmlTemplateBinding::QUmlTemplateBinding(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlTemplateBinding::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlTemplateBinding::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlTemplateBinding::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [Relationship]

/*!
    Specifies the elements related by the Relationship.
 */
const QSet<QUmlElement *> QUmlTemplateBinding::relatedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_relatedElement));
}

// OWNED ATTRIBUTES [DirectedRelationship]

/*!
    Specifies the sources of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlTemplateBinding::source() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_source));
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlTemplateBinding::target() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_target));
}

// OWNED ATTRIBUTES [TemplateBinding]

/*!
    The element that is bound by this binding.
 */
QUmlTemplateableElement *QUmlTemplateBinding::boundElement() const
{
    return reinterpret_cast<QUmlTemplateableElement *>(_boundElement);
}

/*!
    The parameter substitutions owned by this template binding.
 */
const QSet<QUmlTemplateParameterSubstitution *> QUmlTemplateBinding::parameterSubstitution() const
{
    return *(reinterpret_cast<const QSet<QUmlTemplateParameterSubstitution *> *>(&_parameterSubstitution));
}

/*!
    The template signature for the template that is the target of the binding.
 */
QUmlTemplateSignature *QUmlTemplateBinding::signature() const
{
    return reinterpret_cast<QUmlTemplateSignature *>(_signature);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlTemplateBinding::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlTemplateBinding::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateBinding::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlTemplateBinding::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

// SLOTS FOR OWNED ATTRIBUTES [TemplateBinding]

void QUmlTemplateBinding::setBoundElement(QUmlTemplateableElement *boundElement)
{
    UmlTemplateBinding::setBoundElement(boundElement);
}

void QUmlTemplateBinding::addParameterSubstitution(UmlTemplateParameterSubstitution *parameterSubstitution)
{
    UmlTemplateBinding::addParameterSubstitution(parameterSubstitution);
}

void QUmlTemplateBinding::removeParameterSubstitution(UmlTemplateParameterSubstitution *parameterSubstitution)
{
    UmlTemplateBinding::removeParameterSubstitution(parameterSubstitution);
}

void QUmlTemplateBinding::setSignature(QUmlTemplateSignature *signature)
{
    UmlTemplateBinding::setSignature(signature);
}

QT_END_NAMESPACE

