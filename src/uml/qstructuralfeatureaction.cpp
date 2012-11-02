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

#include "qstructuralfeatureaction.h"
#include "qstructuralfeatureaction_p.h"

#include <QtUml/QInputPin>
#include <QtUml/QStructuralFeature>

QT_BEGIN_NAMESPACE_QTUML

QStructuralFeatureActionPrivate::QStructuralFeatureActionPrivate() :
    object(0),
    structuralFeature(0)
{
}

QStructuralFeatureActionPrivate::~QStructuralFeatureActionPrivate()
{
}

/*!
    \class QStructuralFeatureAction

    \inmodule QtUml

    \brief StructuralFeatureAction is an abstract class for all structural feature actions.
 */

QStructuralFeatureAction::QStructuralFeatureAction(QObject *parent) :
    QAction(*new QStructuralFeatureActionPrivate, parent)
{
}

QStructuralFeatureAction::QStructuralFeatureAction(QStructuralFeatureActionPrivate &dd, QObject *parent) :
    QAction(dd, parent)
{
}

QStructuralFeatureAction::~QStructuralFeatureAction()
{
}

/*!
    Gives the input pin from which the object whose structural feature is to be read or written is obtained.
 */
QInputPin *QStructuralFeatureAction::object() const
{
    // This is a read-write association end

    Q_D(const QStructuralFeatureAction);
    return d->object;
}

void QStructuralFeatureAction::setObject(QInputPin *object)
{
    // This is a read-write association end

    Q_D(QStructuralFeatureAction);
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
    Structural feature to be read.
 */
QStructuralFeature *QStructuralFeatureAction::structuralFeature() const
{
    // This is a read-write association end

    Q_D(const QStructuralFeatureAction);
    return d->structuralFeature;
}

void QStructuralFeatureAction::setStructuralFeature(QStructuralFeature *structuralFeature)
{
    // This is a read-write association end

    Q_D(QStructuralFeatureAction);
    if (d->structuralFeature != structuralFeature) {
        d->structuralFeature = structuralFeature;
    }
}

QT_END_NAMESPACE_QTUML

