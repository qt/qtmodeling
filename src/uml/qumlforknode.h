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
#ifndef QUMLFORKNODE_H
#define QUMLFORKNODE_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlforknode_p.h"

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
class QUmlDependency;
class QUmlElement;
class QUmlInterruptibleActivityRegion;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlPackage;
class QUmlRedefinableElement;
class QUmlStringExpression;
class QUmlStructuredActivityNode;

class Q_UML_EXPORT QUmlForkNode : public QObject, public UmlForkNode
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
    Q_PROPERTY(QUmlActivity * activity READ activity)
    Q_PROPERTY(QSet<QUmlActivityGroup *> inGroup READ inGroup)
    Q_PROPERTY(QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(QSet<QUmlActivityPartition *> inPartition READ inPartition)
    Q_PROPERTY(QUmlStructuredActivityNode * inStructuredNode READ inStructuredNode)
    Q_PROPERTY(QSet<QUmlActivityEdge *> incoming READ incoming)
    Q_PROPERTY(QSet<QUmlActivityEdge *> outgoing READ outgoing)
    Q_PROPERTY(QSet<QUmlActivityNode *> redefinedNode READ redefinedNode)

public:
    Q_INVOKABLE explicit QUmlForkNode(QObject *parent = 0);

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
    Q_INVOKABLE QUmlActivity *activity() const;
    Q_INVOKABLE const QSet<QUmlActivityGroup *> inGroup() const;
    Q_INVOKABLE const QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion() const;
    Q_INVOKABLE const QSet<QUmlActivityPartition *> inPartition() const;
    Q_INVOKABLE QUmlStructuredActivityNode *inStructuredNode() const;
    Q_INVOKABLE const QSet<QUmlActivityEdge *> incoming() const;
    Q_INVOKABLE const QSet<QUmlActivityEdge *> outgoing() const;
    Q_INVOKABLE const QSet<QUmlActivityNode *> redefinedNode() const;

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
    void setActivity(QUmlActivity *activity);
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
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlForkNode *)
Q_DECLARE_METATYPE(QList<QUmlForkNode *> *)
Q_DECLARE_METATYPE(QSet<QUmlForkNode *> *)

QT_END_HEADER

#endif // QUMLFORKNODE_H

