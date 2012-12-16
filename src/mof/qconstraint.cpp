/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qconstraint.h"
#include "qconstraint_p.h"

#include <QtMof/QElement>
#include <QtMof/QNamespace>
#include <QtMof/QValueSpecification>

QT_BEGIN_NAMESPACE_QTMOF

QConstraintPrivate::QConstraintPrivate() :
    context(0),
    specification(0),
    constrainedElements(new QList<QElement *>)
{
}

QConstraintPrivate::~QConstraintPrivate()
{
    delete constrainedElements;
}

/*!
    \class QConstraint

    \inmodule QtMof

    \brief A constraint is a condition or restriction expressed in natural language text or in a machine readable language for the purpose of declaring some of the semantics of an element.
 */

QConstraint::QConstraint(QWrappedObject *parent, QWrappedObject *wrapper) :
    QPackageableElement(*new QConstraintPrivate, parent, wrapper)
{
}

QConstraint::QConstraint(QConstraintPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QPackageableElement(dd, parent, wrapper)
{
}

QConstraint::~QConstraint()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QConstraint
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QConstraint::context() const
{
    // This is a read-write association end

    Q_D(const QConstraint);
    return d->context;
}

void QConstraint::setContext(QNamespace *context)
{
    // This is a read-write association end

    Q_D(QConstraint);
    if (d->context != context) {
        // Adjust opposite property
        if (d->context)
            d->context->removeOwnedRule(this);

        d->context = context;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(context));

        // Adjust opposite property
        if (context)
            context->addOwnedRule(this);
    }
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QValueSpecification *QConstraint::specification() const
{
    // This is a read-write association end

    Q_D(const QConstraint);
    return d->specification;
}

void QConstraint::setSpecification(QValueSpecification *specification)
{
    // This is a read-write association end

    Q_D(QConstraint);
    if (d->specification != specification) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->specification));

        d->specification = specification;

        // Adjust subsetted property(ies)
        if (specification) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(specification));
        }
    }
}

/*!
    The ordered set of Elements referenced by this Constraint.
 */
const QList<QElement *> *QConstraint::constrainedElements() const
{
    // This is a read-write association end

    Q_D(const QConstraint);
    return d->constrainedElements;
}

void QConstraint::addConstrainedElement(QElement *constrainedElement)
{
    // This is a read-write association end

    Q_D(QConstraint);
    if (!d->constrainedElements->contains(constrainedElement)) {
        d->constrainedElements->append(constrainedElement);
    }
}

void QConstraint::removeConstrainedElement(QElement *constrainedElement)
{
    // This is a read-write association end

    Q_D(QConstraint);
    if (d->constrainedElements->contains(constrainedElement)) {
        d->constrainedElements->removeAll(constrainedElement);
    }
}

void QConstraint::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QConstraint) *>("QT_PREPEND_NAMESPACE_QTMOF(QConstraint) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QConstraint) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QConstraint) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QConstraint) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QConstraint) *> *");
    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<const QSet<QConstraint *> *>("const QSet<QConstraint *> *");
    qRegisterMetaType<const QList<QConstraint *> *>("const QList<QConstraint *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QElement) *>("QT_PREPEND_NAMESPACE_QTMOF(QElement) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QElement) *> *");
    qRegisterMetaType<QElement *>("QElement *");
    qRegisterMetaType<const QSet<QElement *> *>("const QSet<QElement *> *");
    qRegisterMetaType<const QList<QElement *> *>("const QList<QElement *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *>("QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *");
    qRegisterMetaType<QNamespace *>("QNamespace *");
    qRegisterMetaType<const QSet<QNamespace *> *>("const QSet<QNamespace *> *");
    qRegisterMetaType<const QList<QNamespace *> *>("const QList<QNamespace *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *>("QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QValueSpecification) *> *");
    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
    qRegisterMetaType<const QSet<QValueSpecification *> *>("const QSet<QValueSpecification *> *");
    qRegisterMetaType<const QList<QValueSpecification *> *>("const QList<QValueSpecification *> *");


    QPackageableElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qconstraint.cpp"

QT_END_NAMESPACE_QTMOF

