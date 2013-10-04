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
#include "qumloperationtemplateparameter.h"

#include "private/qumloperationtemplateparameterobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>
/*!
    \class QUmlOperationTemplateParameter

    \inmodule QtUml

    \brief An operation template parameter exposes an operation as a formal parameter for a template.
 */
QUmlOperationTemplateParameter::QUmlOperationTemplateParameter(bool createQObject) :
    QUmlTemplateParameter(false),
    _parameteredElement(0)
{
    if (createQObject)
        _qObject = new QUmlOperationTemplateParameterObject(this);
    setPropertyData();
}

QUmlOperationTemplateParameter::~QUmlOperationTemplateParameter()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlOperationTemplateParameter::clone() const
{
    QUmlOperationTemplateParameter *c = new QUmlOperationTemplateParameter;
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
        c->setParameteredElement(dynamic_cast<QUmlOperation *>(parameteredElement()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The operation for this template parameter.
 */
QUmlOperation *QUmlOperationTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    return _parameteredElement;
}

void QUmlOperationTemplateParameter::setParameteredElement(QUmlOperation *parameteredElement)
{
    // This is a read-write association end

    if (_parameteredElement != parameteredElement) {
        _parameteredElement = parameteredElement;
        if (parameteredElement && parameteredElement->asQObject() && this->asQObject())
            QObject::connect(parameteredElement->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setParameteredElement()));
    }
}

void QUmlOperationTemplateParameter::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::DocumentationRole] = QStringLiteral("The operation for this template parameter.");
    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("TemplateParameter-parameteredElement");
    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("parameteredElement")][QtModeling::OppositeEndRole] = QStringLiteral("Operation-templateParameter");

}

