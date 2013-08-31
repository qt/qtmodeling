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
#include "qumlconnectableelementtemplateparameter.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

/*!
    \class UmlConnectableElementTemplateParameter

    \inmodule QtUml

    \brief A connectable element template parameter exposes a connectable element as a formal parameter for a template.
 */

QUmlConnectableElementTemplateParameter::QUmlConnectableElementTemplateParameter(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlConnectableElementTemplateParameter::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlConnectableElementTemplateParameter::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlConnectableElementTemplateParameter::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [TemplateParameter]

/*!
    The element that is the default for this formal template parameter.
 */
QUmlParameterableElement *QUmlConnectableElementTemplateParameter::default_() const
{
    return reinterpret_cast<QUmlParameterableElement *>(_default_);
}

/*!
    The element that is owned by this template parameter for the purpose of providing a default.
 */
QUmlParameterableElement *QUmlConnectableElementTemplateParameter::ownedDefault() const
{
    return reinterpret_cast<QUmlParameterableElement *>(_ownedDefault);
}

/*!
    The element that is owned by this template parameter.
 */
QUmlParameterableElement *QUmlConnectableElementTemplateParameter::ownedParameteredElement() const
{
    return reinterpret_cast<QUmlParameterableElement *>(_ownedParameteredElement);
}

/*!
    The template signature that owns this template parameter.
 */
QUmlTemplateSignature *QUmlConnectableElementTemplateParameter::signature() const
{
    return reinterpret_cast<QUmlTemplateSignature *>(_signature);
}

// OWNED ATTRIBUTES [ConnectableElementTemplateParameter]

/*!
    The ConnectableElement for this template parameter.
 */
QUmlConnectableElement *QUmlConnectableElementTemplateParameter::parameteredElement() const
{
    return reinterpret_cast<QUmlConnectableElement *>(_parameteredElement);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlConnectableElementTemplateParameter::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlConnectableElementTemplateParameter::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConnectableElementTemplateParameter::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlConnectableElementTemplateParameter::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateParameter]

void QUmlConnectableElementTemplateParameter::setDefault(QUmlParameterableElement *default_)
{
    UmlTemplateParameter::setDefault(default_);
}

void QUmlConnectableElementTemplateParameter::setOwnedDefault(QUmlParameterableElement *ownedDefault)
{
    UmlTemplateParameter::setOwnedDefault(ownedDefault);
}

void QUmlConnectableElementTemplateParameter::setOwnedParameteredElement(QUmlParameterableElement *ownedParameteredElement)
{
    UmlTemplateParameter::setOwnedParameteredElement(ownedParameteredElement);
}

void QUmlConnectableElementTemplateParameter::setSignature(QUmlTemplateSignature *signature)
{
    UmlTemplateParameter::setSignature(signature);
}

// SLOTS FOR OWNED ATTRIBUTES [ConnectableElementTemplateParameter]

void QUmlConnectableElementTemplateParameter::setParameteredElement(QUmlConnectableElement *parameteredElement)
{
    UmlConnectableElementTemplateParameter::setParameteredElement(parameteredElement);
}

QT_END_NAMESPACE

