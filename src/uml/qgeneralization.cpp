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

#include <QtUml/QClassifier>
#include <QtUml/QGeneralizationSet>

QT_BEGIN_NAMESPACE_QTUML

class QGeneralizationPrivate
{
public:
    explicit QGeneralizationPrivate();
    virtual ~QGeneralizationPrivate();

    bool isSubstitutable;
    QClassifier *general;
    QSet<QGeneralizationSet *> *generalizationSets;
    QClassifier *specific;
};

QGeneralizationPrivate::QGeneralizationPrivate() :
    isSubstitutable(true),
    general(0),
    generalizationSets(new QSet<QGeneralizationSet *>),
    specific(0)
{
}

QGeneralizationPrivate::~QGeneralizationPrivate()
{
    delete generalizationSets;
}

/*!
    \class QGeneralization

    \inmodule QtUml

    \brief A generalization is a taxonomic relationship between a more general classifier and a more specific classifier. Each instance of the specific classifier is also an indirect instance of the general classifier. Thus, the specific classifier inherits the features of the more general classifier.A generalization relates a specific classifier to a more general classifier, and is owned by the specific classifier.
 */

QGeneralization::QGeneralization(QObject *parent)
    : QObject(parent), d_ptr(new QGeneralizationPrivate)
{
}

QGeneralization::~QGeneralization()
{
    delete d_ptr;
}

/*!
    Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier.
 */
bool QGeneralization::isSubstitutable() const
{
    return d_ptr->isSubstitutable;
}

void QGeneralization::setSubstitutable(bool isSubstitutable)
{
    d_ptr->isSubstitutable = isSubstitutable;
}

/*!
    References the general classifier in the Generalization relationship.
 */
QClassifier *QGeneralization::general() const
{
    return d_ptr->general;
}

void QGeneralization::setGeneral(const QClassifier *general)
{
    d_ptr->general = const_cast<QClassifier *>(general);
}

/*!
    Designates a set in which instances of Generalization is considered members.
 */
const QSet<QGeneralizationSet *> *QGeneralization::generalizationSets() const
{
    return d_ptr->generalizationSets;
}

void QGeneralization::addGeneralizationSet(const QGeneralizationSet *generalizationSet)
{
    d_ptr->generalizationSets->insert(const_cast<QGeneralizationSet *>(generalizationSet));
}

void QGeneralization::removeGeneralizationSet(const QGeneralizationSet *generalizationSet)
{
    d_ptr->generalizationSets->remove(const_cast<QGeneralizationSet *>(generalizationSet));
}

/*!
    References the specializing classifier in the Generalization relationship.
 */
QClassifier *QGeneralization::specific() const
{
    return d_ptr->specific;
}

void QGeneralization::setSpecific(const QClassifier *specific)
{
    d_ptr->specific = const_cast<QClassifier *>(specific);
}

#include "moc_qgeneralization.cpp"

QT_END_NAMESPACE_QTUML

