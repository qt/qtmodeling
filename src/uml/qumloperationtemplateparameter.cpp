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

#include "qumloperationtemplateparameter.h"
#include "qumloperationtemplateparameter_p.h"

#include <QtUml/QUmlOperation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlOperationTemplateParameterPrivate::QUmlOperationTemplateParameterPrivate() :
    parameteredElement(0)
{
}

QUmlOperationTemplateParameterPrivate::~QUmlOperationTemplateParameterPrivate()
{
}

/*!
    \class QUmlOperationTemplateParameter

    \inmodule QtUml

    \brief An operation template parameter exposes an operation as a formal parameter for a template.
 */

QUmlOperationTemplateParameter::QUmlOperationTemplateParameter(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlTemplateParameter(*new QUmlOperationTemplateParameterPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlOperationTemplateParameter::QUmlOperationTemplateParameter(QUmlOperationTemplateParameterPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlTemplateParameter(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlOperationTemplateParameter::~QUmlOperationTemplateParameter()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlOperationTemplateParameter
// ---------------------------------------------------------------

/*!
    The operation for this template parameter.
 */
QUmlOperation *QUmlOperationTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    Q_D(const QUmlOperationTemplateParameter);
    return d->parameteredElement;
}

void QUmlOperationTemplateParameter::setParameteredElement(QUmlOperation *parameteredElement)
{
    // This is a read-write association end

    Q_D(QUmlOperationTemplateParameter);
    if (d->parameteredElement != parameteredElement) {
        // Adjust opposite property

        d->parameteredElement = parameteredElement;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlTemplateParameter *>(this))->setParameteredElement(qwrappedobject_cast<QUmlParameterableElement *>(parameteredElement));

        // Adjust opposite property
        parameteredElement->setTemplateParameter(this);
    }
}

void QUmlOperationTemplateParameter::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperationTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperationTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperationTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The operation for this template parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperationTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlTemplateParameter::parameteredElement");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperationTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperationTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QOperation::templateParameter");

    QUmlTemplateParameter::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumloperationtemplateparameter.cpp"

