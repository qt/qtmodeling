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
    Q_PROPERTY(const QBehavioredClassifier * context READ context)
    Q_PROPERTY(QList<QParameter *> * ownedParameter READ ownedParameter)
    Q_PROPERTY(QList<QParameterSet *> * ownedParameterSet READ ownedParameterSet)
    Q_PROPERTY(QList<QConstraint *> * postcondition READ postcondition)
    Q_PROPERTY(QList<QConstraint *> * precondition READ precondition)
    Q_PROPERTY(QList<QBehavior *> * redefinedBehavior READ redefinedBehavior)
    Q_PROPERTY(QBehavioralFeature * specification READ specification WRITE setSpecification)

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

    // From QInteractionFragment
    Q_PROPERTY(QList<QLifeline *> * covered READ covered)
    Q_PROPERTY(QInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(QInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)
    Q_PROPERTY(QList<QGeneralOrdering *> * generalOrdering READ generalOrdering)

    // From QInteraction
    Q_PROPERTY(QList<QAction *> * action READ action)
    Q_PROPERTY(QList<QGate *> * formalGate READ formalGate)
    Q_PROPERTY(QList<QInteractionFragment *> * fragment READ fragment)
    Q_PROPERTY(QList<QLifeline *> * lifeline READ lifeline)
    Q_PROPERTY(QList<QMessage *> * message READ message)

public:
    explicit QInteraction(QObject *parent = 0);
    virtual ~QInteraction();

    // Association-ends (except those derived && !derivedUnion)
    QList<QAction *> *action();
    QList<QGate *> *formalGate();
    QList<QInteractionFragment *> *fragment();
    QList<QLifeline *> *lifeline();
    QList<QMessage *> *message();

private:
    Q_DISABLE_COPY(QInteraction)
    Q_DECLARE_PRIVATE(QInteraction)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QInteraction *>)
Q_DECLARE_METATYPE(QList<QtUml::QInteraction *> *)

QT_END_HEADER

#endif // QTUML_QINTERACTION_H

