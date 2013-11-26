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
#include "qmofreflectivecollection.h"

#include "private/qmofreflectivecollectionobject_p.h"

QT_BEGIN_NAMESPACE

QMofReflectiveCollection::QMofReflectiveCollection(bool createQModelingObject) :
    QMofObject(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofReflectiveCollectionObject(this));
}

/*!
    Destroys the QMofReflectiveCollection.
 */
QMofReflectiveCollection::~QMofReflectiveCollection()
{
    QModelingElement::deleteQModelingObject();
}

QModelingElement *QMofReflectiveCollection::clone() const
{
    QMofReflectiveCollection *c = new QMofReflectiveCollection;
    return c;
}

// OPERATIONS

bool QMofReflectiveCollection::add(QMofObject *object)
{
    qWarning("QMofReflectiveCollection::add(): to be implemented (operation)");

    Q_UNUSED(object);
    return bool ();
}

bool QMofReflectiveCollection::addAll(QMofReflectiveCollection *objects)
{
    qWarning("QMofReflectiveCollection::addAll(): to be implemented (operation)");

    Q_UNUSED(objects);
    return bool ();
}

void QMofReflectiveCollection::clear()
{
    qWarning("QMofReflectiveCollection::clear(): to be implemented (operation)");

}

bool QMofReflectiveCollection::remove(QMofObject *object)
{
    qWarning("QMofReflectiveCollection::remove(): to be implemented (operation)");

    Q_UNUSED(object);
    return bool ();
}

int QMofReflectiveCollection::size() const
{
    qWarning("QMofReflectiveCollection::size(): to be implemented (operation)");

    return int ();
}

QT_END_NAMESPACE

