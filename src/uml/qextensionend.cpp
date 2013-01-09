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

#include "qextensionend.h"
#include "qextensionend_p.h"

#include <QtUml/QStereotype>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QExtensionEndPrivate::QExtensionEndPrivate() :
    type(0)
{
}

QExtensionEndPrivate::~QExtensionEndPrivate()
{
}

/*!
    \class QExtensionEnd

    \inmodule QtUml

    \brief An extension end is used to tie an extension to a stereotype when extending a metaclass.The default multiplicity of an extension end is 0..1.
 */

QExtensionEnd::QExtensionEnd(QWrappedObject *wrapper, QWrappedObject *parent) :
    QProperty(*new QExtensionEndPrivate, wrapper, parent)
{
    setPropertyData();
}

QExtensionEnd::QExtensionEnd(QExtensionEndPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QProperty(dd, wrapper, parent)
{
    setPropertyData();
}

QExtensionEnd::~QExtensionEnd()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QExtensionEnd
// ---------------------------------------------------------------

/*!
    This redefinition changes the default multiplicity of association ends, since model elements are usually extended by 0 or 1 instance of the extension stereotype.
 */
qint32 QExtensionEnd::lower() const
{
    // This is a read-write derived attribute

    qWarning("QExtensionEnd::lower: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

void QExtensionEnd::setLower(qint32 lower)
{
    // This is a read-write derived attribute

    qWarning("QExtensionEnd::setLower: to be implemented (this is a derived attribute)");
    Q_UNUSED(lower);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QExtensionEnd
// ---------------------------------------------------------------

/*!
    References the type of the ExtensionEnd. Note that this association restricts the possible types of an ExtensionEnd to only be Stereotypes.
 */
QStereotype *QExtensionEnd::type() const
{
    // This is a read-write association end

    Q_D(const QExtensionEnd);
    return d->type;
}

void QExtensionEnd::setType(QStereotype *type)
{
    // This is a read-write association end

    Q_D(QExtensionEnd);
    if (d->type != type) {
        d->type = type;
    }
}

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an Integer. This is a redefinition of the default lower bound, which normally, for MultiplicityElements, evaluates to 1 if empty.
 */
qint32 QExtensionEnd::lowerBound() const
{
    qWarning("QExtensionEnd::lowerBound: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QExtensionEnd::registerMetaTypes() const
{
    qRegisterMetaType<QStereotype *>("QStereotype *");
    qRegisterMetaType<QSet<QStereotype *>>("QSet<QStereotype *>");
    qRegisterMetaType<QList<QStereotype *>>("QList<QStereotype *>");

    QProperty::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QExtensionEnd::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This redefinition changes the default multiplicity of association ends, since model elements are usually extended by 0 or 1 instance of the extension stereotype.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QMultiplicityElement::lower");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the type of the ExtensionEnd. Note that this association restricts the possible types of an ExtensionEnd to only be Stereotypes.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QTypedElement::type");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtensionEnd")][QString::fromLatin1("type")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QProperty::setPropertyData();
}

#include "moc_qextensionend.cpp"

QT_END_NAMESPACE_QTUML

