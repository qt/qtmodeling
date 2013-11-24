/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtDuse module of the Qt Toolkit.
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
#include "qdusedesigndimensioninstance.h"

#include "private/qdusedesigndimensioninstanceobject_p.h"

#include <QtUml/QUmlElement>

QT_BEGIN_NAMESPACE

/*!
    \class QDuseDesignDimensionInstance

    \inmodule QtDuse

    \brief A specific design dimenstion instance created to tackle a particular locus of architectural decision in the input model.
 */

/*!
    Creates a new QDuseDesignDimensionInstance. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QDuseDesignDimensionInstance::QDuseDesignDimensionInstance(bool createQModelingObject) :
    _targetInstance(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QDuseDesignDimensionInstanceObject(this));
}

/*!
    Returns a deep-copied clone of the QDuseDesignDimensionInstance.
*/
QModelingElement *QDuseDesignDimensionInstance::clone() const
{
    QDuseDesignDimensionInstance *c = new QDuseDesignDimensionInstance;
    if (targetInstance())
        c->setTargetInstance(dynamic_cast<QUmlElement *>(targetInstance()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The model element which is the target of architectural changes defined in this design dimension instance.
 */
QUmlElement *QDuseDesignDimensionInstance::targetInstance() const
{
    // This is a read-write property

    return _targetInstance;
}

/*!
    Adjusts targetInstance to \a targetInstance.
 */
void QDuseDesignDimensionInstance::setTargetInstance(QUmlElement *targetInstance)
{
    // This is a read-write property

    if (_targetInstance != targetInstance) {
        _targetInstance = targetInstance;
        if (targetInstance && targetInstance->asQModelingObject() && this->asQModelingObject())
            QObject::connect(targetInstance->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setTargetInstance()));
    }
}

QT_END_NAMESPACE

