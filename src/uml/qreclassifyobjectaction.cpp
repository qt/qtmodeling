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

QT_BEGIN_NAMESPACE_QTUML

class QReclassifyObjectActionPrivate
{
public:
    explicit QReclassifyObjectActionPrivate();
    virtual ~QReclassifyObjectActionPrivate();

    bool isReplaceAll;
    QSet<QClassifier *> *newClassifiers;
    QInputPin *object;
    QSet<QClassifier *> *oldClassifiers;
};

QReclassifyObjectActionPrivate::QReclassifyObjectActionPrivate() :
    isReplaceAll(false),
    newClassifiers(new QSet<QClassifier *>),
    oldClassifiers(new QSet<QClassifier *>)
{
}

QReclassifyObjectActionPrivate::~QReclassifyObjectActionPrivate()
{
    delete newClassifiers;
    delete oldClassifiers;
}

/*!
    \class QReclassifyObjectAction

    \inmodule QtUml

    \brief A reclassify object action is an action that changes which classifiers classify an object.
 */

QReclassifyObjectAction::QReclassifyObjectAction(QObject *parent)
    : QObject(parent), d_ptr(new QReclassifyObjectActionPrivate)
{
}

QReclassifyObjectAction::~QReclassifyObjectAction()
{
    delete d_ptr;
}

/*!
    Specifies whether existing classifiers should be removed before adding the new classifiers.
 */
bool QReclassifyObjectAction::isReplaceAll() const
{
    return d_ptr->isReplaceAll;
}

void QReclassifyObjectAction::setReplaceAll(bool isReplaceAll)
{
    d_ptr->isReplaceAll = isReplaceAll;
}

/*!
    A set of classifiers to be added to the classifiers of the object.
 */
const QSet<QClassifier *> *QReclassifyObjectAction::newClassifiers() const
{
    return d_ptr->newClassifiers;
}

void QReclassifyObjectAction::addNewClassifier(const QClassifier *newClassifier)
{
    d_ptr->newClassifiers->insert(const_cast<QClassifier *>(newClassifier));
}

void QReclassifyObjectAction::removeNewClassifier(const QClassifier *newClassifier)
{
    d_ptr->newClassifiers->remove(const_cast<QClassifier *>(newClassifier));
}

/*!
    Holds the object to be reclassified.
 */
QInputPin *QReclassifyObjectAction::object() const
{
    return d_ptr->object;
}

void QReclassifyObjectAction::setObject(const QInputPin *object)
{
    d_ptr->object = const_cast<QInputPin *>(object);
}

/*!
    A set of classifiers to be removed from the classifiers of the object.
 */
const QSet<QClassifier *> *QReclassifyObjectAction::oldClassifiers() const
{
    return d_ptr->oldClassifiers;
}

void QReclassifyObjectAction::addOldClassifier(const QClassifier *oldClassifier)
{
    d_ptr->oldClassifiers->insert(const_cast<QClassifier *>(oldClassifier));
}

void QReclassifyObjectAction::removeOldClassifier(const QClassifier *oldClassifier)
{
    d_ptr->oldClassifiers->remove(const_cast<QClassifier *>(oldClassifier));
}

#include "moc_qreclassifyobjectaction.cpp"

QT_END_NAMESPACE_QTUML

