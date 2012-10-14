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

#include "qreadstructuralfeatureaction.h"
#include "qreadstructuralfeatureaction_p.h"
#include "qaction_p.h"

#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QReadStructuralFeatureActionPrivate::QReadStructuralFeatureActionPrivate() :
    result(0)
{
}

QReadStructuralFeatureActionPrivate::~QReadStructuralFeatureActionPrivate()
{
}

void QReadStructuralFeatureActionPrivate::setResult(QOutputPin *result)
{
    // This is a read-write association end

    // Adjust subsetted property(ies)
    removeOutput(this->result);

    this->result = result;

    // Adjust subsetted property(ies)
    addOutput(result);
}

/*!
    \class QReadStructuralFeatureAction

    \inmodule QtUml

    \brief A read structural feature action is a structural feature action that retrieves the values of a structural feature.
 */

QReadStructuralFeatureAction::QReadStructuralFeatureAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QReadStructuralFeatureActionPrivate;
}

QReadStructuralFeatureAction::QReadStructuralFeatureAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QReadStructuralFeatureActionPrivate;
}

QReadStructuralFeatureAction::~QReadStructuralFeatureAction()
{
}

/*!
    Gives the output pin on which the result is put.
 */
QOutputPin *QReadStructuralFeatureAction::result() const
{
    // This is a read-write association end

    QTUML_D(const QReadStructuralFeatureAction);
    return d->result;
}

void QReadStructuralFeatureAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    QTUML_D(QReadStructuralFeatureAction);
    if (d->result != result) {
        d->setResult(result);
    }
}

#include "moc_qreadstructuralfeatureaction.cpp"

QT_END_NAMESPACE_QTUML

