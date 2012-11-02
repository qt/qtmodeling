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

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for aggregated 'base classes'
class QBehavior;
class QInteractionFragment;

// Forward decls for function parameters
class QMessage;
class QLifeline;
class QAction;
class QGate;

class QInteractionPrivate;

class Q_UML_EXPORT QInteraction : public QObject
{
    Q_OBJECT

    // From QInteraction
    Q_PROPERTY(const QSet<QAction *> * actions READ actions)
    Q_PROPERTY(const QSet<QMessage *> * messages READ messages)
    Q_PROPERTY(const QSet<QGate *> * formalGates READ formalGates)
    Q_PROPERTY(const QList<QInteractionFragment *> * fragments READ fragments)
    Q_PROPERTY(const QSet<QLifeline *> * lifelines READ lifelines)

    // From aggregated QBehavior
    Q_PROPERTY(bool isReentrant READ isReentrant WRITE setReentrant)
    Q_PROPERTY(QBehavioralFeature * specification READ specification WRITE setSpecification)
    Q_PROPERTY(const QSet<QConstraint *> * postconditions READ postconditions)
    Q_PROPERTY(const QSet<QConstraint *> * preconditions READ preconditions)
    Q_PROPERTY(const QSet<QBehavior *> * redefinedBehaviors READ redefinedBehaviors)
    Q_PROPERTY(const QList<QParameter *> * ownedParameters READ ownedParameters)
    Q_PROPERTY(const QSet<QParameterSet *> * ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(QBehavioredClassifier * context READ context)

    // From aggregated QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From aggregated QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From aggregated QInteractionFragment
    Q_PROPERTY(const QSet<QGeneralOrdering *> * generalOrderings READ generalOrderings)
    Q_PROPERTY(QInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(const QSet<QLifeline *> * covered READ covered)
    Q_PROPERTY(QInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)

    Q_DISABLE_COPY(QInteraction)
    Q_DECLARE_PRIVATE(QInteraction)

public:
    explicit QInteraction(QObject *parent = 0);
    virtual ~QInteraction();

    // Association-ends
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
Q_DECLARE_METATYPE(QSet<QT_PREPEND_NAMESPACE_QTUML(QInteraction) *> *)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QInteraction) *> *)

QT_END_HEADER

#endif // QTUML_QINTERACTION_H

