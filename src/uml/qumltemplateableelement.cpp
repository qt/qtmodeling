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
#include "qumltemplateableelement.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

/*!
    \class UmlTemplateableElement

    \inmodule QtUml

    \brief A templateable element is an element that can optionally be defined as a template and bound to other templates.
 */

QUmlTemplateableElement::QUmlTemplateableElement(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlTemplateableElement::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlTemplateableElement::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlTemplateableElement::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [TemplateableElement]

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlTemplateSignature *QUmlTemplateableElement::ownedTemplateSignature() const
{
    return reinterpret_cast<QUmlTemplateSignature *>(_ownedTemplateSignature);
}

/*!
    The optional bindings from this element to templates.
 */
const QSet<QUmlTemplateBinding *> QUmlTemplateableElement::templateBinding() const
{
    return *(reinterpret_cast<const QSet<QUmlTemplateBinding *> *>(&_templateBinding));
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlTemplateableElement::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlTemplateableElement::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [TemplateableElement]

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QUmlTemplateableElement::isTemplate() const
{
    return UmlTemplateableElement::isTemplate();
}

/*!
    The query parameterableElements() returns the set of elements that may be used as the parametered elements for a template parameter of this templateable element. By default, this set includes all the owned elements. Subclasses may override this operation if they choose to restrict the set of parameterable elements.
 */
QSet<QUmlParameterableElement *> QUmlTemplateableElement::parameterableElements() const
{
    QSet<QUmlParameterableElement *> r;
    foreach (UmlParameterableElement *element, UmlTemplateableElement::parameterableElements())
        r.insert(reinterpret_cast<QUmlParameterableElement *>(element));
    return r;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateableElement::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlTemplateableElement::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlTemplateableElement::setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature)
{
    UmlTemplateableElement::setOwnedTemplateSignature(ownedTemplateSignature);
}

void QUmlTemplateableElement::addTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::addTemplateBinding(templateBinding);
}

void QUmlTemplateableElement::removeTemplateBinding(UmlTemplateBinding *templateBinding)
{
    UmlTemplateableElement::removeTemplateBinding(templateBinding);
}

QT_END_NAMESPACE

