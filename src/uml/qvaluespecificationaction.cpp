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

#include "qvaluespecificationaction.h"
#include "qvaluespecificationaction_p.h"

#include <QtUml/QOutputPin>
#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QValueSpecificationActionPrivate::QValueSpecificationActionPrivate() :
    value(0),
    result(0)
{
}

QValueSpecificationActionPrivate::~QValueSpecificationActionPrivate()
{
}

/*!
    \class QValueSpecificationAction

    \inmodule QtUml

    \brief A value specification action is an action that evaluates a value specification.
 */

QValueSpecificationAction::QValueSpecificationAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(*new QValueSpecificationActionPrivate, parent, wrapper)
{
}

QValueSpecificationAction::QValueSpecificationAction(QValueSpecificationActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(dd, parent, wrapper)
{
}

QValueSpecificationAction::~QValueSpecificationAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QValueSpecificationAction
// ---------------------------------------------------------------

/*!
    Value specification to be evaluated.
 */
QValueSpecification *QValueSpecificationAction::value() const
{
    // This is a read-write association end

    Q_D(const QValueSpecificationAction);
    return d->value;
}

void QValueSpecificationAction::setValue(QValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QValueSpecificationAction);
    if (d->value != value) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->value));

        d->value = value;

        // Adjust subsetted property(ies)
        if (value) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(value));
        }
    }
}

/*!
    Gives the output pin on which the result is put.
 */
QOutputPin *QValueSpecificationAction::result() const
{
    // This is a read-write association end

    Q_D(const QValueSpecificationAction);
    return d->result;
}

void QValueSpecificationAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QValueSpecificationAction);
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

void QValueSpecificationAction::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QValueSpecificationAction) *>("QT_PREPEND_NAMESPACE_QTUML(QValueSpecificationAction) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QValueSpecificationAction) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QValueSpecificationAction) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QValueSpecificationAction) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QValueSpecificationAction) *> *");
    qRegisterMetaType<QValueSpecificationAction *>("QValueSpecificationAction *");
    qRegisterMetaType<const QSet<QValueSpecificationAction *> *>("const QSet<QValueSpecificationAction *> *");
    qRegisterMetaType<const QList<QValueSpecificationAction *> *>("const QList<QValueSpecificationAction *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *>("QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *");
    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<const QSet<QOutputPin *> *>("const QSet<QOutputPin *> *");
    qRegisterMetaType<const QList<QOutputPin *> *>("const QList<QOutputPin *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *>("QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *> *");
    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
    qRegisterMetaType<const QSet<QValueSpecification *> *>("const QSet<QValueSpecification *> *");
    qRegisterMetaType<const QList<QValueSpecification *> *>("const QList<QValueSpecification *> *");


    QAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qvaluespecificationaction.cpp"

QT_END_NAMESPACE_QTUML

