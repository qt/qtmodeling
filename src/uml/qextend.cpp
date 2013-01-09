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

#include "qextend.h"
#include "qextend_p.h"

#include <QtUml/QConstraint>
#include <QtUml/QUseCase>
#include <QtUml/QExtensionPoint>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QExtendPrivate::QExtendPrivate() :
    extendedCase(0),
    extension(0),
    condition(0)
{
}

QExtendPrivate::~QExtendPrivate()
{
}

/*!
    \class QExtend

    \inmodule QtUml

    \brief A relationship from an extending use case to an extended use case that specifies how and when the behavior defined in the extending use case can be inserted into the behavior defined in the extended use case.
 */

QExtend::QExtend(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QExtendPrivate, wrapper, parent),
    _wrappedDirectedRelationship(new QDirectedRelationship(this)),
    _wrappedNamedElement(new QNamedElement(this))
{
    setPropertyData();
}

QExtend::QExtend(QExtendPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedDirectedRelationship(new QDirectedRelationship(this)),
    _wrappedNamedElement(new QNamedElement(this))
{
    setPropertyData();
}

QExtend::~QExtend()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QExtend::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QExtend::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QExtend::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QExtend::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QExtend::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QElement *> QExtend::relatedElements() const
{
    return (qwrappedobject_cast<const QRelationship *>(this))->relatedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QDirectedRelationship
// ---------------------------------------------------------------

/*!
    Specifies the sources of the DirectedRelationship.
 */
QSet<QElement *> QExtend::sources() const
{
    return (qwrappedobject_cast<const QDirectedRelationship *>(this))->sources();
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
QSet<QElement *> QExtend::targets() const
{
    return (qwrappedobject_cast<const QDirectedRelationship *>(this))->targets();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QExtend::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QExtend::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QExtend::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QExtend::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QExtend::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QExtend::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QExtend::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QExtend::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QExtend::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QExtend::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QExtend::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QExtend
// ---------------------------------------------------------------

/*!
    References the use case that is being extended.
 */
QUseCase *QExtend::extendedCase() const
{
    // This is a read-write association end

    Q_D(const QExtend);
    return d->extendedCase;
}

void QExtend::setExtendedCase(QUseCase *extendedCase)
{
    // This is a read-write association end

    Q_D(QExtend);
    if (d->extendedCase != extendedCase) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QElement *>(d->extendedCase));

        d->extendedCase = extendedCase;

        // Adjust subsetted property(ies)
        if (extendedCase) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QElement *>(extendedCase));
        }
    }
}

/*!
    References the use case that represents the extension and owns the extend relationship.
 */
QUseCase *QExtend::extension() const
{
    // This is a read-write association end

    Q_D(const QExtend);
    return d->extension;
}

void QExtend::setExtension(QUseCase *extension)
{
    // This is a read-write association end

    Q_D(QExtend);
    if (d->extension != extension) {
        // Adjust opposite property
        if (d->extension)
            d->extension->removeExtend(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QElement *>(d->extension));

        d->extension = extension;

        // Adjust subsetted property(ies)
        if (extension) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QElement *>(extension));
        }
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(extension));

        // Adjust opposite property
        if (extension)
            extension->addExtend(this);
    }
}

/*!
    An ordered list of extension points belonging to the extended use case, specifying where the respective behavioral fragments of the extending use case are to be inserted. The first fragment in the extending use case is associated with the first extension point in the list, the second fragment with the second point, and so on. (Note that, in most practical cases, the extending use case has just a single behavior fragment, so that the list of extension points is trivial.)
 */
QList<QExtensionPoint *> QExtend::extensionLocations() const
{
    // This is a read-write association end

    Q_D(const QExtend);
    return d->extensionLocations;
}

void QExtend::addExtensionLocation(QExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    Q_D(QExtend);
    if (!d->extensionLocations.contains(extensionLocation)) {
        d->extensionLocations.append(extensionLocation);
    }
}

void QExtend::removeExtensionLocation(QExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    Q_D(QExtend);
    if (d->extensionLocations.contains(extensionLocation)) {
        d->extensionLocations.removeAll(extensionLocation);
    }
}

/*!
    References the condition that must hold when the first extension point is reached for the extension to take place. If no constraint is associated with the extend relationship, the extension is unconditional.
 */
QConstraint *QExtend::condition() const
{
    // This is a read-write association end

    Q_D(const QExtend);
    return d->condition;
}

void QExtend::setCondition(QConstraint *condition)
{
    // This is a read-write association end

    Q_D(QExtend);
    if (d->condition != condition) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->condition));

        d->condition = condition;

        // Adjust subsetted property(ies)
        if (condition) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(condition));
        }
    }
}

void QExtend::registerMetaTypes() const
{
    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");

    qRegisterMetaType<QUseCase *>("QUseCase *");
    qRegisterMetaType<QSet<QUseCase *>>("QSet<QUseCase *>");
    qRegisterMetaType<QList<QUseCase *>>("QList<QUseCase *>");

    qRegisterMetaType<QExtensionPoint *>("QExtensionPoint *");
    qRegisterMetaType<QSet<QExtensionPoint *>>("QSet<QExtensionPoint *>");
    qRegisterMetaType<QList<QExtensionPoint *>>("QList<QExtensionPoint *>");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QExtend::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use case that is being extended.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extension")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extension")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extension")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use case that represents the extension and owns the extend relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extension")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extension")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QDirectedRelationship::sources QNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extension")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUseCase::extend");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An ordered list of extension points belonging to the extended use case, specifying where the respective behavioral fragments of the extending use case are to be inserted. The first fragment in the extending use case is associated with the first extension point in the list, the second fragment with the second point, and so on. (Note that, in most practical cases, the extending use case has just a single behavior fragment, so that the list of extension points is trivial.)");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("condition")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("condition")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("condition")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the condition that must hold when the first extension point is reached for the extension to take place. If no constraint is associated with the extend relationship, the extension is unconditional.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("condition")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("condition")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExtend")][QString::fromLatin1("condition")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

#include "moc_qextend.cpp"

QT_END_NAMESPACE_QTUML

