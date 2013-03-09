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

#include "qumlinclude.h"
#include "qumlinclude_p.h"

#include <QtUml/QUmlUseCase>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlIncludePrivate::QUmlIncludePrivate() :
    includingCase(0),
    addition(0)
{
}

QUmlIncludePrivate::~QUmlIncludePrivate()
{
}

/*!
    \class QUmlInclude

    \inmodule QtUml

    \brief An include relationship defines that a use case contains the behavior defined in another use case.
 */

QUmlInclude::QUmlInclude(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlIncludePrivate, wrapper, parent),
    _wrappedUmlDirectedRelationship(new QUmlDirectedRelationship(this)),
    _wrappedUmlNamedElement(new QUmlNamedElement(this))
{
    setPropertyData();
}

QUmlInclude::QUmlInclude(QUmlIncludePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlDirectedRelationship(new QUmlDirectedRelationship(this)),
    _wrappedUmlNamedElement(new QUmlNamedElement(this))
{
    setPropertyData();
}

QUmlInclude::~QUmlInclude()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlInclude::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlInclude::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlInclude::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlInclude::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlInclude::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QUmlElement *> QUmlInclude::relatedElements() const
{
    return (qwrappedobject_cast<const QUmlRelationship *>(this))->relatedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlDirectedRelationship
// ---------------------------------------------------------------

/*!
    Specifies the sources of the DirectedRelationship.
 */
QSet<QUmlElement *> QUmlInclude::sources() const
{
    return (qwrappedobject_cast<const QUmlDirectedRelationship *>(this))->sources();
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
QSet<QUmlElement *> QUmlInclude::targets() const
{
    return (qwrappedobject_cast<const QUmlDirectedRelationship *>(this))->targets();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlInclude::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlInclude::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlInclude::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlInclude::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlInclude::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlInclude::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlInclude::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlInclude::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlInclude::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlInclude::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlInclude::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlInclude
// ---------------------------------------------------------------

/*!
    References the use case which will include the addition and owns the include relationship.
 */
QUmlUseCase *QUmlInclude::includingCase() const
{
    // This is a read-write association end

    Q_D(const QUmlInclude);
    return d->includingCase;
}

void QUmlInclude::setIncludingCase(QUmlUseCase *includingCase)
{
    // This is a read-write association end

    Q_D(QUmlInclude);
    if (d->includingCase != includingCase) {
        // Adjust opposite property
        if (d->includingCase)
            d->includingCase->removeInclude(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QUmlElement *>(d->includingCase));

        d->includingCase = includingCase;

        // Adjust subsetted property(ies)
        if (includingCase) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QUmlElement *>(includingCase));
        }
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(includingCase));

        // Adjust opposite property
        if (includingCase)
            includingCase->addInclude(this);
    }
}

/*!
    References the use case that is to be included.
 */
QUmlUseCase *QUmlInclude::addition() const
{
    // This is a read-write association end

    Q_D(const QUmlInclude);
    return d->addition;
}

void QUmlInclude::setAddition(QUmlUseCase *addition)
{
    // This is a read-write association end

    Q_D(QUmlInclude);
    if (d->addition != addition) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QUmlElement *>(d->addition));

        d->addition = addition;

        // Adjust subsetted property(ies)
        if (addition) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QUmlElement *>(addition));
        }
    }
}

void QUmlInclude::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use case which will include the addition and owns the include relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::sources QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("includingCase")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlUseCase::include");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("addition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("addition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("addition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the use case that is to be included.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("addition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("addition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInclude")][QString::fromLatin1("addition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlinclude.cpp"

