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

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QProtocolStateMachine;
class QInterface;

class QPortPrivate;

class Q_UML_EXPORT QPort : public QProperty
{
    Q_OBJECT

    Q_PROPERTY(bool isConjugated READ isConjugated WRITE setConjugated RESET unsetConjugated)
    Q_PROPERTY(bool isBehavior READ isBehavior WRITE setBehavior RESET unsetBehavior)
    Q_PROPERTY(bool isService READ isService WRITE setService RESET unsetService)
    Q_PROPERTY(QProtocolStateMachine * protocol READ protocol WRITE setProtocol)
    Q_PROPERTY(QSet<QInterface *> required READ required STORED false)
    Q_PROPERTY(QSet<QInterface *> provided READ provided STORED false)
    Q_PROPERTY(QSet<QPort *> redefinedPorts READ redefinedPorts)

    Q_DISABLE_COPY(QPort)
    Q_DECLARE_PRIVATE(QPort)

public:
    Q_INVOKABLE explicit QPort(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QPort();

    // Attributes from QPort
    Q_INVOKABLE bool isConjugated() const;
    Q_INVOKABLE void setConjugated(bool isConjugated);
    Q_INVOKABLE void unsetConjugated();
    Q_INVOKABLE bool isBehavior() const;
    Q_INVOKABLE void setBehavior(bool isBehavior);
    Q_INVOKABLE void unsetBehavior();
    Q_INVOKABLE bool isService() const;
    Q_INVOKABLE void setService(bool isService);
    Q_INVOKABLE void unsetService();

    // Association ends from QPort
    Q_INVOKABLE QProtocolStateMachine *protocol() const;
    Q_INVOKABLE void setProtocol(QProtocolStateMachine *protocol);
    Q_INVOKABLE QSet<QInterface *> required() const;
    Q_INVOKABLE QSet<QInterface *> provided() const;
    Q_INVOKABLE QSet<QPort *> redefinedPorts() const;
    Q_INVOKABLE void addRedefinedPort(QPort *redefinedPort);
    Q_INVOKABLE void removeRedefinedPort(QPort *redefinedPort);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addRedefinedProperty(QWrappedObjectPointer<QPort> redefinedPort);
    Q_INVOKABLE void removeRedefinedProperty(QWrappedObjectPointer<QPort> redefinedPort);

    virtual void setPropertyData();

protected:
    explicit QPort(QPortPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QPORT_H

