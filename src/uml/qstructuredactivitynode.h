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
#include <QtCore/QObject>
#include <QtUml/QAction>
#include <QtUml/QNamespace>
#include <QtUml/QActivityGroup>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QStructuredActivityNodePrivate;
class QOutputPin;
class QVariable;
class QInputPin;
class QActivityEdge;
class QActivity;
class QActivityNode;

class Q_UML_EXPORT QStructuredActivityNode : public QObject, public QAction, public QNamespace, public QActivityGroup
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QSet<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QSet<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From QActivityNode
    Q_PROPERTY(const QSet<QActivityNode *> * redefinedNodes READ redefinedNodes)
    Q_PROPERTY(const QSet<QActivityEdge *> * incomings READ incomings)
    Q_PROPERTY(const QSet<QActivityGroup *> * inGroup READ inGroup)
    Q_PROPERTY(QStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(const QSet<QActivityPartition *> * inPartition READ inPartition)
    Q_PROPERTY(const QSet<QInterruptibleActivityRegion *> * inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(const QSet<QActivityEdge *> * outgoings READ outgoings)

    // From QExecutableNode
    Q_PROPERTY(const QSet<QExceptionHandler *> * handlers READ handlers)

    // From QAction
    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant WRITE setLocallyReentrant)
    Q_PROPERTY(QClassifier * context READ context)
    Q_PROPERTY(const QSet<QConstraint *> * localPostconditions READ localPostconditions)
    Q_PROPERTY(const QSet<QConstraint *> * localPreconditions READ localPreconditions)
    Q_PROPERTY(const QList<QInputPin *> * inputs READ inputs)
    Q_PROPERTY(const QList<QOutputPin *> * outputs READ outputs)

    // From QNamespace
    Q_PROPERTY(const QSet<QPackageImport *> * packageImports READ packageImports)
    Q_PROPERTY(const QSet<QNamedElement *> * members READ members)
    Q_PROPERTY(const QSet<QPackageableElement *> * importedMembers READ importedMembers)
    Q_PROPERTY(const QSet<QElementImport *> * elementImports READ elementImports)
    Q_PROPERTY(const QSet<QConstraint *> * ownedRules READ ownedRules)
    Q_PROPERTY(const QSet<QNamedElement *> * ownedMembers READ ownedMembers)

    // From QActivityGroup
    Q_PROPERTY(const QSet<QActivityNode *> * containedNodes READ containedNodes)
    Q_PROPERTY(const QSet<QActivityGroup *> * subgroups READ subgroups)
    Q_PROPERTY(const QSet<QActivityEdge *> * containedEdges READ containedEdges)
    Q_PROPERTY(QActivityGroup * superGroup READ superGroup)

    // From QStructuredActivityNode
    Q_PROPERTY(bool mustIsolate READ mustIsolate WRITE setMustIsolate)
    Q_PROPERTY(const QSet<QInputPin *> * structuredNodeInputs READ structuredNodeInputs)
    Q_PROPERTY(const QSet<QActivityNode *> * nodes READ nodes)
    Q_PROPERTY(const QSet<QOutputPin *> * structuredNodeOutputs READ structuredNodeOutputs)
    Q_PROPERTY(const QSet<QActivityEdge *> * edges READ edges)
    Q_PROPERTY(const QSet<QVariable *> * variables READ variables)
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)

    Q_DISABLE_COPY(QStructuredActivityNode)
    QTUML_DECLARE_PRIVATE(QStructuredActivityNode)

public:
    explicit QStructuredActivityNode(QObject *parent = 0);
    virtual ~QStructuredActivityNode();

    // Attributes
    bool mustIsolate() const;
    void setMustIsolate(bool mustIsolate);

    // Association-ends
    const QSet<QInputPin *> *structuredNodeInputs() const;
    void addStructuredNodeInput(const QInputPin *structuredNodeInput);
    void removeStructuredNodeInput(const QInputPin *structuredNodeInput);
    const QSet<QActivityNode *> *nodes() const;
    void addNode(const QActivityNode *node);
    void removeNode(const QActivityNode *node);
    const QSet<QOutputPin *> *structuredNodeOutputs() const;
    void addStructuredNodeOutput(const QOutputPin *structuredNodeOutput);
    void removeStructuredNodeOutput(const QOutputPin *structuredNodeOutput);
    const QSet<QActivityEdge *> *edges() const;
    void addEdge(const QActivityEdge *edge);
    void removeEdge(const QActivityEdge *edge);
    const QSet<QVariable *> *variables() const;
    void addVariable(const QVariable *variable);
    void removeVariable(const QVariable *variable);
    QActivity *activity() const;
    void setActivity(const QActivity *activity);

protected:
    explicit QStructuredActivityNode(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QStructuredActivityNode) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QStructuredActivityNode) *> *)

QT_END_HEADER

#endif // QTUML_QSTRUCTUREDACTIVITYNODE_H

