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
#ifndef QUMLINTERACTION_H
#define QUMLINTERACTION_H

#include <QtUml/QtUmlGlobal>

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlInteractionFragment>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlAction;
class QUmlGate;
class QUmlLifeline;
class QUmlMessage;

class QUmlInteractionPrivate;
class Q_UML_EXPORT QUmlInteraction : public QUmlBehavior, public QUmlInteractionFragment
{
public:
    QUmlInteraction(bool create_d_ptr = true);

    // Owned attributes
    QSet<QUmlAction *> action() const;
    void addAction(QUmlAction *action);
    void removeAction(QUmlAction *action);
    QSet<QUmlGate *> formalGate() const;
    void addFormalGate(QUmlGate *formalGate);
    void removeFormalGate(QUmlGate *formalGate);
    QList<QUmlInteractionFragment *> fragment() const;
    void addFragment(QUmlInteractionFragment *fragment);
    void removeFragment(QUmlInteractionFragment *fragment);
    QSet<QUmlLifeline *> lifeline() const;
    void addLifeline(QUmlLifeline *lifeline);
    void removeLifeline(QUmlLifeline *lifeline);
    QSet<QUmlMessage *> message() const;
    void addMessage(QUmlMessage *message);
    void removeMessage(QUmlMessage *message);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLINTERACTION_H

