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

#include "qumlmessageoccurrencespecification.h"
#include "qumlmessageoccurrencespecification_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlMessageOccurrenceSpecificationPrivate::QUmlMessageOccurrenceSpecificationPrivate()
{
}

QUmlMessageOccurrenceSpecificationPrivate::~QUmlMessageOccurrenceSpecificationPrivate()
{
}

/*!
    \class QUmlMessageOccurrenceSpecification

    \inmodule QtUml

    \brief A message occurrence specification pecifies the occurrence of message events, such as sending and receiving of signals or invoking or receiving of operation calls. A message occurrence specification is a kind of message end. Messages are generated either by synchronous operation calls or asynchronous signal sends. They are received by the execution of corresponding accept event actions.
 */

QUmlMessageOccurrenceSpecification::QUmlMessageOccurrenceSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlMessageOccurrenceSpecificationPrivate, wrapper, parent),
    _wrappedUmlOccurrenceSpecification(new QUmlOccurrenceSpecification(this)),
    _wrappedUmlMessageEnd(new QUmlMessageEnd(this))
{
    setPropertyData();
}

QUmlMessageOccurrenceSpecification::QUmlMessageOccurrenceSpecification(QUmlMessageOccurrenceSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlOccurrenceSpecification(new QUmlOccurrenceSpecification(this)),
    _wrappedUmlMessageEnd(new QUmlMessageEnd(this))
{
    setPropertyData();
}

QUmlMessageOccurrenceSpecification::~QUmlMessageOccurrenceSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlMessageOccurrenceSpecification::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlMessageOccurrenceSpecification::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlMessageOccurrenceSpecification::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlMessageOccurrenceSpecification::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlMessageOccurrenceSpecification::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlMessageOccurrenceSpecification::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlMessageOccurrenceSpecification::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlMessageOccurrenceSpecification::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlMessageOccurrenceSpecification::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlMessageOccurrenceSpecification::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlMessageOccurrenceSpecification::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlMessageOccurrenceSpecification::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlMessageOccurrenceSpecification::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlMessageOccurrenceSpecification::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlMessageOccurrenceSpecification::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlMessageOccurrenceSpecification::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlMessageEnd
// ---------------------------------------------------------------

/*!
    References a Message.
 */
QUmlMessage *QUmlMessageOccurrenceSpecification::message() const
{
    return (qwrappedobject_cast<const QUmlMessageEnd *>(this))->message();
}

void QUmlMessageOccurrenceSpecification::setMessage(QUmlMessage *message)
{
    (qwrappedobject_cast<QUmlMessageEnd *>(this))->setMessage(message);
}

void QUmlMessageOccurrenceSpecification::setPropertyData()
{
    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlmessageoccurrencespecification.cpp"

