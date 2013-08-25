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
#include "qumlbehavioredclassifier.h"
#include "qumlbehavioredclassifier_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlInterfaceRealization>

QT_BEGIN_NAMESPACE

QUmlBehavioredClassifierPrivate::QUmlBehavioredClassifierPrivate() :
    classifierBehavior(0)
{
}

/*!
    \class QUmlBehavioredClassifier

    \inmodule QtUml

    \brief A behaviored classifier may have an interface realization.A classifier can have behavior specifications defined in its namespace. One of these may specify the behavior of the classifier itself.
 */

QUmlBehavioredClassifier::QUmlBehavioredClassifier(bool create_d_ptr) :
    QUmlClassifier(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlBehavioredClassifierPrivate);
}

// OWNED ATTRIBUTES

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QUmlBehavior *QUmlBehavioredClassifier::classifierBehavior() const
{
    // This is a read-write association end

    QM_D(const QUmlBehavioredClassifier);
    return d->classifierBehavior;
}

void QUmlBehavioredClassifier::setClassifierBehavior(QUmlBehavior *classifierBehavior)
{
    // This is a read-write association end

    QM_D(QUmlBehavioredClassifier);
    if (d->classifierBehavior != classifierBehavior) {
        d->classifierBehavior = classifierBehavior;
    }
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
QSet<QUmlInterfaceRealization *> QUmlBehavioredClassifier::interfaceRealization() const
{
    // This is a read-write association end

    QM_D(const QUmlBehavioredClassifier);
    return d->interfaceRealization;
}

void QUmlBehavioredClassifier::addInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    QM_D(QUmlBehavioredClassifier);
    if (!d->interfaceRealization.contains(interfaceRealization)) {
        d->interfaceRealization.insert(interfaceRealization);
    }
}

void QUmlBehavioredClassifier::removeInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    QM_D(QUmlBehavioredClassifier);
    if (d->interfaceRealization.contains(interfaceRealization)) {
        d->interfaceRealization.remove(interfaceRealization);
    }
}

/*!
    References behavior specifications owned by a classifier.
 */
QSet<QUmlBehavior *> QUmlBehavioredClassifier::ownedBehavior() const
{
    // This is a read-write association end

    QM_D(const QUmlBehavioredClassifier);
    return d->ownedBehavior;
}

void QUmlBehavioredClassifier::addOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    // This is a read-write association end

    QM_D(QUmlBehavioredClassifier);
    if (!d->ownedBehavior.contains(ownedBehavior)) {
        d->ownedBehavior.insert(ownedBehavior);
    }
}

void QUmlBehavioredClassifier::removeOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    // This is a read-write association end

    QM_D(QUmlBehavioredClassifier);
    if (d->ownedBehavior.contains(ownedBehavior)) {
        d->ownedBehavior.remove(ownedBehavior);
    }
}

QT_END_NAMESPACE

