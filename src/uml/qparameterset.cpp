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

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QParameterSetPrivate::QParameterSetPrivate()
{
}

QParameterSetPrivate::~QParameterSetPrivate()
{
}

/*!
    \class QParameterSet

    \inmodule QtUml

    \brief A parameter set is an element that provides alternative sets of inputs or outputs that a behavior may use.
 */

QParameterSet::QParameterSet(QWrappedObject *wrapper, QWrappedObject *parent) :
    QNamedElement(*new QParameterSetPrivate, wrapper, parent)
{
    setPropertyData();
}

QParameterSet::QParameterSet(QParameterSetPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QNamedElement(dd, wrapper, parent)
{
    setPropertyData();
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
QSet<QParameter *> QParameterSet::parameters() const
{
    // This is a read-write association end

    Q_D(const QParameterSet);
    return d->parameters;
}

void QParameterSet::addParameter(QParameter *parameter)
{
    // This is a read-write association end

    Q_D(QParameterSet);
    if (!d->parameters.contains(parameter)) {
        d->parameters.insert(parameter);

        // Adjust opposite property
        parameter->addParameterSet(this);
    }
}

void QParameterSet::removeParameter(QParameter *parameter)
{
    // This is a read-write association end

    Q_D(QParameterSet);
    if (d->parameters.contains(parameter)) {
        d->parameters.remove(parameter);

        // Adjust opposite property
        if (parameter)
            parameter->removeParameterSet(this);
    }
}

/*!
    Constraint that should be satisfied for the owner of the parameters in an input parameter set to start execution using the values provided for those parameters, or the owner of the parameters in an output parameter set to end execution providing the values for those parameters, if all preconditions and conditions on input parameter sets were satisfied.
 */
QSet<QConstraint *> QParameterSet::conditions() const
{
    // This is a read-write association end

    Q_D(const QParameterSet);
    return d->conditions;
}

void QParameterSet::addCondition(QConstraint *condition)
{
    // This is a read-write association end

    Q_D(QParameterSet);
    if (!d->conditions.contains(condition)) {
        d->conditions.insert(condition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(condition));
    }
}

void QParameterSet::removeCondition(QConstraint *condition)
{
    // This is a read-write association end

    Q_D(QParameterSet);
    if (d->conditions.contains(condition)) {
        d->conditions.remove(condition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(condition));
    }
}

void QParameterSet::registerMetaTypes() const
{
    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");

    qRegisterMetaType<QParameter *>("QParameter *");
    qRegisterMetaType<QSet<QParameter *>>("QSet<QParameter *>");
    qRegisterMetaType<QList<QParameter *>>("QList<QParameter *>");

    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QParameterSet::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Parameters in the parameter set.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QParameter::parameterSet");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Constraint that should be satisfied for the owner of the parameters in an input parameter set to start execution using the values provided for those parameters, or the owner of the parameters in an output parameter set to end execution providing the values for those parameters, if all preconditions and conditions on input parameter sets were satisfied.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QNamedElement::setPropertyData();
}

#include "moc_qparameterset.cpp"

QT_END_NAMESPACE_QTUML

