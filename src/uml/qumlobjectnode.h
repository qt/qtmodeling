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
#ifndef QUMLOBJECTNODE_H
#define QUMLOBJECTNODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlTypedElement>

// QtUml includes
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlState;
class QUmlBehavior;
class QUmlValueSpecification;

class QUmlObjectNodePrivate;

class Q_UML_EXPORT QUmlObjectNode : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

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
    Q_PROPERTY(QUmlActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(QSet<QUmlActivityGroup *> inGroup READ inGroup)
    Q_PROPERTY(QUmlStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QSet<QUmlActivityPartition *> inPartition READ inPartition)
    Q_PROPERTY(QSet<QUmlInterruptibleActivityRegion *> inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(QSet<QUmlActivityEdge *> outgoings READ outgoings)

    Q_PROPERTY(QUmlType * type READ type WRITE setType)

    Q_PROPERTY(bool isControlType READ isControlType WRITE setControlType RESET unsetControlType)
    Q_PROPERTY(QtUml::ObjectNodeOrderingKind ordering READ ordering WRITE setOrdering RESET unsetOrdering)
    Q_PROPERTY(QUmlValueSpecification * upperBound READ upperBound WRITE setUpperBound)
    Q_PROPERTY(QUmlBehavior * selection READ selection WRITE setSelection)
    Q_PROPERTY(QSet<QUmlState *> inState READ inState)

    Q_DISABLE_COPY(QUmlObjectNode)
    Q_DECLARE_PRIVATE(QUmlObjectNode)

public:
    Q_INVOKABLE explicit QUmlObjectNode(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlObjectNode();

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
    Q_INVOKABLE QUmlActivity *activity() const;
    Q_INVOKABLE void setActivity(QUmlActivity *activity);
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

    // Association ends from aggregated QUmlTypedElement
    Q_INVOKABLE QUmlType *type() const;
    Q_INVOKABLE void setType(QUmlType *type);

    // Attributes from QUmlObjectNode
    Q_INVOKABLE bool isControlType() const;
    Q_INVOKABLE void setControlType(bool isControlType);
    Q_INVOKABLE void unsetControlType();
    Q_INVOKABLE QtUml::ObjectNodeOrderingKind ordering() const;
    Q_INVOKABLE void setOrdering(QtUml::ObjectNodeOrderingKind ordering);
    Q_INVOKABLE void unsetOrdering();

    // Association ends from QUmlObjectNode
    Q_INVOKABLE QUmlValueSpecification *upperBound() const;
    Q_INVOKABLE void setUpperBound(QUmlValueSpecification *upperBound);
    Q_INVOKABLE QUmlBehavior *selection() const;
    Q_INVOKABLE void setSelection(QUmlBehavior *selection);
    Q_INVOKABLE QSet<QUmlState *> inState() const;
    Q_INVOKABLE void addInState(QUmlState *inState);
    Q_INVOKABLE void removeInState(QUmlState *inState);

    virtual void setPropertyData();

protected:
    explicit QUmlObjectNode(QUmlObjectNodePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlActivityNode *_wrappedUmlActivityNode;
    QUmlTypedElement *_wrappedUmlTypedElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLOBJECTNODE_H

