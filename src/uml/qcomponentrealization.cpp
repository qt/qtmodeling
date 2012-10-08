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

#include "qcomponentrealization.h"
#include "qcomponentrealization_p.h"
#include "qdependency_p.h"
#include "qelement_p.h"
#include "qdependency_p.h"

#include <QtUml/QComponent>
#include <QtUml/QClassifier>

QT_BEGIN_NAMESPACE_QTUML

QComponentRealizationPrivate::QComponentRealizationPrivate() :
    abstraction(0),
    realizingClassifiers(new QSet<QClassifier *>)
{
}

QComponentRealizationPrivate::~QComponentRealizationPrivate()
{
    delete realizingClassifiers;
}

/*!
    \class QComponentRealization

    \inmodule QtUml

    \brief The realization concept is specialized to (optionally) define the classifiers that realize the contract offered by a component in terms of its provided and required interfaces. The component forms an abstraction from these various classifiers.
 */

QComponentRealization::QComponentRealization(QObject *parent)
    : QRealization(parent), d_ptr(new QComponentRealizationPrivate)
{
}

QComponentRealization::~QComponentRealization()
{
    delete d_ptr;
}

/*!
    The Component that owns this ComponentRealization and which is implemented by its realizing classifiers.
 */
QComponent *QComponentRealization::abstraction() const
{
    return d_ptr->abstraction;
}

void QComponentRealization::setAbstraction(const QComponent *abstraction)
{
    d_ptr->abstraction = const_cast<QComponent *>(abstraction);
}

/*!
    The classifiers that are involved in the implementation of the Component that owns this Realization.
 */
const QSet<QClassifier *> *QComponentRealization::realizingClassifiers() const
{
    return d_ptr->realizingClassifiers;
}

void QComponentRealization::addRealizingClassifier(const QClassifier *realizingClassifier)
{
    d_ptr->realizingClassifiers->insert(const_cast<QClassifier *>(realizingClassifier));
    // Adjust subsetted property(ies)
    QDependency::d_ptr->clients->insert(const_cast<QClassifier *>(realizingClassifier));
}

void QComponentRealization::removeRealizingClassifier(const QClassifier *realizingClassifier)
{
    d_ptr->realizingClassifiers->remove(const_cast<QClassifier *>(realizingClassifier));
    // Adjust subsetted property(ies)
    QDependency::d_ptr->clients->remove(const_cast<QClassifier *>(realizingClassifier));
}

#include "moc_qcomponentrealization.cpp"

QT_END_NAMESPACE_QTUML

