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
#include "qumlbehavioralfeature.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlBehavioralFeature::QUmlBehavioralFeature(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QtUml::CallConcurrencyKind QUmlBehavioralFeature::concurrency() const
{
    return _concurrency;
}

void QUmlBehavioralFeature::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    UmlBehavioralFeature::setConcurrency(concurrency);
}

bool QUmlBehavioralFeature::isAbstract() const
{
    return _isAbstract;
}

void QUmlBehavioralFeature::setAbstract(bool isAbstract)
{
    UmlBehavioralFeature::setAbstract(isAbstract);
}

const QSet<QUmlBehavior *> QUmlBehavioralFeature::method() const
{
    return *(reinterpret_cast<const QSet<QUmlBehavior *> *>(&_method));
}

void QUmlBehavioralFeature::addMethod(UmlBehavior *method)
{
    UmlBehavioralFeature::addMethod(method);
}

void QUmlBehavioralFeature::removeMethod(UmlBehavior *method)
{
    UmlBehavioralFeature::removeMethod(method);
}

const QList<QUmlParameter *> QUmlBehavioralFeature::ownedParameter() const
{
    return *(reinterpret_cast<const QList<QUmlParameter *> *>(&_ownedParameter));
}

void QUmlBehavioralFeature::addOwnedParameter(UmlParameter *ownedParameter)
{
    UmlBehavioralFeature::addOwnedParameter(ownedParameter);
}

void QUmlBehavioralFeature::removeOwnedParameter(UmlParameter *ownedParameter)
{
    UmlBehavioralFeature::removeOwnedParameter(ownedParameter);
}

const QSet<QUmlParameterSet *> QUmlBehavioralFeature::ownedParameterSet() const
{
    return *(reinterpret_cast<const QSet<QUmlParameterSet *> *>(&_ownedParameterSet));
}

void QUmlBehavioralFeature::addOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    UmlBehavioralFeature::addOwnedParameterSet(ownedParameterSet);
}

void QUmlBehavioralFeature::removeOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    UmlBehavioralFeature::removeOwnedParameterSet(ownedParameterSet);
}

const QSet<QUmlType *> QUmlBehavioralFeature::raisedException() const
{
    return *(reinterpret_cast<const QSet<QUmlType *> *>(&_raisedException));
}

void QUmlBehavioralFeature::addRaisedException(UmlType *raisedException)
{
    UmlBehavioralFeature::addRaisedException(raisedException);
}

void QUmlBehavioralFeature::removeRaisedException(UmlType *raisedException)
{
    UmlBehavioralFeature::removeRaisedException(raisedException);
}

// Operations

bool QUmlBehavioralFeature::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlBehavioralFeature::isDistinguishableFrom(n, ns);
}

QT_END_NAMESPACE

