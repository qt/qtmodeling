/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia  LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QTUML_QSTRUCTUREDACTIVITYNODE_H
#define QTUML_QSTRUCTUREDACTIVITYNODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QAction>
#include <QtUml/QNamespace>
#include <QtUml/QActivityGroup>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QOutputPin;
class QVariable;
class QInputPin;
class QActivityEdge;
class QActivity;
class QActivityNode;

class QStructuredActivityNodePrivate;

class Q_UML_EXPORT QStructuredActivityNode : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QSet<QElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(QSet<QComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(QSet<QActivityNode *> redefinedNodes READ redefinedNodes)
    Q_PROPERTY(QSet<QActivityEdge *> incomings READ incomings)
    Q_PROPERTY(QSet<QActivityGroup *> inGroup READ inGroup)
    Q_PROPERTY(QStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QSet<QActivityPartition *> inPartition READ inPartition)
    Q_PROPERTY(QSet<QInterruptibleActivityRegion *> inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(QSet<QActivityEdge *> outgoings READ outgoings)

    Q_PROPERTY(QSet<QExceptionHandler *> handlers READ handlers)

    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant WRITE setLocallyReentrant RESET unsetLocallyReentrant)
    Q_PROPERTY(QClassifier * context READ context STORED false)
    Q_PROPERTY(QSet<QConstraint *> localPostconditions READ localPostconditions)
    Q_PROPERTY(QSet<QConstraint *> localPreconditions READ localPreconditions)
    Q_PROPERTY(QList<QInputPin *> inputs READ inputs)
    Q_PROPERTY(QList<QOutputPin *> outputs READ outputs)

    Q_PROPERTY(QSet<QPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QNamedElement *> members READ members)
    Q_PROPERTY(QSet<QPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(QSet<QActivityNode *> containedNodes READ containedNodes)
    Q_PROPERTY(QSet<QActivityGroup *> subgroups READ subgroups)
    Q_PROPERTY(QSet<QActivityEdge *> containedEdges READ containedEdges)
    Q_PROPERTY(QActivityGroup * superGroup READ superGroup)

    Q_PROPERTY(bool mustIsolate READ mustIsolate WRITE setMustIsolate RESET unsetMustIsolate)
    Q_PROPERTY(QSet<QInputPin *> structuredNodeInputs READ structuredNodeInputs)
    Q_PROPERTY(QSet<QActivityNode *> nodes READ nodes)
    Q_PROPERTY(QSet<QOutputPin *> structuredNodeOutputs READ structuredNodeOutputs)
    Q_PROPERTY(QSet<QActivityEdge *> edges READ edges)
    Q_PROPERTY(QSet<QVariable *> variables READ variables)
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)

    Q_DISABLE_COPY(QStructuredActivityNode)
    Q_DECLARE_PRIVATE(QStructuredActivityNode)

public:
    Q_INVOKABLE explicit QStructuredActivityNode(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QStructuredActivityNode();

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE QSet<QDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE QSet<QRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QClassifier *> redefinitionContexts() const;

    // Association ends from aggregated QActivityNode
    Q_INVOKABLE QSet<QActivityNode *> redefinedNodes() const;
    Q_INVOKABLE void addRedefinedNode(QActivityNode *redefinedNode);
    Q_INVOKABLE void removeRedefinedNode(QActivityNode *redefinedNode);
    Q_INVOKABLE QSet<QActivityEdge *> incomings() const;
    Q_INVOKABLE void addIncoming(QActivityEdge *incoming);
    Q_INVOKABLE void removeIncoming(QActivityEdge *incoming);
    Q_INVOKABLE QSet<QActivityGroup *> inGroup() const;
    Q_INVOKABLE QStructuredActivityNode *inStructuredNode() const;
    Q_INVOKABLE void setInStructuredNode(QStructuredActivityNode *inStructuredNode);
    Q_INVOKABLE QSet<QActivityPartition *> inPartition() const;
    Q_INVOKABLE void addInPartition(QActivityPartition *inPartition);
    Q_INVOKABLE void removeInPartition(QActivityPartition *inPartition);
    Q_INVOKABLE QSet<QInterruptibleActivityRegion *> inInterruptibleRegion() const;
    Q_INVOKABLE void addInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE void removeInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE QSet<QActivityEdge *> outgoings() const;
    Q_INVOKABLE void addOutgoing(QActivityEdge *outgoing);
    Q_INVOKABLE void removeOutgoing(QActivityEdge *outgoing);

    // Association ends from aggregated QExecutableNode
    Q_INVOKABLE QSet<QExceptionHandler *> handlers() const;
    Q_INVOKABLE void addHandler(QExceptionHandler *handler);
    Q_INVOKABLE void removeHandler(QExceptionHandler *handler);

    // Attributes from aggregated QAction
    Q_INVOKABLE bool isLocallyReentrant() const;
    Q_INVOKABLE void setLocallyReentrant(bool isLocallyReentrant);
    Q_INVOKABLE void unsetLocallyReentrant();

    // Association ends from aggregated QAction
    Q_INVOKABLE QClassifier *context() const;
    Q_INVOKABLE QSet<QConstraint *> localPostconditions() const;
    Q_INVOKABLE void addLocalPostcondition(QConstraint *localPostcondition);
    Q_INVOKABLE void removeLocalPostcondition(QConstraint *localPostcondition);
    Q_INVOKABLE QSet<QConstraint *> localPreconditions() const;
    Q_INVOKABLE void addLocalPrecondition(QConstraint *localPrecondition);
    Q_INVOKABLE void removeLocalPrecondition(QConstraint *localPrecondition);
    Q_INVOKABLE QList<QInputPin *> inputs() const;
    Q_INVOKABLE QList<QOutputPin *> outputs() const;

    // Association ends from aggregated QNamespace
    Q_INVOKABLE QSet<QPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QPackageImport *packageImport);
    Q_INVOKABLE QSet<QNamedElement *> members() const;
    Q_INVOKABLE QSet<QPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QElementImport *elementImport);
    Q_INVOKABLE QSet<QConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE QSet<QNamedElement *> ownedMembers() const;

    // Association ends from aggregated QActivityGroup
    Q_INVOKABLE QSet<QActivityNode *> containedNodes() const;
    Q_INVOKABLE QSet<QActivityGroup *> subgroups() const;
    Q_INVOKABLE QSet<QActivityEdge *> containedEdges() const;
    Q_INVOKABLE QActivityGroup *superGroup() const;

    // Attributes from QStructuredActivityNode
    Q_INVOKABLE bool mustIsolate() const;
    Q_INVOKABLE void setMustIsolate(bool mustIsolate);
    Q_INVOKABLE void unsetMustIsolate();

    // Association ends from QStructuredActivityNode
    Q_INVOKABLE QSet<QInputPin *> structuredNodeInputs() const;
    Q_INVOKABLE void addStructuredNodeInput(QInputPin *structuredNodeInput);
    Q_INVOKABLE void removeStructuredNodeInput(QInputPin *structuredNodeInput);
    Q_INVOKABLE QSet<QActivityNode *> nodes() const;
    Q_INVOKABLE void addNode(QActivityNode *node);
    Q_INVOKABLE void removeNode(QActivityNode *node);
    Q_INVOKABLE QSet<QOutputPin *> structuredNodeOutputs() const;
    Q_INVOKABLE void addStructuredNodeOutput(QOutputPin *structuredNodeOutput);
    Q_INVOKABLE void removeStructuredNodeOutput(QOutputPin *structuredNodeOutput);
    Q_INVOKABLE QSet<QActivityEdge *> edges() const;
    Q_INVOKABLE void addEdge(QActivityEdge *edge);
    Q_INVOKABLE void removeEdge(QActivityEdge *edge);
    Q_INVOKABLE QSet<QVariable *> variables() const;
    Q_INVOKABLE void addVariable(QVariable *variable);
    Q_INVOKABLE void removeVariable(QVariable *variable);
    Q_INVOKABLE QActivity *activity() const;
    Q_INVOKABLE void setActivity(QActivity *activity);

    virtual void setPropertyData();

protected:
    explicit QStructuredActivityNode(QStructuredActivityNodePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QAction *_wrappedAction;
    QNamespace *_wrappedNamespace;
    QActivityGroup *_wrappedActivityGroup;
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QSTRUCTUREDACTIVITYNODE_H

