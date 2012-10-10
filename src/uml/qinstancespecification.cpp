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

#include "qinstancespecification.h"
#include "qinstancespecification_p.h"
#include "qelement_p.h"
#include "qelement_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QSlot>
#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QInstanceSpecificationPrivate::QInstanceSpecificationPrivate() :
    classifiers(new QSet<QClassifier *>),
    specification(0),
    slots_(new QSet<QSlot *>)
{
}

QInstanceSpecificationPrivate::~QInstanceSpecificationPrivate()
{
    delete classifiers;
    delete slots_;
}

void QInstanceSpecificationPrivate::addClassifier(const QClassifier *classifier)
{
    this->classifiers->insert(const_cast<QClassifier *>(classifier));
}

void QInstanceSpecificationPrivate::removeClassifier(const QClassifier *classifier)
{
    this->classifiers->remove(const_cast<QClassifier *>(classifier));
}

void QInstanceSpecificationPrivate::setSpecification(const QValueSpecification *specification)
{
    this->specification = const_cast<QValueSpecification *>(specification);
}

void QInstanceSpecificationPrivate::addSlot_(const QSlot *slot_)
{
    this->slots_->insert(const_cast<QSlot *>(slot_));

    // Adjust subsetted property(ies)
    addOwnedElement(slot_);
}

void QInstanceSpecificationPrivate::removeSlot_(const QSlot *slot_)
{
    this->slots_->remove(const_cast<QSlot *>(slot_));

    // Adjust subsetted property(ies)
    removeOwnedElement(slot_);
}

/*!
    \class QInstanceSpecification

    \inmodule QtUml

    \brief An instance specification has the capability of being a deployment target in a deployment relationship, in the case that it is an instance of a node. It is also has the capability of being a deployed artifact, if it is an instance of an artifact.An instance specification is a model element that represents an instance in a modeled system.
 */

QInstanceSpecification::QInstanceSpecification(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QInstanceSpecificationPrivate;
}

QInstanceSpecification::QInstanceSpecification(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QInstanceSpecificationPrivate;
}

QInstanceSpecification::~QInstanceSpecification()
{
}

/*!
    The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them.
 */
const QSet<QClassifier *> *QInstanceSpecification::classifiers() const
{
    Q_D(const QInstanceSpecification);
    return d->classifiers;
}

void QInstanceSpecification::addClassifier(const QClassifier *classifier)
{
    Q_D(QInstanceSpecification);
    d->addClassifier(const_cast<QClassifier *>(classifier));
}

void QInstanceSpecification::removeClassifier(const QClassifier *classifier)
{
    Q_D(QInstanceSpecification);
    d->removeClassifier(const_cast<QClassifier *>(classifier));
}

/*!
    A specification of how to compute, derive, or construct the instance.
 */
QValueSpecification *QInstanceSpecification::specification() const
{
    Q_D(const QInstanceSpecification);
    return d->specification;
}

void QInstanceSpecification::setSpecification(const QValueSpecification *specification)
{
    Q_D(QInstanceSpecification);
    d->setSpecification(const_cast<QValueSpecification *>(specification));
}

/*!
    A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.
 */
const QSet<QSlot *> *QInstanceSpecification::slots_() const
{
    Q_D(const QInstanceSpecification);
    return d->slots_;
}

void QInstanceSpecification::addSlot_(const QSlot *slot_)
{
    Q_D(QInstanceSpecification);
    d->addSlot_(const_cast<QSlot *>(slot_));
}

void QInstanceSpecification::removeSlot_(const QSlot *slot_)
{
    Q_D(QInstanceSpecification);
    d->removeSlot_(const_cast<QSlot *>(slot_));
}

#include "moc_qinstancespecification.cpp"

QT_END_NAMESPACE_QTUML

