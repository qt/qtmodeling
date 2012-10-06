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

#include "qfeature.h"

#include <QtUml/QClassifier>

QT_BEGIN_NAMESPACE_QTUML

class QFeaturePrivate
{
public:
    explicit QFeaturePrivate();
    virtual ~QFeaturePrivate();

    bool isStatic;
    QSet<QClassifier *> *featuringClassifiers;
};

QFeaturePrivate::QFeaturePrivate() :
    isStatic(false),
    featuringClassifiers(new QSet<QClassifier *>)
{
}

QFeaturePrivate::~QFeaturePrivate()
{
    delete featuringClassifiers;
}

/*!
    \class QFeature

    \inmodule QtUml

    \brief A feature declares a behavioral or structural characteristic of instances of classifiers.
 */

QFeature::QFeature()
    : d_ptr(new QFeaturePrivate)
{
}

QFeature::~QFeature()
{
    delete d_ptr;
}

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QFeature::isStatic() const
{
    return d_ptr->isStatic;
}

void QFeature::setStatic(bool isStatic)
{
    d_ptr->isStatic = isStatic;
}

/*!
    The Classifiers that have this Feature as a feature.
 */
const QSet<QClassifier *> *QFeature::featuringClassifiers() const
{
    return d_ptr->featuringClassifiers;
}

void QFeature::addFeaturingClassifier(const QClassifier *featuringClassifier)
{
    d_ptr->featuringClassifiers->insert(const_cast<QClassifier *>(featuringClassifier));
    // Adjust subsetted property(ies)
}

void QFeature::removeFeaturingClassifier(const QClassifier *featuringClassifier)
{
    d_ptr->featuringClassifiers->remove(const_cast<QClassifier *>(featuringClassifier));
    // Adjust subsetted property(ies)
}

QT_END_NAMESPACE_QTUML

