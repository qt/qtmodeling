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

#include "qumlfeature.h"
#include "qumlfeature_p.h"

#include "qumlclassifier_p.h"

#include <QtUml/QUmlClassifier>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlFeaturePrivate::QUmlFeaturePrivate() :
    isStatic(false)
{
}

QUmlFeaturePrivate::~QUmlFeaturePrivate()
{
}

void QUmlFeaturePrivate::addFeaturingClassifier(QUmlClassifier *featuringClassifier)
{
    // This is a read-only derived-union association end

    if (!this->featuringClassifiers.contains(featuringClassifier)) {
        this->featuringClassifiers.insert(featuringClassifier);

        // Adjust opposite property
        Q_Q(QUmlFeature);
        (qwrappedobject_cast<QUmlClassifierPrivate *>(featuringClassifier->d_func()))->addFeature(q);
    }
}

void QUmlFeaturePrivate::removeFeaturingClassifier(QUmlClassifier *featuringClassifier)
{
    // This is a read-only derived-union association end

    if (this->featuringClassifiers.contains(featuringClassifier)) {
        this->featuringClassifiers.remove(featuringClassifier);

        // Adjust opposite property
        Q_Q(QUmlFeature);
        if (featuringClassifier)
            (qwrappedobject_cast<QUmlClassifierPrivate *>(featuringClassifier->d_func()))->removeFeature(q);
    }
}

/*!
    \class QUmlFeature

    \inmodule QtUml

    \brief A feature declares a behavioral or structural characteristic of instances of classifiers.
 */

QUmlFeature::QUmlFeature(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRedefinableElement(*new QUmlFeaturePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlFeature::QUmlFeature(QUmlFeaturePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRedefinableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlFeature::~QUmlFeature()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QUmlFeature::isStatic() const
{
    // This is a read-write attribute

    Q_D(const QUmlFeature);
    return d->isStatic;
}

void QUmlFeature::setStatic(bool isStatic)
{
    // This is a read-write attribute

    Q_D(QUmlFeature);
    if (d->isStatic != isStatic) {
        d->isStatic = isStatic;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isStatic");
}

void QUmlFeature::unsetStatic()
{
    setStatic(false);
    Q_D(QUmlFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStatic"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
QSet<QUmlClassifier *> QUmlFeature::featuringClassifiers() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlFeature);
    return d->featuringClassifiers;
}

void QUmlFeature::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Classifiers that have this Feature as a feature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClassifier::feature");

    QUmlRedefinableElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlfeature.cpp"

