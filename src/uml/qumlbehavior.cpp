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
#include "qumlbehavior.h"

#include <QtUml/QUmlBehavioralFeature>
#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterSet>

QT_BEGIN_NAMESPACE

QUmlBehavior::QUmlBehavior(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QUmlBehavioredClassifier *QUmlBehavior::context() const
{
    return reinterpret_cast<QUmlBehavioredClassifier *>(UmlBehavior::context());
}

bool QUmlBehavior::isReentrant() const
{
    return _isReentrant;
}

void QUmlBehavior::setReentrant(bool isReentrant)
{
    UmlBehavior::setReentrant(isReentrant);
}

const QList<QUmlParameter *> QUmlBehavior::ownedParameter() const
{
    return *(reinterpret_cast<const QList<QUmlParameter *> *>(&_ownedParameter));
}

void QUmlBehavior::addOwnedParameter(UmlParameter *ownedParameter)
{
    UmlBehavior::addOwnedParameter(ownedParameter);
}

void QUmlBehavior::removeOwnedParameter(UmlParameter *ownedParameter)
{
    UmlBehavior::removeOwnedParameter(ownedParameter);
}

const QSet<QUmlParameterSet *> QUmlBehavior::ownedParameterSet() const
{
    return *(reinterpret_cast<const QSet<QUmlParameterSet *> *>(&_ownedParameterSet));
}

void QUmlBehavior::addOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    UmlBehavior::addOwnedParameterSet(ownedParameterSet);
}

void QUmlBehavior::removeOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    UmlBehavior::removeOwnedParameterSet(ownedParameterSet);
}

const QSet<QUmlConstraint *> QUmlBehavior::postcondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_postcondition));
}

void QUmlBehavior::addPostcondition(UmlConstraint *postcondition)
{
    UmlBehavior::addPostcondition(postcondition);
}

void QUmlBehavior::removePostcondition(UmlConstraint *postcondition)
{
    UmlBehavior::removePostcondition(postcondition);
}

const QSet<QUmlConstraint *> QUmlBehavior::precondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_precondition));
}

void QUmlBehavior::addPrecondition(UmlConstraint *precondition)
{
    UmlBehavior::addPrecondition(precondition);
}

void QUmlBehavior::removePrecondition(UmlConstraint *precondition)
{
    UmlBehavior::removePrecondition(precondition);
}

const QSet<QUmlBehavior *> QUmlBehavior::redefinedBehavior() const
{
    return *(reinterpret_cast<const QSet<QUmlBehavior *> *>(&_redefinedBehavior));
}

void QUmlBehavior::addRedefinedBehavior(UmlBehavior *redefinedBehavior)
{
    UmlBehavior::addRedefinedBehavior(redefinedBehavior);
}

void QUmlBehavior::removeRedefinedBehavior(UmlBehavior *redefinedBehavior)
{
    UmlBehavior::removeRedefinedBehavior(redefinedBehavior);
}

QUmlBehavioralFeature *QUmlBehavior::specification() const
{
    return reinterpret_cast<QUmlBehavioralFeature *>(_specification);
}

void QUmlBehavior::setSpecification(QUmlBehavioralFeature *specification)
{
    UmlBehavior::setSpecification(specification);
}

QT_END_NAMESPACE

