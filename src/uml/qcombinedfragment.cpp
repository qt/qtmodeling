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

#include "qcombinedfragment.h"
#include "qcombinedfragment_p.h"

#include <QtUml/QGate>
#include <QtUml/QInteractionOperand>

QT_BEGIN_NAMESPACE_QTUML

QCombinedFragmentPrivate::QCombinedFragmentPrivate() :
    interactionOperator(QtUml::InteractionOperatorSeq),
    cfragmentGates(new QSet<QGate *>),
    operands(new QList<QInteractionOperand *>)
{
}

QCombinedFragmentPrivate::~QCombinedFragmentPrivate()
{
    delete cfragmentGates;
    delete operands;
}

/*!
    \class QCombinedFragment

    \inmodule QtUml

    \brief A combined fragment defines an expression of interaction fragments. A combined fragment is defined by an interaction operator and corresponding interaction operands. Through the use of combined fragments the user will be able to describe a number of traces in a compact and concise manner.
 */

QCombinedFragment::QCombinedFragment(QObject *parent) :
    QInteractionFragment(*new QCombinedFragmentPrivate, parent)
{
    qRegisterMetaType<QCombinedFragment *>("QCombinedFragment *");
    qRegisterMetaType<const QSet<QCombinedFragment *> *>("const QSet<QCombinedFragment *> *");
    qRegisterMetaType<const QList<QCombinedFragment *> *>("const QList<QCombinedFragment *> *");
}

QCombinedFragment::QCombinedFragment(QCombinedFragmentPrivate &dd, QObject *parent) :
    QInteractionFragment(dd, parent)
{
    qRegisterMetaType<QCombinedFragment *>("QCombinedFragment *");
    qRegisterMetaType<const QSet<QCombinedFragment *> *>("const QSet<QCombinedFragment *> *");
    qRegisterMetaType<const QList<QCombinedFragment *> *>("const QList<QCombinedFragment *> *");
}

QCombinedFragment::~QCombinedFragment()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QCombinedFragment
// ---------------------------------------------------------------

/*!
    Specifies the operation which defines the semantics of this combination of InteractionFragments.
 */
QtUml::InteractionOperatorKind QCombinedFragment::interactionOperator() const
{
    // This is a read-write attribute

    Q_D(const QCombinedFragment);
    return d->interactionOperator;
}

void QCombinedFragment::setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator)
{
    // This is a read-write attribute

    Q_D(QCombinedFragment);
    if (d->interactionOperator != interactionOperator) {
        d->interactionOperator = interactionOperator;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QCombinedFragment
// ---------------------------------------------------------------

/*!
    Specifies the gates that form the interface between this CombinedFragment and its surroundings
 */
const QSet<QGate *> *QCombinedFragment::cfragmentGates() const
{
    // This is a read-write association end

    Q_D(const QCombinedFragment);
    return d->cfragmentGates;
}

void QCombinedFragment::addCfragmentGate(QGate *cfragmentGate)
{
    // This is a read-write association end

    Q_D(QCombinedFragment);
    if (!d->cfragmentGates->contains(cfragmentGate)) {
        d->cfragmentGates->insert(cfragmentGate);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->addOwnedElement(qtuml_object_cast<QElement *>(cfragmentGate));
    }
}

void QCombinedFragment::removeCfragmentGate(QGate *cfragmentGate)
{
    // This is a read-write association end

    Q_D(QCombinedFragment);
    if (d->cfragmentGates->contains(cfragmentGate)) {
        d->cfragmentGates->remove(cfragmentGate);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->removeOwnedElement(qtuml_object_cast<QElement *>(cfragmentGate));
    }
}

/*!
    The set of operands of the combined fragment.
 */
const QList<QInteractionOperand *> *QCombinedFragment::operands() const
{
    // This is a read-write association end

    Q_D(const QCombinedFragment);
    return d->operands;
}

void QCombinedFragment::addOperand(QInteractionOperand *operand)
{
    // This is a read-write association end

    Q_D(QCombinedFragment);
    if (!d->operands->contains(operand)) {
        d->operands->append(operand);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->addOwnedElement(qtuml_object_cast<QElement *>(operand));
    }
}

void QCombinedFragment::removeOperand(QInteractionOperand *operand)
{
    // This is a read-write association end

    Q_D(QCombinedFragment);
    if (d->operands->contains(operand)) {
        d->operands->removeAll(operand);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->removeOwnedElement(qtuml_object_cast<QElement *>(operand));
    }
}

#include "moc_qcombinedfragment.cpp"

QT_END_NAMESPACE_QTUML

