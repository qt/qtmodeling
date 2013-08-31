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
#include "umlprotocolconformance_p.h"

#include "private/umlprotocolstatemachine_p.h"

UmlProtocolConformance::UmlProtocolConformance() :
    _generalMachine(0),
    _specificMachine(0)
{
}

// OWNED ATTRIBUTES

UmlProtocolStateMachine *UmlProtocolConformance::generalMachine() const
{
    // This is a read-write association end

    return _generalMachine;
}

void UmlProtocolConformance::setGeneralMachine(UmlProtocolStateMachine *generalMachine)
{
    // This is a read-write association end

    if (_generalMachine != generalMachine) {
        // Adjust subsetted properties
        removeTarget(_generalMachine);

        _generalMachine = generalMachine;

        // Adjust subsetted properties
        if (generalMachine) {
            addTarget(generalMachine);
        }
    }
}

UmlProtocolStateMachine *UmlProtocolConformance::specificMachine() const
{
    // This is a read-write association end

    return _specificMachine;
}

void UmlProtocolConformance::setSpecificMachine(UmlProtocolStateMachine *specificMachine)
{
    // This is a read-write association end

    if (_specificMachine != specificMachine) {
        // Adjust subsetted properties
        removeSource(_specificMachine);

        _specificMachine = specificMachine;

        // Adjust subsetted properties
        setOwner(specificMachine);
        if (specificMachine) {
            addSource(specificMachine);
        }
    }
}

