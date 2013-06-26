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
#include "qdusevariationpoint.h"
#include "qdusevariationpoint_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QDuseVariationPointPrivate::QDuseVariationPointPrivate()
{
}

QDuseVariationPointPrivate::~QDuseVariationPointPrivate()
{
}

/*!
    \class QDuseVariationPoint

    \inmodule QtDuse

    \brief A variation point represents a specific solution for a given design dimension. A variation point entails validation rules which check for valid combinations of variation points and a script which defines the architectural changes to be enacted from such solution.
 */

QDuseVariationPoint::QDuseVariationPoint(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QDuseVariationPointPrivate, wrapper, parent)
{
    setPropertyData();
}

QDuseVariationPoint::QDuseVariationPoint(QDuseVariationPointPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent)
{
    setPropertyData();
}

QDuseVariationPoint::~QDuseVariationPoint()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QDuseVariationPoint
// ---------------------------------------------------------------

/*!
    The variation point's name.
 */
QString QDuseVariationPoint::name() const
{
    // This is a read-write attribute

    Q_D(const QDuseVariationPoint);
    return d->name;
}

void QDuseVariationPoint::setName(QString name)
{
    // This is a read-write attribute

    Q_D(QDuseVariationPoint);
    if (d->name != name) {
        d->name = name;

        QWrappedObject *wrappedObject = this;
        while (wrappedObject->wrapper())
            wrappedObject = wrappedObject->wrapper();
        wrappedObject->setObjectName(name);
    }
}

/*!
    The variation point's rationale.
 */
QString QDuseVariationPoint::rationale() const
{
    // This is a read-write attribute

    Q_D(const QDuseVariationPoint);
    return d->rationale;
}

void QDuseVariationPoint::setRationale(QString rationale)
{
    // This is a read-write attribute

    Q_D(QDuseVariationPoint);
    if (d->rationale != rationale) {
        d->rationale = rationale;
    }
}

/*!
    A set of rules which should be evaluated as true if design space locations containing such variation point are to be considered as valid ones.
 */
QString QDuseVariationPoint::preChangeValidationRule() const
{
    // This is a read-write attribute

    Q_D(const QDuseVariationPoint);
    return d->preChangeValidationRule;
}

void QDuseVariationPoint::setPreChangeValidationRule(QString preChangeValidationRule)
{
    // This is a read-write attribute

    Q_D(QDuseVariationPoint);
    if (d->preChangeValidationRule != preChangeValidationRule) {
        d->preChangeValidationRule = preChangeValidationRule;
    }
}

/*!
    The architectural changes to be enacted as contributions arosen from this variation point. The complete set of architectural changes is the merge of architectural contributions from all involved variation points.
 */
QString QDuseVariationPoint::modelChange() const
{
    // This is a read-write attribute

    Q_D(const QDuseVariationPoint);
    return d->modelChange;
}

void QDuseVariationPoint::setModelChange(QString modelChange)
{
    // This is a read-write attribute

    Q_D(QDuseVariationPoint);
    if (d->modelChange != modelChange) {
        d->modelChange = modelChange;
    }
}

void QDuseVariationPoint::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("name")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("name")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("name")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The variation point's name.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("name")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("name")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("name")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("rationale")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("rationale")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("rationale")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The variation point's rationale.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("rationale")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("rationale")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("rationale")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("preChangeValidationRule")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("preChangeValidationRule")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("preChangeValidationRule")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A set of rules which should be evaluated as true if design space locations containing such variation point are to be considered as valid ones.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("preChangeValidationRule")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("preChangeValidationRule")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("preChangeValidationRule")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("modelChange")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("modelChange")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("modelChange")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The architectural changes to be enacted as contributions arosen from this variation point. The complete set of architectural changes is the merge of architectural contributions from all involved variation points.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("modelChange")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("modelChange")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseVariationPoint")][QString::fromLatin1("modelChange")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qdusevariationpoint.cpp"

