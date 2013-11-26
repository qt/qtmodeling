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
#ifndef QUMLINTERRUPTIBLEACTIVITYREGIONOBJECT_H
#define QUMLINTERRUPTIBLEACTIVITYREGIONOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtModeling/QModelingObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlInterruptibleActivityRegion;
class QModelingObjectPrivate;
class Q_UML_EXPORT QUmlInterruptibleActivityRegionObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QUmlInterruptibleActivityRegionObject)
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

    // Properties [ActivityGroup]
    Q_PROPERTY(QSet<QObject *> containedEdges READ containedEdges NOTIFY containedEdgesChanged)
    Q_PROPERTY(QSet<QObject *> containedNodes READ containedNodes NOTIFY containedNodesChanged)
    Q_PROPERTY(QObject * inActivity READ inActivity WRITE setInActivity NOTIFY inActivityChanged)
    Q_PROPERTY(QSet<QObject *> subgroups READ subgroups NOTIFY subgroupsChanged)
    Q_PROPERTY(QObject * superGroup READ superGroup NOTIFY superGroupChanged)

    // Properties [InterruptibleActivityRegion]
    Q_PROPERTY(QSet<QObject *> interruptingEdges READ interruptingEdges NOTIFY interruptingEdgesChanged)
    Q_PROPERTY(QSet<QObject *> nodes READ nodes NOTIFY nodesChanged)

public:
    Q_INVOKABLE explicit QUmlInterruptibleActivityRegionObject(QUmlInterruptibleActivityRegion *modelingElement);

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

    // Owned attributes [ActivityGroup]
    Q_INVOKABLE const QSet<QObject *> containedEdges() const;
    Q_INVOKABLE const QSet<QObject *> containedNodes() const;
    Q_INVOKABLE QObject *inActivity() const;
    Q_INVOKABLE const QSet<QObject *> subgroups() const;
    Q_INVOKABLE QObject *superGroup() const;

    // Owned attributes [InterruptibleActivityRegion]
    Q_INVOKABLE const QSet<QObject *> interruptingEdges() const;
    Q_INVOKABLE const QSet<QObject *> nodes() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_TODO Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_TODO Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

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

    // Slots for owned attributes [ActivityGroup]
    void Q_DECL_HIDDEN addContainedEdge(QObject *containedEdge);
    void Q_DECL_HIDDEN removeContainedEdge(QObject *containedEdge);
    void Q_DECL_HIDDEN addContainedNode(QObject *containedNode);
    void Q_DECL_HIDDEN removeContainedNode(QObject *containedNode);
    void setInActivity(QObject *inActivity = 0);
    void Q_DECL_HIDDEN addSubgroup(QObject *subgroup);
    void Q_DECL_HIDDEN removeSubgroup(QObject *subgroup);
    void Q_DECL_HIDDEN setSuperGroup(QObject *superGroup = 0);

    // Slots for owned attributes [InterruptibleActivityRegion]
    void addInterruptingEdge(QObject *interruptingEdge);
    void removeInterruptingEdge(QObject *interruptingEdge);
    void addNode(QObject *node);
    void removeNode(QObject *node);

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

    // Signals for owned attributes [ActivityGroup]
    void containedEdgesChanged(QSet<QObject *> containedEdges);
    void containedNodesChanged(QSet<QObject *> containedNodes);
    void inActivityChanged(QObject *inActivity);
    void subgroupsChanged(QSet<QObject *> subgroups);
    void superGroupChanged(QObject *superGroup);

    // Signals for owned attributes [InterruptibleActivityRegion]
    void interruptingEdgesChanged(QSet<QObject *> interruptingEdges);
    void nodesChanged(QSet<QObject *> nodes);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

#endif // QUMLINTERRUPTIBLEACTIVITYREGIONOBJECT_H

