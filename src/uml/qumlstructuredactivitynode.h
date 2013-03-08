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
#ifndef QUMLSTRUCTUREDACTIVITYNODE_H
#define QUMLSTRUCTUREDACTIVITYNODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlAction>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlActivityGroup>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlOutputPin;
class QUmlVariable;
class QUmlInputPin;
class QUmlActivityEdge;
class QUmlActivity;
class QUmlActivityNode;

class QUmlStructuredActivityNodePrivate;

class Q_UML_EXPORT QUmlStructuredActivityNode : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(QSet<QUmlActivityNode *> redefinedNodes READ redefinedNodes)
    Q_PROPERTY(QSet<QUmlActivityEdge *> incomings READ incomings)
    Q_PROPERTY(QSet<QUmlActivityGroup *> inGroup READ inGroup)
    Q_PROPERTY(QUmlStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QSet<QUmlActivityPartition *> inPartition READ inPartition)
    Q_PROPERTY(QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(QSet<QUmlActivityEdge *> outgoings READ outgoings)

    Q_PROPERTY(QSet<QUmlExceptionHandler *> handlers READ handlers)

    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant WRITE setLocallyReentrant RESET unsetLocallyReentrant)
    Q_PROPERTY(QUmlClassifier * context READ context STORED false)
    Q_PROPERTY(QSet<QUmlConstraint *> localPostconditions READ localPostconditions)
    Q_PROPERTY(QSet<QUmlConstraint *> localPreconditions READ localPreconditions)
    Q_PROPERTY(QList<QUmlInputPin *> inputs READ inputs)
    Q_PROPERTY(QList<QUmlOutputPin *> outputs READ outputs)

    Q_PROPERTY(QSet<QUmlPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QUmlNamedElement *> members READ members)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QUmlElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(QSet<QUmlActivityNode *> containedNodes READ containedNodes)
    Q_PROPERTY(QSet<QUmlActivityGroup *> subgroups READ subgroups)
    Q_PROPERTY(QSet<QUmlActivityEdge *> containedEdges READ containedEdges)
    Q_PROPERTY(QUmlActivityGroup * superGroup READ superGroup)

    Q_PROPERTY(bool mustIsolate READ mustIsolate WRITE setMustIsolate RESET unsetMustIsolate)
    Q_PROPERTY(QSet<QUmlInputPin *> structuredNodeInputs READ structuredNodeInputs)
    Q_PROPERTY(QSet<QUmlActivityNode *> nodes READ nodes)
    Q_PROPERTY(QSet<QUmlOutputPin *> structuredNodeOutputs READ structuredNodeOutputs)
    Q_PROPERTY(QSet<QUmlActivityEdge *> edges READ edges)
    Q_PROPERTY(QSet<QUmlVariable *> variables READ variables)
    Q_PROPERTY(QUmlActivity * activity READ activity WRITE setActivity)

    Q_DISABLE_COPY(QUmlStructuredActivityNode)
    Q_DECLARE_PRIVATE(QUmlStructuredActivityNode)

public:
    Q_INVOKABLE explicit QUmlStructuredActivityNode(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlStructuredActivityNode();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Attributes from aggregated QUmlRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QUmlRedefinableElement
    Q_INVOKABLE QSet<QUmlRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QUmlClassifier *> redefinitionContexts() const;

    // Association ends from aggregated QUmlActivityNode
    Q_INVOKABLE QSet<QUmlActivityNode *> redefinedNodes() const;
    Q_INVOKABLE void addRedefinedNode(QUmlActivityNode *redefinedNode);
    Q_INVOKABLE void removeRedefinedNode(QUmlActivityNode *redefinedNode);
    Q_INVOKABLE QSet<QUmlActivityEdge *> incomings() const;
    Q_INVOKABLE void addIncoming(QUmlActivityEdge *incoming);
    Q_INVOKABLE void removeIncoming(QUmlActivityEdge *incoming);
    Q_INVOKABLE QSet<QUmlActivityGroup *> inGroup() const;
    Q_INVOKABLE QUmlStructuredActivityNode *inStructuredNode() const;
    Q_INVOKABLE void setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode);
    Q_INVOKABLE QSet<QUmlActivityPartition *> inPartition() const;
    Q_INVOKABLE void addInPartition(QUmlActivityPartition *inPartition);
    Q_INVOKABLE void removeInPartition(QUmlActivityPartition *inPartition);
    Q_INVOKABLE QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion() const;
    Q_INVOKABLE void addInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE void removeInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE QSet<QUmlActivityEdge *> outgoings() const;
    Q_INVOKABLE void addOutgoing(QUmlActivityEdge *outgoing);
    Q_INVOKABLE void removeOutgoing(QUmlActivityEdge *outgoing);

    // Association ends from aggregated QUmlExecutableNode
    Q_INVOKABLE QSet<QUmlExceptionHandler *> handlers() const;
    Q_INVOKABLE void addHandler(QUmlExceptionHandler *handler);
    Q_INVOKABLE void removeHandler(QUmlExceptionHandler *handler);

    // Attributes from aggregated QUmlAction
    Q_INVOKABLE bool isLocallyReentrant() const;
    Q_INVOKABLE void setLocallyReentrant(bool isLocallyReentrant);
    Q_INVOKABLE void unsetLocallyReentrant();

    // Association ends from aggregated QUmlAction
    Q_INVOKABLE QUmlClassifier *context() const;
    Q_INVOKABLE QSet<QUmlConstraint *> localPostconditions() const;
    Q_INVOKABLE void addLocalPostcondition(QUmlConstraint *localPostcondition);
    Q_INVOKABLE void removeLocalPostcondition(QUmlConstraint *localPostcondition);
    Q_INVOKABLE QSet<QUmlConstraint *> localPreconditions() const;
    Q_INVOKABLE void addLocalPrecondition(QUmlConstraint *localPrecondition);
    Q_INVOKABLE void removeLocalPrecondition(QUmlConstraint *localPrecondition);
    Q_INVOKABLE QList<QUmlInputPin *> inputs() const;
    Q_INVOKABLE QList<QUmlOutputPin *> outputs() const;

    // Association ends from aggregated QUmlNamespace
    Q_INVOKABLE QSet<QUmlPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE QSet<QUmlNamedElement *> members() const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QUmlElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE QSet<QUmlConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE QSet<QUmlNamedElement *> ownedMembers() const;

    // Association ends from aggregated QUmlActivityGroup
    Q_INVOKABLE QSet<QUmlActivityNode *> containedNodes() const;
    Q_INVOKABLE QSet<QUmlActivityGroup *> subgroups() const;
    Q_INVOKABLE QSet<QUmlActivityEdge *> containedEdges() const;
    Q_INVOKABLE QUmlActivityGroup *superGroup() const;

    // Attributes from QUmlStructuredActivityNode
    Q_INVOKABLE bool mustIsolate() const;
    Q_INVOKABLE void setMustIsolate(bool mustIsolate);
    Q_INVOKABLE void unsetMustIsolate();

    // Association ends from QUmlStructuredActivityNode
    Q_INVOKABLE QSet<QUmlInputPin *> structuredNodeInputs() const;
    Q_INVOKABLE void addStructuredNodeInput(QUmlInputPin *structuredNodeInput);
    Q_INVOKABLE void removeStructuredNodeInput(QUmlInputPin *structuredNodeInput);
    Q_INVOKABLE QSet<QUmlActivityNode *> nodes() const;
    Q_INVOKABLE void addNode(QUmlActivityNode *node);
    Q_INVOKABLE void removeNode(QUmlActivityNode *node);
    Q_INVOKABLE QSet<QUmlOutputPin *> structuredNodeOutputs() const;
    Q_INVOKABLE void addStructuredNodeOutput(QUmlOutputPin *structuredNodeOutput);
    Q_INVOKABLE void removeStructuredNodeOutput(QUmlOutputPin *structuredNodeOutput);
    Q_INVOKABLE QSet<QUmlActivityEdge *> edges() const;
    Q_INVOKABLE void addEdge(QUmlActivityEdge *edge);
    Q_INVOKABLE void removeEdge(QUmlActivityEdge *edge);
    Q_INVOKABLE QSet<QUmlVariable *> variables() const;
    Q_INVOKABLE void addVariable(QUmlVariable *variable);
    Q_INVOKABLE void removeVariable(QUmlVariable *variable);
    Q_INVOKABLE QUmlActivity *activity() const;
    Q_INVOKABLE void setActivity(QUmlActivity *activity);

    virtual void setPropertyData();

protected:
    explicit QUmlStructuredActivityNode(QUmlStructuredActivityNodePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlAction *_wrappedUmlAction;
    QUmlNamespace *_wrappedUmlNamespace;
    QUmlActivityGroup *_wrappedUmlActivityGroup;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSTRUCTUREDACTIVITYNODE_H

