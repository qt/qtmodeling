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

#include "qinclude.h"
#include "qinclude_p.h"

#include <QtUml/QUseCase>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QIncludePrivate::QIncludePrivate() :
    includingCase(0),
    addition(0)
{
}

QIncludePrivate::~QIncludePrivate()
{
}

/*!
    \class QInclude

    \inmodule QtUml

    \brief An include relationship defines that a use case contains the behavior defined in another use case.
 */

QInclude::QInclude(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QIncludePrivate, wrapper, parent),
    _wrappedDirectedRelationship(new QDirectedRelationship(this)),
    _wrappedNamedElement(new QNamedElement(this))
{
    setPropertyData();
}

QInclude::QInclude(QIncludePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedDirectedRelationship(new QDirectedRelationship(this)),
    _wrappedNamedElement(new QNamedElement(this))
{
    setPropertyData();
}

QInclude::~QInclude()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QInclude::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QInclude::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QInclude::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QInclude::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QInclude::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QElement *> QInclude::relatedElements() const
{
    return (qwrappedobject_cast<const QRelationship *>(this))->relatedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QDirectedRelationship
// ---------------------------------------------------------------

/*!
    Specifies the sources of the DirectedRelationship.
 */
QSet<QElement *> QInclude::sources() const
{
    return (qwrappedobject_cast<const QDirectedRelationship *>(this))->sources();
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
QSet<QElement *> QInclude::targets() const
{
    return (qwrappedobject_cast<const QDirectedRelationship *>(this))->targets();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QInclude::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QInclude::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QInclude::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QInclude::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QInclude::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QInclude::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QInclude::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QInclude::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QInclude::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QInclude::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QInclude::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInclude
// ---------------------------------------------------------------

/*!
    References the use case which will include the addition and owns the include relationship.
 */
QUseCase *QInclude::includingCase() const
{
    // This is a read-write association end

    Q_D(const QInclude);
    return d->includingCase;
}

void QInclude::setIncludingCase(QUseCase *includingCase)
{
    // This is a read-write association end

    Q_D(QInclude);
    if (d->includingCase != includingCase) {
        // Adjust opposite property
        if (d->includingCase)
            d->includingCase->removeInclude(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QElement *>(d->includingCase));

        d->includingCase = includingCase;

        // Adjust subsetted property(ies)
        if (includingCase) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QElement *>(includingCase));
        }
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(includingCase));

        // Adjust opposite property
        if (includingCase)
            includingCase->addInclude(this);
    }
}

/*!
    References the use case that is to be included.
 */
QUseCase *QInclude::addition() const
{
    // This is a read-write association end

    Q_D(const QInclude);
    return d->addition;
}

void QInclude::setAddition(QUseCase *addition)
{
    // This is a read-write association end

    Q_D(QInclude);
    if (d->addition != addition) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QElement *>(d->addition));

        d->addition = addition;

        // Adjust subsetted property(ies)
        if (addition) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QElement *>(addition));
        }
    }
}

void QInclude::registerMetaTypes() const
{
    qRegisterMetaType<QUseCase *>("QUseCase *");
    qRegisterMetaType<QSet<QUseCase *>>("QSet<QUseCase *>");
    qRegisterMetaType<QList<QUseCase *>>("QList<QUseCase *>");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QInclude::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use case which will include the addition and owns the include relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QDirectedRelationship::sources QNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUseCase::include");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("addition")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("addition")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("addition")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use case that is to be included.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("addition")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("addition")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInclude")][QString::fromLatin1("addition")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

#include "moc_qinclude.cpp"

QT_END_NAMESPACE_QTUML

