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

#include "qumlinstancespecification.h"
#include "qumlinstancespecification_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlSlot>
#include <QtUml/QUmlValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlInstanceSpecificationPrivate::QUmlInstanceSpecificationPrivate() :
    specification(0)
{
}

QUmlInstanceSpecificationPrivate::~QUmlInstanceSpecificationPrivate()
{
}

/*!
    \class QUmlInstanceSpecification

    \inmodule QtUml

    \brief An instance specification has the capability of being a deployment target in a deployment relationship, in the case that it is an instance of a node. It is also has the capability of being a deployed artifact, if it is an instance of an artifact.An instance specification is a model element that represents an instance in a modeled system.
 */

QUmlInstanceSpecification::QUmlInstanceSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlInstanceSpecificationPrivate, wrapper, parent),
    _wrappedUmlDeployedArtifact(new QUmlDeployedArtifact(this)),
    _wrappedUmlPackageableElement(new QUmlPackageableElement(this)),
    _wrappedUmlDeploymentTarget(new QUmlDeploymentTarget(this))
{
    setPropertyData();
}

QUmlInstanceSpecification::QUmlInstanceSpecification(QUmlInstanceSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlDeployedArtifact(new QUmlDeployedArtifact(this)),
    _wrappedUmlPackageableElement(new QUmlPackageableElement(this)),
    _wrappedUmlDeploymentTarget(new QUmlDeploymentTarget(this))
{
    setPropertyData();
}

QUmlInstanceSpecification::~QUmlInstanceSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlInstanceSpecification::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlInstanceSpecification::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlInstanceSpecification::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlInstanceSpecification::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlInstanceSpecification::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlInstanceSpecification::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlInstanceSpecification::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlInstanceSpecification::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlInstanceSpecification::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlInstanceSpecification::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlInstanceSpecification::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlInstanceSpecification::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlInstanceSpecification::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlInstanceSpecification::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlInstanceSpecification::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlInstanceSpecification::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlInstanceSpecification::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->templateParameter();
}

void QUmlInstanceSpecification::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlInstanceSpecification::visibility() const
{
    return (qwrappedobject_cast<const QUmlPackageableElement *>(this))->visibility();
}

void QUmlInstanceSpecification::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlPackageableElement *>(this))->setVisibility(visibility);
}

void QUmlInstanceSpecification::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QUmlInstanceSpecification);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlDeploymentTarget
// ---------------------------------------------------------------

/*!
    The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget.
 */
QSet<QUmlPackageableElement *> QUmlInstanceSpecification::deployedElements() const
{
    return (qwrappedobject_cast<const QUmlDeploymentTarget *>(this))->deployedElements();
}

/*!
    The set of Deployments for a DeploymentTarget.
 */
QSet<QUmlDeployment *> QUmlInstanceSpecification::deployments() const
{
    return (qwrappedobject_cast<const QUmlDeploymentTarget *>(this))->deployments();
}

void QUmlInstanceSpecification::addDeployment(QUmlDeployment *deployment)
{
    (qwrappedobject_cast<QUmlDeploymentTarget *>(this))->addDeployment(deployment);
}

void QUmlInstanceSpecification::removeDeployment(QUmlDeployment *deployment)
{
    (qwrappedobject_cast<QUmlDeploymentTarget *>(this))->removeDeployment(deployment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlInstanceSpecification
// ---------------------------------------------------------------

/*!
    The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them.
 */
QSet<QUmlClassifier *> QUmlInstanceSpecification::classifiers() const
{
    // This is a read-write association end

    Q_D(const QUmlInstanceSpecification);
    return d->classifiers;
}

void QUmlInstanceSpecification::addClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QUmlInstanceSpecification);
    if (!d->classifiers.contains(classifier)) {
        d->classifiers.insert(classifier);
    }
}

void QUmlInstanceSpecification::removeClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QUmlInstanceSpecification);
    if (d->classifiers.contains(classifier)) {
        d->classifiers.remove(classifier);
    }
}

/*!
    A specification of how to compute, derive, or construct the instance.
 */
QUmlValueSpecification *QUmlInstanceSpecification::specification() const
{
    // This is a read-write association end

    Q_D(const QUmlInstanceSpecification);
    return d->specification;
}

void QUmlInstanceSpecification::setSpecification(QUmlValueSpecification *specification)
{
    // This is a read-write association end

    Q_D(QUmlInstanceSpecification);
    if (d->specification != specification) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->specification));

        d->specification = specification;

        // Adjust subsetted property(ies)
        if (specification) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(specification));
        }
    }
}

/*!
    A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.
 */
QSet<QUmlSlot *> QUmlInstanceSpecification::slots_() const
{
    // This is a read-write association end

    Q_D(const QUmlInstanceSpecification);
    return d->slots_;
}

void QUmlInstanceSpecification::addSlot_(QUmlSlot *slot_)
{
    // This is a read-write association end

    Q_D(QUmlInstanceSpecification);
    if (!d->slots_.contains(slot_)) {
        d->slots_.insert(slot_);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(slot_));

        // Adjust opposite property
        slot_->setOwningInstance(this);
    }
}

void QUmlInstanceSpecification::removeSlot_(QUmlSlot *slot_)
{
    // This is a read-write association end

    Q_D(QUmlInstanceSpecification);
    if (d->slots_.contains(slot_)) {
        d->slots_.remove(slot_);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(slot_));

        // Adjust opposite property
        slot_->setOwningInstance(0);
    }
}

void QUmlInstanceSpecification::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("classifiers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A specification of how to compute, derive, or construct the instance.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("specification")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInstanceSpecification")][QString::fromLatin1("slots_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QSlot::owningInstance");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlinstancespecification.cpp"

