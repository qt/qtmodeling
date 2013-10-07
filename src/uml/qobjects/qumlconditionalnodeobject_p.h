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
#ifndef QUMLCONDITIONALNODEOBJECT_H
#define QUMLCONDITIONALNODEOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlConditionalNode;
class Q_UML_EXPORT QUmlConditionalNodeObject : public QObject
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComment READ ownedComments)
    Q_PROPERTY(QSet<QObject *> ownedElement READ ownedElements)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependency READ clientDependencies)
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QObject * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QObject * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QObject *> redefinedElement READ redefinedElements)
    Q_PROPERTY(QSet<QObject *> redefinitionContext READ redefinitionContexts)

    // Properties [ActivityNode]
    Q_PROPERTY(QSet<QObject *> inGroup READ inGroups)
    Q_PROPERTY(QSet<QObject *> inInterruptibleRegion READ inInterruptibleRegions)
    Q_PROPERTY(QSet<QObject *> inPartition READ inPartitions)
    Q_PROPERTY(QObject * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QSet<QObject *> incoming READ incomings)
    Q_PROPERTY(QSet<QObject *> outgoing READ outgoings)
    Q_PROPERTY(QSet<QObject *> redefinedNode READ redefinedNodes)

    // Properties [ExecutableNode]
    Q_PROPERTY(QSet<QObject *> handler READ handlers)

    // Properties [Action]
    Q_PROPERTY(QObject * context READ context STORED false)
    Q_PROPERTY(QList<QObject *> input READ inputs)
    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant WRITE setLocallyReentrant RESET unsetLocallyReentrant)
    Q_PROPERTY(QSet<QObject *> localPostcondition READ localPostconditions)
    Q_PROPERTY(QSet<QObject *> localPrecondition READ localPreconditions)
    Q_PROPERTY(QList<QObject *> output READ outputs)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QObject *> elementImport READ elementImports)
    Q_PROPERTY(QSet<QObject *> importedMember READ importedMembers STORED false)
    Q_PROPERTY(QSet<QObject *> member READ members)
    Q_PROPERTY(QSet<QObject *> ownedMember READ ownedMembers)
    Q_PROPERTY(QSet<QObject *> ownedRule READ ownedRules)
    Q_PROPERTY(QSet<QObject *> packageImport READ packageImports)

    // Properties [ActivityGroup]
    Q_PROPERTY(QSet<QObject *> containedEdge READ containedEdges)
    Q_PROPERTY(QSet<QObject *> containedNode READ containedNodes)
    Q_PROPERTY(QSet<QObject *> subgroup READ subgroups)
    Q_PROPERTY(QObject * superGroup READ superGroup)

    // Properties [StructuredActivityNode]
    Q_PROPERTY(QObject * activity READ activity WRITE setActivity)
    Q_PROPERTY(QSet<QObject *> edge READ edges)
    Q_PROPERTY(bool mustIsolate READ mustIsolate WRITE setMustIsolate RESET unsetMustIsolate)
    Q_PROPERTY(QSet<QObject *> node READ nodes)
    Q_PROPERTY(QSet<QObject *> structuredNodeInput READ structuredNodeInputs)
    Q_PROPERTY(QSet<QObject *> variable READ variables)

    // Properties [ConditionalNode]
    Q_PROPERTY(QSet<QObject *> clause READ clauses)
    Q_PROPERTY(bool isAssured READ isAssured WRITE setAssured RESET unsetAssured)
    Q_PROPERTY(bool isDeterminate READ isDeterminate WRITE setDeterminate RESET unsetDeterminate)
    Q_PROPERTY(QList<QObject *> result READ results)

public:
    Q_INVOKABLE explicit QUmlConditionalNodeObject(QUmlConditionalNode *qModelingObject);
    virtual ~QUmlConditionalNodeObject();

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QObject *> clientDependencies() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *nameExpression() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QObject *> redefinedElements() const;
    Q_INVOKABLE const QSet<QObject *> redefinitionContexts() const;

    // Owned attributes [ActivityNode]
    Q_INVOKABLE const QSet<QObject *> inGroups() const;
    Q_INVOKABLE const QSet<QObject *> inInterruptibleRegions() const;
    Q_INVOKABLE const QSet<QObject *> inPartitions() const;
    Q_INVOKABLE QObject *inStructuredNode() const;
    Q_INVOKABLE const QSet<QObject *> incomings() const;
    Q_INVOKABLE const QSet<QObject *> outgoings() const;
    Q_INVOKABLE const QSet<QObject *> redefinedNodes() const;

    // Owned attributes [ExecutableNode]
    Q_INVOKABLE const QSet<QObject *> handlers() const;

    // Owned attributes [Action]
    Q_INVOKABLE QObject *context() const;
    Q_INVOKABLE const QList<QObject *> inputs() const;
    Q_INVOKABLE bool isLocallyReentrant() const;
    Q_INVOKABLE const QSet<QObject *> localPostconditions() const;
    Q_INVOKABLE const QSet<QObject *> localPreconditions() const;
    Q_INVOKABLE const QList<QObject *> outputs() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QObject *> elementImports() const;
    Q_INVOKABLE const QSet<QObject *> importedMembers() const;
    Q_INVOKABLE const QSet<QObject *> members() const;
    Q_INVOKABLE const QSet<QObject *> ownedMembers() const;
    Q_INVOKABLE const QSet<QObject *> ownedRules() const;
    Q_INVOKABLE const QSet<QObject *> packageImports() const;

    // Owned attributes [ActivityGroup]
    Q_INVOKABLE const QSet<QObject *> containedEdges() const;
    Q_INVOKABLE const QSet<QObject *> containedNodes() const;
    Q_INVOKABLE const QSet<QObject *> subgroups() const;
    Q_INVOKABLE QObject *superGroup() const;

    // Owned attributes [StructuredActivityNode]
    Q_INVOKABLE QObject *activity() const;
    Q_INVOKABLE const QSet<QObject *> edges() const;
    Q_INVOKABLE bool mustIsolate() const;
    Q_INVOKABLE const QSet<QObject *> nodes() const;
    Q_INVOKABLE const QSet<QObject *> structuredNodeInputs() const;
    Q_INVOKABLE const QSet<QObject *> variables() const;

    // Owned attributes [ConditionalNode]
    Q_INVOKABLE const QSet<QObject *> clauses() const;
    Q_INVOKABLE bool isAssured() const;
    Q_INVOKABLE bool isDeterminate() const;
    Q_INVOKABLE const QList<QObject *> results() const;

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
    void unsetLeaf();
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
    void unsetLocallyReentrant();
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
    void unsetMustIsolate();
    void addNode(QObject *node);
    void removeNode(QObject *node);
    void addStructuredNodeInput(QObject *structuredNodeInput);
    void removeStructuredNodeInput(QObject *structuredNodeInput);
    void addVariable(QObject *variable);
    void removeVariable(QObject *variable);

    // Slots for owned attributes [ConditionalNode]
    void addClause(QObject *clause);
    void removeClause(QObject *clause);
    void setAssured(bool isAssured);
    void unsetAssured();
    void setDeterminate(bool isDeterminate);
    void unsetDeterminate();
    void addResult(QObject *result);
    void removeResult(QObject *result);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCONDITIONALNODEOBJECT_H

