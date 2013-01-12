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

#include <QtWrappedObjects/QWrappedObjectPointer>
using QtWrappedObjects::QWrappedObjectPointer;

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

    Q_PROPERTY(bool isReentrant READ isReentrant WRITE setReentrant RESET unsetReentrant)
    Q_PROPERTY(QBehavioralFeature * specification READ specification WRITE setSpecification)
    Q_PROPERTY(QSet<QConstraint *> postconditions READ postconditions)
    Q_PROPERTY(QSet<QConstraint *> preconditions READ preconditions)
    Q_PROPERTY(QSet<QBehavior *> redefinedBehaviors READ redefinedBehaviors)
    Q_PROPERTY(QList<QParameter *> ownedParameters READ ownedParameters)
    Q_PROPERTY(QSet<QParameterSet *> ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(QBehavioredClassifier * context READ context STORED false)

    Q_DISABLE_COPY(QBehavior)
    Q_DECLARE_PRIVATE(QBehavior)

public:
    Q_INVOKABLE explicit QBehavior(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QBehavior();

    // Attributes from QBehavior
    Q_INVOKABLE bool isReentrant() const;
    Q_INVOKABLE void setReentrant(bool isReentrant);
    Q_INVOKABLE void unsetReentrant();

    // Association ends from QBehavior
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

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addRedefinedClassifier(QWrappedObjectPointer<QBehavior> redefinedBehavior);
    Q_INVOKABLE void removeRedefinedClassifier(QWrappedObjectPointer<QBehavior> redefinedBehavior);

    virtual void setPropertyData();

protected:
    explicit QBehavior(QBehaviorPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QBEHAVIOR_H

