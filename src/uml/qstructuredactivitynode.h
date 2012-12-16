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
using QtWrappedObjects::QWrappedObject;
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

    Q_PROPERTY(bool mustIsolate READ mustIsolate WRITE setMustIsolate)
    Q_PROPERTY(const QSet<QInputPin *> * structuredNodeInputs READ structuredNodeInputs)
    Q_PROPERTY(const QSet<QActivityNode *> * nodes READ nodes)
    Q_PROPERTY(const QSet<QOutputPin *> * structuredNodeOutputs READ structuredNodeOutputs)
    Q_PROPERTY(const QSet<QActivityEdge *> * edges READ edges)
    Q_PROPERTY(const QSet<QVariable *> * variables READ variables)
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)

    Q_DISABLE_COPY(QStructuredActivityNode)
    Q_DECLARE_PRIVATE(QStructuredActivityNode)

public:
    Q_INVOKABLE explicit QStructuredActivityNode(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QStructuredActivityNode();

    // Association ends from aggregated QElement
    Q_INVOKABLE const QSet<QElement *> *ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE const QSet<QComment *> *ownedComments() const;
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
    Q_INVOKABLE const QSet<QDependency *> *clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE const QSet<QRedefinableElement *> *redefinedElements() const;
    Q_INVOKABLE const QSet<QClassifier *> *redefinitionContexts() const;

    // Association ends from aggregated QActivityNode
    Q_INVOKABLE const QSet<QActivityNode *> *redefinedNodes() const;
    Q_INVOKABLE void addRedefinedNode(QActivityNode *redefinedNode);
    Q_INVOKABLE void removeRedefinedNode(QActivityNode *redefinedNode);
    Q_INVOKABLE const QSet<QActivityEdge *> *incomings() const;
    Q_INVOKABLE void addIncoming(QActivityEdge *incoming);
    Q_INVOKABLE void removeIncoming(QActivityEdge *incoming);
    Q_INVOKABLE const QSet<QActivityGroup *> *inGroup() const;
    Q_INVOKABLE QStructuredActivityNode *inStructuredNode() const;
    Q_INVOKABLE void setInStructuredNode(QStructuredActivityNode *inStructuredNode);
    Q_INVOKABLE const QSet<QActivityPartition *> *inPartition() const;
    Q_INVOKABLE void addInPartition(QActivityPartition *inPartition);
    Q_INVOKABLE void removeInPartition(QActivityPartition *inPartition);
    Q_INVOKABLE const QSet<QInterruptibleActivityRegion *> *inInterruptibleRegion() const;
    Q_INVOKABLE void addInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE void removeInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion);
    Q_INVOKABLE const QSet<QActivityEdge *> *outgoings() const;
    Q_INVOKABLE void addOutgoing(QActivityEdge *outgoing);
    Q_INVOKABLE void removeOutgoing(QActivityEdge *outgoing);

    // Association ends from aggregated QExecutableNode
    Q_INVOKABLE const QSet<QExceptionHandler *> *handlers() const;
    Q_INVOKABLE void addHandler(QExceptionHandler *handler);
    Q_INVOKABLE void removeHandler(QExceptionHandler *handler);

    // Attributes from aggregated QAction
    Q_INVOKABLE bool isLocallyReentrant() const;
    Q_INVOKABLE void setLocallyReentrant(bool isLocallyReentrant);

    // Association ends from aggregated QAction
    Q_INVOKABLE QClassifier *context() const;
    Q_INVOKABLE const QSet<QConstraint *> *localPostconditions() const;
    Q_INVOKABLE void addLocalPostcondition(QConstraint *localPostcondition);
    Q_INVOKABLE void removeLocalPostcondition(QConstraint *localPostcondition);
    Q_INVOKABLE const QSet<QConstraint *> *localPreconditions() const;
    Q_INVOKABLE void addLocalPrecondition(QConstraint *localPrecondition);
    Q_INVOKABLE void removeLocalPrecondition(QConstraint *localPrecondition);
    Q_INVOKABLE const QList<QInputPin *> *inputs() const;
    Q_INVOKABLE const QList<QOutputPin *> *outputs() const;

    // Association ends from aggregated QNamespace
    Q_INVOKABLE const QSet<QPackageImport *> *packageImports() const;
    Q_INVOKABLE void addPackageImport(QPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QPackageImport *packageImport);
    Q_INVOKABLE const QSet<QNamedElement *> *members() const;
    Q_INVOKABLE const QSet<QPackageableElement *> *importedMembers() const;
    Q_INVOKABLE const QSet<QElementImport *> *elementImports() const;
    Q_INVOKABLE void addElementImport(QElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QElementImport *elementImport);
    Q_INVOKABLE const QSet<QConstraint *> *ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE const QSet<QNamedElement *> *ownedMembers() const;

    // Association ends from aggregated QActivityGroup
    Q_INVOKABLE const QSet<QActivityNode *> *containedNodes() const;
    Q_INVOKABLE const QSet<QActivityGroup *> *subgroups() const;
    Q_INVOKABLE const QSet<QActivityEdge *> *containedEdges() const;
    Q_INVOKABLE QActivityGroup *superGroup() const;

    // Attributes from QStructuredActivityNode
    Q_INVOKABLE bool mustIsolate() const;
    Q_INVOKABLE void setMustIsolate(bool mustIsolate);

    // Association ends from QStructuredActivityNode
    Q_INVOKABLE const QSet<QInputPin *> *structuredNodeInputs() const;
    Q_INVOKABLE void addStructuredNodeInput(QInputPin *structuredNodeInput);
    Q_INVOKABLE void removeStructuredNodeInput(QInputPin *structuredNodeInput);
    Q_INVOKABLE const QSet<QActivityNode *> *nodes() const;
    Q_INVOKABLE void addNode(QActivityNode *node);
    Q_INVOKABLE void removeNode(QActivityNode *node);
    Q_INVOKABLE const QSet<QOutputPin *> *structuredNodeOutputs() const;
    Q_INVOKABLE void addStructuredNodeOutput(QOutputPin *structuredNodeOutput);
    Q_INVOKABLE void removeStructuredNodeOutput(QOutputPin *structuredNodeOutput);
    Q_INVOKABLE const QSet<QActivityEdge *> *edges() const;
    Q_INVOKABLE void addEdge(QActivityEdge *edge);
    Q_INVOKABLE void removeEdge(QActivityEdge *edge);
    Q_INVOKABLE const QSet<QVariable *> *variables() const;
    Q_INVOKABLE void addVariable(QVariable *variable);
    Q_INVOKABLE void removeVariable(QVariable *variable);
    Q_INVOKABLE QActivity *activity() const;
    Q_INVOKABLE void setActivity(QActivity *activity);
    virtual void registerMetaTypes() const;

protected:
    explicit QStructuredActivityNode(QStructuredActivityNodePrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);

private:
    QAction *_wrappedAction;
    QNamespace *_wrappedNamespace;
    QActivityGroup *_wrappedActivityGroup;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QStructuredActivityNode) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QStructuredActivityNode) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QStructuredActivityNode) *> *)

QT_END_HEADER

#endif // QTUML_QSTRUCTUREDACTIVITYNODE_H

