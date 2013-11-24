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
#ifndef QUMLEXPANSIONNODEOBJECT_H
#define QUMLEXPANSIONNODEOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtModeling/QModelingObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlExpansionNode;
class QModelingObjectPrivate;
class Q_UML_EXPORT QUmlExpansionNodeObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QUmlExpansionNodeObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComments READ ownedComments NOTIFY ownedCommentsChanged)
    Q_PROPERTY(QSet<QObject *> ownedElements READ ownedElements NOTIFY ownedElementsChanged)
    Q_PROPERTY(QObject * owner READ owner NOTIFY ownerChanged)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependencies READ clientDependencies NOTIFY clientDependenciesChanged)
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QObject * nameExpression READ nameExpression WRITE setNameExpression NOTIFY nameExpressionChanged)
    Q_PROPERTY(QObject * namespace_ READ namespace_ NOTIFY namespaceChanged)
    Q_PROPERTY(QString qualifiedName READ qualifiedName NOTIFY qualifiedNameChanged STORED false)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility NOTIFY visibilityChanged)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf NOTIFY isLeafChanged RESET unsetLeaf)
    Q_PROPERTY(QSet<QObject *> redefinedElements READ redefinedElements NOTIFY redefinedElementsChanged)
    Q_PROPERTY(QSet<QObject *> redefinitionContexts READ redefinitionContexts NOTIFY redefinitionContextsChanged)

    // Properties [ActivityNode]
    Q_PROPERTY(QObject * activity READ activity WRITE setActivity NOTIFY activityChanged)
    Q_PROPERTY(QSet<QObject *> inGroups READ inGroups NOTIFY inGroupsChanged)
    Q_PROPERTY(QSet<QObject *> inInterruptibleRegions READ inInterruptibleRegions NOTIFY inInterruptibleRegionsChanged)
    Q_PROPERTY(QSet<QObject *> inPartitions READ inPartitions NOTIFY inPartitionsChanged)
    Q_PROPERTY(QObject * inStructuredNode READ inStructuredNode WRITE setInStructuredNode NOTIFY inStructuredNodeChanged)
    Q_PROPERTY(QSet<QObject *> incomings READ incomings NOTIFY incomingsChanged)
    Q_PROPERTY(QSet<QObject *> outgoings READ outgoings NOTIFY outgoingsChanged)
    Q_PROPERTY(QSet<QObject *> redefinedNodes READ redefinedNodes NOTIFY redefinedNodesChanged)

    // Properties [TypedElement]
    Q_PROPERTY(QObject * type READ type WRITE setType NOTIFY typeChanged)

    // Properties [ObjectNode]
    Q_PROPERTY(QSet<QObject *> inStates READ inStates NOTIFY inStatesChanged)
    Q_PROPERTY(bool isControlType READ isControlType WRITE setControlType NOTIFY isControlTypeChanged RESET unsetControlType)
    Q_PROPERTY(QtUml::ObjectNodeOrderingKind ordering READ ordering WRITE setOrdering NOTIFY orderingChanged RESET unsetOrdering)
    Q_PROPERTY(QObject * selection READ selection WRITE setSelection NOTIFY selectionChanged)
    Q_PROPERTY(QObject * upperBound READ upperBound WRITE setUpperBound NOTIFY upperBoundChanged)

    // Properties [ExpansionNode]
    Q_PROPERTY(QObject * regionAsInput READ regionAsInput WRITE setRegionAsInput NOTIFY regionAsInputChanged)
    Q_PROPERTY(QObject * regionAsOutput READ regionAsOutput WRITE setRegionAsOutput NOTIFY regionAsOutputChanged)

public:
    Q_INVOKABLE explicit QUmlExpansionNodeObject(QUmlExpansionNode *modelingElement);

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
    Q_INVOKABLE QObject *activity() const;
    Q_INVOKABLE const QSet<QObject *> inGroups() const;
    Q_INVOKABLE const QSet<QObject *> inInterruptibleRegions() const;
    Q_INVOKABLE const QSet<QObject *> inPartitions() const;
    Q_INVOKABLE QObject *inStructuredNode() const;
    Q_INVOKABLE const QSet<QObject *> incomings() const;
    Q_INVOKABLE const QSet<QObject *> outgoings() const;
    Q_INVOKABLE const QSet<QObject *> redefinedNodes() const;

    // Owned attributes [TypedElement]
    Q_INVOKABLE QObject *type() const;

    // Owned attributes [ObjectNode]
    Q_INVOKABLE const QSet<QObject *> inStates() const;
    Q_INVOKABLE bool isControlType() const;
    Q_INVOKABLE QtUml::ObjectNodeOrderingKind ordering() const;
    Q_INVOKABLE QObject *selection() const;
    Q_INVOKABLE QObject *upperBound() const;

    // Owned attributes [ExpansionNode]
    Q_INVOKABLE QObject *regionAsInput() const;
    Q_INVOKABLE QObject *regionAsOutput() const;

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
    void setActivity(QObject *activity = 0);
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

    // Slots for owned attributes [TypedElement]
    void setType(QObject *type = 0);

    // Slots for owned attributes [ObjectNode]
    void addInState(QObject *inState);
    void removeInState(QObject *inState);
    void setControlType(bool isControlType);
    void unsetControlType();
    void setOrdering(QtUml::ObjectNodeOrderingKind ordering);
    void unsetOrdering();
    void setSelection(QObject *selection = 0);
    void setUpperBound(QObject *upperBound = 0);

    // Slots for owned attributes [ExpansionNode]
    void setRegionAsInput(QObject *regionAsInput = 0);
    void setRegionAsOutput(QObject *regionAsOutput = 0);

Q_SIGNALS:

    // Signals for owned attributes [Element]
    void ownedCommentsChanged(QSet<QObject *> ownedComments);
    void ownedElementsChanged(QSet<QObject *> ownedElements);
    void ownerChanged(QObject *owner);

    // Signals for owned attributes [NamedElement]
    void clientDependenciesChanged(QSet<QObject *> clientDependencies);
    void nameChanged(QString name);
    void nameExpressionChanged(QObject *nameExpression);
    void namespaceChanged(QObject *namespace_);
    void qualifiedNameChanged(QString qualifiedName);
    void visibilityChanged(QtUml::VisibilityKind visibility);

    // Signals for owned attributes [RedefinableElement]
    void isLeafChanged(bool isLeaf);
    void redefinedElementsChanged(QSet<QObject *> redefinedElements);
    void redefinitionContextsChanged(QSet<QObject *> redefinitionContexts);

    // Signals for owned attributes [ActivityNode]
    void activityChanged(QObject *activity);
    void inGroupsChanged(QSet<QObject *> inGroups);
    void inInterruptibleRegionsChanged(QSet<QObject *> inInterruptibleRegions);
    void inPartitionsChanged(QSet<QObject *> inPartitions);
    void inStructuredNodeChanged(QObject *inStructuredNode);
    void incomingsChanged(QSet<QObject *> incomings);
    void outgoingsChanged(QSet<QObject *> outgoings);
    void redefinedNodesChanged(QSet<QObject *> redefinedNodes);

    // Signals for owned attributes [TypedElement]
    void typeChanged(QObject *type);

    // Signals for owned attributes [ObjectNode]
    void inStatesChanged(QSet<QObject *> inStates);
    void isControlTypeChanged(bool isControlType);
    void orderingChanged(QtUml::ObjectNodeOrderingKind ordering);
    void selectionChanged(QObject *selection);
    void upperBoundChanged(QObject *upperBound);

    // Signals for owned attributes [ExpansionNode]
    void regionAsInputChanged(QObject *regionAsInput);
    void regionAsOutputChanged(QObject *regionAsOutput);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

#endif // QUMLEXPANSIONNODEOBJECT_H

