/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qmoffeature.h"
#include "qmoffeature_p.h"

#include "qmofclassifier_p.h"

#include <QtMof/QMofClassifier>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofFeaturePrivate::QMofFeaturePrivate() :
    isStatic(false)
{
}

QMofFeaturePrivate::~QMofFeaturePrivate()
{
}

void QMofFeaturePrivate::addFeaturingClassifier(QMofClassifier *featuringClassifier)
{
    // This is a read-only derived-union association end

    if (!this->featuringClassifiers.contains(featuringClassifier)) {
        this->featuringClassifiers.insert(featuringClassifier);

        // Adjust opposite property
        Q_Q(QMofFeature);
        (qwrappedobject_cast<QMofClassifierPrivate *>(featuringClassifier->d_func()))->addFeature(q);
    }
}

void QMofFeaturePrivate::removeFeaturingClassifier(QMofClassifier *featuringClassifier)
{
    // This is a read-only derived-union association end

    if (this->featuringClassifiers.contains(featuringClassifier)) {
        this->featuringClassifiers.remove(featuringClassifier);

        // Adjust opposite property
        Q_Q(QMofFeature);
        if (featuringClassifier)
            (qwrappedobject_cast<QMofClassifierPrivate *>(featuringClassifier->d_func()))->removeFeature(q);
    }
}

/*!
    \class QMofFeature

    \inmodule QtMof

    \brief A feature declares a behavioral or structural characteristic of instances of classifiers.
 */

QMofFeature::QMofFeature(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofRedefinableElement(*new QMofFeaturePrivate, wrapper, parent)
{
    setPropertyData();
}

QMofFeature::QMofFeature(QMofFeaturePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofRedefinableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofFeature::~QMofFeature()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QMofFeature::isStatic() const
{
    // This is a read-write attribute

    Q_D(const QMofFeature);
    return d->isStatic;
}

void QMofFeature::setStatic(bool isStatic)
{
    // This is a read-write attribute

    Q_D(QMofFeature);
    if (d->isStatic != isStatic) {
        d->isStatic = isStatic;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isStatic");
}

void QMofFeature::unsetStatic()
{
    setStatic(false);
    Q_D(QMofFeature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStatic"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
QSet<QMofClassifier *> QMofFeature::featuringClassifiers() const
{
    // This is a read-only derived-union association end

    Q_D(const QMofFeature);
    return d->featuringClassifiers;
}

void QMofFeature::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Classifiers that have this Feature as a feature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClassifier::feature");

    QMofRedefinableElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmoffeature.cpp"

