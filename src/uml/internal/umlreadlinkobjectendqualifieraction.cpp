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
#include "umlreadlinkobjectendqualifieraction_p.h"

#include "private/umlinputpin_p.h"
#include "private/umloutputpin_p.h"
#include "private/umlproperty_p.h"

/*!
    \class UmlReadLinkObjectEndQualifierAction

    \inmodule QtUml

    \brief A read link object end qualifier action is an action that retrieves a qualifier end value from a link object.
 */

UmlReadLinkObjectEndQualifierAction::UmlReadLinkObjectEndQualifierAction() :
    _object(0),
    _qualifier(0),
    _result(0)
{
}

// OWNED ATTRIBUTES

/*!
    Gives the input pin from which the link object is obtained.
 */
UmlInputPin *UmlReadLinkObjectEndQualifierAction::object() const
{
    // This is a read-write association end

    return _object;
}

void UmlReadLinkObjectEndQualifierAction::setObject(UmlInputPin *object)
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

/*!
    The attribute representing the qualifier to be read.
 */
UmlProperty *UmlReadLinkObjectEndQualifierAction::qualifier() const
{
    // This is a read-write association end

    return _qualifier;
}

void UmlReadLinkObjectEndQualifierAction::setQualifier(UmlProperty *qualifier)
{
    // This is a read-write association end

    if (_qualifier != qualifier) {
        _qualifier = qualifier;
    }
}

/*!
    Pin where the result value is placed.
 */
UmlOutputPin *UmlReadLinkObjectEndQualifierAction::result() const
{
    // This is a read-write association end

    return _result;
}

void UmlReadLinkObjectEndQualifierAction::setResult(UmlOutputPin *result)
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

