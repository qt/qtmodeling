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
#include "qumlinformationflow.h"

#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlRelationship>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class UmlInformationFlow

    \inmodule QtUml

    \brief An information flow specifies that one or more information items circulates from its sources to its targets. Information flows require some kind of information channel for transmitting information items from the source to the destination. An information channel is represented in various ways depending on the nature of its sources and targets. It may be represented by connectors, links, associations, or even dependencies. For example, if the source and destination are parts in some composite structure such as a collaboration, then the information channel is likely to be represented by a connector between them. Or, if the source and target are objects (which are a kind of instance specification), they may be represented by a link that joins the two, and so on.
 */

QUmlInformationFlow::QUmlInformationFlow(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlInformationFlow::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlInformationFlow::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlInformationFlow::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [Relationship]

/*!
    Specifies the elements related by the Relationship.
 */
const QSet<QUmlElement *> QUmlInformationFlow::relatedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_relatedElement));
}

// OWNED ATTRIBUTES [DirectedRelationship]

/*!
    Specifies the sources of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlInformationFlow::source() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_source));
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
const QSet<QUmlElement *> QUmlInformationFlow::target() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_target));
}

// OWNED ATTRIBUTES [ParameterableElement]

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlInformationFlow::owningTemplateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlInformationFlow::templateParameter() const
{
    return reinterpret_cast<QUmlTemplateParameter *>(_templateParameter);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlInformationFlow::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlInformationFlow::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlInformationFlow::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlInformationFlow::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlInformationFlow::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlInformationFlow::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [InformationFlow]

/*!
    Specifies the information items that may circulate on this information flow.
 */
const QSet<QUmlClassifier *> QUmlInformationFlow::conveyed() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_conveyed));
}

/*!
    Defines from which source the conveyed InformationItems are initiated.
 */
const QSet<QUmlNamedElement *> QUmlInformationFlow::informationSource() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_informationSource));
}

/*!
    Defines to which target the conveyed InformationItems are directed.
 */
const QSet<QUmlNamedElement *> QUmlInformationFlow::informationTarget() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_informationTarget));
}

/*!
    Determines which Relationship will realize the specified flow
 */
const QSet<QUmlRelationship *> QUmlInformationFlow::realization() const
{
    return *(reinterpret_cast<const QSet<QUmlRelationship *> *>(&_realization));
}

/*!
    Determines which ActivityEdges will realize the specified flow.
 */
const QSet<QUmlActivityEdge *> QUmlInformationFlow::realizingActivityEdge() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityEdge *> *>(&_realizingActivityEdge));
}

/*!
    Determines which Connectors will realize the specified flow.
 */
const QSet<QUmlConnector *> QUmlInformationFlow::realizingConnector() const
{
    return *(reinterpret_cast<const QSet<QUmlConnector *> *>(&_realizingConnector));
}

/*!
    Determines which Messages will realize the specified flow.
 */
const QSet<QUmlMessage *> QUmlInformationFlow::realizingMessage() const
{
    return *(reinterpret_cast<const QSet<QUmlMessage *> *>(&_realizingMessage));
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlInformationFlow::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlInformationFlow::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [ParameterableElement]

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlInformationFlow::isCompatibleWith(QUmlParameterableElement *p) const
{
    return UmlParameterableElement::isCompatibleWith(p);
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlInformationFlow::isTemplateParameter() const
{
    return UmlParameterableElement::isTemplateParameter();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlInformationFlow::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlInformationFlow::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlInformationFlow::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlInformationFlow::separator() const
{
    return UmlNamedElement::separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInformationFlow::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlInformationFlow::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInformationFlow::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    UmlParameterableElement::setOwningTemplateParameter(owningTemplateParameter);
}

void QUmlInformationFlow::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    UmlParameterableElement::setTemplateParameter(templateParameter);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInformationFlow::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlInformationFlow::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlInformationFlow::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlInformationFlow::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInformationFlow::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlPackageableElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InformationFlow]

void QUmlInformationFlow::addConveyed(UmlClassifier *conveyed)
{
    UmlInformationFlow::addConveyed(conveyed);
}

void QUmlInformationFlow::removeConveyed(UmlClassifier *conveyed)
{
    UmlInformationFlow::removeConveyed(conveyed);
}

void QUmlInformationFlow::addInformationSource(UmlNamedElement *informationSource)
{
    UmlInformationFlow::addInformationSource(informationSource);
}

void QUmlInformationFlow::removeInformationSource(UmlNamedElement *informationSource)
{
    UmlInformationFlow::removeInformationSource(informationSource);
}

void QUmlInformationFlow::addInformationTarget(UmlNamedElement *informationTarget)
{
    UmlInformationFlow::addInformationTarget(informationTarget);
}

void QUmlInformationFlow::removeInformationTarget(UmlNamedElement *informationTarget)
{
    UmlInformationFlow::removeInformationTarget(informationTarget);
}

void QUmlInformationFlow::addRealization(UmlRelationship *realization)
{
    UmlInformationFlow::addRealization(realization);
}

void QUmlInformationFlow::removeRealization(UmlRelationship *realization)
{
    UmlInformationFlow::removeRealization(realization);
}

void QUmlInformationFlow::addRealizingActivityEdge(UmlActivityEdge *realizingActivityEdge)
{
    UmlInformationFlow::addRealizingActivityEdge(realizingActivityEdge);
}

void QUmlInformationFlow::removeRealizingActivityEdge(UmlActivityEdge *realizingActivityEdge)
{
    UmlInformationFlow::removeRealizingActivityEdge(realizingActivityEdge);
}

void QUmlInformationFlow::addRealizingConnector(UmlConnector *realizingConnector)
{
    UmlInformationFlow::addRealizingConnector(realizingConnector);
}

void QUmlInformationFlow::removeRealizingConnector(UmlConnector *realizingConnector)
{
    UmlInformationFlow::removeRealizingConnector(realizingConnector);
}

void QUmlInformationFlow::addRealizingMessage(UmlMessage *realizingMessage)
{
    UmlInformationFlow::addRealizingMessage(realizingMessage);
}

void QUmlInformationFlow::removeRealizingMessage(UmlMessage *realizingMessage)
{
    UmlInformationFlow::removeRealizingMessage(realizingMessage);
}

QT_END_NAMESPACE

