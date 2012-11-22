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
#ifndef QTUML_QSTATE_H
#define QTUML_QSTATE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QNamespace>
#include <QtUml/QRedefinableElement>
#include <QtUml/QVertex>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QStateMachine;
class QClassifier;
class QConstraint;
class QRegion;
class QBehavior;
class QConnectionPointReference;
class QTrigger;
class QPseudostate;

class QStatePrivate;

class Q_UML_EXPORT QState : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool isSimple READ isSimple STORED false)
    Q_PROPERTY(bool isComposite READ isComposite STORED false)
    Q_PROPERTY(bool isOrthogonal READ isOrthogonal STORED false)
    Q_PROPERTY(bool isSubmachineState READ isSubmachineState STORED false)
    Q_PROPERTY(const QSet<QRegion *> * regions READ regions)
    Q_PROPERTY(QBehavior * exit READ exit WRITE setExit)
    Q_PROPERTY(const QSet<QConnectionPointReference *> * connections READ connections)
    Q_PROPERTY(QClassifier * redefinitionContext READ redefinitionContext STORED false)
    Q_PROPERTY(QState * redefinedState READ redefinedState WRITE setRedefinedState)
    Q_PROPERTY(const QSet<QTrigger *> * deferrableTriggers READ deferrableTriggers)
    Q_PROPERTY(const QSet<QPseudostate *> * connectionPoints READ connectionPoints)
    Q_PROPERTY(QBehavior * entry READ entry WRITE setEntry)
    Q_PROPERTY(QBehavior * doActivity READ doActivity WRITE setDoActivity)
    Q_PROPERTY(QStateMachine * submachine READ submachine WRITE setSubmachine)
    Q_PROPERTY(QConstraint * stateInvariant READ stateInvariant WRITE setStateInvariant)

    Q_DISABLE_COPY(QState)
    Q_DECLARE_PRIVATE(QState)

public:
    Q_INVOKABLE explicit QState(QObject *parent = 0);
    virtual ~QState();

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

    // Association ends from aggregated QNamespace
    Q_INVOKABLE const QSet<QPackageImport *> *packageImports() const;
    Q_INVOKABLE void addPackageImport(QPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QPackageImport *packageImport);
    Q_INVOKABLE const QSet<QNamedElement *> *members() const;
    Q_INVOKABLE const QSet<QPackageableElement *> *importedMembers() const;
    Q_INVOKABLE const QSet<QElementImport *> *elementImports() const;
    Q_INVOKABLE void addElementImport(QElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QElementImport *elementImport);
    Q_INVOKABLE const QSet<QConstraint *> *ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE const QSet<QNamedElement *> *ownedMembers() const;

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE const QSet<QRedefinableElement *> *redefinedElements() const;

    // Association ends from aggregated QVertex
    Q_INVOKABLE const QSet<QTransition *> *incomings() const;
    Q_INVOKABLE QRegion *container() const;
    Q_INVOKABLE void setContainer(QRegion *container);
    Q_INVOKABLE const QSet<QTransition *> *outgoings() const;

    // Attributes from QState
    Q_INVOKABLE bool isSimple() const;
    Q_INVOKABLE bool isComposite() const;
    Q_INVOKABLE bool isOrthogonal() const;
    Q_INVOKABLE bool isSubmachineState() const;

    // Association ends from QState
    Q_INVOKABLE const QSet<QRegion *> *regions() const;
    Q_INVOKABLE void addRegion(QRegion *region);
    Q_INVOKABLE void removeRegion(QRegion *region);
    Q_INVOKABLE QBehavior *exit() const;
    Q_INVOKABLE void setExit(QBehavior *exit);
    Q_INVOKABLE const QSet<QConnectionPointReference *> *connections() const;
    Q_INVOKABLE void addConnection(QConnectionPointReference *connection);
    Q_INVOKABLE void removeConnection(QConnectionPointReference *connection);
    Q_INVOKABLE QClassifier *redefinitionContext() const;
    Q_INVOKABLE QState *redefinedState() const;
    Q_INVOKABLE void setRedefinedState(QState *redefinedState);
    Q_INVOKABLE const QSet<QTrigger *> *deferrableTriggers() const;
    Q_INVOKABLE void addDeferrableTrigger(QTrigger *deferrableTrigger);
    Q_INVOKABLE void removeDeferrableTrigger(QTrigger *deferrableTrigger);
    Q_INVOKABLE const QSet<QPseudostate *> *connectionPoints() const;
    Q_INVOKABLE void addConnectionPoint(QPseudostate *connectionPoint);
    Q_INVOKABLE void removeConnectionPoint(QPseudostate *connectionPoint);
    Q_INVOKABLE QBehavior *entry() const;
    Q_INVOKABLE void setEntry(QBehavior *entry);
    Q_INVOKABLE QBehavior *doActivity() const;
    Q_INVOKABLE void setDoActivity(QBehavior *doActivity);
    Q_INVOKABLE QStateMachine *submachine() const;
    Q_INVOKABLE void setSubmachine(QStateMachine *submachine);
    Q_INVOKABLE QConstraint *stateInvariant() const;
    Q_INVOKABLE void setStateInvariant(QConstraint *stateInvariant);

    // Operations
    Q_INVOKABLE QStateMachine *containingStateMachine() const;
    Q_INVOKABLE bool isConsistentWith(const QRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(const QState *redefined) const;

protected:
    explicit QState(QStatePrivate &dd, QObject *parent = 0);

private:
    QNamespace *_wrappedNamespace;
    QRedefinableElement *_wrappedRedefinableElement;
    QVertex *_wrappedVertex;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QState) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QState) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QState) *> *)

QT_END_HEADER

#endif // QTUML_QSTATE_H

