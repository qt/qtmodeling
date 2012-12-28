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

#include "qmodel.h"
#include "qmodel_p.h"

QT_BEGIN_NAMESPACE_QTUML

QModelPrivate::QModelPrivate()
{
}

QModelPrivate::~QModelPrivate()
{
}

/*!
    \class QModel

    \inmodule QtUml

    \brief A model captures a view of a physical system. It is an abstraction of the physical system, with a certain purpose. This purpose determines what is to be included in the model and what is irrelevant. Thus the model completely describes those aspects of the physical system that are relevant to the purpose of the model, at the appropriate level of detail.
 */

QModel::QModel(QWrappedObject *parent, QWrappedObject *wrapper) :
    QPackage(*new QModelPrivate, parent, wrapper)
{
}

QModel::QModel(QModelPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QPackage(dd, parent, wrapper)
{
}

QModel::~QModel()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QModel
// ---------------------------------------------------------------

/*!
    The name of the viewpoint that is expressed by a model (This name may refer to a profile definition).
 */
QString QModel::viewpoint() const
{
    // This is a read-write attribute

    Q_D(const QModel);
    return d->viewpoint;
}

void QModel::setViewpoint(QString viewpoint)
{
    // This is a read-write attribute

    Q_D(QModel);
    if (d->viewpoint != viewpoint) {
        d->viewpoint = viewpoint;
    }
}

#include "moc_qmodel.cpp"

QT_END_NAMESPACE_QTUML

