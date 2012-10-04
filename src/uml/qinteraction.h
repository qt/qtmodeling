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

class QInteractionPrivate;
class QMessage;
class QLifeline;
class QAction;
class QGate;

class Q_UML_EXPORT QInteraction : public QBehavior, public QInteractionFragment
{
    Q_OBJECT

    // From QBehavior
    Q_PROPERTY(bool isReentrant READ isReentrant WRITE setReentrant)
    Q_PROPERTY(QBehavioredClassifier * context READ context)
    Q_PROPERTY(const QList<QParameter *> * ownedParameters READ ownedParameters)
    Q_PROPERTY(const QSet<QParameterSet *> * ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(const QSet<QConstraint *> * postconditions READ postconditions)
    Q_PROPERTY(const QSet<QConstraint *> * preconditions READ preconditions)
    Q_PROPERTY(const QSet<QBehavior *> * redefinedBehaviors READ redefinedBehaviors)
    Q_PROPERTY(QBehavioralFeature * specification READ specification WRITE setSpecification)

    // From QElement
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)

    // From QInteractionFragment
    Q_PROPERTY(const QSet<QLifeline *> * covered READ covered)
    Q_PROPERTY(QInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(QInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)
    Q_PROPERTY(const QSet<QGeneralOrdering *> * generalOrderings READ generalOrderings)

    // From QInteraction
    Q_PROPERTY(const QSet<QAction *> * actions READ actions)
    Q_PROPERTY(const QSet<QGate *> * formalGates READ formalGates)
    Q_PROPERTY(const QList<QInteractionFragment *> * fragments READ fragments)
    Q_PROPERTY(const QSet<QLifeline *> * lifelines READ lifelines)
    Q_PROPERTY(const QSet<QMessage *> * messages READ messages)

public:
    explicit QInteraction(QObject *parent = 0);
    virtual ~QInteraction();

    // Association-ends (except those derived && !derivedUnion)
    const QSet<QAction *> *actions() const;
    void addAction(const QAction *action);
    void removeAction(const QAction *action);
    const QSet<QGate *> *formalGates() const;
    void addFormalGate(const QGate *formalGate);
    void removeFormalGate(const QGate *formalGate);
    const QList<QInteractionFragment *> *fragments() const;
    void addFragment(const QInteractionFragment *fragment);
    void removeFragment(const QInteractionFragment *fragment);
    const QSet<QLifeline *> *lifelines() const;
    void addLifeline(const QLifeline *lifeline);
    void removeLifeline(const QLifeline *lifeline);
    const QSet<QMessage *> *messages() const;
    void addMessage(const QMessage *message);
    void removeMessage(const QMessage *message);

private:
    Q_DISABLE_COPY(QInteraction)
    Q_DECLARE_PRIVATE(QInteraction)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QInteraction *>)
Q_DECLARE_METATYPE(QList<QtUml::QInteraction *> *)

QT_END_HEADER

#endif // QTUML_QINTERACTION_H

