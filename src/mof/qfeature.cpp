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

#include "qfeature.h"
#include "qfeature_p.h"

#include "qclassifier_p.h"

#include <QtMof/QClassifier>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTMOF

QFeaturePrivate::QFeaturePrivate() :
    isStatic(false)
{
}

QFeaturePrivate::~QFeaturePrivate()
{
}

void QFeaturePrivate::addFeaturingClassifier(QClassifier *featuringClassifier)
{
    // This is a read-only derived-union association end

    if (!this->featuringClassifiers.contains(featuringClassifier)) {
        this->featuringClassifiers.insert(featuringClassifier);

        // Adjust opposite property
        Q_Q(QFeature);
        (qwrappedobject_cast<QClassifierPrivate *>(featuringClassifier->d_func()))->addFeature(q);
    }
}

void QFeaturePrivate::removeFeaturingClassifier(QClassifier *featuringClassifier)
{
    // This is a read-only derived-union association end

    if (this->featuringClassifiers.contains(featuringClassifier)) {
        this->featuringClassifiers.remove(featuringClassifier);

        // Adjust opposite property
        Q_Q(QFeature);
        if (featuringClassifier)
            (qwrappedobject_cast<QClassifierPrivate *>(featuringClassifier->d_func()))->removeFeature(q);
    }
}

/*!
    \class QFeature

    \inmodule QtMof

    \brief A feature declares a behavioral or structural characteristic of instances of classifiers.
 */

QFeature::QFeature(QWrappedObject *parent, QWrappedObject *wrapper) :
    QRedefinableElement(*new QFeaturePrivate, parent, wrapper)
{
    setPropertyData();
}

QFeature::QFeature(QFeaturePrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QRedefinableElement(dd, parent, wrapper)
{
    setPropertyData();
}

QFeature::~QFeature()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QFeature::isStatic() const
{
    // This is a read-write attribute

    Q_D(const QFeature);
    return d->isStatic;
}

void QFeature::setStatic(bool isStatic)
{
    // This is a read-write attribute

    Q_D(QFeature);
    if (d->isStatic != isStatic) {
        d->isStatic = isStatic;
    }
}

void QFeature::unsetStatic()
{
    setStatic(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
QSet<QClassifier *> QFeature::featuringClassifiers() const
{
    // This is a read-only derived-union association end

    Q_D(const QFeature);
    return d->featuringClassifiers;
}

void QFeature::registerMetaTypes() const
{
    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");

    QRedefinableElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QFeature::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QFeature")][QString::fromLatin1("isStatic")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QFeature")][QString::fromLatin1("featuringClassifiers")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Classifiers that have this Feature as a feature.");

    QRedefinableElement::setPropertyData();
}

#include "moc_qfeature.cpp"

QT_END_NAMESPACE_QTMOF

