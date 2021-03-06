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
#include "qumllinkenddestructiondata.h"

#include "private/qumllinkenddestructiondataobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlLinkEndDestructionData

    \inmodule QtUml

    \brief A link end destruction data is not an action. It is an element that identifies links. It identifies one end of a link to be destroyed by destroy link action.
 */

/*!
    Creates a new QUmlLinkEndDestructionData. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlLinkEndDestructionData::QUmlLinkEndDestructionData(bool createQModelingObject) :
    QUmlLinkEndData(false),
    _destroyAt(0),
    _isDestroyDuplicates(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlLinkEndDestructionDataObject(this));
}

/*!
    Destroys the QUmlLinkEndDestructionData.
 */
QUmlLinkEndDestructionData::~QUmlLinkEndDestructionData()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlLinkEndDestructionData.
*/
QModelingElement *QUmlLinkEndDestructionData::clone() const
{
    QUmlLinkEndDestructionData *c = new QUmlLinkEndDestructionData;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlQualifierValue *element, qualifiers())
        c->addQualifier(dynamic_cast<QUmlQualifierValue *>(element->clone()));
    c->setDestroyDuplicates(isDestroyDuplicates());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the position of an existing link to be destroyed in ordered nonunique association ends. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QUmlInputPin *QUmlLinkEndDestructionData::destroyAt() const
{
    // This is a read-write association end

    return _destroyAt;
}

/*!
    Adjusts destroyAt to \a destroyAt.
 */
void QUmlLinkEndDestructionData::setDestroyAt(QUmlInputPin *destroyAt)
{
    // This is a read-write association end

    if (_destroyAt != destroyAt) {
        _destroyAt = destroyAt;
        if (destroyAt && destroyAt->asQModelingObject() && this->asQModelingObject())
            QObject::connect(destroyAt->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setDestroyAt()));
    }
}

/*!
    Specifies whether to destroy duplicates of the value in nonunique association ends.
 */
bool QUmlLinkEndDestructionData::isDestroyDuplicates() const
{
    // This is a read-write property

    return _isDestroyDuplicates;
}

/*!
    Adjusts isDestroyDuplicates to \a isDestroyDuplicates.
 */
void QUmlLinkEndDestructionData::setDestroyDuplicates(bool isDestroyDuplicates)
{
    // This is a read-write property

    if (_isDestroyDuplicates != isDestroyDuplicates) {
        _isDestroyDuplicates = isDestroyDuplicates;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isDestroyDuplicates");
    }
}

QT_END_NAMESPACE

