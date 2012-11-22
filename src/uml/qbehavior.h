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
#ifndef QTUML_QBEHAVIOR_H
#define QTUML_QBEHAVIOR_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QClass>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QBehavioralFeature;
class QConstraint;
class QParameter;
class QBehavioredClassifier;
class QParameterSet;

class QBehaviorPrivate;

class Q_UML_EXPORT QBehavior : public QClass
{
    Q_OBJECT

    Q_PROPERTY(bool isReentrant READ isReentrant WRITE setReentrant)
    Q_PROPERTY(QBehavioralFeature * specification READ specification WRITE setSpecification)
    Q_PROPERTY(const QSet<QConstraint *> * postconditions READ postconditions)
    Q_PROPERTY(const QSet<QConstraint *> * preconditions READ preconditions)
    Q_PROPERTY(const QSet<QBehavior *> * redefinedBehaviors READ redefinedBehaviors)
    Q_PROPERTY(const QList<QParameter *> * ownedParameters READ ownedParameters)
    Q_PROPERTY(const QSet<QParameterSet *> * ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(QBehavioredClassifier * context READ context STORED false)

    Q_DISABLE_COPY(QBehavior)
    Q_DECLARE_PRIVATE(QBehavior)

public:
    Q_INVOKABLE explicit QBehavior(QObject *parent = 0);
    virtual ~QBehavior();

    // Attributes from QBehavior
    Q_INVOKABLE bool isReentrant() const;
    Q_INVOKABLE void setReentrant(bool isReentrant);

    // Association ends from QBehavior
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

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addRedefinedClassifier(QUmlPointer<QBehavior> redefinedBehavior);
    Q_INVOKABLE void removeRedefinedClassifier(QUmlPointer<QBehavior> redefinedBehavior);

protected:
    explicit QBehavior(QBehaviorPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QBehavior) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QBehavior) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QBehavior) *> *)

QT_END_HEADER

#endif // QTUML_QBEHAVIOR_H

