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
#include "qumlclass.h"

#include "private/qumlclassobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlReception>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlClass

    \inmodule QtUml

    \brief A class may be designated as active (i.e., each of its instances having its own thread of control) or passive (i.e., each of its instances executing within the context of some other object). A class may also specify which signals the instances of this class handle.A class describes a set of objects that share the same specifications of features, constraints, and semantics.A class has the capability to have an internal structure and ports.Class has derived association that indicates how it may be extended through one or more stereotypes. Stereotype is the only kind of metaclass that cannot be extended by stereotypes.
 */

/*!
    Creates a new QUmlClass. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlClass::QUmlClass(bool createQModelingObject) :
    _isAbstract(false),
    _isActive(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlClassObject(this));
}

/*!
    Destroys the QUmlClass.
 */
QUmlClass::~QUmlClass()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlClass.
*/
QModelingElement *QUmlClass::clone() const
{
    QUmlClass *c = new QUmlClass;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlTemplateBinding *element, templateBindings())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    foreach (QUmlCollaborationUse *element, collaborationUses())
        c->addCollaborationUse(dynamic_cast<QUmlCollaborationUse *>(element->clone()));
    foreach (QUmlGeneralization *element, generalizations())
        c->addGeneralization(dynamic_cast<QUmlGeneralization *>(element->clone()));
    c->setFinalSpecialization(isFinalSpecialization());
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlUseCase *element, ownedUseCases())
        c->addOwnedUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    foreach (QUmlSubstitution *element, substitutions())
        c->addSubstitution(dynamic_cast<QUmlSubstitution *>(element->clone()));
    foreach (QUmlConnector *element, ownedConnectors())
        c->addOwnedConnector(dynamic_cast<QUmlConnector *>(element->clone()));
    foreach (QUmlInterfaceRealization *element, interfaceRealizations())
        c->addInterfaceRealization(dynamic_cast<QUmlInterfaceRealization *>(element->clone()));
    foreach (QUmlBehavior *element, ownedBehaviors())
        c->addOwnedBehavior(dynamic_cast<QUmlBehavior *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setActive(isActive());
    foreach (QUmlClassifier *element, nestedClassifiers())
        c->addNestedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    foreach (QUmlProperty *element, ownedAttributes())
        c->addOwnedAttribute(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlOperation *element, ownedOperations())
        c->addOwnedOperation(dynamic_cast<QUmlOperation *>(element->clone()));
    foreach (QUmlReception *element, ownedReceptions())
        c->addOwnedReception(dynamic_cast<QUmlReception *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class.

    \b {This is a read-only derived property.}

    \b {Opposite property(ies):} QUmlExtension::metaclass().
 */
const QSet<QUmlExtension *> QUmlClass::extensions() const
{
    // This is a read-only derived association end

    qWarning("QUmlClass::extensions(): to be implemented (this is a derived association end)");

    return QSet<QUmlExtension *>();
}

/*!
    Adds \a extension to extensions.

    \sa extensions(), removeExtension()
 */
void QUmlClass::addExtension(QUmlExtension *extension)
{
    // This is a read-only derived association end

    qWarning("QUmlClass::addExtension(): to be implemented (this is a derived association end)");
    Q_UNUSED(extension);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (extension) {
            extension->setMetaclass(this);
        }
    }
}

/*!
    Removes \a extension from extensions.

    \sa extensions(), addExtension()
 */
void QUmlClass::removeExtension(QUmlExtension *extension)
{
    // This is a read-only derived association end

    qWarning("QUmlClass::removeExtension(): to be implemented (this is a derived association end)");
    Q_UNUSED(extension);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite properties
        if (extension) {
            extension->setMetaclass(0);
        }
    }
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract.

    \b {Redefined property(ies):} QUmlClassifier::isAbstract().
 */
bool QUmlClass::isAbstract() const
{
    // This is a read-write property

    return _isAbstract;
}

/*!
    Adjusts isAbstract to \a isAbstract.
 */
void QUmlClass::setAbstract(bool isAbstract)
{
    // This is a read-write property

    if (_isAbstract != isAbstract) {
        _isAbstract = isAbstract;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isAbstract");

        // Adjust redefined properties
        QUmlClassifier::setAbstract(isAbstract);
    }
}

/*!
    Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class.
 */
bool QUmlClass::isActive() const
{
    // This is a read-write property

    return _isActive;
}

/*!
    Adjusts isActive to \a isActive.
 */
void QUmlClass::setActive(bool isActive)
{
    // This is a read-write property

    if (_isActive != isActive) {
        _isActive = isActive;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isActive");
    }
}

/*!
    References all the Classifiers that are defined (nested) within the Class.

    \sa addNestedClassifier(), removeNestedClassifier()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().
 */
const QList<QUmlClassifier *> QUmlClass::nestedClassifiers() const
{
    // This is a read-write association end

    return _nestedClassifiers;
}

/*!
    Adds \a nestedClassifier to nestedClassifiers.

    \sa nestedClassifiers(), removeNestedClassifier()
 */
void QUmlClass::addNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    if (!_nestedClassifiers.contains(nestedClassifier)) {
        _nestedClassifiers.append(nestedClassifier);
        if (nestedClassifier && nestedClassifier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(nestedClassifier->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeNestedClassifier(QObject *)));
        nestedClassifier->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(nestedClassifier);
    }
}

/*!
    Removes \a nestedClassifier from nestedClassifiers.

    \sa nestedClassifiers(), addNestedClassifier()
 */
void QUmlClass::removeNestedClassifier(QUmlClassifier *nestedClassifier)
{
    // This is a read-write association end

    if (_nestedClassifiers.contains(nestedClassifier)) {
        _nestedClassifiers.removeAll(nestedClassifier);
        if (nestedClassifier->asQModelingObject())
            nestedClassifier->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(nestedClassifier);
    }
}

/*!
    The attributes (i.e. the properties) owned by the class.

    \sa addOwnedAttribute(), removeOwnedAttribute()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers(), QUmlClassifier::attributes().

    \b {Redefined property(ies):} QUmlStructuredClassifier::ownedAttributes().

    \b {Opposite property(ies):} QUmlProperty::class_().
 */
const QList<QUmlProperty *> QUmlClass::ownedAttributes() const
{
    // This is a read-write association end

    return _ownedAttributes;
}

/*!
    Adds \a ownedAttribute to ownedAttributes.

    \sa ownedAttributes(), removeOwnedAttribute()
 */
void QUmlClass::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (!_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.append(ownedAttribute);
        if (ownedAttribute && ownedAttribute->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedAttribute->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedAttribute(QObject *)));
        ownedAttribute->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(ownedAttribute);
        addAttribute(ownedAttribute);

        // Adjust redefined properties
        QUmlStructuredClassifier::addOwnedAttribute(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setClass(this);
        }
    }
}

/*!
    Removes \a ownedAttribute from ownedAttributes.

    \sa ownedAttributes(), addOwnedAttribute()
 */
void QUmlClass::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.removeAll(ownedAttribute);
        if (ownedAttribute->asQModelingObject())
            ownedAttribute->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedAttribute);
        removeAttribute(ownedAttribute);

        // Adjust redefined properties
        QUmlStructuredClassifier::removeOwnedAttribute(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setClass(0);
        }
    }
}

/*!
    The operations owned by the class.

    \sa addOwnedOperation(), removeOwnedOperation()

    \b {Subsetted property(ies):} QUmlClassifier::features(), QUmlNamespace::ownedMembers().

    \b {Opposite property(ies):} QUmlOperation::class_().
 */
const QList<QUmlOperation *> QUmlClass::ownedOperations() const
{
    // This is a read-write association end

    return _ownedOperations;
}

/*!
    Adds \a ownedOperation to ownedOperations.

    \sa ownedOperations(), removeOwnedOperation()
 */
void QUmlClass::addOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (!_ownedOperations.contains(ownedOperation)) {
        _ownedOperations.append(ownedOperation);
        if (ownedOperation && ownedOperation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedOperation->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedOperation(QObject *)));
        ownedOperation->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addFeature(ownedOperation);
        addOwnedMember(ownedOperation);

        // Adjust opposite properties
        if (ownedOperation) {
            ownedOperation->setClass(this);
        }
    }
}

/*!
    Removes \a ownedOperation from ownedOperations.

    \sa ownedOperations(), addOwnedOperation()
 */
void QUmlClass::removeOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (_ownedOperations.contains(ownedOperation)) {
        _ownedOperations.removeAll(ownedOperation);
        if (ownedOperation->asQModelingObject())
            ownedOperation->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeFeature(ownedOperation);
        removeOwnedMember(ownedOperation);

        // Adjust opposite properties
        if (ownedOperation) {
            ownedOperation->setClass(0);
        }
    }
}

/*!
    Receptions that objects of this class are willing to accept.

    \sa addOwnedReception(), removeOwnedReception()

    \b {Subsetted property(ies):} QUmlClassifier::features(), QUmlNamespace::ownedMembers().
 */
const QSet<QUmlReception *> QUmlClass::ownedReceptions() const
{
    // This is a read-write association end

    return _ownedReceptions;
}

/*!
    Adds \a ownedReception to ownedReceptions.

    \sa ownedReceptions(), removeOwnedReception()
 */
void QUmlClass::addOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    if (!_ownedReceptions.contains(ownedReception)) {
        _ownedReceptions.insert(ownedReception);
        if (ownedReception && ownedReception->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedReception->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedReception(QObject *)));
        ownedReception->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addFeature(ownedReception);
        addOwnedMember(ownedReception);
    }
}

/*!
    Removes \a ownedReception from ownedReceptions.

    \sa ownedReceptions(), addOwnedReception()
 */
void QUmlClass::removeOwnedReception(QUmlReception *ownedReception)
{
    // This is a read-write association end

    if (_ownedReceptions.contains(ownedReception)) {
        _ownedReceptions.remove(ownedReception);
        if (ownedReception->asQModelingObject())
            ownedReception->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeFeature(ownedReception);
        removeOwnedMember(ownedReception);
    }
}

/*!
    This gives the superclasses of a class.

    \sa addSuperClass(), removeSuperClass()

    \b {This is a derived property.}

    \b {Redefined property(ies):} QUmlClassifier::generals().
 */
const QSet<QUmlClass *> QUmlClass::superClasses() const
{
    // This is a read-write derived association end

    qWarning("QUmlClass::superClasses(): to be implemented (this is a derived association end)");

    return QSet<QUmlClass *>();
}

/*!
    Adds \a superClass to superClasses.

    \sa superClasses(), removeSuperClass()
 */
void QUmlClass::addSuperClass(QUmlClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QUmlClass::addSuperClass(): to be implemented (this is a derived association end)");
    Q_UNUSED(superClass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust redefined properties
        QUmlClassifier::addGeneral(superClass);
    }
}

/*!
    Removes \a superClass from superClasses.

    \sa superClasses(), addSuperClass()
 */
void QUmlClass::removeSuperClass(QUmlClass *superClass)
{
    // This is a read-write derived association end

    qWarning("QUmlClass::removeSuperClass(): to be implemented (this is a derived association end)");
    Q_UNUSED(superClass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust redefined properties
        QUmlClassifier::removeGeneral(superClass);
    }
}

// OPERATIONS

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QUmlNamedElement *> QUmlClass::inherit(QSet<QUmlNamedElement *> inhs) const
{
    qWarning("QUmlClass::inherit(): to be implemented (operation)");

    Q_UNUSED(inhs);
    return QSet<QUmlNamedElement *> ();
}

QT_END_NAMESPACE

