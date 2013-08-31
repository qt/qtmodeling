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
#include "qumltimeconstraint.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterval>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTimeInterval>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class UmlTimeConstraint

    \inmodule QtUml

    \brief A time constraint is a constraint that refers to a time interval.
 */

QUmlTimeConstraint::QUmlTimeConstraint(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlTimeConstraint::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlTimeConstraint::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlTimeConstraint::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlTimeConstraint::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlTimeConstraint::templateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_templateParameter);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlTimeConstraint::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlTimeConstraint::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlTimeConstraint::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlTimeConstraint::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlTimeConstraint::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlTimeConstraint::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [Constraint]

/*!
    The ordered set of Elements referenced by this Constraint.
 */
const QList<QUmlElement *> QUmlTimeConstraint::constrainedElement() const
{
    return *(reinterpret_cast<const QList<QUmlElement *> *>(&_constrainedElement));
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlTimeConstraint::context() const
{
    return reinterpret_cast<QUmlNamespace *>(_context);
}
// OWNED ATTRIBUTES [TimeConstraint]

/*!
    The value of firstEvent is related to constrainedElement. If firstEvent is true, then the corresponding observation event is the first time instant the execution enters constrainedElement. If firstEvent is false, then the corresponding observation event is the last time instant the execution is within constrainedElement.
 */
bool QUmlTimeConstraint::firstEvent() const
{
    return _firstEvent;
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QUmlTimeInterval *QUmlTimeConstraint::specification() const
{
    return reinterpret_cast<QUmlTimeInterval *>(_specification);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlTimeConstraint::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlTimeConstraint::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlTimeConstraint::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlParameterableElement::isCompatibleWith(p);
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlTimeConstraint::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlTimeConstraint::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlTimeConstraint::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlTimeConstraint::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlTimeConstraint::separator() const
{
    return UmlNamedElement::separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTimeConstraint::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlTimeConstraint::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlTimeConstraint::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}

void QUmlTimeConstraint::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    UmlParameterableElement::setTemplateParameter(templateParameter);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTimeConstraint::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlTimeConstraint::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlTimeConstraint::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlTimeConstraint::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlTimeConstraint::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlPackageableElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Constraint]

void QUmlTimeConstraint::addConstrainedElement(UmlElement *constrainedElement)
{
    UmlConstraint::addConstrainedElement(constrainedElement);
}

void QUmlTimeConstraint::removeConstrainedElement(UmlElement *constrainedElement)
{
    UmlConstraint::removeConstrainedElement(constrainedElement);
}

void QUmlTimeConstraint::setContext(QUmlNamespace *context)
{
    UmlConstraint::setContext(context);
}
// SLOTS FOR OWNED ATTRIBUTES [TimeConstraint]

void QUmlTimeConstraint::setFirstEvent(bool firstEvent)
{
    UmlTimeConstraint::setFirstEvent(firstEvent);
}

void QUmlTimeConstraint::setSpecification(QUmlTimeInterval *specification)
{
    UmlTimeConstraint::setSpecification(specification);
}

QT_END_NAMESPACE

