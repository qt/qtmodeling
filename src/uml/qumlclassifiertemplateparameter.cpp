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
#include "qumlclassifiertemplateparameter.h"

#include "private/qumlclassifiertemplateparameterobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

/*!
    \class QUmlClassifierTemplateParameter

    \inmodule QtUml

    \brief A classifier template parameter exposes a classifier as a formal template parameter.
 */
QUmlClassifierTemplateParameter::QUmlClassifierTemplateParameter(bool createQObject) :
    QUmlTemplateParameter(false),
    _allowSubstitutable(true),
    _parameteredElement(0)
{
    if (createQObject)
        _qObject = new QUmlClassifierTemplateParameterObject(this);
    setClassForProperty();
    setPropertyData();
}

QUmlClassifierTemplateParameter::~QUmlClassifierTemplateParameter()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlClassifierTemplateParameter::clone() const
{
    QUmlClassifierTemplateParameter *c = new QUmlClassifierTemplateParameter;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (default_())
        c->setDefault(dynamic_cast<QUmlParameterableElement *>(default_()->clone()));
    if (ownedDefault())
        c->setOwnedDefault(dynamic_cast<QUmlParameterableElement *>(ownedDefault()->clone()));
    if (ownedParameteredElement())
        c->setOwnedParameteredElement(dynamic_cast<QUmlParameterableElement *>(ownedParameteredElement()->clone()));
    if (signature())
        c->setSignature(dynamic_cast<QUmlTemplateSignature *>(signature()->clone()));
    c->setAllowSubstitutable(allowSubstitutable());
    foreach (QUmlClassifier *element, constrainingClassifiers())
        c->addConstrainingClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    if (parameteredElement())
        c->setParameteredElement(dynamic_cast<QUmlClassifier *>(parameteredElement()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Constrains the required relationship between an actual parameter and the parameteredElement for this formal parameter.
 */
bool QUmlClassifierTemplateParameter::allowSubstitutable() const
{
    // This is a read-write property

    return _allowSubstitutable;
}

void QUmlClassifierTemplateParameter::setAllowSubstitutable(bool allowSubstitutable)
{
    // This is a read-write property

    if (_allowSubstitutable != allowSubstitutable) {
        _allowSubstitutable = allowSubstitutable;
        _modifiedResettableProperties << QStringLiteral("allowSubstitutable");
    }
}

/*!
    The classifiers that constrain the argument that can be used for the parameter. If the allowSubstitutable attribute is true, then any classifier that is compatible with this constraining classifier can be substituted; otherwise, it must be either this classifier or one of its subclasses. If this property is empty, there are no constraints on the classifier that can be used as an argument.
 */
const QSet<QUmlClassifier *> QUmlClassifierTemplateParameter::constrainingClassifiers() const
{
    // This is a read-write association end

    return _constrainingClassifiers;
}

void QUmlClassifierTemplateParameter::addConstrainingClassifier(QUmlClassifier *constrainingClassifier)
{
    // This is a read-write association end

    if (!_constrainingClassifiers.contains(constrainingClassifier)) {
        _constrainingClassifiers.insert(constrainingClassifier);
        if (constrainingClassifier && constrainingClassifier->asQObject() && this->asQObject())
            QObject::connect(constrainingClassifier->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeConstrainingClassifier(QObject *)));
    }
}

void QUmlClassifierTemplateParameter::removeConstrainingClassifier(QUmlClassifier *constrainingClassifier)
{
    // This is a read-write association end

    if (_constrainingClassifiers.contains(constrainingClassifier)) {
        _constrainingClassifiers.remove(constrainingClassifier);
    }
}

/*!
    The parameterable classifier for this template parameter.
 */
QUmlClassifier *QUmlClassifierTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    return _parameteredElement;
}

void QUmlClassifierTemplateParameter::setParameteredElement(QUmlClassifier *parameteredElement)
{
    // This is a read-write association end

    if (_parameteredElement != parameteredElement) {
        _parameteredElement = parameteredElement;
        if (parameteredElement && parameteredElement->asQObject() && this->asQObject())
            QObject::connect(parameteredElement->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setParameteredElement()));
    }
}

void QUmlClassifierTemplateParameter::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("default_")] = QStringLiteral("QUmlTemplateParameter");
    _classForProperty[QStringLiteral("ownedDefault")] = QStringLiteral("QUmlTemplateParameter");
    _classForProperty[QStringLiteral("ownedParameteredElement")] = QStringLiteral("QUmlTemplateParameter");
    _classForProperty[QStringLiteral("signature")] = QStringLiteral("QUmlTemplateParameter");
    _classForProperty[QStringLiteral("allowSubstitutable")] = QStringLiteral("QUmlClassifierTemplateParameter");
    _classForProperty[QStringLiteral("constrainingClassifiers")] = QStringLiteral("QUmlClassifierTemplateParameter");
    _classForProperty[QStringLiteral("parameteredElement")] = QStringLiteral("QUmlClassifierTemplateParameter");
}

void QUmlClassifierTemplateParameter::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("allowSubstitutable")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("allowSubstitutable")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlClassifierTemplateParameter");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("allowSubstitutable")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("allowSubstitutable")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("allowSubstitutable")][QtModeling::DocumentationRole] = QStringLiteral("Constrains the required relationship between an actual parameter and the parameteredElement for this formal parameter.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("allowSubstitutable")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("allowSubstitutable")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("allowSubstitutable")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("constrainingClassifiers")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("constrainingClassifiers")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlClassifierTemplateParameter");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("constrainingClassifiers")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("constrainingClassifiers")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("constrainingClassifiers")][QtModeling::DocumentationRole] = QStringLiteral("The classifiers that constrain the argument that can be used for the parameter. If the allowSubstitutable attribute is true, then any classifier that is compatible with this constraining classifier can be substituted; otherwise, it must be either this classifier or one of its subclasses. If this property is empty, there are no constraints on the classifier that can be used as an argument.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("constrainingClassifiers")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("constrainingClassifiers")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("constrainingClassifiers")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlClassifierTemplateParameter");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::DocumentationRole] = QStringLiteral("The parameterable classifier for this template parameter.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("TemplateParameter-parameteredElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlClassifierTemplateParameter")][QStringLiteral("parameteredElement")][QtModeling::OppositeEndRole] = QStringLiteral("Classifier-templateParameter");

}

