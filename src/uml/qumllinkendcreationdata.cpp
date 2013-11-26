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
#include "qumllinkendcreationdata.h"

#include "private/qumllinkendcreationdataobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlLinkEndCreationData

    \inmodule QtUml

    \brief A link end creation data is not an action. It is an element that identifies links. It identifies one end of a link to be created by a create link action.
 */

/*!
    Creates a new QUmlLinkEndCreationData. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlLinkEndCreationData::QUmlLinkEndCreationData(bool createQModelingObject) :
    QUmlLinkEndData(false),
    _insertAt(0),
    _isReplaceAll(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlLinkEndCreationDataObject(this));
}

/*!
    Destroys the QUmlLinkEndCreationData.
 */
QUmlLinkEndCreationData::~QUmlLinkEndCreationData()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlLinkEndCreationData.
*/
QModelingElement *QUmlLinkEndCreationData::clone() const
{
    QUmlLinkEndCreationData *c = new QUmlLinkEndCreationData;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlQualifierValue *element, qualifiers())
        c->addQualifier(dynamic_cast<QUmlQualifierValue *>(element->clone()));
    c->setReplaceAll(isReplaceAll());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies where the new link should be inserted for ordered association ends, or where an existing link should be moved to. The type of the input is UnlimitedNatural, but the input cannot be zero. This pin is omitted for association ends that are not ordered.
 */
QUmlInputPin *QUmlLinkEndCreationData::insertAt() const
{
    // This is a read-write association end

    return _insertAt;
}

/*!
    Adjusts insertAt to \a insertAt.
 */
void QUmlLinkEndCreationData::setInsertAt(QUmlInputPin *insertAt)
{
    // This is a read-write association end

    if (_insertAt != insertAt) {
        _insertAt = insertAt;
        if (insertAt && insertAt->asQModelingObject() && this->asQModelingObject())
            QObject::connect(insertAt->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setInsertAt()));
    }
}

/*!
    Specifies whether the existing links emanating from the object on this end should be destroyed before creating a new link.
 */
bool QUmlLinkEndCreationData::isReplaceAll() const
{
    // This is a read-write property

    return _isReplaceAll;
}

/*!
    Adjusts isReplaceAll to \a isReplaceAll.
 */
void QUmlLinkEndCreationData::setReplaceAll(bool isReplaceAll)
{
    // This is a read-write property

    if (_isReplaceAll != isReplaceAll) {
        _isReplaceAll = isReplaceAll;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isReplaceAll");
    }
}

QT_END_NAMESPACE

