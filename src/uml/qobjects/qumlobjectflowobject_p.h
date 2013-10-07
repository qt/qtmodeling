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

#include <QtCore/QObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlObjectFlow;
class Q_UML_EXPORT QUmlObjectFlowObject : public QObject
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComment READ ownedComments)
    Q_PROPERTY(QSet<QObject *> ownedElement READ ownedElements)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependency READ clientDependencies)
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QObject * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QObject * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QObject *> redefinedElement READ redefinedElements)
    Q_PROPERTY(QSet<QObject *> redefinitionContext READ redefinitionContexts)

    // Properties [ActivityEdge]
    Q_PROPERTY(QObject * activity READ activity WRITE setActivity)
    Q_PROPERTY(QObject * guard READ guard WRITE setGuard)
    Q_PROPERTY(QSet<QObject *> inGroup READ inGroups)
    Q_PROPERTY(QSet<QObject *> inPartition READ inPartitions)
    Q_PROPERTY(QObject * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QObject * interrupts READ interrupts WRITE setInterrupts)
    Q_PROPERTY(QSet<QObject *> redefinedEdge READ redefinedEdges)
    Q_PROPERTY(QObject * source READ source WRITE setSource)
    Q_PROPERTY(QObject * target READ target WRITE setTarget)
    Q_PROPERTY(QObject * weight READ weight WRITE setWeight)

    // Properties [ObjectFlow]
    Q_PROPERTY(bool isMulticast READ isMulticast WRITE setMulticast RESET unsetMulticast)
    Q_PROPERTY(bool isMultireceive READ isMultireceive WRITE setMultireceive RESET unsetMultireceive)
    Q_PROPERTY(QObject * selection READ selection WRITE setSelection)
    Q_PROPERTY(QObject * transformation READ transformation WRITE setTransformation)

public:
    Q_INVOKABLE explicit QUmlObjectFlowObject(QUmlObjectFlow *qModelingObject);
    virtual ~QUmlObjectFlowObject();

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
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLOBJECTFLOWOBJECT_H

