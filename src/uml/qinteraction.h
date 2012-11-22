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
#ifndef QTUML_QINTERACTION_H
#define QTUML_QINTERACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QBehavior>
#include <QtUml/QInteractionFragment>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QMessage;
class QLifeline;
class QAction;
class QGate;

class QInteractionPrivate;

class Q_UML_EXPORT QInteraction : public QObject
{
    Q_OBJECT

    Q_PROPERTY(const QSet<QAction *> * actions READ actions)
    Q_PROPERTY(const QSet<QMessage *> * messages READ messages)
    Q_PROPERTY(const QSet<QGate *> * formalGates READ formalGates)
    Q_PROPERTY(const QList<QInteractionFragment *> * fragments READ fragments)
    Q_PROPERTY(const QSet<QLifeline *> * lifelines READ lifelines)

    Q_DISABLE_COPY(QInteraction)
    Q_DECLARE_PRIVATE(QInteraction)

public:
    Q_INVOKABLE explicit QInteraction(QObject *parent = 0);
    virtual ~QInteraction();

    // Attributes from aggregated QBehavior
    Q_INVOKABLE bool isReentrant() const;
    Q_INVOKABLE void setReentrant(bool isReentrant);

    // Association ends from aggregated QBehavior
    Q_INVOKABLE QBehavioralFeature *specification() const;
    Q_INVOKABLE void setSpecification(QBehavioralFeature *specification);
    Q_INVOKABLE const QSet<QConstraint *> *postconditions() const;
    Q_INVOKABLE void addPostcondition(QConstraint *postcondition);
    Q_INVOKABLE void removePostcondition(QConstraint *postcondition);
    Q_INVOKABLE const QSet<QConstraint *> *preconditions() const;
    Q_INVOKABLE void addPrecondition(QConstraint *precondition);
    Q_INVOKABLE void removePrecondition(QConstraint *precondition);
    Q_INVOKABLE const QSet<QBehavior *> *redefinedBehaviors() const;
    Q_INVOKABLE void addRedefinedBehavior(QBehavior *redefinedBehavior);
    Q_INVOKABLE void removeRedefinedBehavior(QBehavior *redefinedBehavior);
    Q_INVOKABLE const QList<QParameter *> *ownedParameters() const;
    Q_INVOKABLE void addOwnedParameter(QParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(QParameter *ownedParameter);
    Q_INVOKABLE const QSet<QParameterSet *> *ownedParameterSets() const;
    Q_INVOKABLE void addOwnedParameterSet(QParameterSet *ownedParameterSet);
    Q_INVOKABLE void removeOwnedParameterSet(QParameterSet *ownedParameterSet);
    Q_INVOKABLE QBehavioredClassifier *context() const;

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

    // Association ends from aggregated QInteractionFragment
    Q_INVOKABLE const QSet<QGeneralOrdering *> *generalOrderings() const;
    Q_INVOKABLE void addGeneralOrdering(QGeneralOrdering *generalOrdering);
    Q_INVOKABLE void removeGeneralOrdering(QGeneralOrdering *generalOrdering);
    Q_INVOKABLE QInteraction *enclosingInteraction() const;
    Q_INVOKABLE void setEnclosingInteraction(QInteraction *enclosingInteraction);
    Q_INVOKABLE const QSet<QLifeline *> *covered() const;
    Q_INVOKABLE void addCovered(QLifeline *covered);
    Q_INVOKABLE void removeCovered(QLifeline *covered);
    Q_INVOKABLE QInteractionOperand *enclosingOperand() const;
    Q_INVOKABLE void setEnclosingOperand(QInteractionOperand *enclosingOperand);

    // Association ends from QInteraction
    Q_INVOKABLE const QSet<QAction *> *actions() const;
    Q_INVOKABLE void addAction(QAction *action);
    Q_INVOKABLE void removeAction(QAction *action);
    Q_INVOKABLE const QSet<QMessage *> *messages() const;
    Q_INVOKABLE void addMessage(QMessage *message);
    Q_INVOKABLE void removeMessage(QMessage *message);
    Q_INVOKABLE const QSet<QGate *> *formalGates() const;
    Q_INVOKABLE void addFormalGate(QGate *formalGate);
    Q_INVOKABLE void removeFormalGate(QGate *formalGate);
    Q_INVOKABLE const QList<QInteractionFragment *> *fragments() const;
    Q_INVOKABLE void addFragment(QInteractionFragment *fragment);
    Q_INVOKABLE void removeFragment(QInteractionFragment *fragment);
    Q_INVOKABLE const QSet<QLifeline *> *lifelines() const;
    Q_INVOKABLE void addLifeline(QLifeline *lifeline);
    Q_INVOKABLE void removeLifeline(QLifeline *lifeline);

protected:
    explicit QInteraction(QInteractionPrivate &dd, QObject *parent = 0);

private:
    QBehavior *_wrappedBehavior;
    QInteractionFragment *_wrappedInteractionFragment;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QInteraction) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QInteraction) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QInteraction) *> *)

QT_END_HEADER

#endif // QTUML_QINTERACTION_H

