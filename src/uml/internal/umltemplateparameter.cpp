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
#include "umltemplateparameter_p.h"

#include "private/umlparameterableelement_p.h"
#include "private/umltemplatesignature_p.h"

/*!
    \class UmlTemplateParameter

    \inmodule QtUml

    \brief A template parameter exposes a parameterable element as a formal template parameter of a template.
 */

UmlTemplateParameter::UmlTemplateParameter() :
    _default_(0),
    _ownedDefault(0),
    _ownedParameteredElement(0),
    _parameteredElement(0),
    _signature(0)
{
}

// OWNED ATTRIBUTES

/*!
    The element that is the default for this formal template parameter.
 */
UmlParameterableElement *UmlTemplateParameter::default_() const
{
    // This is a read-write association end

    return _default_;
}

void UmlTemplateParameter::setDefault(UmlParameterableElement *default_)
{
    // This is a read-write association end

    if (_default_ != default_) {
        _default_ = default_;
    }
}

/*!
    The element that is owned by this template parameter for the purpose of providing a default.
 */
UmlParameterableElement *UmlTemplateParameter::ownedDefault() const
{
    // This is a read-write association end

    return _ownedDefault;
}

void UmlTemplateParameter::setOwnedDefault(UmlParameterableElement *ownedDefault)
{
    // This is a read-write association end

    if (_ownedDefault != ownedDefault) {
        // Adjust subsetted properties
        removeOwnedElement(_ownedDefault);

        _ownedDefault = ownedDefault;

        // Adjust subsetted properties
        if (ownedDefault) {
            addOwnedElement(ownedDefault);
        }
        setDefault(ownedDefault);
    }
}

/*!
    The element that is owned by this template parameter.
 */
UmlParameterableElement *UmlTemplateParameter::ownedParameteredElement() const
{
    // This is a read-write association end

    return _ownedParameteredElement;
}

void UmlTemplateParameter::setOwnedParameteredElement(UmlParameterableElement *ownedParameteredElement)
{
    // This is a read-write association end

    if (_ownedParameteredElement != ownedParameteredElement) {
        // Adjust subsetted properties
        removeOwnedElement(_ownedParameteredElement);

        _ownedParameteredElement = ownedParameteredElement;

        // Adjust subsetted properties
        setParameteredElement(ownedParameteredElement);
        if (ownedParameteredElement) {
            addOwnedElement(ownedParameteredElement);
        }
    }
}

/*!
    The element exposed by this template parameter.
 */
UmlParameterableElement *UmlTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    return _parameteredElement;
}

void UmlTemplateParameter::setParameteredElement(UmlParameterableElement *parameteredElement)
{
    // This is a read-write association end

    if (_parameteredElement != parameteredElement) {
        _parameteredElement = parameteredElement;
    }
}

/*!
    The template signature that owns this template parameter.
 */
UmlTemplateSignature *UmlTemplateParameter::signature() const
{
    // This is a read-write association end

    return _signature;
}

void UmlTemplateParameter::setSignature(UmlTemplateSignature *signature)
{
    // This is a read-write association end

    if (_signature != signature) {
        // Adjust subsetted properties

        _signature = signature;

        // Adjust subsetted properties
        setOwner(signature);
    }
}

