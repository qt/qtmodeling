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

#include "qmessageoccurrencespecification.h"
#include "qmessageoccurrencespecification_p.h"

QT_BEGIN_NAMESPACE_QTUML

QMessageOccurrenceSpecificationPrivate::QMessageOccurrenceSpecificationPrivate()
{
}

QMessageOccurrenceSpecificationPrivate::~QMessageOccurrenceSpecificationPrivate()
{
}

/*!
    \class QMessageOccurrenceSpecification

    \inmodule QtUml

    \brief A message occurrence specification pecifies the occurrence of message events, such as sending and receiving of signals or invoking or receiving of operation calls. A message occurrence specification is a kind of message end. Messages are generated either by synchronous operation calls or asynchronous signal sends. They are received by the execution of corresponding accept event actions.
 */

QMessageOccurrenceSpecification::QMessageOccurrenceSpecification(QObject *parent) :
    QObject(*new QMessageOccurrenceSpecificationPrivate, parent),
    _wrappedOccurrenceSpecification(new QOccurrenceSpecification(this)),
    _wrappedMessageEnd(new QMessageEnd(this))
{
}

QMessageOccurrenceSpecification::QMessageOccurrenceSpecification(QMessageOccurrenceSpecificationPrivate &dd, QObject *parent) :
    QObject(dd, parent),
    _wrappedOccurrenceSpecification(new QOccurrenceSpecification(this)),
    _wrappedMessageEnd(new QMessageEnd(this))
{
}

QMessageOccurrenceSpecification::~QMessageOccurrenceSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QMessageOccurrenceSpecification::ownedElements() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QMessageOccurrenceSpecification::owner() const
{
    return (qtuml_object_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QMessageOccurrenceSpecification::ownedComments() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedComments();
}

void QMessageOccurrenceSpecification::addOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QMessageOccurrenceSpecification::removeOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QMessageOccurrenceSpecification::name() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->name();
}

void QMessageOccurrenceSpecification::setName(QString name)
{
    (qtuml_object_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QMessageOccurrenceSpecification::visibility() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->visibility();
}

void QMessageOccurrenceSpecification::setVisibility(QtUml::VisibilityKind visibility)
{
    (qtuml_object_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QMessageOccurrenceSpecification::qualifiedName() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QMessageOccurrenceSpecification::nameExpression() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->nameExpression();
}

void QMessageOccurrenceSpecification::setNameExpression(QStringExpression *nameExpression)
{
    (qtuml_object_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QMessageOccurrenceSpecification::namespace_() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QMessageOccurrenceSpecification::clientDependencies() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->clientDependencies();
}

void QMessageOccurrenceSpecification::addClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QMessageOccurrenceSpecification::removeClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMessageEnd
// ---------------------------------------------------------------

/*!
    References a Message.
 */
QMessage *QMessageOccurrenceSpecification::message() const
{
    return (qtuml_object_cast<const QMessageEnd *>(this))->message();
}

void QMessageOccurrenceSpecification::setMessage(QMessage *message)
{
    (qtuml_object_cast<QMessageEnd *>(this))->setMessage(message);
}

#include "moc_qmessageoccurrencespecification.cpp"

QT_END_NAMESPACE_QTUML

