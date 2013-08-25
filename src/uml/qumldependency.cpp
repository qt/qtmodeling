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
#include "qumldependency.h"
#include "qumldependency_p.h"

#include <QtUml/QUmlNamedElement>

QT_BEGIN_NAMESPACE

QUmlDependencyPrivate::QUmlDependencyPrivate()
{
}

/*!
    \class QUmlDependency

    \inmodule QtUml

    \brief A dependency is a relationship that signifies that a single or a set of model elements requires other model elements for their specification or implementation. This means that the complete semantics of the depending elements is either semantically or structurally dependent on the definition of the supplier element(s).
 */

QUmlDependency::QUmlDependency(bool create_d_ptr) :
    QUmlPackageableElement(false),
    QUmlDirectedRelationship(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlDependencyPrivate);
}

// Owned attributes

/*!
    The element(s) dependent on the supplier element(s). In some cases (such as a Trace Abstraction) the assignment of direction (that is, the designation of the client element) is at the discretion of the modeler, and is a stipulation.
 */
QSet<QUmlNamedElement *> QUmlDependency::client() const
{
    return QSet<QUmlNamedElement *>();
}

void QUmlDependency::addClient(QSet<QUmlNamedElement *> client)
{
    Q_UNUSED(client);
}

void QUmlDependency::removeClient(QSet<QUmlNamedElement *> client)
{
    Q_UNUSED(client);
}

/*!
    The element(s) independent of the client element(s), in the same respect and the same dependency relationship. In some directed dependency relationships (such as Refinement Abstractions), a common convention in the domain of class-based OO software is to put the more abstract element in this role. Despite this convention, users of UML may stipulate a sense of dependency suitable for their domain, which makes a more abstract element dependent on that which is more specific.
 */
QSet<QUmlNamedElement *> QUmlDependency::supplier() const
{
    return QSet<QUmlNamedElement *>();
}

void QUmlDependency::addSupplier(QSet<QUmlNamedElement *> supplier)
{
    Q_UNUSED(supplier);
}

void QUmlDependency::removeSupplier(QSet<QUmlNamedElement *> supplier)
{
    Q_UNUSED(supplier);
}

QT_END_NAMESPACE

