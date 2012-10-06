/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qcreateobjectaction.h"

#include <QtUml/QClassifier>
#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

class QCreateObjectActionPrivate
{
public:
    explicit QCreateObjectActionPrivate();
    virtual ~QCreateObjectActionPrivate();

    QClassifier *classifier;
    QOutputPin *result;
};

QCreateObjectActionPrivate::QCreateObjectActionPrivate()
{
}

QCreateObjectActionPrivate::~QCreateObjectActionPrivate()
{
}

/*!
    \class QCreateObjectAction

    \inmodule QtUml

    \brief A create object action is an action that creates an object that conforms to a statically specified classifier and puts it on an output pin at runtime.
 */

QCreateObjectAction::QCreateObjectAction(QObject *parent)
    : QObject(parent), d_ptr(new QCreateObjectActionPrivate)
{
}

QCreateObjectAction::~QCreateObjectAction()
{
    delete d_ptr;
}

/*!
    Classifier to be instantiated.
 */
QClassifier *QCreateObjectAction::classifier() const
{
    return d_ptr->classifier;
}

void QCreateObjectAction::setClassifier(const QClassifier *classifier)
{
    d_ptr->classifier = const_cast<QClassifier *>(classifier);
}

/*!
    Gives the output pin on which the result is put.
 */
QOutputPin *QCreateObjectAction::result() const
{
    return d_ptr->result;
}

void QCreateObjectAction::setResult(const QOutputPin *result)
{
    d_ptr->result = const_cast<QOutputPin *>(result);
}

#include "moc_qcreateobjectaction.cpp"

QT_END_NAMESPACE_QTUML

