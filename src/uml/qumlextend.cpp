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
#include "qumlextend.h"
#include "qumlextend_p.h"

#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlUseCase>
#include <QtUml/QUmlExtensionPoint>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlExtendPrivate::QUmlExtendPrivate() :
    extendedCase(0),
    extension(0),
    condition(0)
{
}

QUmlExtendPrivate::~QUmlExtendPrivate()
{
}

/*!
    \class QUmlExtend

    \inmodule QtUml

    \brief A relationship from an extending use case to an extended use case that specifies how and when the behavior defined in the extending use case can be inserted into the behavior defined in the extended use case.
 */

QUmlExtend::QUmlExtend(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlExtendPrivate, wrapper, parent),
    _wrappedUmlDirectedRelationship(new QUmlDirectedRelationship(this)),
    _wrappedUmlNamedElement(new QUmlNamedElement(this))
{
    setPropertyData();
}

QUmlExtend::QUmlExtend(QUmlExtendPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlDirectedRelationship(new QUmlDirectedRelationship(this)),
    _wrappedUmlNamedElement(new QUmlNamedElement(this))
{
    setPropertyData();
}

QUmlExtend::~QUmlExtend()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlExtend::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlExtend::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlExtend::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlExtend::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlExtend::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QUmlElement *> QUmlExtend::relatedElements() const
{
    return (qwrappedobject_cast<const QUmlRelationship *>(this))->relatedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlDirectedRelationship
// ---------------------------------------------------------------

/*!
    Specifies the sources of the DirectedRelationship.
 */
QSet<QUmlElement *> QUmlExtend::sources() const
{
    return (qwrappedobject_cast<const QUmlDirectedRelationship *>(this))->sources();
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
QSet<QUmlElement *> QUmlExtend::targets() const
{
    return (qwrappedobject_cast<const QUmlDirectedRelationship *>(this))->targets();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlExtend::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlExtend::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlExtend::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlExtend::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlExtend::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlExtend::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlExtend::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlExtend::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlExtend::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlExtend::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlExtend::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlExtend
// ---------------------------------------------------------------

/*!
    References the use case that is being extended.
 */
QUmlUseCase *QUmlExtend::extendedCase() const
{
    // This is a read-write association end

    Q_D(const QUmlExtend);
    return d->extendedCase;
}

void QUmlExtend::setExtendedCase(QUmlUseCase *extendedCase)
{
    // This is a read-write association end

    Q_D(QUmlExtend);
    if (d->extendedCase != extendedCase) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QUmlElement *>(d->extendedCase));

        d->extendedCase = extendedCase;

        // Adjust subsetted property(ies)
        if (extendedCase) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QUmlElement *>(extendedCase));
        }
    }
}

/*!
    References the use case that represents the extension and owns the extend relationship.
 */
QUmlUseCase *QUmlExtend::extension() const
{
    // This is a read-write association end

    Q_D(const QUmlExtend);
    return d->extension;
}

void QUmlExtend::setExtension(QUmlUseCase *extension)
{
    // This is a read-write association end

    Q_D(QUmlExtend);
    if (d->extension != extension) {
        // Adjust opposite property
        if (d->extension)
            d->extension->removeExtend(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QUmlElement *>(d->extension));

        d->extension = extension;

        // Adjust subsetted property(ies)
        if (extension) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QUmlElement *>(extension));
        }
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(extension));

        // Adjust opposite property
        if (extension)
            extension->addExtend(this);
    }
}

/*!
    An ordered list of extension points belonging to the extended use case, specifying where the respective behavioral fragments of the extending use case are to be inserted. The first fragment in the extending use case is associated with the first extension point in the list, the second fragment with the second point, and so on. (Note that, in most practical cases, the extending use case has just a single behavior fragment, so that the list of extension points is trivial.)
 */
QList<QUmlExtensionPoint *> QUmlExtend::extensionLocations() const
{
    // This is a read-write association end

    Q_D(const QUmlExtend);
    return d->extensionLocations;
}

void QUmlExtend::addExtensionLocation(QUmlExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    Q_D(QUmlExtend);
    if (!d->extensionLocations.contains(extensionLocation)) {
        d->extensionLocations.append(extensionLocation);
    }
}

void QUmlExtend::removeExtensionLocation(QUmlExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    Q_D(QUmlExtend);
    if (d->extensionLocations.contains(extensionLocation)) {
        d->extensionLocations.removeAll(extensionLocation);
    }
}

/*!
    References the condition that must hold when the first extension point is reached for the extension to take place. If no constraint is associated with the extend relationship, the extension is unconditional.
 */
QUmlConstraint *QUmlExtend::condition() const
{
    // This is a read-write association end

    Q_D(const QUmlExtend);
    return d->condition;
}

void QUmlExtend::setCondition(QUmlConstraint *condition)
{
    // This is a read-write association end

    Q_D(QUmlExtend);
    if (d->condition != condition) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->condition));

        d->condition = condition;

        // Adjust subsetted property(ies)
        if (condition) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(condition));
        }
    }
}

void QUmlExtend::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use case that is being extended.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extendedCase")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extension")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extension")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extension")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use case that represents the extension and owns the extend relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extension")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extension")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::sources QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extension")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlUseCase::extend");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An ordered list of extension points belonging to the extended use case, specifying where the respective behavioral fragments of the extending use case are to be inserted. The first fragment in the extending use case is associated with the first extension point in the list, the second fragment with the second point, and so on. (Note that, in most practical cases, the extending use case has just a single behavior fragment, so that the list of extension points is trivial.)");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("extensionLocations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("condition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("condition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("condition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the condition that must hold when the first extension point is reached for the extension to take place. If no constraint is associated with the extend relationship, the extension is unconditional.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("condition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("condition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExtend")][QString::fromLatin1("condition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlextend.cpp"

