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
#ifndef QTUML_QPORT_H
#define QTUML_QPORT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QProperty>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER


QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QPortPrivate;
class QProtocolStateMachine;
class QInterface;

class Q_UML_EXPORT QPort : public QProperty
{
    Q_OBJECT

    // From QPort
    Q_PROPERTY(bool isBehavior READ isBehavior WRITE setBehavior)
    Q_PROPERTY(bool isConjugated READ isConjugated WRITE setConjugated)
    Q_PROPERTY(bool isService READ isService WRITE setService)
    Q_PROPERTY(QProtocolStateMachine * protocol READ protocol WRITE setProtocol)
    Q_PROPERTY(const QSet<QInterface *> * provided READ provided)
    Q_PROPERTY(const QSet<QPort *> * redefinedPorts READ redefinedPorts)
    Q_PROPERTY(const QSet<QInterface *> * required READ required)

public:
    explicit QPort(QObject *parent = 0);
    virtual ~QPort();

    // Attributes (except those derived && !derivedUnion)
    bool isBehavior() const;
    void setBehavior(bool isBehavior);
    bool isConjugated() const;
    void setConjugated(bool isConjugated);
    bool isService() const;
    void setService(bool isService);

    // Association-ends (except those derived && !derivedUnion)
    QProtocolStateMachine *protocol() const;
    void setProtocol(const QProtocolStateMachine *protocol);
    const QSet<QPort *> *redefinedPorts() const;
    void addRedefinedPort(const QPort *redefinedPort);
    void removeRedefinedPort(const QPort *redefinedPort);

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    const QSet<QInterface *> *provided() const;
    const QSet<QInterface *> *required() const;

private:
    Q_DISABLE_COPY(QPort)
    Q_DECLARE_PRIVATE(QPort)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QPort *>)
Q_DECLARE_METATYPE(QList<QtUml::QPort *> *)

QT_END_HEADER

#endif // QTUML_QPORT_H

