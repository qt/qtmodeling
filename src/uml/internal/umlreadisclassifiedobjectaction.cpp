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
#include "umlreadisclassifiedobjectaction_p.h"

#include "private/umlclassifier_p.h"
#include "private/umlinputpin_p.h"
#include "private/umloutputpin_p.h"

UmlReadIsClassifiedObjectAction::UmlReadIsClassifiedObjectAction() :
    _classifier(0),
    _isDirect(false),
    _object(0),
    _result(0)
{
}

// OWNED ATTRIBUTES

UmlClassifier *UmlReadIsClassifiedObjectAction::classifier() const
{
    // This is a read-write association end

    return _classifier;
}

void UmlReadIsClassifiedObjectAction::setClassifier(UmlClassifier *classifier)
{
    // This is a read-write association end

    if (_classifier != classifier) {
        _classifier = classifier;
    }
}

bool UmlReadIsClassifiedObjectAction::isDirect() const
{
    // This is a read-write property

    return _isDirect;
}

void UmlReadIsClassifiedObjectAction::setDirect(bool isDirect)
{
    // This is a read-write property

    if (_isDirect != isDirect) {
        _isDirect = isDirect;
    }
}

UmlInputPin *UmlReadIsClassifiedObjectAction::object() const
{
    // This is a read-write association end

    return _object;
}

void UmlReadIsClassifiedObjectAction::setObject(UmlInputPin *object)
{
    // This is a read-write association end

    if (_object != object) {
        // Adjust subsetted properties
        removeInput(_object);

        _object = object;

        // Adjust subsetted properties
        if (object) {
            addInput(object);
        }
    }
}

UmlOutputPin *UmlReadIsClassifiedObjectAction::result() const
{
    // This is a read-write association end

    return _result;
}

void UmlReadIsClassifiedObjectAction::setResult(UmlOutputPin *result)
{
    // This is a read-write association end

    if (_result != result) {
        // Adjust subsetted properties
        removeOutput(_result);

        _result = result;

        // Adjust subsetted properties
        if (result) {
            addOutput(result);
        }
    }
}

