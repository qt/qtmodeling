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

#include "qclassifiertemplateparameter.h"
#include "qclassifiertemplateparameter_p.h"

#include <QtUml/QClassifier>

QT_BEGIN_NAMESPACE_QTUML

QClassifierTemplateParameterPrivate::QClassifierTemplateParameterPrivate() :
    allowSubstitutable(true),
    parameteredElement(0),
    constrainingClassifiers(new QSet<QClassifier *>)
{
}

QClassifierTemplateParameterPrivate::~QClassifierTemplateParameterPrivate()
{
    delete constrainingClassifiers;
}

void QClassifierTemplateParameterPrivate::setAllowSubstitutable(bool allowSubstitutable)
{
    // This is a read-write attribute

    this->allowSubstitutable = allowSubstitutable;
}

void QClassifierTemplateParameterPrivate::setParameteredElement(QClassifier *parameteredElement)
{
    // This is a read-write association end

    this->parameteredElement = parameteredElement;
}

void QClassifierTemplateParameterPrivate::addConstrainingClassifier(QClassifier *constrainingClassifier)
{
    // This is a read-write association end

    this->constrainingClassifiers->insert(constrainingClassifier);
}

void QClassifierTemplateParameterPrivate::removeConstrainingClassifier(QClassifier *constrainingClassifier)
{
    // This is a read-write association end

    this->constrainingClassifiers->remove(constrainingClassifier);
}

/*!
    \class QClassifierTemplateParameter

    \inmodule QtUml

    \brief A classifier template parameter exposes a classifier as a formal template parameter.
 */

QClassifierTemplateParameter::QClassifierTemplateParameter(QObject *parent)
    : QTemplateParameter(false, parent)
{
    d_umlptr = new QClassifierTemplateParameterPrivate;
}

QClassifierTemplateParameter::QClassifierTemplateParameter(bool createPimpl, QObject *parent)
    : QTemplateParameter(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QClassifierTemplateParameterPrivate;
}

QClassifierTemplateParameter::~QClassifierTemplateParameter()
{
}

/*!
    Constrains the required relationship between an actual parameter and the parameteredElement for this formal parameter.
 */
bool QClassifierTemplateParameter::allowSubstitutable() const
{
    // This is a read-write attribute

    QTUML_D(const QClassifierTemplateParameter);
    return d->allowSubstitutable;
}

void QClassifierTemplateParameter::setAllowSubstitutable(bool allowSubstitutable)
{
    // This is a read-write attribute

    QTUML_D(QClassifierTemplateParameter);
    if (d->allowSubstitutable != allowSubstitutable) {
        d->setAllowSubstitutable(allowSubstitutable);
    }
}

/*!
    The parameterable classifier for this template parameter.
 */
QClassifier *QClassifierTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    QTUML_D(const QClassifierTemplateParameter);
    return d->parameteredElement;
}

void QClassifierTemplateParameter::setParameteredElement(QClassifier *parameteredElement)
{
    // This is a read-write association end

    QTUML_D(QClassifierTemplateParameter);
    if (d->parameteredElement != parameteredElement) {
        d->setParameteredElement(parameteredElement);

        // Adjust opposite property
        parameteredElement->setTemplateParameter(this);
    }
}

/*!
    The classifiers that constrain the argument that can be used for the parameter. If the allowSubstitutable attribute is true, then any classifier that is compatible with this constraining classifier can be substituted; otherwise, it must be either this classifier or one of its subclasses. If this property is empty, there are no constraints on the classifier that can be used as an argument.
 */
const QSet<QClassifier *> *QClassifierTemplateParameter::constrainingClassifiers() const
{
    // This is a read-write association end

    QTUML_D(const QClassifierTemplateParameter);
    return d->constrainingClassifiers;
}

void QClassifierTemplateParameter::addConstrainingClassifier(QClassifier *constrainingClassifier)
{
    // This is a read-write association end

    QTUML_D(QClassifierTemplateParameter);
    if (!d->constrainingClassifiers->contains(constrainingClassifier)) {
        d->addConstrainingClassifier(constrainingClassifier);
    }
}

void QClassifierTemplateParameter::removeConstrainingClassifier(QClassifier *constrainingClassifier)
{
    // This is a read-write association end

    QTUML_D(QClassifierTemplateParameter);
    if (d->constrainingClassifiers->contains(constrainingClassifier)) {
        d->removeConstrainingClassifier(constrainingClassifier);
    }
}

#include "moc_qclassifiertemplateparameter.cpp"

QT_END_NAMESPACE_QTUML

