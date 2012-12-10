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
#ifndef QTUML_QOBJECTNODE_H
#define QTUML_QOBJECTNODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtMof/QMofObject>
#include <QtUml/QActivityNode>
#include <QtUml/QTypedElement>

// QtUml includes
#include <QtUml/QtUmlEnumerations>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QState;
class QBehavior;
class QValueSpecification;

class QObjectNodePrivate;

class Q_UML_EXPORT QObjectNode : public QtMof::QMofObject
{
    Q_OBJECT

    Q_PROPERTY(bool isControlType READ isControlType WRITE setControlType)
    Q_PROPERTY(QtUml::ObjectNodeOrderingKind ordering READ ordering WRITE setOrdering)
    Q_PROPERTY(QValueSpecification * upperBound READ upperBound WRITE setUpperBound)
    Q_PROPERTY(QBehavior * selection READ selection WRITE setSelection)
    Q_PROPERTY(const QSet<QState *> * inState READ inState)

    Q_DISABLE_COPY(QObjectNode)
    Q_DECLARE_PRIVATE(QObjectNode)

public:
    Q_INVOKABLE explicit QObjectNode(QtMof::QMofObject *parent = 0, QtMof::QMofObject *wrapper = 0);
    virtual ~QObjectNode();

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
    Q_INVOKABLE QActivity *activity() const;
    Q_INVOKABLE void setActivity(QActivity *activity);
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

    // Association ends from aggregated QTypedElement
    Q_INVOKABLE QType *type() const;
    Q_INVOKABLE void setType(QType *type);

    // Attributes from QObjectNode
    Q_INVOKABLE bool isControlType() const;
    Q_INVOKABLE void setControlType(bool isControlType);
    Q_INVOKABLE QtUml::ObjectNodeOrderingKind ordering() const;
    Q_INVOKABLE void setOrdering(QtUml::ObjectNodeOrderingKind ordering);

    // Association ends from QObjectNode
    Q_INVOKABLE QValueSpecification *upperBound() const;
    Q_INVOKABLE void setUpperBound(QValueSpecification *upperBound);
    Q_INVOKABLE QBehavior *selection() const;
    Q_INVOKABLE void setSelection(QBehavior *selection);
    Q_INVOKABLE const QSet<QState *> *inState() const;
    Q_INVOKABLE void addInState(QState *inState);
    Q_INVOKABLE void removeInState(QState *inState);

protected:
    explicit QObjectNode(QObjectNodePrivate &dd, QtMof::QMofObject *parent = 0, QtMof::QMofObject *wrapper = 0);

private:
    QActivityNode *_wrappedActivityNode;
    QTypedElement *_wrappedTypedElement;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QObjectNode) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QObjectNode) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QObjectNode) *> *)

QT_END_HEADER

#endif // QTUML_QOBJECTNODE_H

