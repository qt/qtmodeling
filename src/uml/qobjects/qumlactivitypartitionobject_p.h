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
#ifndef QUMLACTIVITYPARTITIONOBJECT_H
#define QUMLACTIVITYPARTITIONOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivityPartition;
class Q_UML_EXPORT QUmlActivityPartitionObject : public QObject
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
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [ActivityGroup]
    Q_PROPERTY(QSet<QObject *> containedEdge READ containedEdge)
    Q_PROPERTY(QSet<QObject *> containedNode READ containedNode)
    Q_PROPERTY(QObject * inActivity READ inActivity)
    Q_PROPERTY(QSet<QObject *> subgroup READ subgroup)
    Q_PROPERTY(QObject * superGroup READ superGroup)

    // Properties [ActivityPartition]
    Q_PROPERTY(QSet<QObject *> edge READ edge)
    Q_PROPERTY(bool isDimension READ isDimension RESET unsetDimension)
    Q_PROPERTY(bool isExternal READ isExternal RESET unsetExternal)
    Q_PROPERTY(QSet<QObject *> node READ node)
    Q_PROPERTY(QObject * represents READ represents)
    Q_PROPERTY(QSet<QObject *> subpartition READ subpartition)
    Q_PROPERTY(QObject * superPartition READ superPartition)

public:
    Q_INVOKABLE explicit QUmlActivityPartitionObject(QUmlActivityPartition *qModelingObject);
    virtual ~QUmlActivityPartitionObject();

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

    // Owned attributes [ActivityGroup]
    Q_INVOKABLE const QSet<QObject *> containedEdge() const;
    Q_INVOKABLE const QSet<QObject *> containedNode() const;
    Q_INVOKABLE QObject *inActivity() const;
    Q_INVOKABLE const QSet<QObject *> subgroup() const;
    Q_INVOKABLE QObject *superGroup() const;

    // Owned attributes [ActivityPartition]
    Q_INVOKABLE const QSet<QObject *> edge() const;
    Q_INVOKABLE bool isDimension() const;
    Q_INVOKABLE bool isExternal() const;
    Q_INVOKABLE const QSet<QObject *> node() const;
    Q_INVOKABLE QObject *represents() const;
    Q_INVOKABLE const QSet<QObject *> subpartition() const;
    Q_INVOKABLE QObject *superPartition() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
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

    // Slots for owned attributes [ActivityPartition]
    void addEdge(QObject *edge);
    void removeEdge(QObject *edge);
    void setDimension(bool isDimension);
    void unsetDimension();
    void setExternal(bool isExternal);
    void unsetExternal();
    void addNode(QObject *node);
    void removeNode(QObject *node);
    void setRepresents(QObject *represents = 0);
    void addSubpartition(QObject *subpartition);
    void removeSubpartition(QObject *subpartition);
    void setSuperPartition(QObject *superPartition = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLACTIVITYPARTITIONOBJECT_H

