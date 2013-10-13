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
#include "qmofclass.h"

#include "private/qmofclassobject_p.h"

#include <QtMof/QMofComment>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofElement>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofFeature>
#include <QtMof/QMofGeneralization>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofObject>
#include <QtMof/QMofOperation>
#include <QtMof/QMofPackage>
#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofPackageImport>
#include <QtMof/QMofProperty>
#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofType>

/*!
    \class QMofClass

    \inmodule QtMof

    \brief A class describes a set of objects that share the same specifications of features, constraints, and semantics.
 */
QMofClass::QMofClass(bool createQModelingObject) :
    _isAbstract(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofClassObject(this));
}

QModelingElement *QMofClass::clone() const
{
    QMofClass *c = new QMofClass;
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
    c->setFinalSpecialization(isFinalSpecialization());
    foreach (QMofClassifier *element, redefinedClassifiers())
        c->addRedefinedClassifier(dynamic_cast<QMofClassifier *>(element->clone()));
    c->setAbstract(isAbstract());
    foreach (QMofClassifier *element, nestedClassifiers())
        c->addNestedClassifier(dynamic_cast<QMofClassifier *>(element->clone()));
    foreach (QMofProperty *element, ownedAttributes())
        c->addOwnedAttribute(dynamic_cast<QMofProperty *>(element->clone()));
    foreach (QMofOperation *element, ownedOperations())
        c->addOwnedOperation(dynamic_cast<QMofOperation *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QMofClass::isAbstract() const
{
    // This is a read-write property

    return _isAbstract;
}

void QMofClass::setAbstract(bool isAbstract)
{
    // This is a read-write property

    if (_isAbstract != isAbstract) {
        _isAbstract = isAbstract;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isAbstract");
    }
}

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
const QList<QMofClassifier *> QMofClass::nestedClassifiers() const
{
    // This is a read-write association end

    return _nestedClassifiers;
}

void QMofClass::addNestedClassifier(QMofClassifier *nestedClassifier)
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

void QMofClass::removeNestedClassifier(QMofClassifier *nestedClassifier)
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
 */
const QList<QMofProperty *> QMofClass::ownedAttributes() const
{
    // This is a read-write association end

    return _ownedAttributes;
}

void QMofClass::addOwnedAttribute(QMofProperty *ownedAttribute)
{
    // This is a read-write association end

    if (!_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.append(ownedAttribute);
        if (ownedAttribute && ownedAttribute->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedAttribute->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedAttribute(QObject *)));
        ownedAttribute->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addAttribute(ownedAttribute);
        addOwnedMember(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setClass(this);
        }
    }
}

void QMofClass::removeOwnedAttribute(QMofProperty *ownedAttribute)
{
    // This is a read-write association end

    if (_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.removeAll(ownedAttribute);
        if (ownedAttribute->asQModelingObject())
            ownedAttribute->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeAttribute(ownedAttribute);
        removeOwnedMember(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setClass(0);
        }
    }
}

/*!
    The operations owned by the class.
 */
const QList<QMofOperation *> QMofClass::ownedOperations() const
{
    // This is a read-write association end

    return _ownedOperations;
}

void QMofClass::addOwnedOperation(QMofOperation *ownedOperation)
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

void QMofClass::removeOwnedOperation(QMofOperation *ownedOperation)
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
    This gives the superclasses of a class.
 */
const QSet<QMofClass *> QMofClass::superClasses() const
{
    // This is a read-write derived association end

    qWarning("MofClass::superClasses(): to be implemented (this is a derived association end)");

    return QSet<QMofClass *>();
}

void QMofClass::addSuperClass(QMofClass *superClass)
{
    // This is a read-write derived association end

    qWarning("MofClass::addSuperClass(): to be implemented (this is a derived association end)");
    Q_UNUSED(superClass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

void QMofClass::removeSuperClass(QMofClass *superClass)
{
    // This is a read-write derived association end

    qWarning("MofClass::removeSuperClass(): to be implemented (this is a derived association end)");
    Q_UNUSED(superClass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

// OPERATIONS

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QMofNamedElement *> QMofClass::inherit(QSet<QMofNamedElement *> inhs) const
{
    qWarning("MofClass::inherit(): to be implemented (operation)");

    Q_UNUSED(inhs);
    return QSet<QMofNamedElement *> ();
}

