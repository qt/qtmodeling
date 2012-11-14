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
#include <QtCore/QObject>
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

class Q_UML_EXPORT QObjectNode : public QObject
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
    explicit QObjectNode(QObject *parent = 0);
    virtual ~QObjectNode();

    // Association ends from aggregated QElement
    const QSet<QElement *> *ownedElements() const;
    QElement *owner() const;
    const QSet<QComment *> *ownedComments() const;
    void addOwnedComment(QComment *ownedComment);
    void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    QString name() const;
    void setName(QString name);
    QtUml::VisibilityKind visibility() const;
    void setVisibility(QtUml::VisibilityKind visibility);
    QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    QStringExpression *nameExpression() const;
    void setNameExpression(QStringExpression *nameExpression);
    QNamespace *namespace_() const;
    const QSet<QDependency *> *clientDependencies() const;
    void addClientDependency(QDependency *clientDependency);
    void removeClientDependency(QDependency *clientDependency);

    // Attributes from aggregated QRedefinableElement
    bool isLeaf() const;
    void setLeaf(bool isLeaf);

    // Association ends from aggregated QRedefinableElement
    const QSet<QRedefinableElement *> *redefinedElements() const;
    const QSet<QClassifier *> *redefinitionContexts() const;

    // Association ends from aggregated QActivityNode
    const QSet<QActivityNode *> *redefinedNodes() const;
    void addRedefinedNode(QActivityNode *redefinedNode);
    void removeRedefinedNode(QActivityNode *redefinedNode);
    const QSet<QActivityEdge *> *incomings() const;
    void addIncoming(QActivityEdge *incoming);
    void removeIncoming(QActivityEdge *incoming);
    QActivity *activity() const;
    void setActivity(QActivity *activity);
    const QSet<QActivityGroup *> *inGroup() const;
    QStructuredActivityNode *inStructuredNode() const;
    void setInStructuredNode(QStructuredActivityNode *inStructuredNode);
    const QSet<QActivityPartition *> *inPartition() const;
    void addInPartition(QActivityPartition *inPartition);
    void removeInPartition(QActivityPartition *inPartition);
    const QSet<QInterruptibleActivityRegion *> *inInterruptibleRegion() const;
    void addInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion);
    void removeInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion);
    const QSet<QActivityEdge *> *outgoings() const;
    void addOutgoing(QActivityEdge *outgoing);
    void removeOutgoing(QActivityEdge *outgoing);

    // Association ends from aggregated QTypedElement
    QType *type() const;
    void setType(QType *type);

    // Attributes from QObjectNode
    bool isControlType() const;
    void setControlType(bool isControlType);
    QtUml::ObjectNodeOrderingKind ordering() const;
    void setOrdering(QtUml::ObjectNodeOrderingKind ordering);

    // Association ends from QObjectNode
    QValueSpecification *upperBound() const;
    void setUpperBound(QValueSpecification *upperBound);
    QBehavior *selection() const;
    void setSelection(QBehavior *selection);
    const QSet<QState *> *inState() const;
    void addInState(QState *inState);
    void removeInState(QState *inState);

protected:
    explicit QObjectNode(QObjectNodePrivate &dd, QObject *parent = 0);

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

