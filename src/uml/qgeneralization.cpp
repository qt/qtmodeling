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

#include "qgeneralization.h"
#include "qgeneralization_p.h"
#include "qelement_p.h"
#include "qdirectedrelationship_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QGeneralizationSet>

QT_BEGIN_NAMESPACE_QTUML

QGeneralizationPrivate::QGeneralizationPrivate() :
    isSubstitutable(true),
    specific(0),
    generalizationSets(new QSet<QGeneralizationSet *>),
    general(0)
{
}

QGeneralizationPrivate::~QGeneralizationPrivate()
{
    delete generalizationSets;
}

void QGeneralizationPrivate::setSubstitutable(bool isSubstitutable)
{
    this->isSubstitutable = isSubstitutable;
}

void QGeneralizationPrivate::setSpecific(QClassifier *specific)
{
    // Adjust subsetted property(ies)
    removeSource(this->specific);

    this->specific = specific;

    // Adjust subsetted property(ies)
    setOwner(specific);
    addSource(specific);
}

void QGeneralizationPrivate::addGeneralizationSet(QGeneralizationSet *generalizationSet)
{
    this->generalizationSets->insert(generalizationSet);
}

void QGeneralizationPrivate::removeGeneralizationSet(QGeneralizationSet *generalizationSet)
{
    this->generalizationSets->remove(generalizationSet);
}

void QGeneralizationPrivate::setGeneral(QClassifier *general)
{
    // Adjust subsetted property(ies)
    removeTarget(this->general);

    this->general = general;

    // Adjust subsetted property(ies)
    addTarget(general);
}

/*!
    \class QGeneralization

    \inmodule QtUml

    \brief A generalization is a taxonomic relationship between a more general classifier and a more specific classifier. Each instance of the specific classifier is also an indirect instance of the general classifier. Thus, the specific classifier inherits the features of the more general classifier.A generalization relates a specific classifier to a more general classifier, and is owned by the specific classifier.
 */

QGeneralization::QGeneralization(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QGeneralizationPrivate;
}

QGeneralization::QGeneralization(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QGeneralizationPrivate;
}

QGeneralization::~QGeneralization()
{
}

/*!
    Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier.
 */
bool QGeneralization::isSubstitutable() const
{
    QTUML_D(const QGeneralization);
    return d->isSubstitutable;
}

void QGeneralization::setSubstitutable(bool isSubstitutable)
{
    QTUML_D(QGeneralization);
    if (d->isSubstitutable != isSubstitutable) {
        d->setSubstitutable(isSubstitutable);
    }
}

/*!
    References the specializing classifier in the Generalization relationship.
 */
QClassifier *QGeneralization::specific() const
{
    QTUML_D(const QGeneralization);
    return d->specific;
}

void QGeneralization::setSpecific(QClassifier *specific)
{
    QTUML_D(QGeneralization);
    if (d->specific != specific) {
        d->setSpecific(specific);

        // Adjust opposite property
        specific->addGeneralization(this);
    }
}

/*!
    Designates a set in which instances of Generalization is considered members.
 */
const QSet<QGeneralizationSet *> *QGeneralization::generalizationSets() const
{
    QTUML_D(const QGeneralization);
    return d->generalizationSets;
}

void QGeneralization::addGeneralizationSet(QGeneralizationSet *generalizationSet)
{
    QTUML_D(QGeneralization);
    if (!d->generalizationSets->contains(generalizationSet)) {
        d->addGeneralizationSet(generalizationSet);

        // Adjust opposite property
        generalizationSet->addGeneralization(this);
    }
}

void QGeneralization::removeGeneralizationSet(QGeneralizationSet *generalizationSet)
{
    QTUML_D(QGeneralization);
    if (d->generalizationSets->contains(generalizationSet)) {
        d->removeGeneralizationSet(generalizationSet);

        // Adjust opposite property
        generalizationSet->removeGeneralization(this);
    }
}

/*!
    References the general classifier in the Generalization relationship.
 */
QClassifier *QGeneralization::general() const
{
    QTUML_D(const QGeneralization);
    return d->general;
}

void QGeneralization::setGeneral(QClassifier *general)
{
    QTUML_D(QGeneralization);
    if (d->general != general) {
        d->setGeneral(general);
    }
}

#include "moc_qgeneralization.cpp"

QT_END_NAMESPACE_QTUML

