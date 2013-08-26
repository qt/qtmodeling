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
#include "qumlinformationitem.h"
#include "private/qmodelingobject_p.h"

QT_BEGIN_NAMESPACE

/*!
    \class QUmlInformationItem

    \inmodule QtUml

    \brief An information item is an abstraction of all kinds of information that can be exchanged between objects. It is a kind of classifier intended for representing information in a very abstract way, one which cannot be instantiated.
 */

QUmlInformationItem::QUmlInformationItem()
{
    d_ptr->object.setProperty("represented", QVariant::fromValue(&_represented));
}

// OWNED ATTRIBUTES

/*!
    Determines the classifiers that will specify the structure and nature of the information. An information item represents all its represented classifiers.
 */
QSet<QUmlClassifier *> QUmlInformationItem::represented() const
{
    // This is a read-write association end

    return _represented;
}

void QUmlInformationItem::addRepresented(QUmlClassifier *represented)
{
    // This is a read-write association end

    if (!_represented.contains(represented)) {
        _represented.insert(represented);
    }
}

void QUmlInformationItem::removeRepresented(QUmlClassifier *represented)
{
    // This is a read-write association end

    if (_represented.contains(represented)) {
        _represented.remove(represented);
    }
}

QT_END_NAMESPACE

