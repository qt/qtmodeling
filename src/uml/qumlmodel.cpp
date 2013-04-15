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
#include "qumlmodel.h"
#include "qumlmodel_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlModelPrivate::QUmlModelPrivate()
{
}

QUmlModelPrivate::~QUmlModelPrivate()
{
}

/*!
    \class QUmlModel

    \inmodule QtUml

    \brief A model captures a view of a physical system. It is an abstraction of the physical system, with a certain purpose. This purpose determines what is to be included in the model and what is irrelevant. Thus the model completely describes those aspects of the physical system that are relevant to the purpose of the model, at the appropriate level of detail.
 */

QUmlModel::QUmlModel(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlPackage(*new QUmlModelPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlModel::QUmlModel(QUmlModelPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlPackage(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlModel::~QUmlModel()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlModel
// ---------------------------------------------------------------

/*!
    The name of the viewpoint that is expressed by a model (This name may refer to a profile definition).
 */
QString QUmlModel::viewpoint() const
{
    // This is a read-write attribute

    Q_D(const QUmlModel);
    return d->viewpoint;
}

void QUmlModel::setViewpoint(QString viewpoint)
{
    // This is a read-write attribute

    Q_D(QUmlModel);
    if (d->viewpoint != viewpoint) {
        d->viewpoint = viewpoint;
    }
}

void QUmlModel::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlModel")][QString::fromLatin1("viewpoint")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlModel")][QString::fromLatin1("viewpoint")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlModel")][QString::fromLatin1("viewpoint")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The name of the viewpoint that is expressed by a model (This name may refer to a profile definition).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlModel")][QString::fromLatin1("viewpoint")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlModel")][QString::fromLatin1("viewpoint")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlModel")][QString::fromLatin1("viewpoint")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlPackage::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlmodel.cpp"

