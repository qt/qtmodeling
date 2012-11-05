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

    // From QBehavior
    Q_PROPERTY(bool isReentrant READ isReentrant WRITE setReentrant)
    Q_PROPERTY(QBehavioralFeature * specification READ specification WRITE setSpecification)
    Q_PROPERTY(const QSet<QConstraint *> * postconditions READ postconditions)
    Q_PROPERTY(const QSet<QConstraint *> * preconditions READ preconditions)
    Q_PROPERTY(const QSet<QBehavior *> * redefinedBehaviors READ redefinedBehaviors)
    Q_PROPERTY(const QList<QParameter *> * ownedParameters READ ownedParameters)
    Q_PROPERTY(const QSet<QParameterSet *> * ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(QBehavioredClassifier * context READ context)

    Q_DISABLE_COPY(QBehavior)
    Q_DECLARE_PRIVATE(QBehavior)

public:
    explicit QBehavior(QObject *parent = 0);
    virtual ~QBehavior();

    // Attributes from QBehavior
    bool isReentrant() const;
    void setReentrant(bool isReentrant);

    // Association ends from QBehavior
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

    // Overriden methods for subsetted properties
    void addRedefinedClassifier(QUmlPointer<QBehavior> redefinedBehavior);
    void removeRedefinedClassifier(QUmlPointer<QBehavior> redefinedBehavior);

protected:
    explicit QBehavior(QBehaviorPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QBehavior) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QBehavior) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QBehavior) *> *)

QT_END_HEADER

#endif // QTUML_QBEHAVIOR_H

