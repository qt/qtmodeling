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

#include "qinteractionfragment.h"
#include "qinteractionfragment_p.h"

#include <QtUml/QGeneralOrdering>
#include <QtUml/QInteractionOperand>
#include <QtUml/QLifeline>
#include <QtUml/QInteraction>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QInteractionFragmentPrivate::QInteractionFragmentPrivate() :
    enclosingInteraction(0),
    enclosingOperand(0)
{
}

QInteractionFragmentPrivate::~QInteractionFragmentPrivate()
{
}

/*!
    \class QInteractionFragment

    \inmodule QtUml

    \brief InteractionFragment is an abstract notion of the most general interaction unit. An interaction fragment is a piece of an interaction. Each interaction fragment is conceptually like an interaction by itself.
 */

QInteractionFragment::QInteractionFragment(QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(*new QInteractionFragmentPrivate, parent, wrapper)
{
    setPropertyData();
}

QInteractionFragment::QInteractionFragment(QInteractionFragmentPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(dd, parent, wrapper)
{
    setPropertyData();
}

QInteractionFragment::~QInteractionFragment()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInteractionFragment
// ---------------------------------------------------------------

/*!
    The general ordering relationships contained in this fragment.
 */
QSet<QGeneralOrdering *> QInteractionFragment::generalOrderings() const
{
    // This is a read-write association end

    Q_D(const QInteractionFragment);
    return d->generalOrderings;
}

void QInteractionFragment::addGeneralOrdering(QGeneralOrdering *generalOrdering)
{
    // This is a read-write association end

    Q_D(QInteractionFragment);
    if (!d->generalOrderings.contains(generalOrdering)) {
        d->generalOrderings.insert(generalOrdering);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(generalOrdering));
    }
}

void QInteractionFragment::removeGeneralOrdering(QGeneralOrdering *generalOrdering)
{
    // This is a read-write association end

    Q_D(QInteractionFragment);
    if (d->generalOrderings.contains(generalOrdering)) {
        d->generalOrderings.remove(generalOrdering);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(generalOrdering));
    }
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QInteraction *QInteractionFragment::enclosingInteraction() const
{
    // This is a read-write association end

    Q_D(const QInteractionFragment);
    return d->enclosingInteraction;
}

void QInteractionFragment::setEnclosingInteraction(QInteraction *enclosingInteraction)
{
    // This is a read-write association end

    Q_D(QInteractionFragment);
    if (d->enclosingInteraction != enclosingInteraction) {
        // Adjust opposite property
        if (d->enclosingInteraction)
            d->enclosingInteraction->removeFragment(this);

        d->enclosingInteraction = enclosingInteraction;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(enclosingInteraction));

        // Adjust opposite property
        if (enclosingInteraction)
            enclosingInteraction->addFragment(this);
    }
}

/*!
    References the Lifelines that the InteractionFragment involves.
 */
QSet<QLifeline *> QInteractionFragment::covered() const
{
    // This is a read-write association end

    Q_D(const QInteractionFragment);
    return d->covered;
}

void QInteractionFragment::addCovered(QLifeline *covered)
{
    // This is a read-write association end

    Q_D(QInteractionFragment);
    if (!d->covered.contains(covered)) {
        d->covered.insert(covered);

        // Adjust opposite property
        covered->addCoveredBy(this);
    }
}

void QInteractionFragment::removeCovered(QLifeline *covered)
{
    // This is a read-write association end

    Q_D(QInteractionFragment);
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
QInteractionOperand *QInteractionFragment::enclosingOperand() const
{
    // This is a read-write association end

    Q_D(const QInteractionFragment);
    return d->enclosingOperand;
}

void QInteractionFragment::setEnclosingOperand(QInteractionOperand *enclosingOperand)
{
    // This is a read-write association end

    Q_D(QInteractionFragment);
    if (d->enclosingOperand != enclosingOperand) {
        // Adjust opposite property
        if (d->enclosingOperand)
            d->enclosingOperand->removeFragment(this);

        d->enclosingOperand = enclosingOperand;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(enclosingOperand));

        // Adjust opposite property
        if (enclosingOperand)
            enclosingOperand->addFragment(this);
    }
}

void QInteractionFragment::registerMetaTypes() const
{
    qRegisterMetaType<QGeneralOrdering *>("QGeneralOrdering *");
    qRegisterMetaType<QSet<QGeneralOrdering *>>("QSet<QGeneralOrdering *>");
    qRegisterMetaType<QList<QGeneralOrdering *>>("QList<QGeneralOrdering *>");

    qRegisterMetaType<QInteractionOperand *>("QInteractionOperand *");
    qRegisterMetaType<QSet<QInteractionOperand *>>("QSet<QInteractionOperand *>");
    qRegisterMetaType<QList<QInteractionOperand *>>("QList<QInteractionOperand *>");

    qRegisterMetaType<QLifeline *>("QLifeline *");
    qRegisterMetaType<QSet<QLifeline *>>("QSet<QLifeline *>");
    qRegisterMetaType<QList<QLifeline *>>("QList<QLifeline *>");

    qRegisterMetaType<QInteraction *>("QInteraction *");
    qRegisterMetaType<QSet<QInteraction *>>("QSet<QInteraction *>");
    qRegisterMetaType<QList<QInteraction *>>("QList<QInteraction *>");

    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QInteractionFragment::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("generalOrderings")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("generalOrderings")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("generalOrderings")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The general ordering relationships contained in this fragment.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("generalOrderings")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("generalOrderings")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElement");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("enclosingInteraction")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("enclosingInteraction")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("enclosingInteraction")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Interaction enclosing this InteractionFragment.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("enclosingInteraction")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("enclosingInteraction")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Lifelines that the InteractionFragment involves.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("enclosingOperand")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("enclosingOperand")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("enclosingOperand")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The operand enclosing this InteractionFragment (they may nest recursively)");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("enclosingOperand")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInteractionFragment")][QString::fromLatin1("enclosingOperand")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamedElement::namespace");

    QNamedElement::setPropertyData();
}

#include "moc_qinteractionfragment.cpp"

QT_END_NAMESPACE_QTUML

