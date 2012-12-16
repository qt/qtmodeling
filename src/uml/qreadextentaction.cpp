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

#include "qreadextentaction.h"
#include "qreadextentaction_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QReadExtentActionPrivate::QReadExtentActionPrivate() :
    classifier(0),
    result(0)
{
}

QReadExtentActionPrivate::~QReadExtentActionPrivate()
{
}

/*!
    \class QReadExtentAction

    \inmodule QtUml

    \brief A read extent action is an action that retrieves the current instances of a classifier.
 */

QReadExtentAction::QReadExtentAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(*new QReadExtentActionPrivate, parent, wrapper)
{
}

QReadExtentAction::QReadExtentAction(QReadExtentActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(dd, parent, wrapper)
{
}

QReadExtentAction::~QReadExtentAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QReadExtentAction
// ---------------------------------------------------------------

/*!
    The classifier whose instances are to be retrieved.
 */
QClassifier *QReadExtentAction::classifier() const
{
    // This is a read-write association end

    Q_D(const QReadExtentAction);
    return d->classifier;
}

void QReadExtentAction::setClassifier(QClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QReadExtentAction);
    if (d->classifier != classifier) {
        d->classifier = classifier;
    }
}

/*!
    The runtime instances of the classifier.
 */
QOutputPin *QReadExtentAction::result() const
{
    // This is a read-write association end

    Q_D(const QReadExtentAction);
    return d->result;
}

void QReadExtentAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QReadExtentAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addOutput(qwrappedobject_cast<QOutputPin *>(result));
        }
    }
}

void QReadExtentAction::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QReadExtentAction) *>("QT_PREPEND_NAMESPACE_QTUML(QReadExtentAction) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QReadExtentAction) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QReadExtentAction) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QReadExtentAction) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QReadExtentAction) *> *");
    qRegisterMetaType<QReadExtentAction *>("QReadExtentAction *");
    qRegisterMetaType<const QSet<QReadExtentAction *> *>("const QSet<QReadExtentAction *> *");
    qRegisterMetaType<const QList<QReadExtentAction *> *>("const QList<QReadExtentAction *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *>("QT_PREPEND_NAMESPACE_QTUML(QClassifier) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QClassifier) *> *");
    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<const QSet<QClassifier *> *>("const QSet<QClassifier *> *");
    qRegisterMetaType<const QList<QClassifier *> *>("const QList<QClassifier *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *>("QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *");
    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<const QSet<QOutputPin *> *>("const QSet<QOutputPin *> *");
    qRegisterMetaType<const QList<QOutputPin *> *>("const QList<QOutputPin *> *");


    QAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qreadextentaction.cpp"

QT_END_NAMESPACE_QTUML

