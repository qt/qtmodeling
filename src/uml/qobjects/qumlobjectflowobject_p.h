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
#ifndef QUMLOBJECTFLOWOBJECT_H
#define QUMLOBJECTFLOWOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtModeling/QModelingObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlObjectFlow;
class QModelingObjectPrivate;
class Q_UML_EXPORT QUmlObjectFlowObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QUmlObjectFlowObject)
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

    // Properties [ActivityEdge]
    Q_PROPERTY(QObject * activity READ activity WRITE setActivity NOTIFY activityChanged)
    Q_PROPERTY(QObject * guard READ guard WRITE setGuard NOTIFY guardChanged)
    Q_PROPERTY(QSet<QObject *> inGroups READ inGroups NOTIFY inGroupsChanged)
    Q_PROPERTY(QSet<QObject *> inPartitions READ inPartitions NOTIFY inPartitionsChanged)
    Q_PROPERTY(QObject * inStructuredNode READ inStructuredNode WRITE setInStructuredNode NOTIFY inStructuredNodeChanged)
    Q_PROPERTY(QObject * interrupts READ interrupts WRITE setInterrupts NOTIFY interruptsChanged)
    Q_PROPERTY(QSet<QObject *> redefinedEdges READ redefinedEdges NOTIFY redefinedEdgesChanged)
    Q_PROPERTY(QObject * source READ source WRITE setSource NOTIFY sourceChanged)
    Q_PROPERTY(QObject * target READ target WRITE setTarget NOTIFY targetChanged)
    Q_PROPERTY(QObject * weight READ weight WRITE setWeight NOTIFY weightChanged)

    // Properties [ObjectFlow]
    Q_PROPERTY(bool isMulticast READ isMulticast WRITE setMulticast NOTIFY isMulticastChanged RESET unsetMulticast)
    Q_PROPERTY(bool isMultireceive READ isMultireceive WRITE setMultireceive NOTIFY isMultireceiveChanged RESET unsetMultireceive)
    Q_PROPERTY(QObject * selection READ selection WRITE setSelection NOTIFY selectionChanged)
    Q_PROPERTY(QObject * transformation READ transformation WRITE setTransformation NOTIFY transformationChanged)

public:
    Q_INVOKABLE explicit QUmlObjectFlowObject(QUmlObjectFlow *modelingElement);

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

    // Owned attributes [ActivityEdge]
    Q_INVOKABLE QObject *activity() const;
    Q_INVOKABLE QObject *guard() const;
    Q_INVOKABLE const QSet<QObject *> inGroups() const;
    Q_INVOKABLE const QSet<QObject *> inPartitions() const;
    Q_INVOKABLE QObject *inStructuredNode() const;
    Q_INVOKABLE QObject *interrupts() const;
    Q_INVOKABLE const QSet<QObject *> redefinedEdges() const;
    Q_INVOKABLE QObject *source() const;
    Q_INVOKABLE QObject *target() const;
    Q_INVOKABLE QObject *weight() const;

    // Owned attributes [ObjectFlow]
    Q_INVOKABLE bool isMulticast() const;
    Q_INVOKABLE bool isMultireceive() const;
    Q_INVOKABLE QObject *selection() const;
    Q_INVOKABLE QObject *transformation() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_TODO Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_TODO Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [RedefinableElement]
    Q_TODO Q_INVOKABLE bool isConsistentWith(QObject *redefinee) const;
    Q_TODO Q_INVOKABLE bool isRedefinitionContextValid(QObject *redefined) const;

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

    // Slots for owned attributes [ActivityEdge]
    void setActivity(QObject *activity = 0);
    void setGuard(QObject *guard = 0);
    void Q_DECL_HIDDEN addInGroup(QObject *inGroup);
    void Q_DECL_HIDDEN removeInGroup(QObject *inGroup);
    void addInPartition(QObject *inPartition);
    void removeInPartition(QObject *inPartition);
    void setInStructuredNode(QObject *inStructuredNode = 0);
    void setInterrupts(QObject *interrupts = 0);
    void addRedefinedEdge(QObject *redefinedEdge);
    void removeRedefinedEdge(QObject *redefinedEdge);
    void setSource(QObject *source = 0);
    void setTarget(QObject *target = 0);
    void setWeight(QObject *weight = 0);

    // Slots for owned attributes [ObjectFlow]
    void setMulticast(bool isMulticast);
    void unsetMulticast();
    void setMultireceive(bool isMultireceive);
    void unsetMultireceive();
    void setSelection(QObject *selection = 0);
    void setTransformation(QObject *transformation = 0);

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

    // Signals for owned attributes [ActivityEdge]
    void activityChanged(QObject *activity);
    void guardChanged(QObject *guard);
    void inGroupsChanged(QSet<QObject *> inGroups);
    void inPartitionsChanged(QSet<QObject *> inPartitions);
    void inStructuredNodeChanged(QObject *inStructuredNode);
    void interruptsChanged(QObject *interrupts);
    void redefinedEdgesChanged(QSet<QObject *> redefinedEdges);
    void sourceChanged(QObject *source);
    void targetChanged(QObject *target);
    void weightChanged(QObject *weight);

    // Signals for owned attributes [ObjectFlow]
    void isMulticastChanged(bool isMulticast);
    void isMultireceiveChanged(bool isMultireceive);
    void selectionChanged(QObject *selection);
    void transformationChanged(QObject *transformation);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

#endif // QUMLOBJECTFLOWOBJECT_H

