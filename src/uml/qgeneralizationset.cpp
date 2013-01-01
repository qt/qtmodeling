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

#include "qgeneralizationset.h"
#include "qgeneralizationset_p.h"

#include <QtUml/QGeneralization>
#include <QtUml/QClassifier>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QGeneralizationSetPrivate::QGeneralizationSetPrivate() :
    isCovering(false),
    isDisjoint(false),
    powertype(0)
{
}

QGeneralizationSetPrivate::~QGeneralizationSetPrivate()
{
}

/*!
    \class QGeneralizationSet

    \inmodule QtUml

    \brief A generalization set is a packageable element whose instances define collections of subsets of generalization relationships.
 */

QGeneralizationSet::QGeneralizationSet(QWrappedObject *parent, QWrappedObject *wrapper) :
    QPackageableElement(*new QGeneralizationSetPrivate, parent, wrapper)
{
    setPropertyData();
}

QGeneralizationSet::QGeneralizationSet(QGeneralizationSetPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QPackageableElement(dd, parent, wrapper)
{
    setPropertyData();
}

QGeneralizationSet::~QGeneralizationSet()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QGeneralizationSet
// ---------------------------------------------------------------

/*!
    Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an instance of at least one of its specific Classifiers for the GeneralizationSet. When isCovering is false, there are one or more instances of the particular general Classifier that are not instances of at least one of its specific Classifiers defined for the GeneralizationSet.
 */
bool QGeneralizationSet::isCovering() const
{
    // This is a read-write attribute

    Q_D(const QGeneralizationSet);
    return d->isCovering;
}

void QGeneralizationSet::setCovering(bool isCovering)
{
    // This is a read-write attribute

    Q_D(QGeneralizationSet);
    if (d->isCovering != isCovering) {
        d->isCovering = isCovering;
    }
}

void QGeneralizationSet::unsetCovering()
{
    setCovering(false);
}

/*!
    Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular GeneralizationSet have one or more members in common; that is, their intersection is not empty. For example, Person could have two Generalization relationships, each with the different specific Classifier: Manager or Staff. This would be disjoint because every instance of Person must either be a Manager or Staff. In contrast, Person could have two Generalization relationships involving two specific (and non-covering) Classifiers: Sales Person and Manager. This GeneralizationSet would not be disjoint because there are instances of Person which can be a Sales Person and a Manager.
 */
bool QGeneralizationSet::isDisjoint() const
{
    // This is a read-write attribute

    Q_D(const QGeneralizationSet);
    return d->isDisjoint;
}

void QGeneralizationSet::setDisjoint(bool isDisjoint)
{
    // This is a read-write attribute

    Q_D(QGeneralizationSet);
    if (d->isDisjoint != isDisjoint) {
        d->isDisjoint = isDisjoint;
    }
}

void QGeneralizationSet::unsetDisjoint()
{
    setDisjoint(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QGeneralizationSet
// ---------------------------------------------------------------

/*!
    Designates the Classifier that is defined as the power type for the associated GeneralizationSet.
 */
QClassifier *QGeneralizationSet::powertype() const
{
    // This is a read-write association end

    Q_D(const QGeneralizationSet);
    return d->powertype;
}

void QGeneralizationSet::setPowertype(QClassifier *powertype)
{
    // This is a read-write association end

    Q_D(QGeneralizationSet);
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
QSet<QGeneralization *> QGeneralizationSet::generalizations() const
{
    // This is a read-write association end

    Q_D(const QGeneralizationSet);
    return d->generalizations;
}

void QGeneralizationSet::addGeneralization(QGeneralization *generalization)
{
    // This is a read-write association end

    Q_D(QGeneralizationSet);
    if (!d->generalizations.contains(generalization)) {
        d->generalizations.insert(generalization);

        // Adjust opposite property
        generalization->addGeneralizationSet(this);
    }
}

void QGeneralizationSet::removeGeneralization(QGeneralization *generalization)
{
    // This is a read-write association end

    Q_D(QGeneralizationSet);
    if (d->generalizations.contains(generalization)) {
        d->generalizations.remove(generalization);

        // Adjust opposite property
        if (generalization)
            generalization->removeGeneralizationSet(this);
    }
}

void QGeneralizationSet::registerMetaTypes() const
{
    qRegisterMetaType<QGeneralization *>("QGeneralization *");
    qRegisterMetaType<QSet<QGeneralization *>>("QSet<QGeneralization *>");
    qRegisterMetaType<QList<QGeneralization *>>("QList<QGeneralization *>");

    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");

    QPackageableElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QGeneralizationSet::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QGeneralizationSet")][QString::fromLatin1("isCovering")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QGeneralizationSet")][QString::fromLatin1("isCovering")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an instance of at least one of its specific Classifiers for the GeneralizationSet. When isCovering is false, there are one or more instances of the particular general Classifier that are not instances of at least one of its specific Classifiers defined for the GeneralizationSet.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QGeneralizationSet")][QString::fromLatin1("isDisjoint")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QGeneralizationSet")][QString::fromLatin1("isDisjoint")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular GeneralizationSet have one or more members in common; that is, their intersection is not empty. For example, Person could have two Generalization relationships, each with the different specific Classifier: Manager or Staff. This would be disjoint because every instance of Person must either be a Manager or Staff. In contrast, Person could have two Generalization relationships involving two specific (and non-covering) Classifiers: Sales Person and Manager. This GeneralizationSet would not be disjoint because there are instances of Person which can be a Sales Person and a Manager.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QGeneralizationSet")][QString::fromLatin1("powertype")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QGeneralizationSet")][QString::fromLatin1("powertype")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the Classifier that is defined as the power type for the associated GeneralizationSet.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QGeneralizationSet")][QString::fromLatin1("generalizations")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QGeneralizationSet")][QString::fromLatin1("generalizations")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Designates the instances of Generalization which are members of a given GeneralizationSet.");

    QPackageableElement::setPropertyData();
}

#include "moc_qgeneralizationset.cpp"

QT_END_NAMESPACE_QTUML

