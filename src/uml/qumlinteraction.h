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
#ifndef QUMLINTERACTION_H
#define QUMLINTERACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlInteractionFragment>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlMessage;
class QUmlLifeline;
class QUmlAction;
class QUmlGate;

class QUmlInteractionPrivate;

class Q_UML_EXPORT QUmlInteraction : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(bool isReentrant READ isReentrant WRITE setReentrant RESET unsetReentrant)
    Q_PROPERTY(QUmlBehavioralFeature * specification READ specification WRITE setSpecification)
    Q_PROPERTY(QSet<QUmlConstraint *> postconditions READ postconditions)
    Q_PROPERTY(QSet<QUmlConstraint *> preconditions READ preconditions)
    Q_PROPERTY(QSet<QUmlBehavior *> redefinedBehaviors READ redefinedBehaviors)
    Q_PROPERTY(QList<QUmlParameter *> ownedParameters READ ownedParameters)
    Q_PROPERTY(QSet<QUmlParameterSet *> ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(QUmlBehavioredClassifier * context READ context STORED false)

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QSet<QUmlGeneralOrdering *> generalOrderings READ generalOrderings)
    Q_PROPERTY(QUmlInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(QSet<QUmlLifeline *> covered READ covered)
    Q_PROPERTY(QUmlInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)

    Q_PROPERTY(QSet<QUmlAction *> actions READ actions)
    Q_PROPERTY(QSet<QUmlMessage *> messages READ messages)
    Q_PROPERTY(QSet<QUmlGate *> formalGates READ formalGates)
    Q_PROPERTY(QList<QUmlInteractionFragment *> fragments READ fragments)
    Q_PROPERTY(QSet<QUmlLifeline *> lifelines READ lifelines)

    Q_DISABLE_COPY(QUmlInteraction)
    Q_DECLARE_PRIVATE(QUmlInteraction)

public:
    Q_INVOKABLE explicit QUmlInteraction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlInteraction();

    // Attributes from aggregated QUmlBehavior
    Q_INVOKABLE bool isReentrant() const;
    Q_INVOKABLE void setReentrant(bool isReentrant);
    Q_INVOKABLE void unsetReentrant();

    // Association ends from aggregated QUmlBehavior
    Q_INVOKABLE QUmlBehavioralFeature *specification() const;
    Q_INVOKABLE void setSpecification(QUmlBehavioralFeature *specification);
    Q_INVOKABLE QSet<QUmlConstraint *> postconditions() const;
    Q_INVOKABLE void addPostcondition(QUmlConstraint *postcondition);
    Q_INVOKABLE void removePostcondition(QUmlConstraint *postcondition);
    Q_INVOKABLE QSet<QUmlConstraint *> preconditions() const;
    Q_INVOKABLE void addPrecondition(QUmlConstraint *precondition);
    Q_INVOKABLE void removePrecondition(QUmlConstraint *precondition);
    Q_INVOKABLE QSet<QUmlBehavior *> redefinedBehaviors() const;
    Q_INVOKABLE void addRedefinedBehavior(QUmlBehavior *redefinedBehavior);
    Q_INVOKABLE void removeRedefinedBehavior(QUmlBehavior *redefinedBehavior);
    Q_INVOKABLE QList<QUmlParameter *> ownedParameters() const;
    Q_INVOKABLE void addOwnedParameter(QUmlParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(QUmlParameter *ownedParameter);
    Q_INVOKABLE QSet<QUmlParameterSet *> ownedParameterSets() const;
    Q_INVOKABLE void addOwnedParameterSet(QUmlParameterSet *ownedParameterSet);
    Q_INVOKABLE void removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet);
    Q_INVOKABLE QUmlBehavioredClassifier *context() const;

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Association ends from aggregated QUmlInteractionFragment
    Q_INVOKABLE QSet<QUmlGeneralOrdering *> generalOrderings() const;
    Q_INVOKABLE void addGeneralOrdering(QUmlGeneralOrdering *generalOrdering);
    Q_INVOKABLE void removeGeneralOrdering(QUmlGeneralOrdering *generalOrdering);
    Q_INVOKABLE QUmlInteraction *enclosingInteraction() const;
    Q_INVOKABLE void setEnclosingInteraction(QUmlInteraction *enclosingInteraction);
    Q_INVOKABLE QSet<QUmlLifeline *> covered() const;
    Q_INVOKABLE void addCovered(QUmlLifeline *covered);
    Q_INVOKABLE void removeCovered(QUmlLifeline *covered);
    Q_INVOKABLE QUmlInteractionOperand *enclosingOperand() const;
    Q_INVOKABLE void setEnclosingOperand(QUmlInteractionOperand *enclosingOperand);

    // Association ends from QUmlInteraction
    Q_INVOKABLE QSet<QUmlAction *> actions() const;
    Q_INVOKABLE void addAction(QUmlAction *action);
    Q_INVOKABLE void removeAction(QUmlAction *action);
    Q_INVOKABLE QSet<QUmlMessage *> messages() const;
    Q_INVOKABLE void addMessage(QUmlMessage *message);
    Q_INVOKABLE void removeMessage(QUmlMessage *message);
    Q_INVOKABLE QSet<QUmlGate *> formalGates() const;
    Q_INVOKABLE void addFormalGate(QUmlGate *formalGate);
    Q_INVOKABLE void removeFormalGate(QUmlGate *formalGate);
    Q_INVOKABLE QList<QUmlInteractionFragment *> fragments() const;
    Q_INVOKABLE void addFragment(QUmlInteractionFragment *fragment);
    Q_INVOKABLE void removeFragment(QUmlInteractionFragment *fragment);
    Q_INVOKABLE QSet<QUmlLifeline *> lifelines() const;
    Q_INVOKABLE void addLifeline(QUmlLifeline *lifeline);
    Q_INVOKABLE void removeLifeline(QUmlLifeline *lifeline);

    virtual void setPropertyData();

protected:
    explicit QUmlInteraction(QUmlInteractionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlBehavior *_wrappedUmlBehavior;
    QUmlInteractionFragment *_wrappedUmlInteractionFragment;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLINTERACTION_H

