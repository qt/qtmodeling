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
#include "qumllinkenddata.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlLinkEndData

    \inmodule QtUml

    \brief A link end data is not an action. It is an element that identifies links. It identifies one end of a link to be read or written by the children of a link action. A link cannot be passed as a runtime value to or from an action. Instead, a link is identified by its end objects and qualifier values, if any. This requires more than one piece of data, namely, the statically-specified end in the user model, the object on the end, and the qualifier values for that end, if any. These pieces are brought together around a link end data. Each association end is identified separately with an instance of the LinkEndData class.
 */

QUmlLinkEndData::QUmlLinkEndData() :
    _end(0),
    _value(0)
{
    d_ptr->object.setProperty("end", QVariant::fromValue((QUmlProperty *)(0)));
    d_ptr->object.setProperty("qualifier", QVariant::fromValue(&_qualifier));
    d_ptr->object.setProperty("value", QVariant::fromValue((QUmlInputPin *)(0)));
}

// OWNED ATTRIBUTES

/*!
    Association end for which this link-end data specifies values.
 */
QUmlProperty *QUmlLinkEndData::end() const
{
    // This is a read-write association end

    return _end;
}

void QUmlLinkEndData::setEnd(QUmlProperty *end)
{
    // This is a read-write association end

    if (_end != end) {
        _end = end;
    }
}

/*!
    List of qualifier values
 */
const QSet<QUmlQualifierValue *> QUmlLinkEndData::qualifier() const
{
    // This is a read-write association end

    return _qualifier;
}

void QUmlLinkEndData::addQualifier(QUmlQualifierValue *qualifier)
{
    // This is a read-write association end

    if (!_qualifier.contains(qualifier)) {
        _qualifier.insert(qualifier);

        // Adjust subsetted properties
        addOwnedElement(qualifier);
    }
}

void QUmlLinkEndData::removeQualifier(QUmlQualifierValue *qualifier)
{
    // This is a read-write association end

    if (_qualifier.contains(qualifier)) {
        _qualifier.remove(qualifier);

        // Adjust subsetted properties
        removeOwnedElement(qualifier);
    }
}

/*!
    Input pin that provides the specified object for the given end. This pin is omitted if the link-end data specifies an 'open' end for reading.
 */
QUmlInputPin *QUmlLinkEndData::value() const
{
    // This is a read-write association end

    return _value;
}

void QUmlLinkEndData::setValue(QUmlInputPin *value)
{
    // This is a read-write association end

    if (_value != value) {
        _value = value;
    }
}

QT_END_NAMESPACE

