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
#include "umltemplateableelement_p.h"

#include "private/umlparameterableelement_p.h"
#include "private/umltemplatebinding_p.h"
#include "private/umltemplatesignature_p.h"

UmlTemplateableElement::UmlTemplateableElement() :
    _ownedTemplateSignature(0)
{
}

// OWNED ATTRIBUTES

UmlTemplateSignature *UmlTemplateableElement::ownedTemplateSignature() const
{
    // This is a read-write association end

    return _ownedTemplateSignature;
}

void UmlTemplateableElement::setOwnedTemplateSignature(UmlTemplateSignature *ownedTemplateSignature)
{
    // This is a read-write association end

    if (_ownedTemplateSignature != ownedTemplateSignature) {
        // Adjust subsetted properties
        removeOwnedElement(_ownedTemplateSignature);

        _ownedTemplateSignature = ownedTemplateSignature;

        // Adjust subsetted properties
        if (ownedTemplateSignature) {
            addOwnedElement(ownedTemplateSignature);
        }
    }
}

const QSet<UmlTemplateBinding *> UmlTemplateableElement::templateBinding() const
{
    // This is a read-write association end

    return _templateBinding;
}

void UmlTemplateableElement::addTemplateBinding(UmlTemplateBinding *templateBinding)
{
    // This is a read-write association end

    if (!_templateBinding.contains(templateBinding)) {
        _templateBinding.insert(templateBinding);

        // Adjust subsetted properties
        addOwnedElement(templateBinding);

        // Adjust opposite properties
        if (templateBinding) {
            templateBinding->setBoundElement(this);
        }
    }
}

void UmlTemplateableElement::removeTemplateBinding(UmlTemplateBinding *templateBinding)
{
    // This is a read-write association end

    if (_templateBinding.contains(templateBinding)) {
        _templateBinding.remove(templateBinding);

        // Adjust subsetted properties
        removeOwnedElement(templateBinding);

        // Adjust opposite properties
        if (templateBinding) {
            templateBinding->setBoundElement(0);
        }
    }
}

// OPERATIONS

bool UmlTemplateableElement::isTemplate(
    ) const
{
    qWarning("UmlTemplateableElement::isTemplate(): to be implemented (operation)");

    return bool ();
}

QSet<UmlParameterableElement *> UmlTemplateableElement::parameterableElements(
    ) const
{
    qWarning("UmlTemplateableElement::parameterableElements(): to be implemented (operation)");

    return QSet<UmlParameterableElement *> ();
}

