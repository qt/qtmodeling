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

#include "qassociationclass.h"
#include "qassociationclass_p.h"

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QAssociationClassPrivate::QAssociationClassPrivate()
{
}

QAssociationClassPrivate::~QAssociationClassPrivate()
{
}

/*!
    \class QAssociationClass

    \inmodule QtUml

    \brief A model element that has both association and class properties. An AssociationClass can be seen as an association that also has class properties, or as a class that also has association properties. It not only connects a set of classifiers but also defines a set of features that belong to the relationship itself and not to any of the classifiers.
 */

QAssociationClass::QAssociationClass(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(*new QAssociationClassPrivate, parent, wrapper),
    _wrappedClass(new QClass(this, this)),
    _wrappedAssociation(new QAssociation(this, this))
{
    setPropertyData();
}

QAssociationClass::QAssociationClass(QAssociationClassPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(dd, parent, wrapper),
    _wrappedClass(new QClass(this, this)),
    _wrappedAssociation(new QAssociation(this, this))
{
    setPropertyData();
}

QAssociationClass::~QAssociationClass()
{
}

void QAssociationClass::registerMetaTypes() const
{
    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QAssociationClass::setPropertyData()
{
    QWrappedObject::setPropertyData();
}

#include "moc_qassociationclass.cpp"

QT_END_NAMESPACE_QTUML

