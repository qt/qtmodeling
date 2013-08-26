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
#ifndef QUMLPORT_H
#define QUMLPORT_H

#include <QtUml/QtUmlGlobal>

#include <QtUml/QUmlProperty>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlInterface;
class QUmlProtocolStateMachine;

class Q_UML_EXPORT QUmlPort : public QUmlProperty
{
public:
    QUmlPort();

    // Owned attributes
    bool isBehavior() const;
    void setBehavior(bool isBehavior);
    bool isConjugated() const;
    void setConjugated(bool isConjugated);
    bool isService() const;
    void setService(bool isService);
    QUmlProtocolStateMachine *protocol() const;
    void setProtocol(QUmlProtocolStateMachine *protocol);
    QSet<QUmlInterface *> provided() const;
    QSet<QUmlPort *> redefinedPort() const;
    void addRedefinedPort(QUmlPort *redefinedPort);
    void removeRedefinedPort(QUmlPort *redefinedPort);
    QSet<QUmlInterface *> required() const;

protected:
    bool _isBehavior;
    bool _isConjugated;
    bool _isService;
    QUmlProtocolStateMachine *_protocol;
    QSet<QUmlPort *> _redefinedPort;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLPORT_H

