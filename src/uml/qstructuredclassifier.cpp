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

#include "qstructuredclassifier.h"
#include "qstructuredclassifier_p.h"
#include "qnamespace_p.h"
#include "qclassifier_p.h"
#include "qnamespace_p.h"
#include "qclassifier_p.h"
#include "qnamespace_p.h"

#include <QtUml/QProperty>
#include <QtUml/QConnector>
#include <QtUml/QConnectableElement>

QT_BEGIN_NAMESPACE_QTUML

QStructuredClassifierPrivate::QStructuredClassifierPrivate() :
    roles(new QSet<QConnectableElement *>),
    ownedAttributes(new QList<QProperty *>),
    ownedConnectors(new QSet<QConnector *>)
{
}

QStructuredClassifierPrivate::~QStructuredClassifierPrivate()
{
    delete roles;
    delete ownedAttributes;
    delete ownedConnectors;
}

/*!
    \class QStructuredClassifier

    \inmodule QtUml

    \brief A structured classifier is an abstract metaclass that represents any classifier whose behavior can be fully or partly described by the collaboration of owned or referenced instances.
 */

QStructuredClassifier::QStructuredClassifier()
    : d_ptr(new QStructuredClassifierPrivate)
{
}

QStructuredClassifier::~QStructuredClassifier()
{
    delete d_ptr;
}

/*!
    References the roles that instances may play in this classifier.
 */
const QSet<QConnectableElement *> *QStructuredClassifier::roles() const
{
    return d_ptr->roles;
}

/*!
    References the properties owned by the classifier.
 */
const QList<QProperty *> *QStructuredClassifier::ownedAttributes() const
{
    return d_ptr->ownedAttributes;
}

void QStructuredClassifier::addOwnedAttribute(const QProperty *ownedAttribute)
{
    d_ptr->ownedAttributes->append(const_cast<QProperty *>(ownedAttribute));
    // Adjust subsetted property(ies)
    QClassifier::d_ptr->attributes->insert(const_cast<QProperty *>(ownedAttribute));
    QNamespace::d_ptr->ownedMembers->insert(const_cast<QProperty *>(ownedAttribute));
    QStructuredClassifier::d_ptr->roles->insert(const_cast<QProperty *>(ownedAttribute));
}

void QStructuredClassifier::removeOwnedAttribute(const QProperty *ownedAttribute)
{
    d_ptr->ownedAttributes->removeAll(const_cast<QProperty *>(ownedAttribute));
    // Adjust subsetted property(ies)
    QClassifier::d_ptr->attributes->remove(const_cast<QProperty *>(ownedAttribute));
    QNamespace::d_ptr->ownedMembers->remove(const_cast<QProperty *>(ownedAttribute));
    QStructuredClassifier::d_ptr->roles->remove(const_cast<QProperty *>(ownedAttribute));
}

/*!
    References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true.
 */
const QSet<QProperty *> *QStructuredClassifier::parts() const
{
    qWarning("QStructuredClassifier::parts: to be implemented (this is a derived associationend)");
}

/*!
    References the connectors owned by the classifier.
 */
const QSet<QConnector *> *QStructuredClassifier::ownedConnectors() const
{
    return d_ptr->ownedConnectors;
}

void QStructuredClassifier::addOwnedConnector(const QConnector *ownedConnector)
{
    d_ptr->ownedConnectors->insert(const_cast<QConnector *>(ownedConnector));
    // Adjust subsetted property(ies)
    QClassifier::d_ptr->features->insert(const_cast<QConnector *>(ownedConnector));
    QNamespace::d_ptr->ownedMembers->insert(const_cast<QConnector *>(ownedConnector));
}

void QStructuredClassifier::removeOwnedConnector(const QConnector *ownedConnector)
{
    d_ptr->ownedConnectors->remove(const_cast<QConnector *>(ownedConnector));
    // Adjust subsetted property(ies)
    QClassifier::d_ptr->features->remove(const_cast<QConnector *>(ownedConnector));
    QNamespace::d_ptr->ownedMembers->remove(const_cast<QConnector *>(ownedConnector));
}

QT_END_NAMESPACE_QTUML

