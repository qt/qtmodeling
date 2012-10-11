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

#include "qreclassifyobjectaction.h"
#include "qreclassifyobjectaction_p.h"
#include "qaction_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QReclassifyObjectActionPrivate::QReclassifyObjectActionPrivate() :
    isReplaceAll(false),
    oldClassifiers(new QSet<QClassifier *>),
    object(0),
    newClassifiers(new QSet<QClassifier *>)
{
}

QReclassifyObjectActionPrivate::~QReclassifyObjectActionPrivate()
{
    delete oldClassifiers;
    delete newClassifiers;
}

void QReclassifyObjectActionPrivate::setReplaceAll(bool isReplaceAll)
{
    this->isReplaceAll = isReplaceAll;
}

void QReclassifyObjectActionPrivate::addOldClassifier(const QClassifier *oldClassifier)
{
    this->oldClassifiers->insert(const_cast<QClassifier *>(oldClassifier));
}

void QReclassifyObjectActionPrivate::removeOldClassifier(const QClassifier *oldClassifier)
{
    this->oldClassifiers->remove(const_cast<QClassifier *>(oldClassifier));
}

void QReclassifyObjectActionPrivate::setObject(const QInputPin *object)
{
    // Adjust subsetted property(ies)
    removeInput(this->object);

    this->object = const_cast<QInputPin *>(object);

    // Adjust subsetted property(ies)
    addInput(object);
}

void QReclassifyObjectActionPrivate::addNewClassifier(const QClassifier *newClassifier)
{
    this->newClassifiers->insert(const_cast<QClassifier *>(newClassifier));
}

void QReclassifyObjectActionPrivate::removeNewClassifier(const QClassifier *newClassifier)
{
    this->newClassifiers->remove(const_cast<QClassifier *>(newClassifier));
}

/*!
    \class QReclassifyObjectAction

    \inmodule QtUml

    \brief A reclassify object action is an action that changes which classifiers classify an object.
 */

QReclassifyObjectAction::QReclassifyObjectAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QReclassifyObjectActionPrivate;
}

QReclassifyObjectAction::QReclassifyObjectAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QReclassifyObjectActionPrivate;
}

QReclassifyObjectAction::~QReclassifyObjectAction()
{
}

/*!
    Specifies whether existing classifiers should be removed before adding the new classifiers.
 */
bool QReclassifyObjectAction::isReplaceAll() const
{
    QTUML_D(const QReclassifyObjectAction);
    return d->isReplaceAll;
}

void QReclassifyObjectAction::setReplaceAll(bool isReplaceAll)
{
    QTUML_D(QReclassifyObjectAction);
    d->setReplaceAll(isReplaceAll);
}

/*!
    A set of classifiers to be removed from the classifiers of the object.
 */
const QSet<QClassifier *> *QReclassifyObjectAction::oldClassifiers() const
{
    QTUML_D(const QReclassifyObjectAction);
    return d->oldClassifiers;
}

void QReclassifyObjectAction::addOldClassifier(const QClassifier *oldClassifier)
{
    QTUML_D(QReclassifyObjectAction);
    d->addOldClassifier(const_cast<QClassifier *>(oldClassifier));
}

void QReclassifyObjectAction::removeOldClassifier(const QClassifier *oldClassifier)
{
    QTUML_D(QReclassifyObjectAction);
    d->removeOldClassifier(const_cast<QClassifier *>(oldClassifier));
}

/*!
    Holds the object to be reclassified.
 */
QInputPin *QReclassifyObjectAction::object() const
{
    QTUML_D(const QReclassifyObjectAction);
    return d->object;
}

void QReclassifyObjectAction::setObject(const QInputPin *object)
{
    QTUML_D(QReclassifyObjectAction);
    d->setObject(const_cast<QInputPin *>(object));
}

/*!
    A set of classifiers to be added to the classifiers of the object.
 */
const QSet<QClassifier *> *QReclassifyObjectAction::newClassifiers() const
{
    QTUML_D(const QReclassifyObjectAction);
    return d->newClassifiers;
}

void QReclassifyObjectAction::addNewClassifier(const QClassifier *newClassifier)
{
    QTUML_D(QReclassifyObjectAction);
    d->addNewClassifier(const_cast<QClassifier *>(newClassifier));
}

void QReclassifyObjectAction::removeNewClassifier(const QClassifier *newClassifier)
{
    QTUML_D(QReclassifyObjectAction);
    d->removeNewClassifier(const_cast<QClassifier *>(newClassifier));
}

#include "moc_qreclassifyobjectaction.cpp"

QT_END_NAMESPACE_QTUML

