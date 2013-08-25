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
#include "qumlclassifier.h"
#include "qumlclassifier_p.h"

#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlClassifierPrivate::QUmlClassifierPrivate() :
    isAbstract(false),
    isFinalSpecialization(false),
    ownedTemplateSignature(0),
    representation(0),
    templateParameter(0)
{
}

/*!
    \class QUmlClassifier

    \inmodule QtUml

    \brief A classifier is a classification of instances - it describes a set of instances that have features in common. A classifier can specify a generalization hierarchy by referencing its general classifiers.A classifier has the capability to own use cases. Although the owning classifier typically represents the subject to which the owned use cases apply, this is not necessarily the case. In principle, the same use case can be applied to multiple subjects, as identified by the subject association role of a use case.Classifier is defined to be a kind of templateable element so that a classifier can be parameterized. It is also defined to be a kind of parameterable element so that a classifier can be a formal template parameter.A classifier has the capability to own collaboration uses. These collaboration uses link a collaboration with the classifier to give a description of the workings of the classifier.
 */

QUmlClassifier::QUmlClassifier(bool create_d_ptr) :
    QUmlNamespace(false),
    QUmlType(false),
    QUmlRedefinableElement(false),
    QUmlTemplateableElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlClassifierPrivate);
}

// Owned attributes

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
QSet<QUmlProperty *> QUmlClassifier::attribute() const
{
    return QSet<QUmlProperty *>();
}

/*!
    References the collaboration uses owned by the classifier.
 */
QSet<QUmlCollaborationUse *> QUmlClassifier::collaborationUse() const
{
    return QSet<QUmlCollaborationUse *>();
}

void QUmlClassifier::addCollaborationUse(QSet<QUmlCollaborationUse *> collaborationUse)
{
    Q_UNUSED(collaborationUse);
}

void QUmlClassifier::removeCollaborationUse(QSet<QUmlCollaborationUse *> collaborationUse)
{
    Q_UNUSED(collaborationUse);
}

/*!
    Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features.
 */
QSet<QUmlFeature *> QUmlClassifier::feature() const
{
    return QSet<QUmlFeature *>();
}

/*!
    Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship.
 */
QSet<QUmlClassifier *> QUmlClassifier::general() const
{
    return QSet<QUmlClassifier *>();
}

void QUmlClassifier::addGeneral(QSet<QUmlClassifier *> general)
{
    Q_UNUSED(general);
}

void QUmlClassifier::removeGeneral(QSet<QUmlClassifier *> general)
{
    Q_UNUSED(general);
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
QSet<QUmlGeneralization *> QUmlClassifier::generalization() const
{
    return QSet<QUmlGeneralization *>();
}

void QUmlClassifier::addGeneralization(QSet<QUmlGeneralization *> generalization)
{
    Q_UNUSED(generalization);
}

void QUmlClassifier::removeGeneralization(QSet<QUmlGeneralization *> generalization)
{
    Q_UNUSED(generalization);
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
QSet<QUmlNamedElement *> QUmlClassifier::inheritedMember() const
{
    return QSet<QUmlNamedElement *>();
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QUmlClassifier::isAbstract() const
{
    return bool();
}

void QUmlClassifier::setAbstract(bool isAbstract)
{
    Q_UNUSED(isAbstract);
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QUmlClassifier::isFinalSpecialization() const
{
    return bool();
}

void QUmlClassifier::setFinalSpecialization(bool isFinalSpecialization)
{
    Q_UNUSED(isFinalSpecialization);
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlRedefinableTemplateSignature *QUmlClassifier::ownedTemplateSignature() const
{
    return 0;
}

void QUmlClassifier::setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature)
{
    Q_UNUSED(ownedTemplateSignature);
}

/*!
    References the use cases owned by this classifier.
 */
QSet<QUmlUseCase *> QUmlClassifier::ownedUseCase() const
{
    return QSet<QUmlUseCase *>();
}

void QUmlClassifier::addOwnedUseCase(QSet<QUmlUseCase *> ownedUseCase)
{
    Q_UNUSED(ownedUseCase);
}

void QUmlClassifier::removeOwnedUseCase(QSet<QUmlUseCase *> ownedUseCase)
{
    Q_UNUSED(ownedUseCase);
}

/*!
    Designates the GeneralizationSet of which the associated Classifier is a power type.
 */
QSet<QUmlGeneralizationSet *> QUmlClassifier::powertypeExtent() const
{
    return QSet<QUmlGeneralizationSet *>();
}

void QUmlClassifier::addPowertypeExtent(QSet<QUmlGeneralizationSet *> powertypeExtent)
{
    Q_UNUSED(powertypeExtent);
}

void QUmlClassifier::removePowertypeExtent(QSet<QUmlGeneralizationSet *> powertypeExtent)
{
    Q_UNUSED(powertypeExtent);
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
QSet<QUmlClassifier *> QUmlClassifier::redefinedClassifier() const
{
    return QSet<QUmlClassifier *>();
}

void QUmlClassifier::addRedefinedClassifier(QSet<QUmlClassifier *> redefinedClassifier)
{
    Q_UNUSED(redefinedClassifier);
}

void QUmlClassifier::removeRedefinedClassifier(QSet<QUmlClassifier *> redefinedClassifier)
{
    Q_UNUSED(redefinedClassifier);
}

/*!
    References a collaboration use which indicates the collaboration that represents this classifier.
 */
QUmlCollaborationUse *QUmlClassifier::representation() const
{
    return 0;
}

void QUmlClassifier::setRepresentation(QUmlCollaborationUse *representation)
{
    Q_UNUSED(representation);
}

/*!
    References the substitutions that are owned by this Classifier.
 */
QSet<QUmlSubstitution *> QUmlClassifier::substitution() const
{
    return QSet<QUmlSubstitution *>();
}

void QUmlClassifier::addSubstitution(QSet<QUmlSubstitution *> substitution)
{
    Q_UNUSED(substitution);
}

void QUmlClassifier::removeSubstitution(QSet<QUmlSubstitution *> substitution)
{
    Q_UNUSED(substitution);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlClassifierTemplateParameter *QUmlClassifier::templateParameter() const
{
    return 0;
}

void QUmlClassifier::setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter)
{
    Q_UNUSED(templateParameter);
}

/*!
    The set of use cases for which this Classifier is the subject.
 */
QSet<QUmlUseCase *> QUmlClassifier::useCase() const
{
    return QSet<QUmlUseCase *>();
}

void QUmlClassifier::addUseCase(QSet<QUmlUseCase *> useCase)
{
    Q_UNUSED(useCase);
}

void QUmlClassifier::removeUseCase(QSet<QUmlUseCase *> useCase)
{
    Q_UNUSED(useCase);
}

// Operations

/*!
    The query allFeatures() gives all of the features in the namespace of the classifier. In general, through mechanisms such as inheritance, this will be a larger set than feature.
 */
QSet<QUmlFeature *> QUmlClassifier::allFeatures() const
{
    return QSet<QUmlFeature *> ();
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlClassifier::allParents() const
{
    return QSet<QUmlClassifier *> ();
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool QUmlClassifier::conformsTo(QUmlClassifier *other) const
{
    Q_UNUSED(other);
    return bool ();
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool QUmlClassifier::hasVisibilityOf(QUmlNamedElement *n) const
{
    Q_UNUSED(n);
    return bool ();
}

/*!
    The inherit operation is overridden to exclude redefined properties.The query inherit() defines how to inherit a set of elements. Here the operation is defined to inherit them all. It is intended to be redefined in circumstances where inheritance is affected by redefinition.
 */
QSet<QUmlNamedElement *> QUmlClassifier::inherit(QSet<QUmlNamedElement *> inhs) const
{
    Q_UNUSED(inhs);
    return QSet<QUmlNamedElement *> ();
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
QSet<QUmlNamedElement *> QUmlClassifier::inheritableMembers(QUmlClassifier *c) const
{
    Q_UNUSED(c);
    return QSet<QUmlNamedElement *> ();
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QUmlClassifier::isTemplate() const
{
    return bool ();
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool QUmlClassifier::maySpecializeType(QUmlClassifier *c) const
{
    Q_UNUSED(c);
    return bool ();
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
QSet<QUmlClassifier *> QUmlClassifier::parents() const
{
    return QSet<QUmlClassifier *> ();
}

QT_END_NAMESPACE

