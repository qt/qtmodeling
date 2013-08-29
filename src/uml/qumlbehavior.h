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

#include <QtCore/QObject>
#include "private/umlbehavior_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlBehavioralFeature;
class QUmlBehavioredClassifier;
class QUmlConstraint;
class QUmlParameter;
class QUmlParameterSet;

class Q_UML_EXPORT QUmlBehavior : public QObject, public UmlBehavior
{
    Q_OBJECT
    Q_PROPERTY(QUmlBehavioredClassifier * context READ context)
    Q_PROPERTY(bool isReentrant READ isReentrant)
    Q_PROPERTY(QList<QUmlParameter *> ownedParameter READ ownedParameter)
    Q_PROPERTY(QSet<QUmlParameterSet *> ownedParameterSet READ ownedParameterSet)
    Q_PROPERTY(QSet<QUmlConstraint *> postcondition READ postcondition)
    Q_PROPERTY(QSet<QUmlConstraint *> precondition READ precondition)
    Q_PROPERTY(QSet<QUmlBehavior *> redefinedBehavior READ redefinedBehavior)
    Q_PROPERTY(QUmlBehavioralFeature * specification READ specification)

public:
    Q_DECL_HIDDEN explicit QUmlBehavior(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QUmlBehavioredClassifier *context() const;
    Q_INVOKABLE bool isReentrant() const;
    Q_INVOKABLE void setReentrant(bool isReentrant);
    Q_INVOKABLE const QList<QUmlParameter *> ownedParameter() const;
    Q_INVOKABLE void addOwnedParameter(UmlParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(UmlParameter *ownedParameter);
    Q_INVOKABLE const QSet<QUmlParameterSet *> ownedParameterSet() const;
    Q_INVOKABLE void addOwnedParameterSet(UmlParameterSet *ownedParameterSet);
    Q_INVOKABLE void removeOwnedParameterSet(UmlParameterSet *ownedParameterSet);
    Q_INVOKABLE const QSet<QUmlConstraint *> postcondition() const;
    Q_INVOKABLE void addPostcondition(UmlConstraint *postcondition);
    Q_INVOKABLE void removePostcondition(UmlConstraint *postcondition);
    Q_INVOKABLE const QSet<QUmlConstraint *> precondition() const;
    Q_INVOKABLE void addPrecondition(UmlConstraint *precondition);
    Q_INVOKABLE void removePrecondition(UmlConstraint *precondition);
    Q_INVOKABLE const QSet<QUmlBehavior *> redefinedBehavior() const;
    Q_INVOKABLE void addRedefinedBehavior(UmlBehavior *redefinedBehavior);
    Q_INVOKABLE void removeRedefinedBehavior(UmlBehavior *redefinedBehavior);
    Q_INVOKABLE QUmlBehavioralFeature *specification() const;
    Q_INVOKABLE void setSpecification(QUmlBehavioralFeature *specification);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlBehavior *)
Q_DECLARE_METATYPE(QList<QUmlBehavior *> *)
Q_DECLARE_METATYPE(QSet<QUmlBehavior *> *)

QT_END_HEADER

#endif // QUMLBEHAVIOR_H

