/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmoflink.h"

#include "private/qmoflinkobject_p.h"

#include <QtMof/QMofAssociation>
#include <QtMof/QMofElement>

/*!
    \class QMofLink

    \inmodule QtMof
 */
QMofLink::QMofLink(bool createQModelingObject) :
    QMofObject(false),
    _firstElement(0),
    _secondElement(0),
    _association(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofLinkObject(this));
}

QModelingElement *QMofLink::clone() const
{
    QMofLink *c = new QMofLink;
    if (firstElement())
        c->setFirstElement(dynamic_cast<QMofElement *>(firstElement()->clone()));
    if (secondElement())
        c->setSecondElement(dynamic_cast<QMofElement *>(secondElement()->clone()));
    if (association())
        c->setAssociation(dynamic_cast<QMofAssociation *>(association()->clone()));
    return c;
}

// OWNED ATTRIBUTES


QMofElement *QMofLink::firstElement() const
{
    // This is a read-write property

    return _firstElement;
}

void QMofLink::setFirstElement(QMofElement *firstElement)
{
    // This is a read-write property

    if (_firstElement != firstElement) {
        _firstElement = firstElement;
        if (firstElement && firstElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(firstElement->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setFirstElement()));
    }
}


QMofElement *QMofLink::secondElement() const
{
    // This is a read-write property

    return _secondElement;
}

void QMofLink::setSecondElement(QMofElement *secondElement)
{
    // This is a read-write property

    if (_secondElement != secondElement) {
        _secondElement = secondElement;
        if (secondElement && secondElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(secondElement->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSecondElement()));
    }
}


QMofAssociation *QMofLink::association() const
{
    // This is a read-write property

    return _association;
}

void QMofLink::setAssociation(QMofAssociation *association)
{
    // This is a read-write property

    if (_association != association) {
        _association = association;
        if (association && association->asQModelingObject() && this->asQModelingObject())
            QObject::connect(association->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setAssociation()));
    }
}

// OPERATIONS

bool QMofLink::equals(QMofLink *otherLink) const
{
    qWarning("QMofLink::equals(): to be implemented (operation)");

    Q_UNUSED(otherLink);
    return bool ();
}

void QMofLink::delete_()
{
    qWarning("QMofLink::delete(): to be implemented (operation)");

}

