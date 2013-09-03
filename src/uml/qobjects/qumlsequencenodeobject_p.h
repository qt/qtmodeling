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
#ifndef QUMLSEQUENCENODEOBJECT_H
#define QUMLSEQUENCENODEOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlSequenceNode;
class Q_UML_EXPORT QUmlSequenceNodeObject : public QObject
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QObject *> ownedElement READ ownedElement)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QObject * nameExpression READ nameExpression)
    Q_PROPERTY(QObject * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf)
    Q_PROPERTY(QSet<QObject *> redefinedElement READ redefinedElement)
    Q_PROPERTY(QSet<QObject *> redefinitionContext READ redefinitionContext)

    // Properties [ActivityNode]
    Q_PROPERTY(QSet<QObject *> inGroup READ inGroup)
    Q_PROPERTY(QSet<QObject *> inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(QSet<QObject *> inPartition READ inPartition)
    Q_PROPERTY(QObject * inStructuredNode READ inStructuredNode)
    Q_PROPERTY(QSet<QObject *> incoming READ incoming)
    Q_PROPERTY(QSet<QObject *> outgoing READ outgoing)
    Q_PROPERTY(QSet<QObject *> redefinedNode READ redefinedNode)

    // Properties [ExecutableNode]
    Q_PROPERTY(QSet<QObject *> handler READ handler)

    // Properties [Action]
    Q_PROPERTY(QObject * context READ context)
    Q_PROPERTY(QList<QObject *> input READ input)
    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant)
    Q_PROPERTY(QSet<QObject *> localPostcondition READ localPostcondition)
    Q_PROPERTY(QSet<QObject *> localPrecondition READ localPrecondition)
    Q_PROPERTY(QList<QObject *> output READ output)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QObject *> elementImport READ elementImport)
    Q_PROPERTY(QSet<QObject *> importedMember READ importedMember)
    Q_PROPERTY(QSet<QObject *> member READ member)
    Q_PROPERTY(QSet<QObject *> ownedMember READ ownedMember)
    Q_PROPERTY(QSet<QObject *> ownedRule READ ownedRule)
    Q_PROPERTY(QSet<QObject *> packageImport READ packageImport)

    // Properties [ActivityGroup]
    Q_PROPERTY(QSet<QObject *> containedEdge READ containedEdge)
    Q_PROPERTY(QSet<QObject *> containedNode READ containedNode)
    Q_PROPERTY(QSet<QObject *> subgroup READ subgroup)
    Q_PROPERTY(QObject * superGroup READ superGroup)

    // Properties [StructuredActivityNode]
    Q_PROPERTY(QObject * activity READ activity)
    Q_PROPERTY(QSet<QObject *> edge READ edge)
    Q_PROPERTY(bool mustIsolate READ mustIsolate)
    Q_PROPERTY(QSet<QObject *> structuredNodeInput READ structuredNodeInput)
    Q_PROPERTY(QSet<QObject *> structuredNodeOutput READ structuredNodeOutput)
    Q_PROPERTY(QSet<QObject *> variable READ variable)

    // Properties [SequenceNode]
    Q_PROPERTY(QList<QObject *> executableNode READ executableNode)

public:
    Q_INVOKABLE explicit QUmlSequenceNodeObject(QUmlSequenceNode *qModelingObject);
    virtual ~QUmlSequenceNodeObject();

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComment() const;
    Q_INVOKABLE const QSet<QObject *> ownedElement() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QObject *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *nameExpression() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QObject *> redefinedElement() const;
    Q_INVOKABLE const QSet<QObject *> redefinitionContext() const;

    // Owned attributes [ActivityNode]
    Q_INVOKABLE const QSet<QObject *> inGroup() const;
    Q_INVOKABLE const QSet<QObject *> inInterruptibleRegion() const;
    Q_INVOKABLE const QSet<QObject *> inPartition() const;
    Q_INVOKABLE QObject *inStructuredNode() const;
    Q_INVOKABLE const QSet<QObject *> incoming() const;
    Q_INVOKABLE const QSet<QObject *> outgoing() const;
    Q_INVOKABLE const QSet<QObject *> redefinedNode() const;

    // Owned attributes [ExecutableNode]
    Q_INVOKABLE const QSet<QObject *> handler() const;

    // Owned attributes [Action]
    Q_INVOKABLE QObject *context() const;
    Q_INVOKABLE const QList<QObject *> input() const;
    Q_INVOKABLE bool isLocallyReentrant() const;
    Q_INVOKABLE const QSet<QObject *> localPostcondition() const;
    Q_INVOKABLE const QSet<QObject *> localPrecondition() const;
    Q_INVOKABLE const QList<QObject *> output() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QObject *> elementImport() const;
    Q_INVOKABLE const QSet<QObject *> importedMember() const;
    Q_INVOKABLE const QSet<QObject *> member() const;
    Q_INVOKABLE const QSet<QObject *> ownedMember() const;
    Q_INVOKABLE const QSet<QObject *> ownedRule() const;
    Q_INVOKABLE const QSet<QObject *> packageImport() const;

    // Owned attributes [ActivityGroup]
    Q_INVOKABLE const QSet<QObject *> containedEdge() const;
    Q_INVOKABLE const QSet<QObject *> containedNode() const;
    Q_INVOKABLE const QSet<QObject *> subgroup() const;
    Q_INVOKABLE QObject *superGroup() const;

    // Owned attributes [StructuredActivityNode]
    Q_INVOKABLE QObject *activity() const;
    Q_INVOKABLE const QSet<QObject *> edge() const;
    Q_INVOKABLE bool mustIsolate() const;
    Q_INVOKABLE const QSet<QObject *> structuredNodeInput() const;
    Q_INVOKABLE const QSet<QObject *> structuredNodeOutput() const;
    Q_INVOKABLE const QSet<QObject *> variable() const;

    // Owned attributes [SequenceNode]
    Q_INVOKABLE const QList<QObject *> executableNode() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [RedefinableElement]
    Q_INVOKABLE bool isConsistentWith(QObject *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(QObject *redefined) const;

    // Operations [Namespace]
    Q_INVOKABLE QSet<QObject *> excludeCollisions(QSet<QObject *> imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(QObject *element) const;
    Q_INVOKABLE QSet<QObject *> importMembers(QSet<QObject *> imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(QObject *clientDependency);
    void removeClientDependency(QObject *clientDependency);
    void setName(QString name);
    void setNameExpression(QObject *nameExpression = 0);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [RedefinableElement]
    void setLeaf(bool isLeaf);
    void Q_DECL_HIDDEN addRedefinedElement(QObject *redefinedElement);
    void Q_DECL_HIDDEN removeRedefinedElement(QObject *redefinedElement);
    void Q_DECL_HIDDEN addRedefinitionContext(QObject *redefinitionContext);
    void Q_DECL_HIDDEN removeRedefinitionContext(QObject *redefinitionContext);

    // Slots for owned attributes [ActivityNode]
    void Q_DECL_HIDDEN addInGroup(QObject *inGroup);
    void Q_DECL_HIDDEN removeInGroup(QObject *inGroup);
    void addInInterruptibleRegion(QObject *inInterruptibleRegion);
    void removeInInterruptibleRegion(QObject *inInterruptibleRegion);
    void addInPartition(QObject *inPartition);
    void removeInPartition(QObject *inPartition);
    void setInStructuredNode(QObject *inStructuredNode = 0);
    void addIncoming(QObject *incoming);
    void removeIncoming(QObject *incoming);
    void addOutgoing(QObject *outgoing);
    void removeOutgoing(QObject *outgoing);
    void addRedefinedNode(QObject *redefinedNode);
    void removeRedefinedNode(QObject *redefinedNode);

    // Slots for owned attributes [ExecutableNode]
    void addHandler(QObject *handler);
    void removeHandler(QObject *handler);

    // Slots for owned attributes [Action]
    void Q_DECL_HIDDEN setContext(QObject *context = 0);
    void Q_DECL_HIDDEN addInput(QObject *input);
    void Q_DECL_HIDDEN removeInput(QObject *input);
    void setLocallyReentrant(bool isLocallyReentrant);
    void addLocalPostcondition(QObject *localPostcondition);
    void removeLocalPostcondition(QObject *localPostcondition);
    void addLocalPrecondition(QObject *localPrecondition);
    void removeLocalPrecondition(QObject *localPrecondition);
    void Q_DECL_HIDDEN addOutput(QObject *output);
    void Q_DECL_HIDDEN removeOutput(QObject *output);

    // Slots for owned attributes [Namespace]
    void addElementImport(QObject *elementImport);
    void removeElementImport(QObject *elementImport);
    void Q_DECL_HIDDEN addImportedMember(QObject *importedMember);
    void Q_DECL_HIDDEN removeImportedMember(QObject *importedMember);
    void Q_DECL_HIDDEN addMember(QObject *member);
    void Q_DECL_HIDDEN removeMember(QObject *member);
    void Q_DECL_HIDDEN addOwnedMember(QObject *ownedMember);
    void Q_DECL_HIDDEN removeOwnedMember(QObject *ownedMember);
    void addOwnedRule(QObject *ownedRule);
    void removeOwnedRule(QObject *ownedRule);
    void addPackageImport(QObject *packageImport);
    void removePackageImport(QObject *packageImport);

    // Slots for owned attributes [ActivityGroup]
    void Q_DECL_HIDDEN addContainedEdge(QObject *containedEdge);
    void Q_DECL_HIDDEN removeContainedEdge(QObject *containedEdge);
    void Q_DECL_HIDDEN addContainedNode(QObject *containedNode);
    void Q_DECL_HIDDEN removeContainedNode(QObject *containedNode);
    void Q_DECL_HIDDEN addSubgroup(QObject *subgroup);
    void Q_DECL_HIDDEN removeSubgroup(QObject *subgroup);
    void Q_DECL_HIDDEN setSuperGroup(QObject *superGroup = 0);

    // Slots for owned attributes [StructuredActivityNode]
    void setActivity(QObject *activity = 0);
    void addEdge(QObject *edge);
    void removeEdge(QObject *edge);
    void setMustIsolate(bool mustIsolate);
    void addStructuredNodeInput(QObject *structuredNodeInput);
    void removeStructuredNodeInput(QObject *structuredNodeInput);
    void addStructuredNodeOutput(QObject *structuredNodeOutput);
    void removeStructuredNodeOutput(QObject *structuredNodeOutput);
    void addVariable(QObject *variable);
    void removeVariable(QObject *variable);

    // Slots for owned attributes [SequenceNode]
    void addExecutableNode(QObject *executableNode);
    void removeExecutableNode(QObject *executableNode);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSEQUENCENODEOBJECT_H

