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
#include "umllinkenddata_p.h"

#include "private/umlinputpin_p.h"
#include "private/umlproperty_p.h"
#include "private/umlqualifiervalue_p.h"

UmlLinkEndData::UmlLinkEndData() :
    _end(0),
    _value(0)
{
}

// OWNED ATTRIBUTES

UmlProperty *UmlLinkEndData::end() const
{
    // This is a read-write association end

    return _end;
}

void UmlLinkEndData::setEnd(UmlProperty *end)
{
    // This is a read-write association end

    if (_end != end) {
        _end = end;
    }
}

const QSet<UmlQualifierValue *> UmlLinkEndData::qualifier() const
{
    // This is a read-write association end

    return _qualifier;
}

void UmlLinkEndData::addQualifier(UmlQualifierValue *qualifier)
{
    // This is a read-write association end

    if (!_qualifier.contains(qualifier)) {
        _qualifier.insert(qualifier);

        // Adjust subsetted properties
        addOwnedElement(qualifier);
    }
}

void UmlLinkEndData::removeQualifier(UmlQualifierValue *qualifier)
{
    // This is a read-write association end

    if (_qualifier.contains(qualifier)) {
        _qualifier.remove(qualifier);

        // Adjust subsetted properties
        removeOwnedElement(qualifier);
    }
}

UmlInputPin *UmlLinkEndData::value() const
{
    // This is a read-write association end

    return _value;
}

void UmlLinkEndData::setValue(UmlInputPin *value)
{
    // This is a read-write association end

    if (_value != value) {
        _value = value;
    }
}

