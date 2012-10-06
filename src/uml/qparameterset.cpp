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

#include <QtUml/QConstraint>
#include <QtUml/QParameter>

QT_BEGIN_NAMESPACE_QTUML

class QParameterSetPrivate
{
public:
    explicit QParameterSetPrivate();
    virtual ~QParameterSetPrivate();

    QSet<QConstraint *> *conditions;
    QSet<QParameter *> *parameters;
};

QParameterSetPrivate::QParameterSetPrivate() :
    conditions(new QSet<QConstraint *>),
    parameters(new QSet<QParameter *>)
{
}

QParameterSetPrivate::~QParameterSetPrivate()
{
    delete conditions;
    delete parameters;
}

/*!
    \class QParameterSet

    \inmodule QtUml

    \brief A parameter set is an element that provides alternative sets of inputs or outputs that a behavior may use.
 */

QParameterSet::QParameterSet(QObject *parent)
    : QObject(parent), d_ptr(new QParameterSetPrivate)
{
}

QParameterSet::~QParameterSet()
{
    delete d_ptr;
}

/*!
    Constraint that should be satisfied for the owner of the parameters in an input parameter set to start execution using the values provided for those parameters, or the owner of the parameters in an output parameter set to end execution providing the values for those parameters, if all preconditions and conditions on input parameter sets were satisfied.
 */
const QSet<QConstraint *> *QParameterSet::conditions() const
{
    return d_ptr->conditions;
}

void QParameterSet::addCondition(const QConstraint *condition)
{
    d_ptr->conditions->insert(const_cast<QConstraint *>(condition));
    // Adjust subsetted property(ies)
    addOwnedElement(condition);
}

void QParameterSet::removeCondition(const QConstraint *condition)
{
    d_ptr->conditions->remove(const_cast<QConstraint *>(condition));
    // Adjust subsetted property(ies)
    removeOwnedElement(condition);
}

/*!
    Parameters in the parameter set.
 */
const QSet<QParameter *> *QParameterSet::parameters() const
{
    return d_ptr->parameters;
}

void QParameterSet::addParameter(const QParameter *parameter)
{
    d_ptr->parameters->insert(const_cast<QParameter *>(parameter));
}

void QParameterSet::removeParameter(const QParameter *parameter)
{
    d_ptr->parameters->remove(const_cast<QParameter *>(parameter));
}

#include "moc_qparameterset.cpp"

QT_END_NAMESPACE_QTUML

