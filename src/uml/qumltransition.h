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
#ifndef QUMLTRANSITION_H
#define QUMLTRANSITION_H

#include <QtUml/QtUmlGlobal>

#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlNamespace>


#include <QtUml/QtUmlNamespace>
QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlBehavior;
class QUmlClassifier;
class QUmlConstraint;
class QUmlRegion;
class QUmlStateMachine;
class QUmlTrigger;
class QUmlVertex;

class Q_UML_EXPORT QUmlTransition : public QUmlRedefinableElement, public QUmlNamespace
{
public:
    explicit QUmlTransition(bool createQModelingObject = true);
    virtual ~QUmlTransition();

    virtual QModelingElement *clone() const;

    // Owned attributes
    QUmlRegion *container() const;
    void setContainer(QUmlRegion *container);
    QUmlBehavior *effect() const;
    void setEffect(QUmlBehavior *effect);
    QUmlConstraint *guard() const;
    void setGuard(QUmlConstraint *guard);
    QtUml::TransitionKind kind() const;
    void setKind(QtUml::TransitionKind kind);
    QUmlTransition *redefinedTransition() const;
    void setRedefinedTransition(QUmlTransition *redefinedTransition);
    QUmlClassifier *redefinitionContext() const;
    Q_DECL_HIDDEN void setRedefinitionContext(QUmlClassifier *redefinitionContext);
    QUmlVertex *source() const;
    void setSource(QUmlVertex *source);
    QUmlVertex *target() const;
    void setTarget(QUmlVertex *target);
    const QSet<QUmlTrigger *> triggers() const;
    void addTrigger(QUmlTrigger *trigger);
    void removeTrigger(QUmlTrigger *trigger);

    // Operations
    QUmlStateMachine *containingStateMachine() const;
    bool isConsistentWith(QUmlRedefinableElement *redefinee) const;

protected:
    QUmlRegion *_container;
    QUmlBehavior *_effect;
    QUmlConstraint *_guard;
    QtUml::TransitionKind _kind;
    QUmlTransition *_redefinedTransition;
    QUmlVertex *_source;
    QUmlVertex *_target;
    QSet<QUmlTrigger *> _triggers;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QUmlTransition) *)

QT_END_HEADER

#endif // QUMLTRANSITION_H

