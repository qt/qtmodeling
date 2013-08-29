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
#include "umlgeneralizationset_p.h"

#include "private/umlclassifier_p.h"
#include "private/umlgeneralization_p.h"

/*!
    \class UmlGeneralizationSet

    \inmodule QtUml

    \brief A generalization set is a packageable element whose instances define collections of subsets of generalization relationships.
 */

UmlGeneralizationSet::UmlGeneralizationSet() :
    _isCovering(false),
    _isDisjoint(false),
    _powertype(0)
{
}

// OWNED ATTRIBUTES

/*!
    Designates the instances of Generalization which are members of a given GeneralizationSet.
 */
const QSet<UmlGeneralization *> UmlGeneralizationSet::generalization() const
{
    // This is a read-write association end

    return _generalization;
}

void UmlGeneralizationSet::addGeneralization(UmlGeneralization *generalization)
{
    // This is a read-write association end

    if (!_generalization.contains(generalization)) {
        _generalization.insert(generalization);

        // Adjust opposite properties
        if (generalization) {
            generalization->addGeneralizationSet(this);
        }
    }
}

void UmlGeneralizationSet::removeGeneralization(UmlGeneralization *generalization)
{
    // This is a read-write association end

    if (_generalization.contains(generalization)) {
        _generalization.remove(generalization);

        // Adjust opposite properties
        if (generalization) {
            generalization->removeGeneralizationSet(this);
        }
    }
}

/*!
    Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an instance of at least one of its specific Classifiers for the GeneralizationSet. When isCovering is false, there are one or more instances of the particular general Classifier that are not instances of at least one of its specific Classifiers defined for the GeneralizationSet.
 */
bool UmlGeneralizationSet::isCovering() const
{
    // This is a read-write property

    return _isCovering;
}

void UmlGeneralizationSet::setCovering(bool isCovering)
{
    // This is a read-write property

    if (_isCovering != isCovering) {
        _isCovering = isCovering;
    }
}

/*!
    Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular GeneralizationSet have one or more members in common; that is, their intersection is not empty. For example, Person could have two Generalization relationships, each with the different specific Classifier: Manager or Staff. This would be disjoint because every instance of Person must either be a Manager or Staff. In contrast, Person could have two Generalization relationships involving two specific (and non-covering) Classifiers: Sales Person and Manager. This GeneralizationSet would not be disjoint because there are instances of Person which can be a Sales Person and a Manager.
 */
bool UmlGeneralizationSet::isDisjoint() const
{
    // This is a read-write property

    return _isDisjoint;
}

void UmlGeneralizationSet::setDisjoint(bool isDisjoint)
{
    // This is a read-write property

    if (_isDisjoint != isDisjoint) {
        _isDisjoint = isDisjoint;
    }
}

/*!
    Designates the Classifier that is defined as the power type for the associated GeneralizationSet.
 */
UmlClassifier *UmlGeneralizationSet::powertype() const
{
    // This is a read-write association end

    return _powertype;
}

void UmlGeneralizationSet::setPowertype(UmlClassifier *powertype)
{
    // This is a read-write association end

    if (_powertype != powertype) {
        _powertype = powertype;
    }
}

