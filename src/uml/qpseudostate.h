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
#ifndef QTUML_QPSEUDOSTATE_H
#define QTUML_QPSEUDOSTATE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QVertex>

// QtUml includes
#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QState;
class QStateMachine;

class QPseudostatePrivate;

class Q_UML_EXPORT QPseudostate : public QVertex
{
    Q_OBJECT

    Q_PROPERTY(QtUml::PseudostateKind kind READ kind WRITE setKind RESET unsetKind)
    Q_PROPERTY(QState * state READ state WRITE setState)
    Q_PROPERTY(QStateMachine * stateMachine READ stateMachine WRITE setStateMachine)

    Q_DISABLE_COPY(QPseudostate)
    Q_DECLARE_PRIVATE(QPseudostate)

public:
    Q_INVOKABLE explicit QPseudostate(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QPseudostate();

    // Attributes from QPseudostate
    Q_INVOKABLE QtUml::PseudostateKind kind() const;
    Q_INVOKABLE void setKind(QtUml::PseudostateKind kind);
    Q_INVOKABLE void unsetKind();

    // Association ends from QPseudostate
    Q_INVOKABLE QState *state() const;
    Q_INVOKABLE void setState(QState *state);
    Q_INVOKABLE QStateMachine *stateMachine() const;
    Q_INVOKABLE void setStateMachine(QStateMachine *stateMachine);

    virtual void setPropertyData();

protected:
    explicit QPseudostate(QPseudostatePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QPSEUDOSTATE_H

