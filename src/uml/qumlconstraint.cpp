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

#include "qumlconstraint.h"
#include "qumlconstraint_p.h"

#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlConstraintPrivate::QUmlConstraintPrivate() :
    context(0),
    specification(0)
{
}

QUmlConstraintPrivate::~QUmlConstraintPrivate()
{
}

/*!
    \class QUmlConstraint

    \inmodule QtUml

    \brief A constraint is a condition or restriction expressed in natural language text or in a machine readable language for the purpose of declaring some of the semantics of an element.
 */

QUmlConstraint::QUmlConstraint(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlPackageableElement(*new QUmlConstraintPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlConstraint::QUmlConstraint(QUmlConstraintPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlPackageableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlConstraint::~QUmlConstraint()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlConstraint
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlConstraint::context() const
{
    // This is a read-write association end

    Q_D(const QUmlConstraint);
    return d->context;
}

void QUmlConstraint::setContext(QUmlNamespace *context)
{
    // This is a read-write association end

    Q_D(QUmlConstraint);
    if (d->context != context) {
        // Adjust opposite property
        if (d->context)
            d->context->removeOwnedRule(this);

        d->context = context;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(context));

        // Adjust opposite property
        if (context)
            context->addOwnedRule(this);
    }
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QUmlValueSpecification *QUmlConstraint::specification() const
{
    // This is a read-write association end

    Q_D(const QUmlConstraint);
    return d->specification;
}

void QUmlConstraint::setSpecification(QUmlValueSpecification *specification)
{
    // This is a read-write association end

    Q_D(QUmlConstraint);
    if (d->specification != specification) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->specification));

        d->specification = specification;

        // Adjust subsetted property(ies)
        if (specification) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(specification));
        }
    }
}

/*!
    The ordered set of Elements referenced by this Constraint.
 */
QList<QUmlElement *> QUmlConstraint::constrainedElements() const
{
    // This is a read-write association end

    Q_D(const QUmlConstraint);
    return d->constrainedElements;
}

void QUmlConstraint::addConstrainedElement(QUmlElement *constrainedElement)
{
    // This is a read-write association end

    Q_D(QUmlConstraint);
    if (!d->constrainedElements.contains(constrainedElement)) {
        d->constrainedElements.append(constrainedElement);
    }
}

void QUmlConstraint::removeConstrainedElement(QUmlElement *constrainedElement)
{
    // This is a read-write association end

    Q_D(QUmlConstraint);
    if (d->constrainedElements.contains(constrainedElement)) {
        d->constrainedElements.removeAll(constrainedElement);
    }
}

void QUmlConstraint::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("context")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("context")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("context")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the namespace that owns the NamedElement.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("context")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("context")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("context")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlNamespace::ownedRule");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A condition that must be true when evaluated in order for the constraint to be satisfied.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ordered set of Elements referenced by this Constraint.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlPackageableElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlconstraint.cpp"

