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
#include "qumlgeneralizationset.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class UmlGeneralizationSet

    \inmodule QtUml

    \brief A generalization set is a packageable element whose instances define collections of subsets of generalization relationships.
 */

QUmlGeneralizationSet::QUmlGeneralizationSet(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlGeneralizationSet::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlGeneralizationSet::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlGeneralizationSet::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlGeneralizationSet::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlGeneralizationSet::templateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_templateParameter);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlGeneralizationSet::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlGeneralizationSet::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlGeneralizationSet::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlGeneralizationSet::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlGeneralizationSet::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlGeneralizationSet::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [GeneralizationSet]

/*!
    Designates the instances of Generalization which are members of a given GeneralizationSet.
 */
const QSet<QUmlGeneralization *> QUmlGeneralizationSet::generalization() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralization *> *>(&_generalization));
}

/*!
    Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an instance of at least one of its specific Classifiers for the GeneralizationSet. When isCovering is false, there are one or more instances of the particular general Classifier that are not instances of at least one of its specific Classifiers defined for the GeneralizationSet.
 */
bool QUmlGeneralizationSet::isCovering() const
{
    return _isCovering;
}

/*!
    Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular GeneralizationSet have one or more members in common; that is, their intersection is not empty. For example, Person could have two Generalization relationships, each with the different specific Classifier: Manager or Staff. This would be disjoint because every instance of Person must either be a Manager or Staff. In contrast, Person could have two Generalization relationships involving two specific (and non-covering) Classifiers: Sales Person and Manager. This GeneralizationSet would not be disjoint because there are instances of Person which can be a Sales Person and a Manager.
 */
bool QUmlGeneralizationSet::isDisjoint() const
{
    return _isDisjoint;
}

/*!
    Designates the Classifier that is defined as the power type for the associated GeneralizationSet.
 */
QUmlClassifier *QUmlGeneralizationSet::powertype() const
{
    return reinterpret_cast<QUmlClassifier *>(_powertype);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlGeneralizationSet::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlGeneralizationSet::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlGeneralizationSet::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlParameterableElement::isCompatibleWith(p);
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlGeneralizationSet::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlGeneralizationSet::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlGeneralizationSet::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlGeneralizationSet::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlGeneralizationSet::separator() const
{
    return UmlNamedElement::separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlGeneralizationSet::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlGeneralizationSet::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlGeneralizationSet::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}

void QUmlGeneralizationSet::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    UmlParameterableElement::setTemplateParameter(templateParameter);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlGeneralizationSet::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlGeneralizationSet::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlGeneralizationSet::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlGeneralizationSet::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlGeneralizationSet::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlPackageableElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [GeneralizationSet]

void QUmlGeneralizationSet::addGeneralization(UmlGeneralization *generalization)
{
    UmlGeneralizationSet::addGeneralization(generalization);
}

void QUmlGeneralizationSet::removeGeneralization(UmlGeneralization *generalization)
{
    UmlGeneralizationSet::removeGeneralization(generalization);
}

void QUmlGeneralizationSet::setCovering(bool isCovering)
{
    UmlGeneralizationSet::setCovering(isCovering);
}

void QUmlGeneralizationSet::setDisjoint(bool isDisjoint)
{
    UmlGeneralizationSet::setDisjoint(isDisjoint);
}

void QUmlGeneralizationSet::setPowertype(QUmlClassifier *powertype)
{
    UmlGeneralizationSet::setPowertype(powertype);
}

QT_END_NAMESPACE

