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
//#include "qcomponent_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QComponent

    \inmodule QtUml

    \brief In the namespace of a component, all model elements that are involved in or related to its definition are either owned or imported explicitly. This may include, for example, use cases and dependencies (e.g. mappings), packages, components, and artifacts.A component represents a modular part of a system that encapsulates its contents and whose manifestation is replaceable within its environment.
 */

QComponent::QComponent(QObject *parent)
    : QClass(parent)
{
}

QComponent::~QComponent()
{
}

/*!
    isIndirectlyInstantiated : Boolean {default = true} The kind of instantiation that applies to a Component. If false, the component is instantiated as an addressable object. If true, the Component is defined at design-time, but at run-time (or execution-time) an object specified by the Component does not exist, that is, the component is instantiated indirectly, through the instantiation of its realizing classifiers or parts. Several standard stereotypes use this meta attribute (e.g., «specification», «focus», «subsystem»).
 */
bool QComponent::isIndirectlyInstantiated() const
{
}

void QComponent::setIndirectlyInstantiated(bool isIndirectlyInstantiated)
{
}

/*!
    The set of PackageableElements that a Component owns. In the namespace of a component, all model elements that are involved in or related to its definition may be owned or imported explicitly. These may include e.g. Classes, Interfaces, Components, Packages, Use cases, Dependencies (e.g. mappings), and Artifacts.
 */
const QSet<QPackageableElement *> *QComponent::packagedElements() const
{
}

void QComponent::addPackagedElement(const QPackageableElement *packagedElement)
{
}

void QComponent::removePackagedElement(const QPackageableElement *packagedElement)
{
}

/*!
    The set of Realizations owned by the Component. Realizations reference the Classifiers of which the Component is an abstraction; i.e., that realize its behavior.
 */
const QSet<QComponentRealization *> *QComponent::realizations() const
{
}

void QComponent::addRealization(const QComponentRealization *realization)
{
}

void QComponent::removeRealization(const QComponentRealization *realization)
{
}

/*!
    Missing derivation for Component::/provided : Interface
 */
const QSet<QInterface *> *QComponent::provided() const
{
}

/*!
    Utility returning the set of realized interfaces of a component.
 */
const QSet<QInterface *> *QComponent::realizedInterfaces(const QClassifier *classifier) const
{
}

/*!
    Missing derivation for Component::/required : Interface
 */
const QSet<QInterface *> *QComponent::required() const
{
}

/*!
    Utility returning the set of used interfaces of a component.
 */
const QSet<QInterface *> *QComponent::usedInterfaces(const QClassifier *classifier) const
{
}

#include "moc_qcomponent.cpp"

QT_END_NAMESPACE_QTUML

