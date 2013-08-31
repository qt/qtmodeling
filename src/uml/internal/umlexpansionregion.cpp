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
#include "umlexpansionregion_p.h"

#include "private/umlexpansionnode_p.h"

UmlExpansionRegion::UmlExpansionRegion() :
    _mode(QtUml::ExpansionKindIterative)
{
}

// OWNED ATTRIBUTES

const QSet<UmlExpansionNode *> UmlExpansionRegion::inputElement() const
{
    // This is a read-write association end

    return _inputElement;
}

void UmlExpansionRegion::addInputElement(UmlExpansionNode *inputElement)
{
    // This is a read-write association end

    if (!_inputElement.contains(inputElement)) {
        _inputElement.insert(inputElement);

        // Adjust opposite properties
        if (inputElement) {
            inputElement->setRegionAsInput(this);
        }
    }
}

void UmlExpansionRegion::removeInputElement(UmlExpansionNode *inputElement)
{
    // This is a read-write association end

    if (_inputElement.contains(inputElement)) {
        _inputElement.remove(inputElement);

        // Adjust opposite properties
        if (inputElement) {
            inputElement->setRegionAsInput(0);
        }
    }
}

QtUml::ExpansionKind UmlExpansionRegion::mode() const
{
    // This is a read-write property

    return _mode;
}

void UmlExpansionRegion::setMode(QtUml::ExpansionKind mode)
{
    // This is a read-write property

    if (_mode != mode) {
        _mode = mode;
    }
}

const QSet<UmlExpansionNode *> UmlExpansionRegion::outputElement() const
{
    // This is a read-write association end

    return _outputElement;
}

void UmlExpansionRegion::addOutputElement(UmlExpansionNode *outputElement)
{
    // This is a read-write association end

    if (!_outputElement.contains(outputElement)) {
        _outputElement.insert(outputElement);

        // Adjust opposite properties
        if (outputElement) {
            outputElement->setRegionAsOutput(this);
        }
    }
}

void UmlExpansionRegion::removeOutputElement(UmlExpansionNode *outputElement)
{
    // This is a read-write association end

    if (_outputElement.contains(outputElement)) {
        _outputElement.remove(outputElement);

        // Adjust opposite properties
        if (outputElement) {
            outputElement->setRegionAsOutput(0);
        }
    }
}

