/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofclassifier.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofElement>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofFeature>
#include <QtMof/QMofGeneralization>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofObject>
#include <QtMof/QMofPackage>
#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofPackageImport>
#include <QtMof/QMofProperty>

QT_BEGIN_NAMESPACE

/*!
    \class QMofClassifier

    \inmodule QtMof

    \brief A classifier is a classification of instances - it describes a set of instances that have features in common. A classifier can specify a generalization hierarchy by referencing its general classifiers.
 */
QMofClassifier::QMofClassifier() :
    _isAbstract(false),
    _isFinalSpecialization(false)
{
}

QModelingElement *QMofClassifier::clone() const
{
    QMofClassifier *c = new QMofClassifier;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    if (package())
        c->setPackage(dynamic_cast<QMofPackage *>(package()->clone()));
    c->setLeaf(isLeaf());
    foreach (QMofElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QMofElementImport *>(element->clone()));
    foreach (QMofConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QMofConstraint *>(element->clone()));
    foreach (QMofPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QMofPackageImport *>(element->clone()));
    foreach (QMofGeneralization *element, generalizations())
        c->addGeneralization(dynamic_cast<QMofGeneralization *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setFinalSpecialization(isFinalSpecialization());
    foreach (QMofClassifier *element, redefinedClassifiers())
        c->addRedefinedClassifier(dynamic_cast<QMofClassifier *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier.
 */
const QSet<QMofProperty *> QMofClassifier::attributes() const
{
    // This is a read-only derived union association end

    return _attributes;
}

void QMofClassifier::addAttribute(QMofProperty *attribute)
{
    // This is a read-only derived union association end

    if (!_attributes.contains(attribute)) {
        _attributes.insert(attribute);
        if (attribute && attribute->asQModelingObject() && this->asQModelingObject())
            QObject::connect(attribute->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeAttribute(QObject *)));

        // Adjust subsetted properties
        addFeature(attribute);
    }
}

void QMofClassifier::removeAttribute(QMofProperty *attribute)
{
    // This is a read-only derived union association end

    if (_attributes.contains(attribute)) {
        _attributes.remove(attribute);

        // Adjust subsetted properties
        removeFeature(attribute);
    }
}

/*!
    Specifies each feature defined in the classifier.
 */
const QSet<QMofFeature *> QMofClassifier::features() const
{
    // This is a read-only derived union association end

    return _features;
}

void QMofClassifier::addFeature(QMofFeature *feature)
{
    // This is a read-only derived union association end

    if (!_features.contains(feature)) {
        _features.insert(feature);
        if (feature && feature->asQModelingObject() && this->asQModelingObject())
            QObject::connect(feature->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeFeature(QObject *)));

        // Adjust subsetted properties
        addMember(feature);

        // Adjust opposite properties
        if (feature) {
            feature->addFeaturingClassifier(this);
        }
    }
}

void QMofClassifier::removeFeature(QMofFeature *feature)
{
    // This is a read-only derived union association end

    if (_features.contains(feature)) {
        _features.remove(feature);

        // Adjust subsetted properties
        removeMember(feature);

        // Adjust opposite properties
        if (feature) {
            feature->removeFeaturingClassifier(this);
        }
    }
}

/*!
    Specifies the general Classifiers for this Classifier.
 */
const QSet<QMofClassifier *> QMofClassifier::generals() const
{
    // This is a read-write derived association end

    qWarning("QMofClassifier::generals(): to be implemented (this is a derived association end)");

    return QSet<QMofClassifier *>();
}

void QMofClassifier::addGeneral(QMofClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QMofClassifier::addGeneral(): to be implemented (this is a derived association end)");
    Q_UNUSED(general);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QMofClassifier::removeGeneral(QMofClassifier *general)
{
    // This is a read-write derived association end

    qWarning("QMofClassifier::removeGeneral(): to be implemented (this is a derived association end)");
    Q_UNUSED(general);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy.
 */
const QSet<QMofGeneralization *> QMofClassifier::generalizations() const
{
    // This is a read-write association end

    return _generalizations;
}

void QMofClassifier::addGeneralization(QMofGeneralization *generalization)
{
    // This is a read-write association end

    if (!_generalizations.contains(generalization)) {
        _generalizations.insert(generalization);
        if (generalization && generalization->asQModelingObject() && this->asQModelingObject())
            QObject::connect(generalization->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeGeneralization(QObject *)));
        generalization->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(generalization);

        // Adjust opposite properties
        if (generalization) {
            generalization->setSpecific(this);
        }
    }
}

void QMofClassifier::removeGeneralization(QMofGeneralization *generalization)
{
    // This is a read-write association end

    if (_generalizations.contains(generalization)) {
        _generalizations.remove(generalization);
        if (generalization->asQModelingObject())
            generalization->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(generalization);

        // Adjust opposite properties
        if (generalization) {
            generalization->setSpecific(0);
        }
    }
}

/*!
    Specifies all elements inherited by this classifier from the general classifiers.
 */
const QSet<QMofNamedElement *> QMofClassifier::inheritedMembers() const
{
    // This is a read-only derived association end

    qWarning("QMofClassifier::inheritedMembers(): to be implemented (this is a derived association end)");

    return QSet<QMofNamedElement *>();
}

void QMofClassifier::addInheritedMember(QMofNamedElement *inheritedMember)
{
    // This is a read-only derived association end

    qWarning("QMofClassifier::addInheritedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(inheritedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addMember(inheritedMember);
    }
}

void QMofClassifier::removeInheritedMember(QMofNamedElement *inheritedMember)
{
    // This is a read-only derived association end

    qWarning("QMofClassifier::removeInheritedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(inheritedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removeMember(inheritedMember);
    }
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QMofClassifier::isAbstract() const
{
    // This is a read-write property

    return _isAbstract;
}

void QMofClassifier::setAbstract(bool isAbstract)
{
    // This is a read-write property

    if (_isAbstract != isAbstract) {
        _isAbstract = isAbstract;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isAbstract");
    }
}

/*!
    If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false.
 */
bool QMofClassifier::isFinalSpecialization() const
{
    // This is a read-write property

    return _isFinalSpecialization;
}

void QMofClassifier::setFinalSpecialization(bool isFinalSpecialization)
{
    // This is a read-write property

    if (_isFinalSpecialization != isFinalSpecialization) {
        _isFinalSpecialization = isFinalSpecialization;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isFinalSpecialization");
    }
}

/*!
    References the Classifiers that are redefined by this Classifier.
 */
const QSet<QMofClassifier *> QMofClassifier::redefinedClassifiers() const
{
    // This is a read-write association end

    return _redefinedClassifiers;
}

void QMofClassifier::addRedefinedClassifier(QMofClassifier *redefinedClassifier)
{
    // This is a read-write association end

    if (!_redefinedClassifiers.contains(redefinedClassifier)) {
        _redefinedClassifiers.insert(redefinedClassifier);
        if (redefinedClassifier && redefinedClassifier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(redefinedClassifier->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRedefinedClassifier(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(redefinedClassifier);
    }
}

void QMofClassifier::removeRedefinedClassifier(QMofClassifier *redefinedClassifier)
{
    // This is a read-write association end

    if (_redefinedClassifiers.contains(redefinedClassifier)) {
        _redefinedClassifiers.remove(redefinedClassifier);

        // Adjust subsetted properties
        removeRedefinedElement(redefinedClassifier);
    }
}

// OPERATIONS

/*!
    The query allFeatures() gives all of the features in the namespace of the classifier. In general, through mechanisms such as inheritance, this will be a larger set than feature.
 */
QSet<QMofFeature *> QMofClassifier::allFeatures() const
{
    qWarning("QMofClassifier::allFeatures(): to be implemented (operation)");

    return QSet<QMofFeature *> ();
}

/*!
    The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
 */
QSet<QMofClassifier *> QMofClassifier::allParents() const
{
    qWarning("QMofClassifier::allParents(): to be implemented (operation)");

    return QSet<QMofClassifier *> ();
}

/*!
    The query conformsTo() gives true for a classifier that defines a type that conforms to another. This is used, for example, in the specification of signature conformance for operations.
 */
bool QMofClassifier::conformsTo(QMofClassifier *other) const
{
    qWarning("QMofClassifier::conformsTo(): to be implemented (operation)");

    Q_UNUSED(other);
    return bool ();
}

/*!
    The query hasVisibilityOf() determines whether a named element is visible in the classifier. By default all are visible. It is only called when the argument is something owned by a parent.
 */
bool QMofClassifier::hasVisibilityOf(QMofNamedElement *n) const
{
    qWarning("QMofClassifier::hasVisibilityOf(): to be implemented (operation)");

    Q_UNUSED(n);
    return bool ();
}

/*!
    The query inherit() defines how to inherit a set of elements. Here the operation is defined to inherit them all. It is intended to be redefined in circumstances where inheritance is affected by redefinition.
 */
QSet<QMofNamedElement *> QMofClassifier::inherit(QSet<QMofNamedElement *> inhs) const
{
    qWarning("QMofClassifier::inherit(): to be implemented (operation)");

    Q_UNUSED(inhs);
    return QSet<QMofNamedElement *> ();
}

/*!
    The query inheritableMembers() gives all of the members of a classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
 */
QSet<QMofNamedElement *> QMofClassifier::inheritableMembers(QMofClassifier *c) const
{
    qWarning("QMofClassifier::inheritableMembers(): to be implemented (operation)");

    Q_UNUSED(c);
    return QSet<QMofNamedElement *> ();
}

/*!
    The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
 */
bool QMofClassifier::maySpecializeType(QMofClassifier *c) const
{
    qWarning("QMofClassifier::maySpecializeType(): to be implemented (operation)");

    Q_UNUSED(c);
    return bool ();
}

/*!
    The query parents() gives all of the immediate ancestors of a generalized Classifier.
 */
QSet<QMofClassifier *> QMofClassifier::parents() const
{
    qWarning("QMofClassifier::parents(): to be implemented (operation)");

    return QSet<QMofClassifier *> ();
}

QT_END_NAMESPACE

