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
#ifndef QTUML_QPIN_H
#define QTUML_QPIN_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QMultiplicityElement>
#include <QtUml/QObjectNode>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QPinPrivate;

class Q_UML_EXPORT QPin : public QObject
{
    Q_OBJECT

    // From aggregated QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From aggregated QMultiplicityElement
    Q_PROPERTY(qint32 upper READ upper WRITE setUpper STORED false)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique)
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered)
    Q_PROPERTY(qint32 lower READ lower WRITE setLower STORED false)
    Q_PROPERTY(QValueSpecification * upperValue READ upperValue WRITE setUpperValue)
    Q_PROPERTY(QValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)

    // From aggregated QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From aggregated QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QSet<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QSet<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From aggregated QActivityNode
    Q_PROPERTY(const QSet<QActivityNode *> * redefinedNodes READ redefinedNodes)
    Q_PROPERTY(const QSet<QActivityEdge *> * incomings READ incomings)
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(const QSet<QActivityGroup *> * inGroup READ inGroup)
    Q_PROPERTY(QStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(const QSet<QActivityPartition *> * inPartition READ inPartition)
    Q_PROPERTY(const QSet<QInterruptibleActivityRegion *> * inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(const QSet<QActivityEdge *> * outgoings READ outgoings)

    // From aggregated QTypedElement
    Q_PROPERTY(QType * type READ type WRITE setType)

    // From aggregated QObjectNode
    Q_PROPERTY(bool isControlType READ isControlType WRITE setControlType)
    Q_PROPERTY(QtUml::ObjectNodeOrderingKind ordering READ ordering WRITE setOrdering)
    Q_PROPERTY(QValueSpecification * upperBound READ upperBound WRITE setUpperBound)
    Q_PROPERTY(QBehavior * selection READ selection WRITE setSelection)
    Q_PROPERTY(const QSet<QState *> * inState READ inState)

    // From QPin
    Q_PROPERTY(bool isControl READ isControl WRITE setControl)

    Q_DISABLE_COPY(QPin)
    Q_DECLARE_PRIVATE(QPin)

public:
    explicit QPin(QObject *parent = 0);
    virtual ~QPin();

    // Association ends from aggregated QElement
    const QSet<QElement *> *ownedElements() const;
    QElement *owner() const;
    const QSet<QComment *> *ownedComments() const;
    void addOwnedComment(QComment *ownedComment);
    void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QMultiplicityElement
    qint32 upper() const;
    void setUpper(qint32 upper);
    bool isUnique() const;
    void setUnique(bool isUnique);
    bool isOrdered() const;
    void setOrdered(bool isOrdered);
    qint32 lower() const;
    void setLower(qint32 lower);

    // Association ends from aggregated QMultiplicityElement
    QValueSpecification *upperValue() const;
    void setUpperValue(QValueSpecification *upperValue);
    QValueSpecification *lowerValue() const;
    void setLowerValue(QValueSpecification *lowerValue);

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

    // Attributes from aggregated QObjectNode
    bool isControlType() const;
    void setControlType(bool isControlType);
    QtUml::ObjectNodeOrderingKind ordering() const;
    void setOrdering(QtUml::ObjectNodeOrderingKind ordering);

    // Association ends from aggregated QObjectNode
    QValueSpecification *upperBound() const;
    void setUpperBound(QValueSpecification *upperBound);
    QBehavior *selection() const;
    void setSelection(QBehavior *selection);
    const QSet<QState *> *inState() const;
    void addInState(QState *inState);
    void removeInState(QState *inState);

    // Attributes from QPin
    bool isControl() const;
    void setControl(bool isControl);

protected:
    explicit QPin(QPinPrivate &dd, QObject *parent = 0);

private:
    QMultiplicityElement *_wrappedMultiplicityElement;
    QObjectNode *_wrappedObjectNode;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QPin) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QPin) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QPin) *> *)

QT_END_HEADER

#endif // QTUML_QPIN_H

