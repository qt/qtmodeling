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
#ifndef QUMLLOOPNODE_H
#define QUMLLOOPNODE_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlloopnode_p.h"

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivity;
class QUmlActivityEdge;
class QUmlActivityGroup;
class QUmlActivityNode;
class QUmlActivityPartition;
class QUmlClassifier;
class QUmlComment;
class QUmlConstraint;
class QUmlDependency;
class QUmlElement;
class QUmlElementImport;
class QUmlExceptionHandler;
class QUmlExecutableNode;
class QUmlInputPin;
class QUmlInterruptibleActivityRegion;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlOutputPin;
class QUmlPackage;
class QUmlPackageableElement;
class QUmlPackageImport;
class QUmlRedefinableElement;
class QUmlStringExpression;
class QUmlStructuredActivityNode;
class QUmlVariable;

class Q_UML_EXPORT QUmlLoopNode : public QObject, public UmlLoopNode
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QUmlDependency *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElement READ redefinedElement)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinitionContext READ redefinitionContext)

    // Properties [ActivityNode]
    Q_PROPERTY(QSet<QUmlActivityGroup *> inGroup READ inGroup)
    Q_PROPERTY(QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(QSet<QUmlActivityPartition *> inPartition READ inPartition)
    Q_PROPERTY(QUmlStructuredActivityNode * inStructuredNode READ inStructuredNode)
    Q_PROPERTY(QSet<QUmlActivityEdge *> incoming READ incoming)
    Q_PROPERTY(QSet<QUmlActivityEdge *> outgoing READ outgoing)
    Q_PROPERTY(QSet<QUmlActivityNode *> redefinedNode READ redefinedNode)

    // Properties [ExecutableNode]
    Q_PROPERTY(QSet<QUmlExceptionHandler *> handler READ handler)

    // Properties [Action]
    Q_PROPERTY(QUmlClassifier * context READ context)
    Q_PROPERTY(QList<QUmlInputPin *> input READ input)
    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant)
    Q_PROPERTY(QSet<QUmlConstraint *> localPostcondition READ localPostcondition)
    Q_PROPERTY(QSet<QUmlConstraint *> localPrecondition READ localPrecondition)
    Q_PROPERTY(QList<QUmlOutputPin *> output READ output)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QUmlElementImport *> elementImport READ elementImport)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMember READ importedMember)
    Q_PROPERTY(QSet<QUmlNamedElement *> member READ member)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMember READ ownedMember)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRule READ ownedRule)
    Q_PROPERTY(QSet<QUmlPackageImport *> packageImport READ packageImport)

    // Properties [ActivityGroup]
    Q_PROPERTY(QSet<QUmlActivityEdge *> containedEdge READ containedEdge)
    Q_PROPERTY(QSet<QUmlActivityNode *> containedNode READ containedNode)
    Q_PROPERTY(QSet<QUmlActivityGroup *> subgroup READ subgroup)
    Q_PROPERTY(QUmlActivityGroup * superGroup READ superGroup)

    // Properties [StructuredActivityNode]
    Q_PROPERTY(QUmlActivity * activity READ activity)
    Q_PROPERTY(QSet<QUmlActivityEdge *> edge READ edge)
    Q_PROPERTY(bool mustIsolate READ mustIsolate)
    Q_PROPERTY(QSet<QUmlActivityNode *> node READ node)
    Q_PROPERTY(QSet<QUmlVariable *> variable READ variable)

    // Properties [LoopNode]
    Q_PROPERTY(QList<QUmlOutputPin *> bodyOutput READ bodyOutput)
    Q_PROPERTY(QSet<QUmlExecutableNode *> bodyPart READ bodyPart)
    Q_PROPERTY(QUmlOutputPin * decider READ decider)
    Q_PROPERTY(bool isTestedFirst READ isTestedFirst)
    Q_PROPERTY(QList<QUmlOutputPin *> loopVariable READ loopVariable)
    Q_PROPERTY(QList<QUmlInputPin *> loopVariableInput READ loopVariableInput)
    Q_PROPERTY(QList<QUmlOutputPin *> result READ result)
    Q_PROPERTY(QSet<QUmlExecutableNode *> setupPart READ setupPart)
    Q_PROPERTY(QSet<QUmlExecutableNode *> test READ test)

public:
    Q_INVOKABLE explicit QUmlLoopNode(QObject *parent = 0);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QUmlDependency *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QUmlRedefinableElement *> redefinedElement() const;
    Q_INVOKABLE const QSet<QUmlClassifier *> redefinitionContext() const;

    // Owned attributes [ActivityNode]
    Q_INVOKABLE const QSet<QUmlActivityGroup *> inGroup() const;
    Q_INVOKABLE const QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion() const;
    Q_INVOKABLE const QSet<QUmlActivityPartition *> inPartition() const;
    Q_INVOKABLE QUmlStructuredActivityNode *inStructuredNode() const;
    Q_INVOKABLE const QSet<QUmlActivityEdge *> incoming() const;
    Q_INVOKABLE const QSet<QUmlActivityEdge *> outgoing() const;
    Q_INVOKABLE const QSet<QUmlActivityNode *> redefinedNode() const;

    // Owned attributes [ExecutableNode]
    Q_INVOKABLE const QSet<QUmlExceptionHandler *> handler() const;

    // Owned attributes [Action]
    Q_INVOKABLE QUmlClassifier *context() const;
    Q_INVOKABLE const QList<QUmlInputPin *> input() const;
    Q_INVOKABLE bool isLocallyReentrant() const;
    Q_INVOKABLE const QSet<QUmlConstraint *> localPostcondition() const;
    Q_INVOKABLE const QSet<QUmlConstraint *> localPrecondition() const;
    Q_INVOKABLE const QList<QUmlOutputPin *> output() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QUmlElementImport *> elementImport() const;
    Q_INVOKABLE const QSet<QUmlPackageableElement *> importedMember() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> member() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> ownedMember() const;
    Q_INVOKABLE const QSet<QUmlConstraint *> ownedRule() const;
    Q_INVOKABLE const QSet<QUmlPackageImport *> packageImport() const;

    // Owned attributes [ActivityGroup]
    Q_INVOKABLE const QSet<QUmlActivityEdge *> containedEdge() const;
    Q_INVOKABLE const QSet<QUmlActivityNode *> containedNode() const;
    Q_INVOKABLE const QSet<QUmlActivityGroup *> subgroup() const;
    Q_INVOKABLE QUmlActivityGroup *superGroup() const;

    // Owned attributes [StructuredActivityNode]
    Q_INVOKABLE QUmlActivity *activity() const;
    Q_INVOKABLE const QSet<QUmlActivityEdge *> edge() const;
    Q_INVOKABLE bool mustIsolate() const;
    Q_INVOKABLE const QSet<QUmlActivityNode *> node() const;
    Q_INVOKABLE const QSet<QUmlVariable *> variable() const;

    // Owned attributes [LoopNode]
    Q_INVOKABLE const QList<QUmlOutputPin *> bodyOutput() const;
    Q_INVOKABLE const QSet<QUmlExecutableNode *> bodyPart() const;
    Q_INVOKABLE QUmlOutputPin *decider() const;
    Q_INVOKABLE bool isTestedFirst() const;
    Q_INVOKABLE const QList<QUmlOutputPin *> loopVariable() const;
    Q_INVOKABLE const QList<QUmlInputPin *> loopVariableInput() const;
    Q_INVOKABLE const QList<QUmlOutputPin *> result() const;
    Q_INVOKABLE const QSet<QUmlExecutableNode *> setupPart() const;
    Q_INVOKABLE const QSet<QUmlExecutableNode *> test() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QUmlNamespace *> allNamespaces() const;
    Q_INVOKABLE QSet<QUmlPackage *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [RedefinableElement]
    Q_INVOKABLE bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(QUmlRedefinableElement *redefined) const;

    // Operations [Namespace]
    Q_INVOKABLE QSet<QUmlPackageableElement *> excludeCollisions(QSet<QUmlPackageableElement *> imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(QUmlNamedElement *element) const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> importMembers(QSet<QUmlPackageableElement *> imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(UmlDependency *clientDependency);
    void removeClientDependency(UmlDependency *clientDependency);
    void setName(QString name);
    void setNameExpression(QUmlStringExpression *nameExpression);
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [RedefinableElement]
    void setLeaf(bool isLeaf);

    // Slots for owned attributes [ActivityNode]
    void addInInterruptibleRegion(UmlInterruptibleActivityRegion *inInterruptibleRegion);
    void removeInInterruptibleRegion(UmlInterruptibleActivityRegion *inInterruptibleRegion);
    void addInPartition(UmlActivityPartition *inPartition);
    void removeInPartition(UmlActivityPartition *inPartition);
    void setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode);
    void addIncoming(UmlActivityEdge *incoming);
    void removeIncoming(UmlActivityEdge *incoming);
    void addOutgoing(UmlActivityEdge *outgoing);
    void removeOutgoing(UmlActivityEdge *outgoing);
    void addRedefinedNode(UmlActivityNode *redefinedNode);
    void removeRedefinedNode(UmlActivityNode *redefinedNode);

    // Slots for owned attributes [ExecutableNode]
    void addHandler(UmlExceptionHandler *handler);
    void removeHandler(UmlExceptionHandler *handler);

    // Slots for owned attributes [Action]
    void setLocallyReentrant(bool isLocallyReentrant);
    void addLocalPostcondition(UmlConstraint *localPostcondition);
    void removeLocalPostcondition(UmlConstraint *localPostcondition);
    void addLocalPrecondition(UmlConstraint *localPrecondition);
    void removeLocalPrecondition(UmlConstraint *localPrecondition);

    // Slots for owned attributes [Namespace]
    void addElementImport(UmlElementImport *elementImport);
    void removeElementImport(UmlElementImport *elementImport);
    void addOwnedRule(UmlConstraint *ownedRule);
    void removeOwnedRule(UmlConstraint *ownedRule);
    void addPackageImport(UmlPackageImport *packageImport);
    void removePackageImport(UmlPackageImport *packageImport);

    // Slots for owned attributes [ActivityGroup]

    // Slots for owned attributes [StructuredActivityNode]
    void setActivity(QUmlActivity *activity);
    void addEdge(UmlActivityEdge *edge);
    void removeEdge(UmlActivityEdge *edge);
    void setMustIsolate(bool mustIsolate);
    void addNode(UmlActivityNode *node);
    void removeNode(UmlActivityNode *node);
    void addVariable(UmlVariable *variable);
    void removeVariable(UmlVariable *variable);

    // Slots for owned attributes [LoopNode]
    void addBodyOutput(UmlOutputPin *bodyOutput);
    void removeBodyOutput(UmlOutputPin *bodyOutput);
    void addBodyPart(UmlExecutableNode *bodyPart);
    void removeBodyPart(UmlExecutableNode *bodyPart);
    void setDecider(QUmlOutputPin *decider);
    void setTestedFirst(bool isTestedFirst);
    void addLoopVariable(UmlOutputPin *loopVariable);
    void removeLoopVariable(UmlOutputPin *loopVariable);
    void addLoopVariableInput(UmlInputPin *loopVariableInput);
    void removeLoopVariableInput(UmlInputPin *loopVariableInput);
    void addResult(UmlOutputPin *result);
    void removeResult(UmlOutputPin *result);
    void addSetupPart(UmlExecutableNode *setupPart);
    void removeSetupPart(UmlExecutableNode *setupPart);
    void addTest(UmlExecutableNode *test);
    void removeTest(UmlExecutableNode *test);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlLoopNode *)
Q_DECLARE_METATYPE(QList<QUmlLoopNode *> *)
Q_DECLARE_METATYPE(QSet<QUmlLoopNode *> *)

QT_END_HEADER

#endif // QUMLLOOPNODE_H

