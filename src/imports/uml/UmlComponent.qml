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
import QtQuick 2.0

UmlElement {
    UmlSlot {
        id: nameSlot
        anchors.top: parent.top
        Text {
            id: label
            anchors.centerIn: parent
        }
        Rectangle {
            border.width: 1
            width: 18; height: 18
            anchors { right: parent.right; rightMargin: 6; verticalCenter: parent.verticalCenter }
            Rectangle { border.width: 1; width: 12; height: 5; x: -6; y: 3 }
            Rectangle { border.width: 1; width: 12; height: 5; x: -6; y: 10 }
        }
    }
    UmlSlot {
        id: partSlot
        anchors { top: nameSlot.bottom; topMargin: -1; bottom: parent.bottom }
    }
    Component.onCompleted: {
        label.text = element.name
        label.font.italic = element.isAbstract
    }
}
