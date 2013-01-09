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

#include "qconnectableelementtemplateparameter.h"
#include "qconnectableelementtemplateparameter_p.h"

#include <QtUml/QConnectableElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QConnectableElementTemplateParameterPrivate::QConnectableElementTemplateParameterPrivate() :
    parameteredElement(0)
{
}

QConnectableElementTemplateParameterPrivate::~QConnectableElementTemplateParameterPrivate()
{
}

/*!
    \class QConnectableElementTemplateParameter

    \inmodule QtUml

    \brief A connectable element template parameter exposes a connectable element as a formal parameter for a template.
 */

QConnectableElementTemplateParameter::QConnectableElementTemplateParameter(QWrappedObject *wrapper, QWrappedObject *parent) :
    QTemplateParameter(*new QConnectableElementTemplateParameterPrivate, wrapper, parent)
{
    setPropertyData();
}

QConnectableElementTemplateParameter::QConnectableElementTemplateParameter(QConnectableElementTemplateParameterPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QTemplateParameter(dd, wrapper, parent)
{
    setPropertyData();
}

QConnectableElementTemplateParameter::~QConnectableElementTemplateParameter()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QConnectableElementTemplateParameter
// ---------------------------------------------------------------

/*!
    The ConnectableElement for this template parameter.
 */
QConnectableElement *QConnectableElementTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    Q_D(const QConnectableElementTemplateParameter);
    return d->parameteredElement;
}

void QConnectableElementTemplateParameter::setParameteredElement(QConnectableElement *parameteredElement)
{
    // This is a read-write association end

    Q_D(QConnectableElementTemplateParameter);
    if (d->parameteredElement != parameteredElement) {
        // Adjust opposite property

        d->parameteredElement = parameteredElement;

        // Adjust opposite property
        parameteredElement->setTemplateParameter(this);
    }
}

void QConnectableElementTemplateParameter::registerMetaTypes() const
{
    qRegisterMetaType<QConnectableElement *>("QConnectableElement *");
    qRegisterMetaType<QSet<QConnectableElement *>>("QSet<QConnectableElement *>");
    qRegisterMetaType<QList<QConnectableElement *>>("QList<QConnectableElement *>");

    QTemplateParameter::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QConnectableElementTemplateParameter::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectableElementTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectableElementTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectableElementTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ConnectableElement for this template parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectableElementTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QTemplateParameter::parameteredElement");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectableElementTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QConnectableElementTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QConnectableElement::templateParameter");

    QTemplateParameter::setPropertyData();
}

#include "moc_qconnectableelementtemplateparameter.cpp"

QT_END_NAMESPACE_QTUML

