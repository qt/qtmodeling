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

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class UmlTemplateParameterSubstitution

    \inmodule QtUml

    \brief A template parameter substitution relates the actual parameter to a formal template parameter as part of a template binding.
 */

QUmlTemplateParameterSubstitution::QUmlTemplateParameterSubstitution(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlTemplateParameterSubstitution::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlTemplateParameterSubstitution::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlTemplateParameterSubstitution::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [TemplateParameterSubstitution]

/*!
    The element that is the actual parameter for this substitution.
 */
QUmlParameterableElement *QUmlTemplateParameterSubstitution::actual() const
{
    return reinterpret_cast<QUmlParameterableElement *>(_actual);
}

/*!
    The formal template parameter that is associated with this substitution.
 */
QUmlTemplateParameter *QUmlTemplateParameterSubstitution::formal() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_formal);
}

/*!
    The actual parameter that is owned by this substitution.
 */
QUmlParameterableElement *QUmlTemplateParameterSubstitution::ownedActual() const
{
    return reinterpret_cast<QUmlParameterableElement *>(_ownedActual);
}

/*!
    The optional bindings from this element to templates.
 */
QUmlTemplateBinding *QUmlTemplateParameterSubstitution::templateBinding() const
{
    return reinterpret_cast<QUmlTemplateBinding *>(_templateBinding);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlTemplateParameterSubstitution::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlTemplateParameterSubstitution::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateParameterSubstitution::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlTemplateParameterSubstitution::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateParameterSubstitution]

void QUmlTemplateParameterSubstitution::setActual(QUmlParameterableElement *actual)
{
    UmlTemplateParameterSubstitution::setActual(actual);
}

void QUmlTemplateParameterSubstitution::setFormal(QUmlTemplateParameter *formal)
{
    UmlTemplateParameterSubstitution::setFormal(formal);
}

void QUmlTemplateParameterSubstitution::setOwnedActual(QUmlParameterableElement *ownedActual)
{
    UmlTemplateParameterSubstitution::setOwnedActual(ownedActual);
}

void QUmlTemplateParameterSubstitution::setTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    UmlTemplateParameterSubstitution::setTemplateBinding(templateBinding);
}

QT_END_NAMESPACE

