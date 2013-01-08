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

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QCombinedFragmentPrivate::QCombinedFragmentPrivate() :
    interactionOperator(QtUml::InteractionOperatorSeq)
{
}

QCombinedFragmentPrivate::~QCombinedFragmentPrivate()
{
}

/*!
    \class QCombinedFragment

    \inmodule QtUml

    \brief A combined fragment defines an expression of interaction fragments. A combined fragment is defined by an interaction operator and corresponding interaction operands. Through the use of combined fragments the user will be able to describe a number of traces in a compact and concise manner.
 */

QCombinedFragment::QCombinedFragment(QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(*new QCombinedFragmentPrivate, wrapper, parent)
{
    setPropertyData();
}

QCombinedFragment::QCombinedFragment(QCombinedFragmentPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
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
    d->modifiedResettableProperties << QString::fromLatin1("interactionOperator");
}

void QCombinedFragment::unsetInteractionOperator()
{
    setInteractionOperator(QtUml::InteractionOperatorSeq);
    Q_D(QCombinedFragment);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("interactionOperator"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QCombinedFragment
// ---------------------------------------------------------------

/*!
    Specifies the gates that form the interface between this CombinedFragment and its surroundings
 */
QSet<QGate *> QCombinedFragment::cfragmentGates() const
{
    // This is a read-write association end

    Q_D(const QCombinedFragment);
    return d->cfragmentGates;
}

void QCombinedFragment::addCfragmentGate(QGate *cfragmentGate)
{
    // This is a read-write association end

    Q_D(QCombinedFragment);
    if (!d->cfragmentGates.contains(cfragmentGate)) {
        d->cfragmentGates.insert(cfragmentGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(cfragmentGate));
    }
}

void QCombinedFragment::removeCfragmentGate(QGate *cfragmentGate)
{
    // This is a read-write association end

    Q_D(QCombinedFragment);
    if (d->cfragmentGates.contains(cfragmentGate)) {
        d->cfragmentGates.remove(cfragmentGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(cfragmentGate));
    }
}

/*!
    The set of operands of the combined fragment.
 */
QList<QInteractionOperand *> QCombinedFragment::operands() const
{
    // This is a read-write association end

    Q_D(const QCombinedFragment);
    return d->operands;
}

void QCombinedFragment::addOperand(QInteractionOperand *operand)
{
    // This is a read-write association end

    Q_D(QCombinedFragment);
    if (!d->operands.contains(operand)) {
        d->operands.append(operand);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(operand));
    }
}

void QCombinedFragment::removeOperand(QInteractionOperand *operand)
{
    // This is a read-write association end

    Q_D(QCombinedFragment);
    if (d->operands.contains(operand)) {
        d->operands.removeAll(operand);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(operand));
    }
}

void QCombinedFragment::registerMetaTypes() const
{
    qRegisterMetaType<QGate *>("QGate *");
    qRegisterMetaType<QSet<QGate *>>("QSet<QGate *>");
    qRegisterMetaType<QList<QGate *>>("QList<QGate *>");

    qRegisterMetaType<QInteractionOperand *>("QInteractionOperand *");
    qRegisterMetaType<QSet<QInteractionOperand *>>("QSet<QInteractionOperand *>");
    qRegisterMetaType<QList<QInteractionOperand *>>("QList<QInteractionOperand *>");

    QInteractionFragment::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QCombinedFragment::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the operation which defines the semantics of this combination of InteractionFragments.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the gates that form the interface between this CombinedFragment and its surroundings");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of operands of the combined fragment.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QInteractionFragment::setPropertyData();
}

#include "moc_qcombinedfragment.cpp"

QT_END_NAMESPACE_QTUML

