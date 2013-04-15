/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QUMLBEHAVIOR_H
#define QUMLBEHAVIOR_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlClass>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlBehavior;
class QUmlBehavioralFeature;
class QUmlConstraint;
class QUmlParameter;
class QUmlBehavioredClassifier;
class QUmlParameterSet;

class QUmlBehaviorPrivate;

class Q_UML_EXPORT QUmlBehavior : public QUmlClass
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(bool isReentrant READ isReentrant WRITE setReentrant RESET unsetReentrant)
    Q_PROPERTY(QUmlBehavioralFeature * specification READ specification WRITE setSpecification)
    Q_PROPERTY(QSet<QUmlConstraint *> postconditions READ postconditions)
    Q_PROPERTY(QSet<QUmlConstraint *> preconditions READ preconditions)
    Q_PROPERTY(QSet<QUmlBehavior *> redefinedBehaviors READ redefinedBehaviors)
    Q_PROPERTY(QList<QUmlParameter *> ownedParameters READ ownedParameters)
    Q_PROPERTY(QSet<QUmlParameterSet *> ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(QUmlBehavioredClassifier * context READ context STORED false)

    Q_DISABLE_COPY(QUmlBehavior)
    Q_DECLARE_PRIVATE(QUmlBehavior)

public:
    Q_INVOKABLE explicit QUmlBehavior(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlBehavior();

    // Attributes from QUmlBehavior
    Q_INVOKABLE bool isReentrant() const;
    Q_INVOKABLE void setReentrant(bool isReentrant);
    Q_INVOKABLE void unsetReentrant();

    // Association ends from QUmlBehavior
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

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addRedefinedClassifier(QWrappedObjectPointer<QUmlBehavior> redefinedBehavior);
    Q_INVOKABLE void removeRedefinedClassifier(QWrappedObjectPointer<QUmlBehavior> redefinedBehavior);

    virtual void setPropertyData();

protected:
    explicit QUmlBehavior(QUmlBehaviorPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLBEHAVIOR_H

