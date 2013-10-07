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
#include "qumltemplateparameter.h"

#include "private/qumltemplateparameterobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

/*!
    \class QUmlTemplateParameter

    \inmodule QtUml

    \brief A template parameter exposes a parameterable element as a formal template parameter of a template.
 */
QUmlTemplateParameter::QUmlTemplateParameter(bool createQObject) :
    _default_(0),
    _ownedDefault(0),
    _ownedParameteredElement(0),
    _parameteredElement(0),
    _signature(0)
{
    if (createQObject)
        _qObject = new QUmlTemplateParameterObject(this);
    setPropertyData();
}

QUmlTemplateParameter::~QUmlTemplateParameter()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlTemplateParameter::clone() const
{
    QUmlTemplateParameter *c = new QUmlTemplateParameter;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (default_())
        c->setDefault(dynamic_cast<QUmlParameterableElement *>(default_()->clone()));
    if (ownedDefault())
        c->setOwnedDefault(dynamic_cast<QUmlParameterableElement *>(ownedDefault()->clone()));
    if (ownedParameteredElement())
        c->setOwnedParameteredElement(dynamic_cast<QUmlParameterableElement *>(ownedParameteredElement()->clone()));
    if (parameteredElement())
        c->setParameteredElement(dynamic_cast<QUmlParameterableElement *>(parameteredElement()->clone()));
    if (signature())
        c->setSignature(dynamic_cast<QUmlTemplateSignature *>(signature()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The element that is the default for this formal template parameter.
 */
QUmlParameterableElement *QUmlTemplateParameter::default_() const
{
    // This is a read-write association end

    return _default_;
}

void QUmlTemplateParameter::setDefault(QUmlParameterableElement *default_)
{
    // This is a read-write association end

    if (_default_ != default_) {
        _default_ = default_;
        if (default_ && default_->asQObject() && this->asQObject())
            QObject::connect(default_->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setDefault()));
    }
}

/*!
    The element that is owned by this template parameter for the purpose of providing a default.
 */
QUmlParameterableElement *QUmlTemplateParameter::ownedDefault() const
{
    // This is a read-write association end

    return _ownedDefault;
}

void QUmlTemplateParameter::setOwnedDefault(QUmlParameterableElement *ownedDefault)
{
    // This is a read-write association end

    if (_ownedDefault != ownedDefault) {
        // Adjust subsetted properties
        removeOwnedElement(_ownedDefault);

        _ownedDefault = ownedDefault;
        if (ownedDefault && ownedDefault->asQObject() && this->asQObject())
            QObject::connect(ownedDefault->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setOwnedDefault()));
        ownedDefault->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (ownedDefault) {
            addOwnedElement(ownedDefault);
        }
        setDefault(ownedDefault);
    }
}

/*!
    The element that is owned by this template parameter.
 */
QUmlParameterableElement *QUmlTemplateParameter::ownedParameteredElement() const
{
    // This is a read-write association end

    return _ownedParameteredElement;
}

void QUmlTemplateParameter::setOwnedParameteredElement(QUmlParameterableElement *ownedParameteredElement)
{
    // This is a read-write association end

    if (_ownedParameteredElement != ownedParameteredElement) {
        // Adjust subsetted properties
        removeOwnedElement(_ownedParameteredElement);

        _ownedParameteredElement = ownedParameteredElement;
        if (ownedParameteredElement && ownedParameteredElement->asQObject() && this->asQObject())
            QObject::connect(ownedParameteredElement->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setOwnedParameteredElement()));
        ownedParameteredElement->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        setParameteredElement(ownedParameteredElement);
        if (ownedParameteredElement) {
            addOwnedElement(ownedParameteredElement);
        }
    }
}

/*!
    The element exposed by this template parameter.
 */
QUmlParameterableElement *QUmlTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    return _parameteredElement;
}

void QUmlTemplateParameter::setParameteredElement(QUmlParameterableElement *parameteredElement)
{
    // This is a read-write association end

    if (_parameteredElement != parameteredElement) {
        _parameteredElement = parameteredElement;
        if (parameteredElement && parameteredElement->asQObject() && this->asQObject())
            QObject::connect(parameteredElement->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setParameteredElement()));
    }
}

/*!
    The template signature that owns this template parameter.
 */
QUmlTemplateSignature *QUmlTemplateParameter::signature() const
{
    // This is a read-write association end

    return _signature;
}

void QUmlTemplateParameter::setSignature(QUmlTemplateSignature *signature)
{
    // This is a read-write association end

    if (_signature != signature) {
        // Adjust subsetted properties

        _signature = signature;
        if (signature && signature->asQObject() && this->asQObject())
            QObject::connect(signature->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSignature()));

        // Adjust subsetted properties
        setOwner(signature);
    }
}

void QUmlTemplateParameter::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("default")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("default")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTemplateParameter");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("default")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("default")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("default")][QtModeling::DocumentationRole] = QStringLiteral("The element that is the default for this formal template parameter.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("default")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("default")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("default")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedDefault")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedDefault")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTemplateParameter");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedDefault")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedDefault")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedDefault")][QtModeling::DocumentationRole] = QStringLiteral("The element that is owned by this template parameter for the purpose of providing a default.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedDefault")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedDefault")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement TemplateParameter-default");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedDefault")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedParameteredElement")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedParameteredElement")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTemplateParameter");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedParameteredElement")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedParameteredElement")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedParameteredElement")][QtModeling::DocumentationRole] = QStringLiteral("The element that is owned by this template parameter.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedParameteredElement")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedParameteredElement")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("TemplateParameter-parameteredElement Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("ownedParameteredElement")][QtModeling::OppositeEndRole] = QStringLiteral("ParameterableElement-owningTemplateParameter");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTemplateParameter");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::DocumentationRole] = QStringLiteral("The element exposed by this template parameter.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::OppositeEndRole] = QStringLiteral("ParameterableElement-templateParameter");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("signature")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("signature")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlTemplateParameter");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("signature")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("signature")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("signature")][QtModeling::DocumentationRole] = QStringLiteral("The template signature that owns this template parameter.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("signature")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("signature")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner A_parameter_templateSignature-templateSignature");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlTemplateParameter")][QStringLiteral("signature")][QtModeling::OppositeEndRole] = QStringLiteral("TemplateSignature-ownedParameter");

}

void QUmlTemplateParameter::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("default_")] = QStringLiteral("QUmlTemplateParameter");
    _classForProperty[QStringLiteral("ownedDefault")] = QStringLiteral("QUmlTemplateParameter");
    _classForProperty[QStringLiteral("ownedParameteredElement")] = QStringLiteral("QUmlTemplateParameter");
    _classForProperty[QStringLiteral("parameteredElement")] = QStringLiteral("QUmlTemplateParameter");
    _classForProperty[QStringLiteral("signature")] = QStringLiteral("QUmlTemplateParameter");
}

