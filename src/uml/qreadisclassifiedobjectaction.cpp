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

#include "qreadisclassifiedobjectaction.h"
#include "qreadisclassifiedobjectaction_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QInputPin>
#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QReadIsClassifiedObjectActionPrivate::QReadIsClassifiedObjectActionPrivate() :
    isDirect(false),
    result(0),
    object(0),
    classifier(0)
{
}

QReadIsClassifiedObjectActionPrivate::~QReadIsClassifiedObjectActionPrivate()
{
}

/*!
    \class QReadIsClassifiedObjectAction

    \inmodule QtUml

    \brief A read is classified object action is an action that determines whether a runtime object is classified by a given classifier.
 */

QReadIsClassifiedObjectAction::QReadIsClassifiedObjectAction(QObject *parent) :
    QAction(*new QReadIsClassifiedObjectActionPrivate, parent)
{
}

QReadIsClassifiedObjectAction::QReadIsClassifiedObjectAction(QReadIsClassifiedObjectActionPrivate &dd, QObject *parent) :
    QAction(dd, parent)
{
}

QReadIsClassifiedObjectAction::~QReadIsClassifiedObjectAction()
{
}

/*!
    Indicates whether the classifier must directly classify the input object.
 */
bool QReadIsClassifiedObjectAction::isDirect() const
{
    // This is a read-write attribute

    Q_D(const QReadIsClassifiedObjectAction);
    return d->isDirect;
}

void QReadIsClassifiedObjectAction::setDirect(bool isDirect)
{
    // This is a read-write attribute

    Q_D(QReadIsClassifiedObjectAction);
    if (d->isDirect != isDirect) {
        d->isDirect = isDirect;
    }
}

/*!
    After termination of the action, will hold the result of the test.
 */
QOutputPin *QReadIsClassifiedObjectAction::result() const
{
    // This is a read-write association end

    Q_D(const QReadIsClassifiedObjectAction);
    return d->result;
}

void QReadIsClassifiedObjectAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QReadIsClassifiedObjectAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        d->QActionPrivate::removeOutput(dynamic_cast<QOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            d->QActionPrivate::addOutput(dynamic_cast<QOutputPin *>(result));
        }
    }
}

/*!
    Holds the object whose classification is to be tested.
 */
QInputPin *QReadIsClassifiedObjectAction::object() const
{
    // This is a read-write association end

    Q_D(const QReadIsClassifiedObjectAction);
    return d->object;
}

void QReadIsClassifiedObjectAction::setObject(QInputPin *object)
{
    // This is a read-write association end

    Q_D(QReadIsClassifiedObjectAction);
    if (d->object != object) {
        // Adjust subsetted property(ies)
        d->QActionPrivate::removeInput(dynamic_cast<QInputPin *>(d->object));

        d->object = object;

        // Adjust subsetted property(ies)
        if (object) {
            d->QActionPrivate::addInput(dynamic_cast<QInputPin *>(object));
        }
    }
}

/*!
    The classifier against which the classification of the input object is tested.
 */
QClassifier *QReadIsClassifiedObjectAction::classifier() const
{
    // This is a read-write association end

    Q_D(const QReadIsClassifiedObjectAction);
    return d->classifier;
}

void QReadIsClassifiedObjectAction::setClassifier(QClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QReadIsClassifiedObjectAction);
    if (d->classifier != classifier) {
        d->classifier = classifier;
    }
}

#include "moc_qreadisclassifiedobjectaction.cpp"

QT_END_NAMESPACE_QTUML

