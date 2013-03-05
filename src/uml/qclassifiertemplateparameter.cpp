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

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QClassifierTemplateParameterPrivate::QClassifierTemplateParameterPrivate() :
    allowSubstitutable(true),
    parameteredElement(0)
{
}

QClassifierTemplateParameterPrivate::~QClassifierTemplateParameterPrivate()
{
}

/*!
    \class QClassifierTemplateParameter

    \inmodule QtUml

    \brief A classifier template parameter exposes a classifier as a formal template parameter.
 */

QClassifierTemplateParameter::QClassifierTemplateParameter(QWrappedObject *wrapper, QWrappedObject *parent) :
    QTemplateParameter(*new QClassifierTemplateParameterPrivate, wrapper, parent)
{
    setPropertyData();
}

QClassifierTemplateParameter::QClassifierTemplateParameter(QClassifierTemplateParameterPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QTemplateParameter(dd, wrapper, parent)
{
    setPropertyData();
}

QClassifierTemplateParameter::~QClassifierTemplateParameter()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QClassifierTemplateParameter
// ---------------------------------------------------------------

/*!
    Constrains the required relationship between an actual parameter and the parameteredElement for this formal parameter.
 */
bool QClassifierTemplateParameter::allowSubstitutable() const
{
    // This is a read-write attribute

    Q_D(const QClassifierTemplateParameter);
    return d->allowSubstitutable;
}

void QClassifierTemplateParameter::setAllowSubstitutable(bool allowSubstitutable)
{
    // This is a read-write attribute

    Q_D(QClassifierTemplateParameter);
    if (d->allowSubstitutable != allowSubstitutable) {
        d->allowSubstitutable = allowSubstitutable;
    }
    d->modifiedResettableProperties << QString::fromLatin1("allowSubstitutable");
}

void QClassifierTemplateParameter::unsetAllowSubstitutable()
{
    setAllowSubstitutable(true);
    Q_D(QClassifierTemplateParameter);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("allowSubstitutable"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QClassifierTemplateParameter
// ---------------------------------------------------------------

/*!
    The parameterable classifier for this template parameter.
 */
QClassifier *QClassifierTemplateParameter::parameteredElement() const
{
    // This is a read-write association end

    Q_D(const QClassifierTemplateParameter);
    return d->parameteredElement;
}

void QClassifierTemplateParameter::setParameteredElement(QClassifier *parameteredElement)
{
    // This is a read-write association end

    Q_D(QClassifierTemplateParameter);
    if (d->parameteredElement != parameteredElement) {
        // Adjust opposite property

        d->parameteredElement = parameteredElement;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QTemplateParameter *>(this))->setParameteredElement(qwrappedobject_cast<QParameterableElement *>(parameteredElement));

        // Adjust opposite property
        parameteredElement->setTemplateParameter(this);
    }
}

/*!
    The classifiers that constrain the argument that can be used for the parameter. If the allowSubstitutable attribute is true, then any classifier that is compatible with this constraining classifier can be substituted; otherwise, it must be either this classifier or one of its subclasses. If this property is empty, there are no constraints on the classifier that can be used as an argument.
 */
QSet<QClassifier *> QClassifierTemplateParameter::constrainingClassifiers() const
{
    // This is a read-write association end

    Q_D(const QClassifierTemplateParameter);
    return d->constrainingClassifiers;
}

void QClassifierTemplateParameter::addConstrainingClassifier(QClassifier *constrainingClassifier)
{
    // This is a read-write association end

    Q_D(QClassifierTemplateParameter);
    if (!d->constrainingClassifiers.contains(constrainingClassifier)) {
        d->constrainingClassifiers.insert(constrainingClassifier);
    }
}

void QClassifierTemplateParameter::removeConstrainingClassifier(QClassifier *constrainingClassifier)
{
    // This is a read-write association end

    Q_D(QClassifierTemplateParameter);
    if (d->constrainingClassifiers.contains(constrainingClassifier)) {
        d->constrainingClassifiers.remove(constrainingClassifier);
    }
}

void QClassifierTemplateParameter::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("allowSubstitutable")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("allowSubstitutable")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("allowSubstitutable")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Constrains the required relationship between an actual parameter and the parameteredElement for this formal parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("allowSubstitutable")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("allowSubstitutable")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("allowSubstitutable")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The parameterable classifier for this template parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QTemplateParameter::parameteredElement");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("parameteredElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClassifier::templateParameter");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("constrainingClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("constrainingClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("constrainingClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifiers that constrain the argument that can be used for the parameter. If the allowSubstitutable attribute is true, then any classifier that is compatible with this constraining classifier can be substituted; otherwise, it must be either this classifier or one of its subclasses. If this property is empty, there are no constraints on the classifier that can be used as an argument.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("constrainingClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("constrainingClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QClassifierTemplateParameter")][QString::fromLatin1("constrainingClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QTemplateParameter::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qclassifiertemplateparameter.cpp"

