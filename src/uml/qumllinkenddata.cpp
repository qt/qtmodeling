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

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

QT_BEGIN_NAMESPACE

/*!
    \class UmlLinkEndData

    \inmodule QtUml

    \brief A link end data is not an action. It is an element that identifies links. It identifies one end of a link to be read or written by the children of a link action. A link cannot be passed as a runtime value to or from an action. Instead, a link is identified by its end objects and qualifier values, if any. This requires more than one piece of data, namely, the statically-specified end in the user model, the object on the end, and the qualifier values for that end, if any. These pieces are brought together around a link end data. Each association end is identified separately with an instance of the LinkEndData class.
 */

QUmlLinkEndData::QUmlLinkEndData(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlLinkEndData::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlLinkEndData::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlLinkEndData::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [LinkEndData]

/*!
    Association end for which this link-end data specifies values.
 */
QUmlProperty *QUmlLinkEndData::end() const
{
    return reinterpret_cast<QUmlProperty *>(_end);
}

/*!
    List of qualifier values
 */
const QSet<QUmlQualifierValue *> QUmlLinkEndData::qualifier() const
{
    return *(reinterpret_cast<const QSet<QUmlQualifierValue *> *>(&_qualifier));
}

/*!
    Input pin that provides the specified object for the given end. This pin is omitted if the link-end data specifies an 'open' end for reading.
 */
QUmlInputPin *QUmlLinkEndData::value() const
{
    return reinterpret_cast<QUmlInputPin *>(_value);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlLinkEndData::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlLinkEndData::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLinkEndData::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlLinkEndData::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [LinkEndData]

void QUmlLinkEndData::setEnd(QUmlProperty *end)
{
    UmlLinkEndData::setEnd(end);
}

void QUmlLinkEndData::addQualifier(UmlQualifierValue *qualifier)
{
    UmlLinkEndData::addQualifier(qualifier);
}

void QUmlLinkEndData::removeQualifier(UmlQualifierValue *qualifier)
{
    UmlLinkEndData::removeQualifier(qualifier);
}

void QUmlLinkEndData::setValue(QUmlInputPin *value)
{
    UmlLinkEndData::setValue(value);
}

QT_END_NAMESPACE

