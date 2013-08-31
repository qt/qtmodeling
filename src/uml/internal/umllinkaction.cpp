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
#include "umllinkaction_p.h"

#include "private/umlassociation_p.h"
#include "private/umlinputpin_p.h"
#include "private/umllinkenddata_p.h"

UmlLinkAction::UmlLinkAction()
{
}

// OWNED ATTRIBUTES

const QSet<UmlLinkEndData *> UmlLinkAction::endData() const
{
    // This is a read-write association end

    return _endData;
}

void UmlLinkAction::addEndData(UmlLinkEndData *endData)
{
    // This is a read-write association end

    if (!_endData.contains(endData)) {
        _endData.insert(endData);

        // Adjust subsetted properties
        addOwnedElement(endData);
    }
}

void UmlLinkAction::removeEndData(UmlLinkEndData *endData)
{
    // This is a read-write association end

    if (_endData.contains(endData)) {
        _endData.remove(endData);

        // Adjust subsetted properties
        removeOwnedElement(endData);
    }
}

const QSet<UmlInputPin *> UmlLinkAction::inputValue() const
{
    // This is a read-write association end

    return _inputValue;
}

void UmlLinkAction::addInputValue(UmlInputPin *inputValue)
{
    // This is a read-write association end

    if (!_inputValue.contains(inputValue)) {
        _inputValue.insert(inputValue);

        // Adjust subsetted properties
        addInput(inputValue);
    }
}

void UmlLinkAction::removeInputValue(UmlInputPin *inputValue)
{
    // This is a read-write association end

    if (_inputValue.contains(inputValue)) {
        _inputValue.remove(inputValue);

        // Adjust subsetted properties
        removeInput(inputValue);
    }
}

// OPERATIONS

UmlAssociation *UmlLinkAction::association(
    ) const
{
    qWarning("UmlLinkAction::association(): to be implemented (operation)");

    return 0;
}

