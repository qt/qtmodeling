/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofconstraint.h"
#include "qmofconstraint_p.h"

#include <QtMof/QMofElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofConstraintPrivate::QMofConstraintPrivate() :
    context(0),
    specification(0)
{
}

QMofConstraintPrivate::~QMofConstraintPrivate()
{
}

/*!
    \class QMofConstraint

    \inmodule QtMof

    \brief A constraint is a condition or restriction expressed in natural language text or in a machine readable language for the purpose of declaring some of the semantics of an element.
 */

QMofConstraint::QMofConstraint(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofPackageableElement(*new QMofConstraintPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofConstraint::QMofConstraint(QMofConstraintPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofPackageableElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofConstraint::~QMofConstraint()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofConstraint
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QMofNamespace *QMofConstraint::context() const
{
    // This is a read-write association end

    Q_D(const QMofConstraint);
    return d->context;
}

void QMofConstraint::setContext(QMofNamespace *context)
{
    // This is a read-write association end

    Q_D(QMofConstraint);
    if (d->context != context) {
        // Adjust opposite property
        if (d->context)
            d->context->removeOwnedRule(this);

        d->context = context;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QMofNamespace *>(context));

        // Adjust opposite property
        if (context)
            context->addOwnedRule(this);
    }
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QMofValueSpecification *QMofConstraint::specification() const
{
    // This is a read-write association end

    Q_D(const QMofConstraint);
    return d->specification;
}

void QMofConstraint::setSpecification(QMofValueSpecification *specification)
{
    // This is a read-write association end

    Q_D(QMofConstraint);
    if (d->specification != specification) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(d->specification));

        d->specification = specification;

        // Adjust subsetted property(ies)
        if (specification) {
            (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(specification));
        }
    }
}

/*!
    The ordered set of Elements referenced by this Constraint.
 */
QList<QMofElement *> QMofConstraint::constrainedElements() const
{
    // This is a read-write association end

    Q_D(const QMofConstraint);
    return d->constrainedElements;
}

void QMofConstraint::addConstrainedElement(QMofElement *constrainedElement)
{
    // This is a read-write association end

    Q_D(QMofConstraint);
    if (!d->constrainedElements.contains(constrainedElement)) {
        d->constrainedElements.append(constrainedElement);
    }
}

void QMofConstraint::removeConstrainedElement(QMofElement *constrainedElement)
{
    // This is a read-write association end

    Q_D(QMofConstraint);
    if (d->constrainedElements.contains(constrainedElement)) {
        d->constrainedElements.removeAll(constrainedElement);
    }
}

void QMofConstraint::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("context")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("context")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("context")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the namespace that owns the NamedElement.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("context")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("context")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("context")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofNamespace::ownedRule");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A condition that must be true when evaluated in order for the constraint to be satisfied.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The ordered set of Elements referenced by this Constraint.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofConstraint")][QString::fromLatin1("constrainedElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QMofPackageableElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofconstraint.cpp"

