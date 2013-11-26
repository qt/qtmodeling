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

QT_BEGIN_NAMESPACE

/*!
    \class QUmlProfileApplication

    \inmodule QtUml

    \brief A profile application is used to show which profiles have been applied to a package.
 */

/*!
    Creates a new QUmlProfileApplication. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlProfileApplication::QUmlProfileApplication(bool createQModelingObject) :
    _appliedProfile(0),
    _applyingPackage(0),
    _isStrict(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlProfileApplicationObject(this));
}

/*!
    Destroys the QUmlProfileApplication.
 */
QUmlProfileApplication::~QUmlProfileApplication()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlProfileApplication.
*/
QModelingElement *QUmlProfileApplication::clone() const
{
    QUmlProfileApplication *c = new QUmlProfileApplication;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setStrict(isStrict());
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Profiles that are applied to a Package through this ProfileApplication.

    \b {Subsetted property(ies):} QUmlDirectedRelationship::targets().
 */
QUmlProfile *QUmlProfileApplication::appliedProfile() const
{
    // This is a read-write association end

    return _appliedProfile;
}

/*!
    Adjusts appliedProfile to \a appliedProfile.
 */
void QUmlProfileApplication::setAppliedProfile(QUmlProfile *appliedProfile)
{
    // This is a read-write association end

    if (_appliedProfile != appliedProfile) {
        // Adjust subsetted properties
        removeTarget(_appliedProfile);

        _appliedProfile = appliedProfile;
        if (appliedProfile && appliedProfile->asQModelingObject() && this->asQModelingObject())
            QObject::connect(appliedProfile->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setAppliedProfile()));

        // Adjust subsetted properties
        if (appliedProfile) {
            addTarget(appliedProfile);
        }
    }
}

/*!
    The package that owns the profile application.

    \b {Subsetted property(ies):} QUmlElement::owner(), QUmlDirectedRelationship::sources().

    \b {Opposite property(ies):} QUmlPackage::profileApplications().
 */
QUmlPackage *QUmlProfileApplication::applyingPackage() const
{
    // This is a read-write association end

    return _applyingPackage;
}

/*!
    Adjusts applyingPackage to \a applyingPackage.
 */
void QUmlProfileApplication::setApplyingPackage(QUmlPackage *applyingPackage)
{
    // This is a read-write association end

    if (_applyingPackage != applyingPackage) {
        // Adjust subsetted properties
        removeSource(_applyingPackage);

        _applyingPackage = applyingPackage;
        if (applyingPackage && applyingPackage->asQModelingObject() && this->asQModelingObject())
            QObject::connect(applyingPackage->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setApplyingPackage()));

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

/*!
    Adjusts isStrict to \a isStrict.
 */
void QUmlProfileApplication::setStrict(bool isStrict)
{
    // This is a read-write property

    if (_isStrict != isStrict) {
        _isStrict = isStrict;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isStrict");
    }
}

QT_END_NAMESPACE

