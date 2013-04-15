/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlinformationflow.h"
#include "qumlinformationflow_p.h"

#include <QtUml/QUmlConnector>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlRelationship>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlInformationFlowPrivate::QUmlInformationFlowPrivate()
{
}

QUmlInformationFlowPrivate::~QUmlInformationFlowPrivate()
{
}

/*!
    \class QUmlInformationFlow

    \inmodule QtUml

    \brief An information flow specifies that one or more information items circulates from its sources to its targets. Information flows require some kind of information channel for transmitting information items from the source to the destination. An information channel is represented in various ways depending on the nature of its sources and targets. It may be represented by connectors, links, associations, or even dependencies. For example, if the source and destination are parts in some composite structure such as a collaboration, then the information channel is likely to be represented by a connector between them. Or, if the source and target are objects (which are a kind of instance specification), they may be represented by a link that joins the two, and so on.
 */

QUmlInformationFlow::QUmlInformationFlow(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlInformationFlowPrivate, wrapper, parent),
    _wrappedUmlDirectedRelationship(new QUmlDirectedRelationship(this)),
    _wrappedUmlPackageableElement(new QUmlPackageableElement(this))
{
    setPropertyData();
}

QUmlInformationFlow::QUmlInformationFlow(QUmlInformationFlowPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlDirectedRelationship(new QUmlDirectedRelationship(this)),
    _wrappedUmlPackageableElement(new QUmlPackageableElement(this))
{
    setPropertyData();
}

QUmlInformationFlow::~QUmlInformationFlow()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlInformationFlow::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlInformationFlow::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlInformationFlow::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlInformationFlow::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlInformationFlow::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QUmlElement *> QUmlInformationFlow::relatedElements() const
{
    return (qwrappedobject_cast<const QUmlRelationship *>(this))->relatedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlDirectedRelationship
// ---------------------------------------------------------------

/*!
    Specifies the sources of the DirectedRelationship.
 */
QSet<QUmlElement *> QUmlInformationFlow::sources() const
{
    return (qwrappedobject_cast<const QUmlDirectedRelationship *>(this))->sources();
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
QSet<QUmlElement *> QUmlInformationFlow::targets() const
{
    return (qwrappedobject_cast<const QUmlDirectedRelationship *>(this))->targets();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlInformationFlow::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlInformationFlow::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlInformationFlow::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->templateParameter();
}

void QUmlInformationFlow::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlInformationFlow::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlInformationFlow::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlInformationFlow::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlInformationFlow::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlInformationFlow::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlInformationFlow::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlInformationFlow::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlInformationFlow::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlInformationFlow::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlInformationFlow::visibility() const
{
    return (qwrappedobject_cast<const QUmlPackageableElement *>(this))->visibility();
}

void QUmlInformationFlow::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlPackageableElement *>(this))->setVisibility(visibility);
}

void QUmlInformationFlow::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QUmlInformationFlow);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlInformationFlow
// ---------------------------------------------------------------

/*!
    Defines to which target the conveyed InformationItems are directed.
 */
QSet<QUmlNamedElement *> QUmlInformationFlow::informationTargets() const
{
    // This is a read-write association end

    Q_D(const QUmlInformationFlow);
    return d->informationTargets;
}

void QUmlInformationFlow::addInformationTarget(QUmlNamedElement *informationTarget)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (!d->informationTargets.contains(informationTarget)) {
        d->informationTargets.insert(informationTarget);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QUmlElement *>(informationTarget));
    }
}

void QUmlInformationFlow::removeInformationTarget(QUmlNamedElement *informationTarget)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (d->informationTargets.contains(informationTarget)) {
        d->informationTargets.remove(informationTarget);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QUmlElement *>(informationTarget));
    }
}

/*!
    Determines which Connectors will realize the specified flow.
 */
QSet<QUmlConnector *> QUmlInformationFlow::realizingConnectors() const
{
    // This is a read-write association end

    Q_D(const QUmlInformationFlow);
    return d->realizingConnectors;
}

void QUmlInformationFlow::addRealizingConnector(QUmlConnector *realizingConnector)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (!d->realizingConnectors.contains(realizingConnector)) {
        d->realizingConnectors.insert(realizingConnector);
    }
}

void QUmlInformationFlow::removeRealizingConnector(QUmlConnector *realizingConnector)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (d->realizingConnectors.contains(realizingConnector)) {
        d->realizingConnectors.remove(realizingConnector);
    }
}

/*!
    Specifies the information items that may circulate on this information flow.
 */
QSet<QUmlClassifier *> QUmlInformationFlow::conveyed() const
{
    // This is a read-write association end

    Q_D(const QUmlInformationFlow);
    return d->conveyed;
}

void QUmlInformationFlow::addConveyed(QUmlClassifier *conveyed)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (!d->conveyed.contains(conveyed)) {
        d->conveyed.insert(conveyed);
    }
}

void QUmlInformationFlow::removeConveyed(QUmlClassifier *conveyed)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (d->conveyed.contains(conveyed)) {
        d->conveyed.remove(conveyed);
    }
}

/*!
    Defines from which source the conveyed InformationItems are initiated.
 */
QSet<QUmlNamedElement *> QUmlInformationFlow::informationSources() const
{
    // This is a read-write association end

    Q_D(const QUmlInformationFlow);
    return d->informationSources;
}

void QUmlInformationFlow::addInformationSource(QUmlNamedElement *informationSource)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (!d->informationSources.contains(informationSource)) {
        d->informationSources.insert(informationSource);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QUmlElement *>(informationSource));
    }
}

void QUmlInformationFlow::removeInformationSource(QUmlNamedElement *informationSource)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (d->informationSources.contains(informationSource)) {
        d->informationSources.remove(informationSource);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QUmlElement *>(informationSource));
    }
}

/*!
    Determines which Messages will realize the specified flow.
 */
QSet<QUmlMessage *> QUmlInformationFlow::realizingMessages() const
{
    // This is a read-write association end

    Q_D(const QUmlInformationFlow);
    return d->realizingMessages;
}

void QUmlInformationFlow::addRealizingMessage(QUmlMessage *realizingMessage)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (!d->realizingMessages.contains(realizingMessage)) {
        d->realizingMessages.insert(realizingMessage);
    }
}

void QUmlInformationFlow::removeRealizingMessage(QUmlMessage *realizingMessage)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (d->realizingMessages.contains(realizingMessage)) {
        d->realizingMessages.remove(realizingMessage);
    }
}

/*!
    Determines which ActivityEdges will realize the specified flow.
 */
QSet<QUmlActivityEdge *> QUmlInformationFlow::realizingActivityEdges() const
{
    // This is a read-write association end

    Q_D(const QUmlInformationFlow);
    return d->realizingActivityEdges;
}

void QUmlInformationFlow::addRealizingActivityEdge(QUmlActivityEdge *realizingActivityEdge)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (!d->realizingActivityEdges.contains(realizingActivityEdge)) {
        d->realizingActivityEdges.insert(realizingActivityEdge);
    }
}

void QUmlInformationFlow::removeRealizingActivityEdge(QUmlActivityEdge *realizingActivityEdge)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (d->realizingActivityEdges.contains(realizingActivityEdge)) {
        d->realizingActivityEdges.remove(realizingActivityEdge);
    }
}

/*!
    Determines which Relationship will realize the specified flow
 */
QSet<QUmlRelationship *> QUmlInformationFlow::realizations() const
{
    // This is a read-write association end

    Q_D(const QUmlInformationFlow);
    return d->realizations;
}

void QUmlInformationFlow::addRealization(QUmlRelationship *realization)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (!d->realizations.contains(realization)) {
        d->realizations.insert(realization);
    }
}

void QUmlInformationFlow::removeRealization(QUmlRelationship *realization)
{
    // This is a read-write association end

    Q_D(QUmlInformationFlow);
    if (d->realizations.contains(realization)) {
        d->realizations.remove(realization);
    }
}

void QUmlInformationFlow::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationTargets")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationTargets")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationTargets")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Defines to which target the conveyed InformationItems are directed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationTargets")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationTargets")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationTargets")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingConnectors")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingConnectors")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingConnectors")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Determines which Connectors will realize the specified flow.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingConnectors")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingConnectors")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingConnectors")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("conveyed")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("conveyed")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("conveyed")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the information items that may circulate on this information flow.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("conveyed")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("conveyed")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("conveyed")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationSources")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationSources")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationSources")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Defines from which source the conveyed InformationItems are initiated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationSources")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationSources")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("informationSources")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingMessages")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingMessages")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingMessages")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Determines which Messages will realize the specified flow.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingMessages")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingMessages")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingMessages")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingActivityEdges")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingActivityEdges")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingActivityEdges")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Determines which ActivityEdges will realize the specified flow.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingActivityEdges")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingActivityEdges")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizingActivityEdges")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Determines which Relationship will realize the specified flow");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInformationFlow")][QString::fromLatin1("realizations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlinformationflow.cpp"

