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

#include "private/qumllinkenddataobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

/*!
    \class QUmlLinkEndData

    \inmodule QtUml

    \brief A link end data is not an action. It is an element that identifies links. It identifies one end of a link to be read or written by the children of a link action. A link cannot be passed as a runtime value to or from an action. Instead, a link is identified by its end objects and qualifier values, if any. This requires more than one piece of data, namely, the statically-specified end in the user model, the object on the end, and the qualifier values for that end, if any. These pieces are brought together around a link end data. Each association end is identified separately with an instance of the LinkEndData class.
 */
QUmlLinkEndData::QUmlLinkEndData(bool createQModelingObject) :
    _end(0),
    _value(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlLinkEndDataObject(this));
}

QModelingElement *QUmlLinkEndData::clone() const
{
    QUmlLinkEndData *c = new QUmlLinkEndData;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (end())
        c->setEnd(dynamic_cast<QUmlProperty *>(end()->clone()));
    foreach (QUmlQualifierValue *element, qualifiers())
        c->addQualifier(dynamic_cast<QUmlQualifierValue *>(element->clone()));
    if (value())
        c->setValue(dynamic_cast<QUmlInputPin *>(value()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Association end for which this link-end data specifies values.
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
        if (end && end->asQModelingObject() && this->asQModelingObject())
            QObject::connect(end->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setEnd()));
    }
}

/*!
    List of qualifier values
 */
const QSet<QUmlQualifierValue *> QUmlLinkEndData::qualifiers() const
{
    // This is a read-write association end

    return _qualifiers;
}

void QUmlLinkEndData::addQualifier(QUmlQualifierValue *qualifier)
{
    // This is a read-write association end

    if (!_qualifiers.contains(qualifier)) {
        _qualifiers.insert(qualifier);
        if (qualifier && qualifier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(qualifier->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeQualifier(QObject *)));
        qualifier->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(qualifier);
    }
}

void QUmlLinkEndData::removeQualifier(QUmlQualifierValue *qualifier)
{
    // This is a read-write association end

    if (_qualifiers.contains(qualifier)) {
        _qualifiers.remove(qualifier);
        if (qualifier->asQModelingObject())
            qualifier->asQModelingObject()->setParent(0);

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
        if (value && value->asQModelingObject() && this->asQModelingObject())
            QObject::connect(value->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setValue()));
    }
}

