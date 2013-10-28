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
#include "qmofinstancevalue.h"

#include "private/qmofinstancevalueobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofInstanceSpecification>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

/*!
    \class QMofInstanceValue

    \inmodule QtMof

    \brief An instance value is a value specification that identifies an instance.
 */
QMofInstanceValue::QMofInstanceValue(bool createQModelingObject) :
    _instance(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofInstanceValueObject(this));
}

QModelingElement *QMofInstanceValue::clone() const
{
    QMofInstanceValue *c = new QMofInstanceValue;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    if (type())
        c->setType(dynamic_cast<QMofType *>(type()->clone()));
    if (instance())
        c->setInstance(dynamic_cast<QMofInstanceSpecification *>(instance()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The instance that is the specified value.
 */
QMofInstanceSpecification *QMofInstanceValue::instance() const
{
    // This is a read-write association end

    return _instance;
}

void QMofInstanceValue::setInstance(QMofInstanceSpecification *instance)
{
    // This is a read-write association end

    if (_instance != instance) {
        _instance = instance;
        if (instance && instance->asQModelingObject() && this->asQModelingObject())
            QObject::connect(instance->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setInstance()));
    }
}

QT_END_NAMESPACE

