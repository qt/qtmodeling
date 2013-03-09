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

#include "qumlgeneralization.h"
#include "qumlgeneralization_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlGeneralizationSet>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlGeneralizationPrivate::QUmlGeneralizationPrivate() :
    isSubstitutable(true),
    specific(0),
    general(0)
{
}

QUmlGeneralizationPrivate::~QUmlGeneralizationPrivate()
{
}

/*!
    \class QUmlGeneralization

    \inmodule QtUml

    \brief A generalization is a taxonomic relationship between a more general classifier and a more specific classifier. Each instance of the specific classifier is also an indirect instance of the general classifier. Thus, the specific classifier inherits the features of the more general classifier.A generalization relates a specific classifier to a more general classifier, and is owned by the specific classifier.
 */

QUmlGeneralization::QUmlGeneralization(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDirectedRelationship(*new QUmlGeneralizationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlGeneralization::QUmlGeneralization(QUmlGeneralizationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDirectedRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlGeneralization::~QUmlGeneralization()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlGeneralization
// ---------------------------------------------------------------

/*!
    Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier.
 */
bool QUmlGeneralization::isSubstitutable() const
{
    // This is a read-write attribute

    Q_D(const QUmlGeneralization);
    return d->isSubstitutable;
}

void QUmlGeneralization::setSubstitutable(bool isSubstitutable)
{
    // This is a read-write attribute

    Q_D(QUmlGeneralization);
    if (d->isSubstitutable != isSubstitutable) {
        d->isSubstitutable = isSubstitutable;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isSubstitutable");
}

void QUmlGeneralization::unsetSubstitutable()
{
    setSubstitutable(true);
    Q_D(QUmlGeneralization);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isSubstitutable"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlGeneralization
// ---------------------------------------------------------------

/*!
    References the specializing classifier in the Generalization relationship.
 */
QUmlClassifier *QUmlGeneralization::specific() const
{
    // This is a read-write association end

    Q_D(const QUmlGeneralization);
    return d->specific;
}

void QUmlGeneralization::setSpecific(QUmlClassifier *specific)
{
    // This is a read-write association end

    Q_D(QUmlGeneralization);
    if (d->specific != specific) {
        // Adjust opposite property
        if (d->specific)
            d->specific->removeGeneralization(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QUmlElement *>(d->specific));

        d->specific = specific;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(specific));
        if (specific) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QUmlElement *>(specific));
        }

        // Adjust opposite property
        if (specific)
            specific->addGeneralization(this);
    }
}

/*!
    Designates a set in which instances of Generalization is considered members.
 */
QSet<QUmlGeneralizationSet *> QUmlGeneralization::generalizationSets() const
{
    // This is a read-write association end

    Q_D(const QUmlGeneralization);
    return d->generalizationSets;
}

void QUmlGeneralization::addGeneralizationSet(QUmlGeneralizationSet *generalizationSet)
{
    // This is a read-write association end

    Q_D(QUmlGeneralization);
    if (!d->generalizationSets.contains(generalizationSet)) {
        d->generalizationSets.insert(generalizationSet);

        // Adjust opposite property
        generalizationSet->addGeneralization(this);
    }
}

void QUmlGeneralization::removeGeneralizationSet(QUmlGeneralizationSet *generalizationSet)
{
    // This is a read-write association end

    Q_D(QUmlGeneralization);
    if (d->generalizationSets.contains(generalizationSet)) {
        d->generalizationSets.remove(generalizationSet);

        // Adjust opposite property
        if (generalizationSet)
            generalizationSet->removeGeneralization(this);
    }
}

/*!
    References the general classifier in the Generalization relationship.
 */
QUmlClassifier *QUmlGeneralization::general() const
{
    // This is a read-write association end

    Q_D(const QUmlGeneralization);
    return d->general;
}

void QUmlGeneralization::setGeneral(QUmlClassifier *general)
{
    // This is a read-write association end

    Q_D(QUmlGeneralization);
    if (d->general != general) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QUmlElement *>(d->general));

        d->general = general;

        // Adjust subsetted property(ies)
        if (general) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QUmlElement *>(general));
        }
    }
}

void QUmlGeneralization::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("isSubstitutable")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the specializing classifier in the Generalization relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner QUmlDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("specific")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlClassifier::generalization");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("generalizationSets")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("generalizationSets")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("generalizationSets")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates a set in which instances of Generalization is considered members.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("generalizationSets")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("generalizationSets")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("generalizationSets")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlGeneralizationSet::generalization");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the general classifier in the Generalization relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralization")][QString::fromLatin1("general")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlDirectedRelationship::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlgeneralization.cpp"

