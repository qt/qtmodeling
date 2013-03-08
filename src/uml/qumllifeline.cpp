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

#include "qumllifeline.h"
#include "qumllifeline_p.h"

#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlValueSpecification>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlPartDecomposition>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlLifelinePrivate::QUmlLifelinePrivate() :
    represents(0),
    decomposedAs(0),
    interaction(0),
    selector(0)
{
}

QUmlLifelinePrivate::~QUmlLifelinePrivate()
{
}

/*!
    \class QUmlLifeline

    \inmodule QtUml

    \brief A lifeline represents an individual participant in the interaction. While parts and structural features may have multiplicity greater than 1, lifelines represent only one interacting entity.
 */

QUmlLifeline::QUmlLifeline(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(*new QUmlLifelinePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlLifeline::QUmlLifeline(QUmlLifelinePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlLifeline::~QUmlLifeline()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlLifeline
// ---------------------------------------------------------------

/*!
    References the ConnectableElement within the classifier that contains the enclosing interaction.
 */
QUmlConnectableElement *QUmlLifeline::represents() const
{
    // This is a read-write association end

    Q_D(const QUmlLifeline);
    return d->represents;
}

void QUmlLifeline::setRepresents(QUmlConnectableElement *represents)
{
    // This is a read-write association end

    Q_D(QUmlLifeline);
    if (d->represents != represents) {
        d->represents = represents;
    }
}

/*!
    References the Interaction that represents the decomposition.
 */
QUmlPartDecomposition *QUmlLifeline::decomposedAs() const
{
    // This is a read-write association end

    Q_D(const QUmlLifeline);
    return d->decomposedAs;
}

void QUmlLifeline::setDecomposedAs(QUmlPartDecomposition *decomposedAs)
{
    // This is a read-write association end

    Q_D(QUmlLifeline);
    if (d->decomposedAs != decomposedAs) {
        d->decomposedAs = decomposedAs;
    }
}

/*!
    References the InteractionFragments in which this Lifeline takes part.
 */
QSet<QUmlInteractionFragment *> QUmlLifeline::coveredBy() const
{
    // This is a read-write association end

    Q_D(const QUmlLifeline);
    return d->coveredBy;
}

void QUmlLifeline::addCoveredBy(QUmlInteractionFragment *coveredBy)
{
    // This is a read-write association end

    Q_D(QUmlLifeline);
    if (!d->coveredBy.contains(coveredBy)) {
        d->coveredBy.insert(coveredBy);

        // Adjust opposite property
        coveredBy->addCovered(this);
    }
}

void QUmlLifeline::removeCoveredBy(QUmlInteractionFragment *coveredBy)
{
    // This is a read-write association end

    Q_D(QUmlLifeline);
    if (d->coveredBy.contains(coveredBy)) {
        d->coveredBy.remove(coveredBy);

        // Adjust opposite property
        if (coveredBy)
            coveredBy->removeCovered(this);
    }
}

/*!
    References the Interaction enclosing this Lifeline.
 */
QUmlInteraction *QUmlLifeline::interaction() const
{
    // This is a read-write association end

    Q_D(const QUmlLifeline);
    return d->interaction;
}

void QUmlLifeline::setInteraction(QUmlInteraction *interaction)
{
    // This is a read-write association end

    Q_D(QUmlLifeline);
    if (d->interaction != interaction) {
        // Adjust opposite property
        if (d->interaction)
            d->interaction->removeLifeline(this);

        d->interaction = interaction;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(interaction));

        // Adjust opposite property
        if (interaction)
            interaction->addLifeline(this);
    }
}

/*!
    If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.
 */
QUmlValueSpecification *QUmlLifeline::selector() const
{
    // This is a read-write association end

    Q_D(const QUmlLifeline);
    return d->selector;
}

void QUmlLifeline::setSelector(QUmlValueSpecification *selector)
{
    // This is a read-write association end

    Q_D(QUmlLifeline);
    if (d->selector != selector) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->selector));

        d->selector = selector;

        // Adjust subsetted property(ies)
        if (selector) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(selector));
        }
    }
}

void QUmlLifeline::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("represents")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("represents")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("represents")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the ConnectableElement within the classifier that contains the enclosing interaction.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("represents")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("represents")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("represents")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("decomposedAs")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("decomposedAs")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("decomposedAs")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Interaction that represents the decomposition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("decomposedAs")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("decomposedAs")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("decomposedAs")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("coveredBy")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("coveredBy")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("coveredBy")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the InteractionFragments in which this Lifeline takes part.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("coveredBy")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("coveredBy")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("coveredBy")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QInteractionFragment::covered");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("interaction")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("interaction")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("interaction")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Interaction enclosing this Lifeline.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("interaction")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("interaction")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("interaction")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QInteraction::lifeline");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("selector")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("selector")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("selector")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("selector")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("selector")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLifeline")][QString::fromLatin1("selector")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumllifeline.cpp"

