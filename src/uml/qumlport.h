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

#include <QtCore/QObject>
#include "private/umlport_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlInterface;
class QUmlProtocolStateMachine;

class Q_UML_EXPORT QUmlPort : public QObject, public UmlPort
{
    Q_OBJECT
    Q_PROPERTY(bool isBehavior READ isBehavior)
    Q_PROPERTY(bool isConjugated READ isConjugated)
    Q_PROPERTY(bool isService READ isService)
    Q_PROPERTY(QUmlProtocolStateMachine * protocol READ protocol)
    Q_PROPERTY(QSet<QUmlInterface *> provided READ provided)
    Q_PROPERTY(QSet<QUmlPort *> redefinedPort READ redefinedPort)
    Q_PROPERTY(QSet<QUmlInterface *> required READ required)

public:
    Q_INVOKABLE explicit QUmlPort(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE bool isBehavior() const;
    Q_INVOKABLE void setBehavior(bool isBehavior);
    Q_INVOKABLE bool isConjugated() const;
    Q_INVOKABLE void setConjugated(bool isConjugated);
    Q_INVOKABLE bool isService() const;
    Q_INVOKABLE void setService(bool isService);
    Q_INVOKABLE QUmlProtocolStateMachine *protocol() const;
    Q_INVOKABLE void setProtocol(QUmlProtocolStateMachine *protocol);
    Q_INVOKABLE const QSet<QUmlInterface *> provided() const;
    Q_INVOKABLE const QSet<QUmlPort *> redefinedPort() const;
    Q_INVOKABLE void addRedefinedPort(UmlPort *redefinedPort);
    Q_INVOKABLE void removeRedefinedPort(UmlPort *redefinedPort);
    Q_INVOKABLE const QSet<QUmlInterface *> required() const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlPort *)
Q_DECLARE_METATYPE(QList<QUmlPort *> *)
Q_DECLARE_METATYPE(QSet<QUmlPort *> *)

QT_END_HEADER

#endif // QUMLPORT_H

