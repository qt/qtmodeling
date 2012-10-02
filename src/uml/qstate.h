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
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QStatePrivate;
class QConstraint;
class QRegion;
class QStateMachine;
class QClassifier;
class QBehavior;
class QConnectionPointReference;
class QTrigger;
class QPseudostate;

class Q_UML_EXPORT QState : public QObject, public QNamespace, public QRedefinableElement, public QVertex
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComment READ ownedComment)
    Q_PROPERTY(const QList<QElement *> * ownedElement READ ownedElement)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QList<QDependency *> * clientDependency READ clientDependency)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(const QNamespace * namespace_ READ namespace_)

    // From QNamespace
    Q_PROPERTY(QList<QElementImport *> * elementImport READ elementImport)
    Q_PROPERTY(const QList<QPackageableElement *> * importedMember READ importedMember)
    Q_PROPERTY(const QList<QNamedElement *> * member READ member)
    Q_PROPERTY(const QList<QNamedElement *> * ownedMember READ ownedMember)
    Q_PROPERTY(QList<QConstraint *> * ownedRule READ ownedRule)
    Q_PROPERTY(QList<QPackageImport *> * packageImport READ packageImport)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QList<QRedefinableElement *> * redefinedElement READ redefinedElement)

    // From QVertex
    Q_PROPERTY(QRegion * container READ container WRITE setContainer)
    Q_PROPERTY(const QList<QTransition *> * incoming READ incoming)
    Q_PROPERTY(const QList<QTransition *> * outgoing READ outgoing)

    // From QState
    Q_PROPERTY(bool isComposite READ isComposite)
    Q_PROPERTY(bool isOrthogonal READ isOrthogonal)
    Q_PROPERTY(bool isSimple READ isSimple)
    Q_PROPERTY(bool isSubmachineState READ isSubmachineState)
    Q_PROPERTY(QList<QConnectionPointReference *> * connection READ connection)
    Q_PROPERTY(QList<QPseudostate *> * connectionPoint READ connectionPoint)
    Q_PROPERTY(QList<QTrigger *> * deferrableTrigger READ deferrableTrigger)
    Q_PROPERTY(QBehavior * doActivity READ doActivity WRITE setDoActivity)
    Q_PROPERTY(QBehavior * entry READ entry WRITE setEntry)
    Q_PROPERTY(QBehavior * exit READ exit WRITE setExit)
    Q_PROPERTY(QState * redefinedState READ redefinedState WRITE setRedefinedState)
    Q_PROPERTY(const QClassifier * redefinitionContext READ redefinitionContext)
    Q_PROPERTY(QList<QRegion *> * region READ region)
    Q_PROPERTY(QConstraint * stateInvariant READ stateInvariant WRITE setStateInvariant)
    Q_PROPERTY(QStateMachine * submachine READ submachine WRITE setSubmachine)

public:
    explicit QState(QObject *parent = 0);
    virtual ~QState();

    // Attributes (except those derived && !derivedUnion)

    // Association-ends (except those derived && !derivedUnion)
    QList<QConnectionPointReference *> *connection();
    QList<QPseudostate *> *connectionPoint();
    QList<QTrigger *> *deferrableTrigger();
    QBehavior *doActivity() const;
    void setDoActivity(QBehavior *doActivity);
    QBehavior *entry() const;
    void setEntry(QBehavior *entry);
    QBehavior *exit() const;
    void setExit(QBehavior *exit);
    QState *redefinedState() const;
    void setRedefinedState(QState *redefinedState);
    QList<QRegion *> *region();
    QConstraint *stateInvariant() const;
    void setStateInvariant(QConstraint *stateInvariant);
    QStateMachine *submachine() const;
    void setSubmachine(QStateMachine *submachine);

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    const QStateMachine *containingStateMachine() const;
    bool isComposite() const;
    bool isConsistentWith(const QRedefinableElement *redefinee) const;
    bool isOrthogonal() const;
    bool isRedefinitionContextValid(const QState *redefined) const;
    bool isSimple() const;
    bool isSubmachineState() const;
    const QClassifier *redefinitionContext() const;

private:
    Q_DISABLE_COPY(QState)
    Q_DECLARE_PRIVATE(QState)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QState *>)
Q_DECLARE_METATYPE(QList<QtUml::QState *> *)

QT_END_HEADER

#endif // QTUML_QSTATE_H

