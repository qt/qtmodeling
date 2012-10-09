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

#include "qcomponent.h"
#include "qcomponent_p.h"
#include "qelement_p.h"
#include "qnamespace_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QComponentRealization>
#include <QtUml/QPackageableElement>
#include <QtUml/QInterface>

QT_BEGIN_NAMESPACE_QTUML

QComponentPrivate::QComponentPrivate() :
    isIndirectlyInstantiated(true),
    realizations(new QSet<QComponentRealization *>),
    packagedElements(new QSet<QPackageableElement *>)
{
}

QComponentPrivate::~QComponentPrivate()
{
    delete realizations;
    delete packagedElements;
}

/*!
    \class QComponent

    \inmodule QtUml

    \brief In the namespace of a component, all model elements that are involved in or related to its definition are either owned or imported explicitly. This may include, for example, use cases and dependencies (e.g. mappings), packages, components, and artifacts.A component represents a modular part of a system that encapsulates its contents and whose manifestation is replaceable within its environment.
 */

QComponent::QComponent(QObject *parent)
    : QClass(parent), d_ptr(new QComponentPrivate)
{
}

QComponent::~QComponent()
{
    delete d_ptr;
}

/*!
    isIndirectlyInstantiated : Boolean {default = true} The kind of instantiation that applies to a Component. If false, the component is instantiated as an addressable object. If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the component is instantiated indirectly, through the instantiation of its realizing classifiers or parts. Several standard stereotypes use this meta attribute (e.g., «specification», «focus», «subsystem»).
 */
bool QComponent::isIndirectlyInstantiated() const
{
    return d_ptr->isIndirectlyInstantiated;
}

void QComponent::setIndirectlyInstantiated(bool isIndirectlyInstantiated)
{
    d_ptr->isIndirectlyInstantiated = isIndirectlyInstantiated;
}

/*!
    The set of Realizations owned by the Component. Realizations reference the Classifiers of which the Component is an abstraction; i.e., that realize its behavior.
 */
const QSet<QComponentRealization *> *QComponent::realizations() const
{
    return d_ptr->realizations;
}

void QComponent::addRealization(const QComponentRealization *realization)
{
    d_ptr->realizations->insert(const_cast<QComponentRealization *>(realization));
}

void QComponent::removeRealization(const QComponentRealization *realization)
{
    d_ptr->realizations->remove(const_cast<QComponentRealization *>(realization));
}

/*!
    The interfaces that the component requires from other components in its environment in order to be able to offer its full set of provided functionality. These interfaces may be used by the Component or any of its realizingClassifiers, or they may be the Interfaces that are required by its public Ports.
 */
const QSet<QInterface *> *QComponent::required() const
{
    qWarning("QComponent::required: to be implemented (this is a derived associationend)");
}

/*!
    The interfaces that the component exposes to its environment. These interfaces may be Realized by the Component or any of its realizingClassifiers, or they may be the Interfaces that are provided by its public Ports.
 */
const QSet<QInterface *> *QComponent::provided() const
{
    qWarning("QComponent::provided: to be implemented (this is a derived associationend)");
}

/*!
    The set of PackageableElements that a Component owns. In the namespace of a component, all model elements that are involved in or related to its definition may be owned or imported explicitly. These may include e.g. Classes, Interfaces, Components, Packages, Use cases, Dependencies (e.g. mappings), and Artifacts.
 */
const QSet<QPackageableElement *> *QComponent::packagedElements() const
{
    return d_ptr->packagedElements;
}

void QComponent::addPackagedElement(const QPackageableElement *packagedElement)
{
    d_ptr->packagedElements->insert(const_cast<QPackageableElement *>(packagedElement));
}

void QComponent::removePackagedElement(const QPackageableElement *packagedElement)
{
    d_ptr->packagedElements->remove(const_cast<QPackageableElement *>(packagedElement));
}

/*!
    Utility returning the set of realized interfaces of a component.
 */
const QSet<QInterface *> *QComponent::realizedInterfaces(const QClassifier *classifier) const
{
    qWarning("QComponent::realizedInterfaces: operation to be implemented");
}

/*!
    Utility returning the set of used interfaces of a component.
 */
const QSet<QInterface *> *QComponent::usedInterfaces(const QClassifier *classifier) const
{
    qWarning("QComponent::usedInterfaces: operation to be implemented");
}

#include "moc_qcomponent.cpp"

QT_END_NAMESPACE_QTUML

