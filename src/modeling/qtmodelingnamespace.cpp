/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtModeling module of the Qt Toolkit.
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
#include "qtmodelingnamespace.h"

QT_BEGIN_NAMESPACE

/*!
    \class QtModeling

    \inmodule QtModeling

    \brief The QtModeling namespace contains miscellanious
    identifiers used throughout the QtModeling library.
*/

/*!
    Teste
*/
QtModeling::QtModeling()
{
}

/*!
    \enum QtModeling::MetaPropertyDataRole

    This enum type specifies the roles metadata plays in metaproperty extensions.

    \value AggregationRole
           Indicates the metaproperty aggregation type (None, Shared, Composite).
    \value OppositeEndRole
           Contains the properties that are opposite to the metaproperty.
    \value DocumentationRole
           Provides metaproperty documentation.
    \value RedefinedPropertiesRole
           Contains the properties that are redefined by the metaproperty.
    \value SubsettedPropertiesRole
           Contains the properties that are subsetted by the metaproperty;
    \value IsDerivedUnionRole
           Indicates if the metaproperty is a derived union.
    \value IsDerivedRole
           Indicates if the metaproperty is derived.
    \value PropertyClassRole
           Indicates the class in the pseudo hierarchy where the metaproperty has been defined.
    \value PropertyTypeRole
           Indicates if the property is a model element, imported element, imported package, or applied profile.
    \value UserRole
           First role for user-defined metadata.
*/

/*!
    \enum QtModeling::ModelingObjectRole

    This enum type specifies the roles an element can play in a model.

    \value ModelElementRole
           Indicates the element has been originally defined in the model.
    \value ImportedElementRole
           Indicates the element has been imported from other model.
    \value ImportedPackageRole
           Indicates the element is a package (group of elements) imported from other model.
    \value AppliedProfileRole
           Indicates the element is a profile applied to the original model.
*/

QT_END_NAMESPACE

