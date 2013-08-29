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
#ifndef UMLINTERACTION_H
#define UMLINTERACTION_H

#include <QtUml/QtUmlGlobal>

#include "private/umlbehavior_p.h"
#include "private/umlinteractionfragment_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlAction;
class UmlGate;
class UmlLifeline;
class UmlMessage;

class Q_UML_EXPORT UmlInteraction : public UmlBehavior, public UmlInteractionFragment
{
public:
    Q_DECL_HIDDEN explicit UmlInteraction();

    // Owned attributes
    const QSet<UmlAction *> action() const;
    void addAction(UmlAction *action);
    void removeAction(UmlAction *action);
    const QSet<UmlGate *> formalGate() const;
    void addFormalGate(UmlGate *formalGate);
    void removeFormalGate(UmlGate *formalGate);
    const QList<UmlInteractionFragment *> fragment() const;
    void addFragment(UmlInteractionFragment *fragment);
    void removeFragment(UmlInteractionFragment *fragment);
    const QSet<UmlLifeline *> lifeline() const;
    void addLifeline(UmlLifeline *lifeline);
    void removeLifeline(UmlLifeline *lifeline);
    const QSet<UmlMessage *> message() const;
    void addMessage(UmlMessage *message);
    void removeMessage(UmlMessage *message);

protected:
    QSet<UmlAction *> _action;
    QSet<UmlGate *> _formalGate;
    QList<UmlInteractionFragment *> _fragment;
    QSet<UmlLifeline *> _lifeline;
    QSet<UmlMessage *> _message;
};

#endif // UMLINTERACTION_H

