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

QT_BEGIN_NAMESPACE

/*!
    \class QUmlClassifierTemplateParameter

    \inmodule QtUml

    \brief A classifier template parameter exposes a classifier as a formal template parameter.
 */
QUmlClassifierTemplateParameter::QUmlClassifierTemplateParameter(bool createQModelingObject) :
    QUmlTemplateParameter(false),
    _allowSubstitutable(true),
    _parameteredElement(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlClassifierTemplateParameterObject(this));
}

QModelingElement *QUmlClassifierTemplateParameter::clone() const
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
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("allowSubstitutable");
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
        if (constrainingClassifier && constrainingClassifier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(constrainingClassifier->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeConstrainingClassifier(QObject *)));
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
        if (parameteredElement && parameteredElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(parameteredElement->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setParameteredElement()));
    }
}

QT_END_NAMESPACE

