/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qtmofnamespace.h"

QT_BEGIN_NAMESPACE

/*!
    \enum QtMof::AggregationKind

    AggregationKind is an enumeration type that specifies the literals for defining the kind of aggregation of a property.

    \value AggregationNone
    Indicates that the property has no aggregation.
    \value AggregationShared
    Indicates that the property has a shared aggregation.
    \value AggregationComposite
    Indicates that the property is aggregated compositely, i.e., the composite object has responsibility for the existence and storage of the composed objects (parts).
 */

/*!
    \enum QtMof::ParameterDirectionKind

    Parameter direction kind is an enumeration type that defines literals used to specify direction of parameters.

    \value ParameterDirectionIn
    Indicates that parameter values are passed into the behavioral element by the caller.
    \value ParameterDirectionInout
    Indicates that parameter values are passed into a behavioral element by the caller and then back out to the caller from the behavioral element.
    \value ParameterDirectionOut
    \value ParameterDirectionReturn
    Indicates that parameter values are passed as return values from a behavioral element back to the caller.
 */

/*!
    \enum QtMof::VisibilityKind

    VisibilityKind is an enumeration type that defines literals to determine the visibility of elements in a model.

    \value VisibilityPublic
    \value VisibilityPrivate
    \value VisibilityProtected
    \value VisibilityPackage
 */

QT_END_NAMESPACE

