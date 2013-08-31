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
#include "umltemplatesignature_p.h"

#include "private/umltemplateableelement_p.h"
#include "private/umltemplateparameter_p.h"

UmlTemplateSignature::UmlTemplateSignature() :
    _template_(0)
{
}

// OWNED ATTRIBUTES

const QList<UmlTemplateParameter *> UmlTemplateSignature::ownedParameter() const
{
    // This is a read-write association end

    return _ownedParameter;
}

void UmlTemplateSignature::addOwnedParameter(UmlTemplateParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.append(ownedParameter);

        // Adjust subsetted properties
        addParameter(ownedParameter);
        addOwnedElement(ownedParameter);

        // Adjust opposite properties
        if (ownedParameter) {
            ownedParameter->setSignature(this);
        }
    }
}

void UmlTemplateSignature::removeOwnedParameter(UmlTemplateParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.removeAll(ownedParameter);

        // Adjust subsetted properties
        removeParameter(ownedParameter);
        removeOwnedElement(ownedParameter);

        // Adjust opposite properties
        if (ownedParameter) {
            ownedParameter->setSignature(0);
        }
    }
}

const QList<UmlTemplateParameter *> UmlTemplateSignature::parameter() const
{
    // This is a read-write association end

    return _parameter;
}

void UmlTemplateSignature::addParameter(UmlTemplateParameter *parameter)
{
    // This is a read-write association end

    if (!_parameter.contains(parameter)) {
        _parameter.append(parameter);
    }
}

void UmlTemplateSignature::removeParameter(UmlTemplateParameter *parameter)
{
    // This is a read-write association end

    if (_parameter.contains(parameter)) {
        _parameter.removeAll(parameter);
    }
}

UmlTemplateableElement *UmlTemplateSignature::template_() const
{
    // This is a read-write association end

    return _template_;
}

void UmlTemplateSignature::setTemplate(UmlTemplateableElement *template_)
{
    // This is a read-write association end

    if (_template_ != template_) {
        // Adjust subsetted properties

        _template_ = template_;

        // Adjust subsetted properties
        setOwner(template_);
    }
}

