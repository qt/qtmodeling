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
#include <QtWrappedObjects/QWrappedObject>
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

class Q_UML_EXPORT QInteraction : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(bool reentrant READ isReentrant WRITE setReentrant RESET unsetReentrant)
    Q_PROPERTY(QBehavioralFeature * specification READ specification WRITE setSpecification)
    Q_PROPERTY(QSet<QConstraint *> postconditions READ postconditions)
    Q_PROPERTY(QSet<QConstraint *> preconditions READ preconditions)
    Q_PROPERTY(QSet<QBehavior *> redefinedBehaviors READ redefinedBehaviors)
    Q_PROPERTY(QList<QParameter *> ownedParameters READ ownedParameters)
    Q_PROPERTY(QSet<QParameterSet *> ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(QBehavioredClassifier * context READ context STORED false)

    Q_PROPERTY(QSet<QElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(QSet<QComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QSet<QGeneralOrdering *> generalOrderings READ generalOrderings)
    Q_PROPERTY(QInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(QSet<QLifeline *> covered READ covered)
    Q_PROPERTY(QInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)

    Q_PROPERTY(QSet<QAction *> actions READ actions)
    Q_PROPERTY(QSet<QMessage *> messages READ messages)
    Q_PROPERTY(QSet<QGate *> formalGates READ formalGates)
    Q_PROPERTY(QList<QInteractionFragment *> fragments READ fragments)
    Q_PROPERTY(QSet<QLifeline *> lifelines READ lifelines)

    Q_DISABLE_COPY(QInteraction)
    Q_DECLARE_PRIVATE(QInteraction)

public:
    Q_INVOKABLE explicit QInteraction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QInteraction();

    // Attributes from aggregated QBehavior
    Q_INVOKABLE bool isReentrant() const;
    Q_INVOKABLE void setReentrant(bool isReentrant);
    Q_INVOKABLE void unsetReentrant();

    // Association ends from aggregated QBehavior
    Q_INVOKABLE QBehavioralFeature *specification() const;
    Q_INVOKABLE void setSpecification(QBehavioralFeature *specification);
    Q_INVOKABLE QSet<QConstraint *> postconditions() const;
    Q_INVOKABLE void addPostcondition(QConstraint *postcondition);
    Q_INVOKABLE void removePostcondition(QConstraint *postcondition);
    Q_INVOKABLE QSet<QConstraint *> preconditions() const;
    Q_INVOKABLE void addPrecondition(QConstraint *precondition);
    Q_INVOKABLE void removePrecondition(QConstraint *precondition);
    Q_INVOKABLE QSet<QBehavior *> redefinedBehaviors() const;
    Q_INVOKABLE void addRedefinedBehavior(QBehavior *redefinedBehavior);
    Q_INVOKABLE void removeRedefinedBehavior(QBehavior *redefinedBehavior);
    Q_INVOKABLE QList<QParameter *> ownedParameters() const;
    Q_INVOKABLE void addOwnedParameter(QParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(QParameter *ownedParameter);
    Q_INVOKABLE QSet<QParameterSet *> ownedParameterSets() const;
    Q_INVOKABLE void addOwnedParameterSet(QParameterSet *ownedParameterSet);
    Q_INVOKABLE void removeOwnedParameterSet(QParameterSet *ownedParameterSet);
    Q_INVOKABLE QBehavioredClassifier *context() const;

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
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
    Q_INVOKABLE QSet<QDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QInteractionFragment
    Q_INVOKABLE QSet<QGeneralOrdering *> generalOrderings() const;
    Q_INVOKABLE void addGeneralOrdering(QGeneralOrdering *generalOrdering);
    Q_INVOKABLE void removeGeneralOrdering(QGeneralOrdering *generalOrdering);
    Q_INVOKABLE QInteraction *enclosingInteraction() const;
    Q_INVOKABLE void setEnclosingInteraction(QInteraction *enclosingInteraction);
    Q_INVOKABLE QSet<QLifeline *> covered() const;
    Q_INVOKABLE void addCovered(QLifeline *covered);
    Q_INVOKABLE void removeCovered(QLifeline *covered);
    Q_INVOKABLE QInteractionOperand *enclosingOperand() const;
    Q_INVOKABLE void setEnclosingOperand(QInteractionOperand *enclosingOperand);

    // Association ends from QInteraction
    Q_INVOKABLE QSet<QAction *> actions() const;
    Q_INVOKABLE void addAction(QAction *action);
    Q_INVOKABLE void removeAction(QAction *action);
    Q_INVOKABLE QSet<QMessage *> messages() const;
    Q_INVOKABLE void addMessage(QMessage *message);
    Q_INVOKABLE void removeMessage(QMessage *message);
    Q_INVOKABLE QSet<QGate *> formalGates() const;
    Q_INVOKABLE void addFormalGate(QGate *formalGate);
    Q_INVOKABLE void removeFormalGate(QGate *formalGate);
    Q_INVOKABLE QList<QInteractionFragment *> fragments() const;
    Q_INVOKABLE void addFragment(QInteractionFragment *fragment);
    Q_INVOKABLE void removeFragment(QInteractionFragment *fragment);
    Q_INVOKABLE QSet<QLifeline *> lifelines() const;
    Q_INVOKABLE void addLifeline(QLifeline *lifeline);
    Q_INVOKABLE void removeLifeline(QLifeline *lifeline);

    virtual void setPropertyData();

protected:
    explicit QInteraction(QInteractionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QBehavior *_wrappedBehavior;
    QInteractionFragment *_wrappedInteractionFragment;
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QINTERACTION_H

