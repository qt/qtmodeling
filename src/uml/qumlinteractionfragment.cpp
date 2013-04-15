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
#include "qumlinteractionfragment.h"
#include "qumlinteractionfragment_p.h"

#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlInteraction>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlInteractionFragmentPrivate::QUmlInteractionFragmentPrivate() :
    enclosingInteraction(0),
    enclosingOperand(0)
{
}

QUmlInteractionFragmentPrivate::~QUmlInteractionFragmentPrivate()
{
}

/*!
    \class QUmlInteractionFragment

    \inmodule QtUml

    \brief InteractionFragment is an abstract notion of the most general interaction unit. An interaction fragment is a piece of an interaction. Each interaction fragment is conceptually like an interaction by itself.
 */

QUmlInteractionFragment::QUmlInteractionFragment(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(*new QUmlInteractionFragmentPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlInteractionFragment::QUmlInteractionFragment(QUmlInteractionFragmentPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlInteractionFragment::~QUmlInteractionFragment()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlInteractionFragment
// ---------------------------------------------------------------

/*!
    The general ordering relationships contained in this fragment.
 */
QSet<QUmlGeneralOrdering *> QUmlInteractionFragment::generalOrderings() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionFragment);
    return d->generalOrderings;
}

void QUmlInteractionFragment::addGeneralOrdering(QUmlGeneralOrdering *generalOrdering)
{
    // This is a read-write association end

    Q_D(QUmlInteractionFragment);
    if (!d->generalOrderings.contains(generalOrdering)) {
        d->generalOrderings.insert(generalOrdering);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(generalOrdering));
    }
}

void QUmlInteractionFragment::removeGeneralOrdering(QUmlGeneralOrdering *generalOrdering)
{
    // This is a read-write association end

    Q_D(QUmlInteractionFragment);
    if (d->generalOrderings.contains(generalOrdering)) {
        d->generalOrderings.remove(generalOrdering);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(generalOrdering));
    }
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QUmlInteraction *QUmlInteractionFragment::enclosingInteraction() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionFragment);
    return d->enclosingInteraction;
}

void QUmlInteractionFragment::setEnclosingInteraction(QUmlInteraction *enclosingInteraction)
{
    // This is a read-write association end

    Q_D(QUmlInteractionFragment);
    if (d->enclosingInteraction != enclosingInteraction) {
        // Adjust opposite property
        if (d->enclosingInteraction)
            d->enclosingInteraction->removeFragment(this);

        d->enclosingInteraction = enclosingInteraction;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(enclosingInteraction));

        // Adjust opposite property
        if (enclosingInteraction)
            enclosingInteraction->addFragment(this);
    }
}

/*!
    References the Lifelines that the InteractionFragment involves.
 */
QSet<QUmlLifeline *> QUmlInteractionFragment::covered() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionFragment);
    return d->covered;
}

void QUmlInteractionFragment::addCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    Q_D(QUmlInteractionFragment);
    if (!d->covered.contains(covered)) {
        d->covered.insert(covered);

        // Adjust opposite property
        covered->addCoveredBy(this);
    }
}

void QUmlInteractionFragment::removeCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    Q_D(QUmlInteractionFragment);
    if (d->covered.contains(covered)) {
        d->covered.remove(covered);

        // Adjust opposite property
        if (covered)
            covered->removeCoveredBy(this);
    }
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QUmlInteractionOperand *QUmlInteractionFragment::enclosingOperand() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionFragment);
    return d->enclosingOperand;
}

void QUmlInteractionFragment::setEnclosingOperand(QUmlInteractionOperand *enclosingOperand)
{
    // This is a read-write association end

    Q_D(QUmlInteractionFragment);
    if (d->enclosingOperand != enclosingOperand) {
        // Adjust opposite property
        if (d->enclosingOperand)
            d->enclosingOperand->removeFragment(this);

        d->enclosingOperand = enclosingOperand;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(enclosingOperand));

        // Adjust opposite property
        if (enclosingOperand)
            enclosingOperand->addFragment(this);
    }
}

void QUmlInteractionFragment::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("generalOrderings")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("generalOrderings")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("generalOrderings")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The general ordering relationships contained in this fragment.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("generalOrderings")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("generalOrderings")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("generalOrderings")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingInteraction")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingInteraction")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingInteraction")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Interaction enclosing this InteractionFragment.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingInteraction")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingInteraction")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingInteraction")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlInteraction::fragment");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("covered")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("covered")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("covered")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Lifelines that the InteractionFragment involves.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("covered")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("covered")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("covered")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlLifeline::coveredBy");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingOperand")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingOperand")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingOperand")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The operand enclosing this InteractionFragment (they may nest recursively)");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingOperand")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingOperand")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionFragment")][QString::fromLatin1("enclosingOperand")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlInteractionOperand::fragment");

    QUmlNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlinteractionfragment.cpp"

