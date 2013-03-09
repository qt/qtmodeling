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

#include "qumlcombinedfragment.h"
#include "qumlcombinedfragment_p.h"

#include <QtUml/QUmlGate>
#include <QtUml/QUmlInteractionOperand>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlCombinedFragmentPrivate::QUmlCombinedFragmentPrivate() :
    interactionOperator(QtUml::InteractionOperatorSeq)
{
}

QUmlCombinedFragmentPrivate::~QUmlCombinedFragmentPrivate()
{
}

/*!
    \class QUmlCombinedFragment

    \inmodule QtUml

    \brief A combined fragment defines an expression of interaction fragments. A combined fragment is defined by an interaction operator and corresponding interaction operands. Through the use of combined fragments the user will be able to describe a number of traces in a compact and concise manner.
 */

QUmlCombinedFragment::QUmlCombinedFragment(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(*new QUmlCombinedFragmentPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlCombinedFragment::QUmlCombinedFragment(QUmlCombinedFragmentPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlCombinedFragment::~QUmlCombinedFragment()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlCombinedFragment
// ---------------------------------------------------------------

/*!
    Specifies the operation which defines the semantics of this combination of InteractionFragments.
 */
QtUml::InteractionOperatorKind QUmlCombinedFragment::interactionOperator() const
{
    // This is a read-write attribute

    Q_D(const QUmlCombinedFragment);
    return d->interactionOperator;
}

void QUmlCombinedFragment::setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator)
{
    // This is a read-write attribute

    Q_D(QUmlCombinedFragment);
    if (d->interactionOperator != interactionOperator) {
        d->interactionOperator = interactionOperator;
    }
    d->modifiedResettableProperties << QString::fromLatin1("interactionOperator");
}

void QUmlCombinedFragment::unsetInteractionOperator()
{
    setInteractionOperator(QtUml::InteractionOperatorSeq);
    Q_D(QUmlCombinedFragment);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("interactionOperator"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlCombinedFragment
// ---------------------------------------------------------------

/*!
    Specifies the gates that form the interface between this CombinedFragment and its surroundings
 */
QSet<QUmlGate *> QUmlCombinedFragment::cfragmentGates() const
{
    // This is a read-write association end

    Q_D(const QUmlCombinedFragment);
    return d->cfragmentGates;
}

void QUmlCombinedFragment::addCfragmentGate(QUmlGate *cfragmentGate)
{
    // This is a read-write association end

    Q_D(QUmlCombinedFragment);
    if (!d->cfragmentGates.contains(cfragmentGate)) {
        d->cfragmentGates.insert(cfragmentGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(cfragmentGate));
    }
}

void QUmlCombinedFragment::removeCfragmentGate(QUmlGate *cfragmentGate)
{
    // This is a read-write association end

    Q_D(QUmlCombinedFragment);
    if (d->cfragmentGates.contains(cfragmentGate)) {
        d->cfragmentGates.remove(cfragmentGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(cfragmentGate));
    }
}

/*!
    The set of operands of the combined fragment.
 */
QList<QUmlInteractionOperand *> QUmlCombinedFragment::operands() const
{
    // This is a read-write association end

    Q_D(const QUmlCombinedFragment);
    return d->operands;
}

void QUmlCombinedFragment::addOperand(QUmlInteractionOperand *operand)
{
    // This is a read-write association end

    Q_D(QUmlCombinedFragment);
    if (!d->operands.contains(operand)) {
        d->operands.append(operand);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(operand));
    }
}

void QUmlCombinedFragment::removeOperand(QUmlInteractionOperand *operand)
{
    // This is a read-write association end

    Q_D(QUmlCombinedFragment);
    if (d->operands.contains(operand)) {
        d->operands.removeAll(operand);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(operand));
    }
}

void QUmlCombinedFragment::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the operation which defines the semantics of this combination of InteractionFragments.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("interactionOperator")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the gates that form the interface between this CombinedFragment and its surroundings");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("cfragmentGates")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of operands of the combined fragment.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCombinedFragment")][QString::fromLatin1("operands")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlInteractionFragment::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlcombinedfragment.cpp"

