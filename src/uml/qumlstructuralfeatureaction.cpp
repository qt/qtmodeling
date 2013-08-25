/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlstructuralfeatureaction.h"
#include "qumlstructuralfeatureaction_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlStructuralFeature>

QT_BEGIN_NAMESPACE

QUmlStructuralFeatureActionPrivate::QUmlStructuralFeatureActionPrivate() :
    object(0),
    structuralFeature(0)
{
}

/*!
    \class QUmlStructuralFeatureAction

    \inmodule QtUml

    \brief StructuralFeatureAction is an abstract class for all structural feature actions.
 */

QUmlStructuralFeatureAction::QUmlStructuralFeatureAction(bool create_d_ptr) :
    QUmlAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlStructuralFeatureActionPrivate);
}

// OWNED ATTRIBUTES

/*!
    Gives the input pin from which the object whose structural feature is to be read or written is obtained.
 */
QUmlInputPin *QUmlStructuralFeatureAction::object() const
{
    // This is a read-write association end

    QM_D(const QUmlStructuralFeatureAction);
    return d->object;
}

void QUmlStructuralFeatureAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    QM_D(QUmlStructuralFeatureAction);
    if (d->object != object) {
        d->object = object;
    }
}

/*!
    Structural feature to be read.
 */
QUmlStructuralFeature *QUmlStructuralFeatureAction::structuralFeature() const
{
    // This is a read-write association end

    QM_D(const QUmlStructuralFeatureAction);
    return d->structuralFeature;
}

void QUmlStructuralFeatureAction::setStructuralFeature(QUmlStructuralFeature *structuralFeature)
{
    // This is a read-write association end

    QM_D(QUmlStructuralFeatureAction);
    if (d->structuralFeature != structuralFeature) {
        d->structuralFeature = structuralFeature;
    }
}

QT_END_NAMESPACE

