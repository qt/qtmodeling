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
#ifndef UMLBEHAVIOR_H
#define UMLBEHAVIOR_H

#include <QtUml/QtUmlGlobal>

#include "private/umlclass_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlBehavioralFeature;
class UmlBehavioredClassifier;
class UmlConstraint;
class UmlParameter;
class UmlParameterSet;

class Q_UML_EXPORT UmlBehavior : public UmlClass
{
public:
    Q_DECL_HIDDEN explicit UmlBehavior();

    // Owned attributes
    UmlBehavioredClassifier *context() const;
    Q_DECL_HIDDEN void setContext(UmlBehavioredClassifier *context);
    bool isReentrant() const;
    void setReentrant(bool isReentrant);
    const QList<UmlParameter *> ownedParameter() const;
    void addOwnedParameter(UmlParameter *ownedParameter);
    void removeOwnedParameter(UmlParameter *ownedParameter);
    const QSet<UmlParameterSet *> ownedParameterSet() const;
    void addOwnedParameterSet(UmlParameterSet *ownedParameterSet);
    void removeOwnedParameterSet(UmlParameterSet *ownedParameterSet);
    const QSet<UmlConstraint *> postcondition() const;
    void addPostcondition(UmlConstraint *postcondition);
    void removePostcondition(UmlConstraint *postcondition);
    const QSet<UmlConstraint *> precondition() const;
    void addPrecondition(UmlConstraint *precondition);
    void removePrecondition(UmlConstraint *precondition);
    const QSet<UmlBehavior *> redefinedBehavior() const;
    void addRedefinedBehavior(UmlBehavior *redefinedBehavior);
    void removeRedefinedBehavior(UmlBehavior *redefinedBehavior);
    UmlBehavioralFeature *specification() const;
    void setSpecification(UmlBehavioralFeature *specification);

protected:
    bool _isReentrant;
    QList<UmlParameter *> _ownedParameter;
    QSet<UmlParameterSet *> _ownedParameterSet;
    QSet<UmlConstraint *> _postcondition;
    QSet<UmlConstraint *> _precondition;
    QSet<UmlBehavior *> _redefinedBehavior;
    UmlBehavioralFeature *_specification;
};

#endif // UMLBEHAVIOR_H

