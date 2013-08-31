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
#include "qumlredefinabletemplatesignature.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class UmlRedefinableTemplateSignature

    \inmodule QtUml

    \brief A redefinable template signature supports the addition of formal template parameters in a specialization of a template classifier.
 */

QUmlRedefinableTemplateSignature::QUmlRedefinableTemplateSignature(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlRedefinableTemplateSignature::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlRedefinableTemplateSignature::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlRedefinableTemplateSignature::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [TemplateSignature]

/*!
    The formal template parameters that are owned by this template signature.
 */
const QList<QUmlTemplateParameter *> QUmlRedefinableTemplateSignature::ownedParameter() const
{
    return *(reinterpret_cast<const QList<QUmlTemplateParameter *> *>(&_ownedParameter));
}

/*!
    The ordered set of all formal template parameters for this template signature.
 */
const QList<QUmlTemplateParameter *> QUmlRedefinableTemplateSignature::parameter() const
{
    return *(reinterpret_cast<const QList<QUmlTemplateParameter *> *>(&_parameter));
}

/*!
    The element that owns this template signature.
 */
QUmlTemplateableElement *QUmlRedefinableTemplateSignature::template_() const
{
    return reinterpret_cast<QUmlTemplateableElement *>(_template_);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlRedefinableTemplateSignature::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlRedefinableTemplateSignature::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlRedefinableTemplateSignature::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlRedefinableTemplateSignature::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlRedefinableTemplateSignature::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlRedefinableTemplateSignature::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlRedefinableTemplateSignature::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlRedefinableTemplateSignature::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QUmlClassifier *> QUmlRedefinableTemplateSignature::redefinitionContext() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_redefinitionContext));
}

// OWNED ATTRIBUTES [RedefinableTemplateSignature]

/*!
    The classifier that owns this template signature.
 */
QUmlClassifier *QUmlRedefinableTemplateSignature::classifier() const
{
    return reinterpret_cast<QUmlClassifier *>(_classifier);
}

/*!
    The template signature that is extended by this template signature.
 */
const QSet<QUmlRedefinableTemplateSignature *> QUmlRedefinableTemplateSignature::extendedSignature() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableTemplateSignature *> *>(&_extendedSignature));
}

/*!
    The formal template parameters of the extendedSignature.
 */
const QSet<QUmlTemplateParameter *> QUmlRedefinableTemplateSignature::inheritedParameter() const
{
    QSet<QUmlTemplateParameter *> r;
    foreach (UmlTemplateParameter *element, UmlRedefinableTemplateSignature::inheritedParameter())
        r.insert(reinterpret_cast<QUmlTemplateParameter *>(element));
    return r;
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlRedefinableTemplateSignature::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlRedefinableTemplateSignature::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlRedefinableTemplateSignature::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlRedefinableTemplateSignature::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlRedefinableTemplateSignature::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlRedefinableTemplateSignature::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [RedefinableElement]

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QUmlRedefinableTemplateSignature::isRedefinitionContextValid(QUmlRedefinableElement *redefined) const
{
    return UmlRedefinableElement::isRedefinitionContextValid(redefined);
}

// OPERATIONS [RedefinableTemplateSignature]

/*!
    The query isConsistentWith() specifies, for any two RedefinableTemplateSignatures in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining template signature is always consistent with a redefined template signature, since redefinition only adds new formal parameters.
 */
bool QUmlRedefinableTemplateSignature::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlRedefinableTemplateSignature::isConsistentWith(redefinee);
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRedefinableTemplateSignature::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlRedefinableTemplateSignature::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateSignature]

void QUmlRedefinableTemplateSignature::addOwnedParameter(UmlTemplateParameter *ownedParameter)
{
    UmlTemplateSignature::addOwnedParameter(ownedParameter);
}

void QUmlRedefinableTemplateSignature::removeOwnedParameter(UmlTemplateParameter *ownedParameter)
{
    UmlTemplateSignature::removeOwnedParameter(ownedParameter);
}

void QUmlRedefinableTemplateSignature::addParameter(UmlTemplateParameter *parameter)
{
    UmlTemplateSignature::addParameter(parameter);
}

void QUmlRedefinableTemplateSignature::removeParameter(UmlTemplateParameter *parameter)
{
    UmlTemplateSignature::removeParameter(parameter);
}

void QUmlRedefinableTemplateSignature::setTemplate(QUmlTemplateableElement *template_)
{
    UmlTemplateSignature::setTemplate(template_);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRedefinableTemplateSignature::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlRedefinableTemplateSignature::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlRedefinableTemplateSignature::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlRedefinableTemplateSignature::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlRedefinableTemplateSignature::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRedefinableTemplateSignature::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableTemplateSignature]

void QUmlRedefinableTemplateSignature::setClassifier(QUmlClassifier *classifier)
{
    UmlRedefinableTemplateSignature::setClassifier(classifier);
}

void QUmlRedefinableTemplateSignature::addExtendedSignature(UmlRedefinableTemplateSignature *extendedSignature)
{
    UmlRedefinableTemplateSignature::addExtendedSignature(extendedSignature);
}

void QUmlRedefinableTemplateSignature::removeExtendedSignature(UmlRedefinableTemplateSignature *extendedSignature)
{
    UmlRedefinableTemplateSignature::removeExtendedSignature(extendedSignature);
}

QT_END_NAMESPACE

