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

#include "qdependency.h"
#include "qdependency_p.h"
#include "qdirectedrelationship_p.h"
#include "qdirectedrelationship_p.h"

#include <QtUml/QNamedElement>

QT_BEGIN_NAMESPACE_QTUML

QDependencyPrivate::QDependencyPrivate() :
    clients(new QSet<QNamedElement *>),
    suppliers(new QSet<QNamedElement *>)
{
}

QDependencyPrivate::~QDependencyPrivate()
{
    delete clients;
    delete suppliers;
}
  
void QDependencyPrivate::addClient(const QNamedElement *client) 
{   
    this->clients->insert(const_cast<QNamedElement *>(client)); 

    // Adjust subsetted property(ies)
    addSource(client); 
}
 
void QDependencyPrivate::removeClient(const QNamedElement *client) 
{    
    this->clients->remove(const_cast<QNamedElement *>(client)); 

    // Adjust subsetted property(ies)
    removeSource(client);
}
  
void QDependencyPrivate::addSupplier(const QNamedElement *supplier) 
{   
    this->suppliers->insert(const_cast<QNamedElement *>(supplier)); 

    // Adjust subsetted property(ies)
    addTarget(supplier); 
}
 
void QDependencyPrivate::removeSupplier(const QNamedElement *supplier) 
{    
    this->suppliers->remove(const_cast<QNamedElement *>(supplier)); 

    // Adjust subsetted property(ies)
    removeTarget(supplier);
}

/*!
    \class QDependency

    \inmodule QtUml

    \brief A dependency is a relationship that signifies that a single or a set of model elements requires other model elements for their specification or implementation. This means that the complete semantics of the depending elements is either semantically or structurally dependent on the definition of the supplier element(s).
 */

QDependency::QDependency(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QDependencyPrivate;
}

QDependency::QDependency(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QDependencyPrivate;
}

QDependency::~QDependency()
{
}

/*!
    The element(s) dependent on the supplier element(s). In some cases (such as a Trace Abstraction) the assignment of direction (that is, the designation of the client element) is at the discretion of the modeler, and is a stipulation.
 */
const QSet<QNamedElement *> *QDependency::clients() const
{
    Q_D(const QDependency);
    return d->clients;
}

void QDependency::addClient(const QNamedElement *client)
{
    Q_D(QDependency);
    d->addClient(const_cast<QNamedElement *>(client));
}

void QDependency::removeClient(const QNamedElement *client)
{
    Q_D(QDependency);
    d->removeClient(const_cast<QNamedElement *>(client));
}

/*!
    The element(s) independent of the client element(s), in the same respect and the same dependency relationship. In some directed dependency relationships (such as Refinement Abstractions), a common convention in the domain of class-based OO software is to put the more abstract element in this role. Despite this convention, users of UML may stipulate a sense of dependency suitable for their domain, which makes a more abstract element dependent on that which is more specific.
 */
const QSet<QNamedElement *> *QDependency::suppliers() const
{
    Q_D(const QDependency);
    return d->suppliers;
}

void QDependency::addSupplier(const QNamedElement *supplier)
{
    Q_D(QDependency);
    d->addSupplier(const_cast<QNamedElement *>(supplier));
}

void QDependency::removeSupplier(const QNamedElement *supplier)
{
    Q_D(QDependency);
    d->removeSupplier(const_cast<QNamedElement *>(supplier));
}

#include "moc_qdependency.cpp"

QT_END_NAMESPACE_QTUML

