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

#include "qwritestructuralfeatureaction.h"
#include "qwritestructuralfeatureaction_p.h"

#include <QtUml/QOutputPin>
#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QWriteStructuralFeatureActionPrivate::QWriteStructuralFeatureActionPrivate() :
    result(0),
    value(0)
{
}

QWriteStructuralFeatureActionPrivate::~QWriteStructuralFeatureActionPrivate()
{
}

/*!
    \class QWriteStructuralFeatureAction

    \inmodule QtUml

    \brief WriteStructuralFeatureAction is an abstract class for structural feature actions that change structural feature values.
 */

QWriteStructuralFeatureAction::QWriteStructuralFeatureAction(QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QStructuralFeatureAction(*new QWriteStructuralFeatureActionPrivate, parent, wrapper)
{
}

QWriteStructuralFeatureAction::QWriteStructuralFeatureAction(QWriteStructuralFeatureActionPrivate &dd, QtMof::QMofObject *parent, QtMof::QMofObject *wrapper) :
    QStructuralFeatureAction(dd, parent, wrapper)
{
}

QWriteStructuralFeatureAction::~QWriteStructuralFeatureAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QWriteStructuralFeatureAction
// ---------------------------------------------------------------

/*!
    Gives the output pin on which the result is put.
 */
QOutputPin *QWriteStructuralFeatureAction::result() const
{
    // This is a read-write association end

    Q_D(const QWriteStructuralFeatureAction);
    return d->result;
}

void QWriteStructuralFeatureAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QWriteStructuralFeatureAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        (qmofobject_cast<QActionPrivate *>(d))->removeOutput(qmofobject_cast<QOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            (qmofobject_cast<QActionPrivate *>(d))->addOutput(qmofobject_cast<QOutputPin *>(result));
        }
    }
}

/*!
    Value to be added or removed from the structural feature.
 */
QInputPin *QWriteStructuralFeatureAction::value() const
{
    // This is a read-write association end

    Q_D(const QWriteStructuralFeatureAction);
    return d->value;
}

void QWriteStructuralFeatureAction::setValue(QInputPin *value)
{
    // This is a read-write association end

    Q_D(QWriteStructuralFeatureAction);
    if (d->value != value) {
        // Adjust subsetted property(ies)
        (qmofobject_cast<QActionPrivate *>(d))->removeInput(qmofobject_cast<QInputPin *>(d->value));

        d->value = value;

        // Adjust subsetted property(ies)
        if (value) {
            (qmofobject_cast<QActionPrivate *>(d))->addInput(qmofobject_cast<QInputPin *>(value));
        }
    }
}

#include "moc_qwritestructuralfeatureaction.cpp"

QT_END_NAMESPACE_QTUML

