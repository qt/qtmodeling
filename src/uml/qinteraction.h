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
    explicit QInteraction(QObject *parent = 0);
    virtual ~QInteraction();

    // Attributes from aggregated QBehavior
    bool isReentrant() const;
    void setReentrant(bool isReentrant);

    // Association ends from aggregated QBehavior
    QBehavioralFeature *specification() const;
    void setSpecification(QBehavioralFeature *specification);
    const QSet<QConstraint *> *postconditions() const;
    void addPostcondition(QConstraint *postcondition);
    void removePostcondition(QConstraint *postcondition);
    const QSet<QConstraint *> *preconditions() const;
    void addPrecondition(QConstraint *precondition);
    void removePrecondition(QConstraint *precondition);
    const QSet<QBehavior *> *redefinedBehaviors() const;
    void addRedefinedBehavior(QBehavior *redefinedBehavior);
    void removeRedefinedBehavior(QBehavior *redefinedBehavior);
    const QList<QParameter *> *ownedParameters() const;
    void addOwnedParameter(QParameter *ownedParameter);
    void removeOwnedParameter(QParameter *ownedParameter);
    const QSet<QParameterSet *> *ownedParameterSets() const;
    void addOwnedParameterSet(QParameterSet *ownedParameterSet);
    void removeOwnedParameterSet(QParameterSet *ownedParameterSet);
    QBehavioredClassifier *context() const;

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

    // Association ends from aggregated QInteractionFragment
    const QSet<QGeneralOrdering *> *generalOrderings() const;
    void addGeneralOrdering(QGeneralOrdering *generalOrdering);
    void removeGeneralOrdering(QGeneralOrdering *generalOrdering);
    QInteraction *enclosingInteraction() const;
    void setEnclosingInteraction(QInteraction *enclosingInteraction);
    const QSet<QLifeline *> *covered() const;
    void addCovered(QLifeline *covered);
    void removeCovered(QLifeline *covered);
    QInteractionOperand *enclosingOperand() const;
    void setEnclosingOperand(QInteractionOperand *enclosingOperand);

    // Association ends from QInteraction
    const QSet<QAction *> *actions() const;
    void addAction(QAction *action);
    void removeAction(QAction *action);
    const QSet<QMessage *> *messages() const;
    void addMessage(QMessage *message);
    void removeMessage(QMessage *message);
    const QSet<QGate *> *formalGates() const;
    void addFormalGate(QGate *formalGate);
    void removeFormalGate(QGate *formalGate);
    const QList<QInteractionFragment *> *fragments() const;
    void addFragment(QInteractionFragment *fragment);
    void removeFragment(QInteractionFragment *fragment);
    const QSet<QLifeline *> *lifelines() const;
    void addLifeline(QLifeline *lifeline);
    void removeLifeline(QLifeline *lifeline);

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

