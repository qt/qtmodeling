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
#include "qumlparameterset.h"
#include "qumlparameterset_p.h"

#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlParameter>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlParameterSetPrivate::QUmlParameterSetPrivate()
{
}

QUmlParameterSetPrivate::~QUmlParameterSetPrivate()
{
}

/*!
    \class QUmlParameterSet

    \inmodule QtUml

    \brief A parameter set is an element that provides alternative sets of inputs or outputs that a behavior may use.
 */

QUmlParameterSet::QUmlParameterSet(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(*new QUmlParameterSetPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlParameterSet::QUmlParameterSet(QUmlParameterSetPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlParameterSet::~QUmlParameterSet()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlParameterSet
// ---------------------------------------------------------------

/*!
    Parameters in the parameter set.
 */
QSet<QUmlParameter *> QUmlParameterSet::parameters() const
{
    // This is a read-write association end

    Q_D(const QUmlParameterSet);
    return d->parameters;
}

void QUmlParameterSet::addParameter(QUmlParameter *parameter)
{
    // This is a read-write association end

    Q_D(QUmlParameterSet);
    if (!d->parameters.contains(parameter)) {
        d->parameters.insert(parameter);

        // Adjust opposite property
        parameter->addParameterSet(this);
    }
}

void QUmlParameterSet::removeParameter(QUmlParameter *parameter)
{
    // This is a read-write association end

    Q_D(QUmlParameterSet);
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
QSet<QUmlConstraint *> QUmlParameterSet::conditions() const
{
    // This is a read-write association end

    Q_D(const QUmlParameterSet);
    return d->conditions;
}

void QUmlParameterSet::addCondition(QUmlConstraint *condition)
{
    // This is a read-write association end

    Q_D(QUmlParameterSet);
    if (!d->conditions.contains(condition)) {
        d->conditions.insert(condition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(condition));
    }
}

void QUmlParameterSet::removeCondition(QUmlConstraint *condition)
{
    // This is a read-write association end

    Q_D(QUmlParameterSet);
    if (d->conditions.contains(condition)) {
        d->conditions.remove(condition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(condition));
    }
}

void QUmlParameterSet::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Parameters in the parameter set.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("parameters")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlParameter::parameterSet");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Constraint that should be satisfied for the owner of the parameters in an input parameter set to start execution using the values provided for those parameters, or the owner of the parameters in an output parameter set to end execution providing the values for those parameters, if all preconditions and conditions on input parameter sets were satisfied.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterSet")][QString::fromLatin1("conditions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlparameterset.cpp"

