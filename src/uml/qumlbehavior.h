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

#include <QtUml/QUmlClass>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlBehavioralFeature;
class QUmlBehavioredClassifier;
class QUmlConstraint;
class QUmlParameter;
class QUmlParameterSet;

class Q_UML_EXPORT QUmlBehavior : public QUmlClass
{
public:
    Q_DECL_HIDDEN QUmlBehavior();

    // Owned attributes
    QUmlBehavioredClassifier *context() const;
    Q_DECL_HIDDEN void setContext(QUmlBehavioredClassifier *context);
    bool isReentrant() const;
    void setReentrant(bool isReentrant);
    const QList<QUmlParameter *> ownedParameter() const;
    void addOwnedParameter(QUmlParameter *ownedParameter);
    void removeOwnedParameter(QUmlParameter *ownedParameter);
    const QSet<QUmlParameterSet *> ownedParameterSet() const;
    void addOwnedParameterSet(QUmlParameterSet *ownedParameterSet);
    void removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet);
    const QSet<QUmlConstraint *> postcondition() const;
    void addPostcondition(QUmlConstraint *postcondition);
    void removePostcondition(QUmlConstraint *postcondition);
    const QSet<QUmlConstraint *> precondition() const;
    void addPrecondition(QUmlConstraint *precondition);
    void removePrecondition(QUmlConstraint *precondition);
    const QSet<QUmlBehavior *> redefinedBehavior() const;
    void addRedefinedBehavior(QUmlBehavior *redefinedBehavior);
    void removeRedefinedBehavior(QUmlBehavior *redefinedBehavior);
    QUmlBehavioralFeature *specification() const;
    void setSpecification(QUmlBehavioralFeature *specification);

protected:
    bool _isReentrant;
    QList<QUmlParameter *> _ownedParameter;
    QSet<QUmlParameterSet *> _ownedParameterSet;
    QSet<QUmlConstraint *> _postcondition;
    QSet<QUmlConstraint *> _precondition;
    QSet<QUmlBehavior *> _redefinedBehavior;
    QUmlBehavioralFeature *_specification;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlBehavior *)
Q_DECLARE_METATYPE(QList<QUmlBehavior *> *)
Q_DECLARE_METATYPE(QSet<QUmlBehavior *> *)

QT_END_HEADER

#endif // QUMLBEHAVIOR_H

