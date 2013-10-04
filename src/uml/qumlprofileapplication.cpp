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
#include "qumlprofileapplication.h"

#include "private/qumlprofileapplicationobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlProfile>
/*!
    \class QUmlProfileApplication

    \inmodule QtUml

    \brief A profile application is used to show which profiles have been applied to a package.
 */
QUmlProfileApplication::QUmlProfileApplication(bool createQObject) :
    _appliedProfile(0),
    _applyingPackage(0),
    _isStrict(false)
{
    if (createQObject)
        _qObject = new QUmlProfileApplicationObject(this);
    setPropertyData();
}

QUmlProfileApplication::~QUmlProfileApplication()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlProfileApplication::clone() const
{
    QUmlProfileApplication *c = new QUmlProfileApplication;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (appliedProfile())
        c->setAppliedProfile(dynamic_cast<QUmlProfile *>(appliedProfile()->clone()));
    if (applyingPackage())
        c->setApplyingPackage(dynamic_cast<QUmlPackage *>(applyingPackage()->clone()));
    c->setStrict(isStrict());
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Profiles that are applied to a Package through this ProfileApplication.
 */
QUmlProfile *QUmlProfileApplication::appliedProfile() const
{
    // This is a read-write association end

    return _appliedProfile;
}

void QUmlProfileApplication::setAppliedProfile(QUmlProfile *appliedProfile)
{
    // This is a read-write association end

    if (_appliedProfile != appliedProfile) {
        // Adjust subsetted properties
        removeTarget(_appliedProfile);

        _appliedProfile = appliedProfile;
        if (appliedProfile && appliedProfile->asQObject() && this->asQObject())
            QObject::connect(appliedProfile->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setAppliedProfile()));

        // Adjust subsetted properties
        if (appliedProfile) {
            addTarget(appliedProfile);
        }
    }
}

/*!
    The package that owns the profile application.
 */
QUmlPackage *QUmlProfileApplication::applyingPackage() const
{
    // This is a read-write association end

    return _applyingPackage;
}

void QUmlProfileApplication::setApplyingPackage(QUmlPackage *applyingPackage)
{
    // This is a read-write association end

    if (_applyingPackage != applyingPackage) {
        // Adjust subsetted properties
        removeSource(_applyingPackage);

        _applyingPackage = applyingPackage;
        if (applyingPackage && applyingPackage->asQObject() && this->asQObject())
            QObject::connect(applyingPackage->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setApplyingPackage()));

        // Adjust subsetted properties
        setOwner(applyingPackage);
        if (applyingPackage) {
            addSource(applyingPackage);
        }
    }
}

/*!
    Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.
 */
bool QUmlProfileApplication::isStrict() const
{
    // This is a read-write property

    return _isStrict;
}

void QUmlProfileApplication::setStrict(bool isStrict)
{
    // This is a read-write property

    if (_isStrict != isStrict) {
        _isStrict = isStrict;
    }
}

void QUmlProfileApplication::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("appliedProfile")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("appliedProfile")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("appliedProfile")][QtModeling::DocumentationRole] = QStringLiteral("References the Profiles that are applied to a Package through this ProfileApplication.");
    QModelingObject::propertyDataHash[QStringLiteral("appliedProfile")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("appliedProfile")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("DirectedRelationship-target");
    QModelingObject::propertyDataHash[QStringLiteral("appliedProfile")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("applyingPackage")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("applyingPackage")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("applyingPackage")][QtModeling::DocumentationRole] = QStringLiteral("The package that owns the profile application.");
    QModelingObject::propertyDataHash[QStringLiteral("applyingPackage")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("applyingPackage")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner DirectedRelationship-source");
    QModelingObject::propertyDataHash[QStringLiteral("applyingPackage")][QtModeling::OppositeEndRole] = QStringLiteral("Package-profileApplication");

    QModelingObject::propertyDataHash[QStringLiteral("isStrict")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("isStrict")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isStrict")][QtModeling::DocumentationRole] = QStringLiteral("Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied.");
    QModelingObject::propertyDataHash[QStringLiteral("isStrict")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isStrict")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isStrict")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

