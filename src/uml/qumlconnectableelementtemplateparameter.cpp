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
#include "qumlconnectableelementtemplateparameter.h"

#include "private/qumlconnectableelementtemplateparameterobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>
/*!
    \class QUmlConnectableElementTemplateParameter

    \inmodule QtUml

    \brief A connectable element template parameter exposes a connectable element as a formal parameter for a template.
 */
QUmlConnectableElementTemplateParameter::QUmlConnectableElementTemplateParameter(bool createQObject) :
    QUmlTemplateParameter(false),
    _parameteredElement(0)
{
    if (createQObject)
        _qObject = new QUmlConnectableElementTemplateParameterObject(this);
    setPropertyData();
}

QUmlConnectableElementTemplateParameter::~QUmlConnectableElementTemplateParameter()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlConnectableElementTemplateParameter::clone() const
{
    QUmlConnectableElementTemplateParameter *c = new QUmlConnectableElementTemplateParameter;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (default_())
        c->setDefault(dynamic_cast<QUmlParameterableElement *>(default_()->clone()));
    if (ownedDefault())
        c->setOwnedDefault(dynamic_cast<QUmlParameterableElement *>(ownedDefault()->clone()));
    if (ownedParameteredElement())
        c->setOwnedParameteredElement(dynamic_cast<QUmlParameterableElement *>(ownedParameteredElement()->clone()));
    if (signature())
        c->setSignature(dynamic_cast<QUmlTemplateSignature *>(signature()->clone()));
    if (parameteredElement())
        c->setParameteredElement(dynamic_cast<QUmlConnectableElement *>(parameteredElement()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The ConnectableElement for this template parameter.
 */
QUmlConnectableElement *QUmlConnectableElementTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    return _parameteredElement;
}

void QUmlConnectableElementTemplateParameter::setParameteredElement(QUmlConnectableElement *parameteredElement)
{
    // This is a read-write association end

    if (_parameteredElement != parameteredElement) {
        _parameteredElement = parameteredElement;
        if (parameteredElement && parameteredElement->asQObject() && this->asQObject())
            QObject::connect(parameteredElement->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setParameteredElement()));
    }
}

void QUmlConnectableElementTemplateParameter::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::DocumentationRole] = QStringLiteral("The ConnectableElement for this template parameter.");
    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("TemplateParameter-parameteredElement");
    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::OppositeEndRole] = QStringLiteral("ConnectableElement-templateParameter");

}

