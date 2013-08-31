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
#include "umlgeneralization_p.h"

#include "private/umlclassifier_p.h"
#include "private/umlgeneralizationset_p.h"

UmlGeneralization::UmlGeneralization() :
    _general(0),
    _isSubstitutable(true),
    _specific(0)
{
}

// OWNED ATTRIBUTES

UmlClassifier *UmlGeneralization::general() const
{
    // This is a read-write association end

    return _general;
}

void UmlGeneralization::setGeneral(UmlClassifier *general)
{
    // This is a read-write association end

    if (_general != general) {
        // Adjust subsetted properties
        removeTarget(_general);

        _general = general;

        // Adjust subsetted properties
        if (general) {
            addTarget(general);
        }
    }
}

const QSet<UmlGeneralizationSet *> UmlGeneralization::generalizationSet() const
{
    // This is a read-write association end

    return _generalizationSet;
}

void UmlGeneralization::addGeneralizationSet(UmlGeneralizationSet *generalizationSet)
{
    // This is a read-write association end

    if (!_generalizationSet.contains(generalizationSet)) {
        _generalizationSet.insert(generalizationSet);

        // Adjust opposite properties
        if (generalizationSet) {
            generalizationSet->addGeneralization(this);
        }
    }
}

void UmlGeneralization::removeGeneralizationSet(UmlGeneralizationSet *generalizationSet)
{
    // This is a read-write association end

    if (_generalizationSet.contains(generalizationSet)) {
        _generalizationSet.remove(generalizationSet);

        // Adjust opposite properties
        if (generalizationSet) {
            generalizationSet->removeGeneralization(this);
        }
    }
}

bool UmlGeneralization::isSubstitutable() const
{
    // This is a read-write property

    return _isSubstitutable;
}

void UmlGeneralization::setSubstitutable(bool isSubstitutable)
{
    // This is a read-write property

    if (_isSubstitutable != isSubstitutable) {
        _isSubstitutable = isSubstitutable;
    }
}

UmlClassifier *UmlGeneralization::specific() const
{
    // This is a read-write association end

    return _specific;
}

void UmlGeneralization::setSpecific(UmlClassifier *specific)
{
    // This is a read-write association end

    if (_specific != specific) {
        // Adjust subsetted properties
        removeSource(_specific);

        _specific = specific;

        // Adjust subsetted properties
        setOwner(specific);
        if (specific) {
            addSource(specific);
        }
    }
}

