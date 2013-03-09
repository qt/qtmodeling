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

#include "qumlgeneralizationset.h"
#include "qumlgeneralizationset_p.h"

#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlClassifier>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlGeneralizationSetPrivate::QUmlGeneralizationSetPrivate() :
    isCovering(false),
    isDisjoint(false),
    powertype(0)
{
}

QUmlGeneralizationSetPrivate::~QUmlGeneralizationSetPrivate()
{
}

/*!
    \class QUmlGeneralizationSet

    \inmodule QtUml

    \brief A generalization set is a packageable element whose instances define collections of subsets of generalization relationships.
 */

QUmlGeneralizationSet::QUmlGeneralizationSet(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlPackageableElement(*new QUmlGeneralizationSetPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlGeneralizationSet::QUmlGeneralizationSet(QUmlGeneralizationSetPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlPackageableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlGeneralizationSet::~QUmlGeneralizationSet()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlGeneralizationSet
// ---------------------------------------------------------------

/*!
    Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an instance of at least one of its specific Classifiers for the GeneralizationSet. When isCovering is false, there are one or more instances of the particular general Classifier that are not instances of at least one of its specific Classifiers defined for the GeneralizationSet.
 */
bool QUmlGeneralizationSet::isCovering() const
{
    // This is a read-write attribute

    Q_D(const QUmlGeneralizationSet);
    return d->isCovering;
}

void QUmlGeneralizationSet::setCovering(bool isCovering)
{
    // This is a read-write attribute

    Q_D(QUmlGeneralizationSet);
    if (d->isCovering != isCovering) {
        d->isCovering = isCovering;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isCovering");
}

void QUmlGeneralizationSet::unsetCovering()
{
    setCovering(false);
    Q_D(QUmlGeneralizationSet);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isCovering"));
}

/*!
    Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular GeneralizationSet have one or more members in common; that is, their intersection is not empty. For example, Person could have two Generalization relationships, each with the different specific Classifier: Manager or Staff. This would be disjoint because every instance of Person must either be a Manager or Staff. In contrast, Person could have two Generalization relationships involving two specific (and non-covering) Classifiers: Sales Person and Manager. This GeneralizationSet would not be disjoint because there are instances of Person which can be a Sales Person and a Manager.
 */
bool QUmlGeneralizationSet::isDisjoint() const
{
    // This is a read-write attribute

    Q_D(const QUmlGeneralizationSet);
    return d->isDisjoint;
}

void QUmlGeneralizationSet::setDisjoint(bool isDisjoint)
{
    // This is a read-write attribute

    Q_D(QUmlGeneralizationSet);
    if (d->isDisjoint != isDisjoint) {
        d->isDisjoint = isDisjoint;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDisjoint");
}

void QUmlGeneralizationSet::unsetDisjoint()
{
    setDisjoint(false);
    Q_D(QUmlGeneralizationSet);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDisjoint"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlGeneralizationSet
// ---------------------------------------------------------------

/*!
    Designates the Classifier that is defined as the power type for the associated GeneralizationSet.
 */
QUmlClassifier *QUmlGeneralizationSet::powertype() const
{
    // This is a read-write association end

    Q_D(const QUmlGeneralizationSet);
    return d->powertype;
}

void QUmlGeneralizationSet::setPowertype(QUmlClassifier *powertype)
{
    // This is a read-write association end

    Q_D(QUmlGeneralizationSet);
    if (d->powertype != powertype) {
        // Adjust opposite property
        if (d->powertype)
            d->powertype->removePowertypeExtent(this);

        d->powertype = powertype;

        // Adjust opposite property
        if (powertype)
            powertype->addPowertypeExtent(this);
    }
}

/*!
    Designates the instances of Generalization which are members of a given GeneralizationSet.
 */
QSet<QUmlGeneralization *> QUmlGeneralizationSet::generalizations() const
{
    // This is a read-write association end

    Q_D(const QUmlGeneralizationSet);
    return d->generalizations;
}

void QUmlGeneralizationSet::addGeneralization(QUmlGeneralization *generalization)
{
    // This is a read-write association end

    Q_D(QUmlGeneralizationSet);
    if (!d->generalizations.contains(generalization)) {
        d->generalizations.insert(generalization);

        // Adjust opposite property
        generalization->addGeneralizationSet(this);
    }
}

void QUmlGeneralizationSet::removeGeneralization(QUmlGeneralization *generalization)
{
    // This is a read-write association end

    Q_D(QUmlGeneralizationSet);
    if (d->generalizations.contains(generalization)) {
        d->generalizations.remove(generalization);

        // Adjust opposite property
        if (generalization)
            generalization->removeGeneralizationSet(this);
    }
}

void QUmlGeneralizationSet::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isCovering")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isCovering")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isCovering")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an instance of at least one of its specific Classifiers for the GeneralizationSet. When isCovering is false, there are one or more instances of the particular general Classifier that are not instances of at least one of its specific Classifiers defined for the GeneralizationSet.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isCovering")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isCovering")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isCovering")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isDisjoint")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isDisjoint")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isDisjoint")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular GeneralizationSet have one or more members in common; that is, their intersection is not empty. For example, Person could have two Generalization relationships, each with the different specific Classifier: Manager or Staff. This would be disjoint because every instance of Person must either be a Manager or Staff. In contrast, Person could have two Generalization relationships involving two specific (and non-covering) Classifiers: Sales Person and Manager. This GeneralizationSet would not be disjoint because there are instances of Person which can be a Sales Person and a Manager.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isDisjoint")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isDisjoint")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("isDisjoint")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("powertype")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("powertype")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("powertype")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the Classifier that is defined as the power type for the associated GeneralizationSet.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("powertype")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("powertype")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("powertype")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlClassifier::powertypeExtent");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("generalizations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("generalizations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("generalizations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the instances of Generalization which are members of a given GeneralizationSet.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("generalizations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("generalizations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralizationSet")][QString::fromLatin1("generalizations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlGeneralization::generalizationSet");

    QUmlPackageableElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlgeneralizationset.cpp"

