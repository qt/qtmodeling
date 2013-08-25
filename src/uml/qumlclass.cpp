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
#include "qumlclass_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlReception>

QT_BEGIN_NAMESPACE

QUmlClassPrivate::QUmlClassPrivate() :
    isAbstract(false),
    isActive(false)
{
}

/*!
    \class QUmlClass

    \inmodule QtUml

    \brief A class may be designated as active (i.e., each of its instances having its own thread of control) or passive (i.e., each of its instances executing within the context of some other object). A class may also specify which signals the instances of this class handle.A class describes a set of objects that share the same specifications of features, constraints, and semantics.A class has the capability to have an internal structure and ports.Class has derived association that indicates how it may be extended through one or more stereotypes. Stereotype is the only kind of metaclass that cannot be extended by stereotypes.
 */

QUmlClass::QUmlClass(bool create_d_ptr) :
    QUmlEncapsulatedClassifier(false),
    QUmlBehavioredClassifier(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlClassPrivate);
}

// Owned attributes

/*!
    References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class.
 */
QSet<QUmlExtension *> QUmlClass::extension() const
{
    return QSet<QUmlExtension *>();
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract.
 */
bool QUmlClass::isAbstract() const
{
    return bool();
}

void QUmlClass::setAbstract(bool isAbstract)
{
    Q_UNUSED(isAbstract);
}

/*!
    Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class.
 */
bool QUmlClass::isActive() const
{
    return bool();
}

void QUmlClass::setActive(bool isActive)
{
    Q_UNUSED(isActive);
}

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
QList<QUmlClassifier *> QUmlClass::nestedClassifier() const
{
    return QList<QUmlClassifier *>();
}

void QUmlClass::addNestedClassifier(QList<QUmlClassifier *> nestedClassifier)
{
    Q_UNUSED(nestedClassifier);
}

void QUmlClass::removeNestedClassifier(QList<QUmlClassifier *> nestedClassifier)
{
    Q_UNUSED(nestedClassifier);
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
QList<QUmlProperty *> QUmlClass::ownedAttribute() const
{
    return QList<QUmlProperty *>();
}

void QUmlClass::addOwnedAttribute(QList<QUmlProperty *> ownedAttribute)
{
    Q_UNUSED(ownedAttribute);
}

void QUmlClass::removeOwnedAttribute(QList<QUmlProperty *> ownedAttribute)
{
    Q_UNUSED(ownedAttribute);
}

/*!
    The operations owned by the class.
 */
QList<QUmlOperation *> QUmlClass::ownedOperation() const
{
    return QList<QUmlOperation *>();
}

void QUmlClass::addOwnedOperation(QList<QUmlOperation *> ownedOperation)
{
    Q_UNUSED(ownedOperation);
}

void QUmlClass::removeOwnedOperation(QList<QUmlOperation *> ownedOperation)
{
    Q_UNUSED(ownedOperation);
}

/*!
    Receptions that objects of this class are willing to accept.
 */
QSet<QUmlReception *> QUmlClass::ownedReception() const
{
    return QSet<QUmlReception *>();
}

void QUmlClass::addOwnedReception(QSet<QUmlReception *> ownedReception)
{
    Q_UNUSED(ownedReception);
}

void QUmlClass::removeOwnedReception(QSet<QUmlReception *> ownedReception)
{
    Q_UNUSED(ownedReception);
}

/*!
    This gives the superclasses of a class.
 */
QSet<QUmlClass *> QUmlClass::superClass() const
{
    return QSet<QUmlClass *>();
}

void QUmlClass::addSuperClass(QSet<QUmlClass *> superClass)
{
    Q_UNUSED(superClass);
}

void QUmlClass::removeSuperClass(QSet<QUmlClass *> superClass)
{
    Q_UNUSED(superClass);
}

// Operations

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QUmlNamedElement *> QUmlClass::inherit(QSet<QUmlNamedElement *> inhs) const
{
    Q_UNUSED(inhs);
    return QSet<QUmlNamedElement *> ();
}

QT_END_NAMESPACE

