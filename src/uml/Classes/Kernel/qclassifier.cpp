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

#include "qclassifier.h"
//#include "qclassifier_p.h"

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

/*!
    \class QClassifier

    \inmodule QtUml

    \brief A classifier is a classification of instances - it describes a set of instances that have features in common. A classifier can specify a generalization hierarchy by referencing its general classifiers.
 */

QClassifier::QClassifier()
{
}

QClassifier::~QClassifier()
{
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QClassifier::isAbstract() const
{
}

void QClassifier::setAbstract(bool isAbstract)
{
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QClassifier::isFinalSpecialization() const
{
}

void QClassifier::setFinalSpecialization(bool isFinalSpecialization)
{
}

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
const QList<QProperty *> *QClassifier::attribute() const
{
}

/*!
    Specifies each feature defined in the classifier.
 */
const QList<QFeature *> *QClassifier::feature() const
{
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QList<QGeneralization *> *QClassifier::generalization()
{
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QList<QClassifier *> *QClassifier::redefinedClassifier()
{
}

/*!
    The query allFeatures() gives all of the features in the namespace of the classifier. In general, through mechanisms such as inheritance, this will be a larger set than feature.
 */
const QList<QFeature *> *QClassifier::allFeatures() const
{
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
const QList<QClassifier *> *QClassifier::allParents() const
{
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool QClassifier::conformsTo(const QClassifier *other) const
{
}

/*!
    The general classifiers are the classifiers referenced by the generalization relationships.
 */
const QList<QClassifier *> *QClassifier::general() const
{
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool QClassifier::hasVisibilityOf(const QNamedElement *n) const
{
}

/*!
    The query inherit() defines how to inherit a set of elements. Here the operation is defined to inherit them all. It is intended to be redefined in circumstances where inheritance is affected by redefinition.
 */
const QList<QNamedElement *> *QClassifier::inherit(const QList<QNamedElement *> *inhs) const
{
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
const QList<QNamedElement *> *QClassifier::inheritableMembers(const QClassifier *c) const
{
}

/*!
    The inheritedMember association is derived by inheriting the inheritable members of the parents.
 */
const QList<QNamedElement *> *QClassifier::inheritedMember() const
{
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool QClassifier::maySpecializeType(const QClassifier *c) const
{
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
const QList<QClassifier *> *QClassifier::parents() const
{
}

QT_END_NAMESPACE_UML_CLASSES_KERNEL

