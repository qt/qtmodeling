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

#include "qgeneralization.h"
#include "qgeneralization_p.h"

#include <QtMof/QClassifier>

QT_BEGIN_NAMESPACE_QTMOF

QGeneralizationPrivate::QGeneralizationPrivate() :
    isSubstitutable(true),
    specific(0),
    general(0)
{
}

QGeneralizationPrivate::~QGeneralizationPrivate()
{
}

/*!
    \class QGeneralization

    \inmodule QtMof

    \brief A generalization is a taxonomic relationship between a more general classifier and a more specific classifier. Each instance of the specific classifier is also an indirect instance of the general classifier. Thus, the specific classifier inherits the features of the more general classifier.
 */

QGeneralization::QGeneralization(QWrappedObject *parent, QWrappedObject *wrapper) :
    QDirectedRelationship(*new QGeneralizationPrivate, parent, wrapper)
{
}

QGeneralization::QGeneralization(QGeneralizationPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QDirectedRelationship(dd, parent, wrapper)
{
}

QGeneralization::~QGeneralization()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QGeneralization
// ---------------------------------------------------------------

/*!
    Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier.
 */
bool QGeneralization::isSubstitutable() const
{
    // This is a read-write attribute

    Q_D(const QGeneralization);
    return d->isSubstitutable;
}

void QGeneralization::setSubstitutable(bool isSubstitutable)
{
    // This is a read-write attribute

    Q_D(QGeneralization);
    if (d->isSubstitutable != isSubstitutable) {
        d->isSubstitutable = isSubstitutable;
    }
}

void QGeneralization::unsetSubstitutable()
{
    setSubstitutable(true);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QGeneralization
// ---------------------------------------------------------------

/*!
    References the specializing classifier in the Generalization relationship.
 */
QClassifier *QGeneralization::specific() const
{
    // This is a read-write association end

    Q_D(const QGeneralization);
    return d->specific;
}

void QGeneralization::setSpecific(QClassifier *specific)
{
    // This is a read-write association end

    Q_D(QGeneralization);
    if (d->specific != specific) {
        // Adjust opposite property
        if (d->specific)
            d->specific->removeGeneralization(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QElement *>(d->specific));

        d->specific = specific;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(specific));
        if (specific) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QElement *>(specific));
        }

        // Adjust opposite property
        if (specific)
            specific->addGeneralization(this);
    }
}

/*!
    References the general classifier in the Generalization relationship.
 */
QClassifier *QGeneralization::general() const
{
    // This is a read-write association end

    Q_D(const QGeneralization);
    return d->general;
}

void QGeneralization::setGeneral(QClassifier *general)
{
    // This is a read-write association end

    Q_D(QGeneralization);
    if (d->general != general) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QElement *>(d->general));

        d->general = general;

        // Adjust subsetted property(ies)
        if (general) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QElement *>(general));
        }
    }
}

void QGeneralization::registerMetaTypes() const
{
    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");

    QDirectedRelationship::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qgeneralization.cpp"

QT_END_NAMESPACE_QTMOF

