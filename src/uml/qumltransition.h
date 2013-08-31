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
#ifndef QUMLTRANSITION_H
#define QUMLTRANSITION_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umltransition_p.h"

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlBehavior;
class QUmlClassifier;
class QUmlComment;
class QUmlConstraint;
class QUmlDependency;
class QUmlElement;
class QUmlElementImport;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlPackage;
class QUmlPackageableElement;
class QUmlPackageImport;
class QUmlRedefinableElement;
class QUmlRegion;
class QUmlStateMachine;
class QUmlStringExpression;
class QUmlTrigger;
class QUmlVertex;

class Q_UML_EXPORT QUmlTransition : public QObject, public UmlTransition
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

    // Properties [Namespace]
    Q_PROPERTY(QSet<QUmlElementImport *> elementImport READ elementImport)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMember READ importedMember)
    Q_PROPERTY(QSet<QUmlNamedElement *> member READ member)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMember READ ownedMember)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRule READ ownedRule)
    Q_PROPERTY(QSet<QUmlPackageImport *> packageImport READ packageImport)

    // Properties [Transition]
    Q_PROPERTY(QUmlRegion * container READ container)
    Q_PROPERTY(QUmlBehavior * effect READ effect)
    Q_PROPERTY(QUmlConstraint * guard READ guard)
    Q_PROPERTY(QtUml::TransitionKind kind READ kind)
    Q_PROPERTY(QUmlTransition * redefinedTransition READ redefinedTransition)
    Q_PROPERTY(QUmlClassifier * redefinitionContext READ redefinitionContext)
    Q_PROPERTY(QUmlVertex * source READ source)
    Q_PROPERTY(QUmlVertex * target READ target)
    Q_PROPERTY(QSet<QUmlTrigger *> trigger READ trigger)

public:
    Q_INVOKABLE explicit QUmlTransition(QObject *parent = 0);

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

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QUmlElementImport *> elementImport() const;
    Q_INVOKABLE const QSet<QUmlPackageableElement *> importedMember() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> member() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> ownedMember() const;
    Q_INVOKABLE const QSet<QUmlConstraint *> ownedRule() const;
    Q_INVOKABLE const QSet<QUmlPackageImport *> packageImport() const;

    // Owned attributes [Transition]
    Q_INVOKABLE QUmlRegion *container() const;
    Q_INVOKABLE QUmlBehavior *effect() const;
    Q_INVOKABLE QUmlConstraint *guard() const;
    Q_INVOKABLE QtUml::TransitionKind kind() const;
    Q_INVOKABLE QUmlTransition *redefinedTransition() const;
    Q_INVOKABLE QUmlClassifier *redefinitionContext() const;
    Q_INVOKABLE QUmlVertex *source() const;
    Q_INVOKABLE QUmlVertex *target() const;
    Q_INVOKABLE const QSet<QUmlTrigger *> trigger() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QUmlNamespace *> allNamespaces() const;
    Q_INVOKABLE QSet<QUmlPackage *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [RedefinableElement]
    Q_INVOKABLE bool isRedefinitionContextValid(QUmlRedefinableElement *redefined) const;

    // Operations [Namespace]
    Q_INVOKABLE QSet<QUmlPackageableElement *> excludeCollisions(QSet<QUmlPackageableElement *> imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(QUmlNamedElement *element) const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> importMembers(QSet<QUmlPackageableElement *> imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

    // Operations [Transition]
    Q_INVOKABLE QUmlStateMachine *containingStateMachine() const;
    Q_INVOKABLE bool isConsistentWith(QUmlRedefinableElement *redefinee) const;

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

    // Slots for owned attributes [Namespace]
    void addElementImport(UmlElementImport *elementImport);
    void removeElementImport(UmlElementImport *elementImport);
    void addOwnedRule(UmlConstraint *ownedRule);
    void removeOwnedRule(UmlConstraint *ownedRule);
    void addPackageImport(UmlPackageImport *packageImport);
    void removePackageImport(UmlPackageImport *packageImport);

    // Slots for owned attributes [Transition]
    void setContainer(QUmlRegion *container);
    void setEffect(QUmlBehavior *effect);
    void setGuard(QUmlConstraint *guard);
    void setKind(QtUml::TransitionKind kind);
    void setRedefinedTransition(QUmlTransition *redefinedTransition);
    void setSource(QUmlVertex *source);
    void setTarget(QUmlVertex *target);
    void addTrigger(UmlTrigger *trigger);
    void removeTrigger(UmlTrigger *trigger);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlTransition *)
Q_DECLARE_METATYPE(QList<QUmlTransition *> *)
Q_DECLARE_METATYPE(QSet<QUmlTransition *> *)

QT_END_HEADER

#endif // QUMLTRANSITION_H

