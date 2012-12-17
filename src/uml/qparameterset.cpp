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

#include "qparameterset.h"
#include "qparameterset_p.h"

#include <QtUml/QConstraint>
#include <QtUml/QParameter>

QT_BEGIN_NAMESPACE_QTUML

QParameterSetPrivate::QParameterSetPrivate() :
    parameters(new QSet<QParameter *>),
    conditions(new QSet<QConstraint *>)
{
}

QParameterSetPrivate::~QParameterSetPrivate()
{
    delete parameters;
    delete conditions;
}

/*!
    \class QParameterSet

    \inmodule QtUml

    \brief A parameter set is an element that provides alternative sets of inputs or outputs that a behavior may use.
 */

QParameterSet::QParameterSet(QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(*new QParameterSetPrivate, parent, wrapper)
{
}

QParameterSet::QParameterSet(QParameterSetPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(dd, parent, wrapper)
{
}

QParameterSet::~QParameterSet()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QParameterSet
// ---------------------------------------------------------------

/*!
    Parameters in the parameter set.
 */
const QSet<QParameter *> *QParameterSet::parameters() const
{
    // This is a read-write association end

    Q_D(const QParameterSet);
    return d->parameters;
}

void QParameterSet::addParameter(QParameter *parameter)
{
    // This is a read-write association end

    Q_D(QParameterSet);
    if (!d->parameters->contains(parameter)) {
        d->parameters->insert(parameter);

        // Adjust opposite property
        parameter->addParameterSet(this);
    }
}

void QParameterSet::removeParameter(QParameter *parameter)
{
    // This is a read-write association end

    Q_D(QParameterSet);
    if (d->parameters->contains(parameter)) {
        d->parameters->remove(parameter);

        // Adjust opposite property
        if (parameter)
            parameter->removeParameterSet(this);
    }
}

/*!
    Constraint that should be satisfied for the owner of the parameters in an input parameter set to start execution using the values provided for those parameters, or the owner of the parameters in an output parameter set to end execution providing the values for those parameters, if all preconditions and conditions on input parameter sets were satisfied.
 */
const QSet<QConstraint *> *QParameterSet::conditions() const
{
    // This is a read-write association end

    Q_D(const QParameterSet);
    return d->conditions;
}

void QParameterSet::addCondition(QConstraint *condition)
{
    // This is a read-write association end

    Q_D(QParameterSet);
    if (!d->conditions->contains(condition)) {
        d->conditions->insert(condition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(condition));
    }
}

void QParameterSet::removeCondition(QConstraint *condition)
{
    // This is a read-write association end

    Q_D(QParameterSet);
    if (d->conditions->contains(condition)) {
        d->conditions->remove(condition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(condition));
    }
}

void QParameterSet::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QParameterSet) *>("QT_PREPEND_NAMESPACE_QTUML(QParameterSet) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QParameterSet) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QParameterSet) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QParameterSet) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QParameterSet) *> *");
    qRegisterMetaType<QParameterSet *>("QParameterSet *");
    qRegisterMetaType<const QSet<QParameterSet *> *>("const QSet<QParameterSet *> *");
    qRegisterMetaType<const QList<QParameterSet *> *>("const QList<QParameterSet *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *>("QT_PREPEND_NAMESPACE_QTUML(QConstraint) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *> *");
    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<const QSet<QConstraint *> *>("const QSet<QConstraint *> *");
    qRegisterMetaType<const QList<QConstraint *> *>("const QList<QConstraint *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QParameter) *>("QT_PREPEND_NAMESPACE_QTUML(QParameter) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QParameter) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QParameter) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QParameter) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QParameter) *> *");
    qRegisterMetaType<QParameter *>("QParameter *");
    qRegisterMetaType<const QSet<QParameter *> *>("const QSet<QParameter *> *");
    qRegisterMetaType<const QList<QParameter *> *>("const QList<QParameter *> *");

    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qparameterset.cpp"

QT_END_NAMESPACE_QTUML

