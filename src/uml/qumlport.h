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
#ifndef QUMLPORT_H
#define QUMLPORT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlProperty>

// Qt includes
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlProtocolStateMachine;
class QUmlInterface;
class QUmlPort;

class QUmlPortPrivate;

class Q_UML_EXPORT QUmlPort : public QUmlProperty
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(bool isConjugated READ isConjugated WRITE setConjugated RESET unsetConjugated)
    Q_PROPERTY(bool isBehavior READ isBehavior WRITE setBehavior RESET unsetBehavior)
    Q_PROPERTY(bool isService READ isService WRITE setService RESET unsetService)
    Q_PROPERTY(QUmlProtocolStateMachine * protocol READ protocol WRITE setProtocol)
    Q_PROPERTY(QSet<QUmlInterface *> required READ required STORED false)
    Q_PROPERTY(QSet<QUmlInterface *> provided READ provided STORED false)
    Q_PROPERTY(QSet<QUmlPort *> redefinedPorts READ redefinedPorts)

    Q_DISABLE_COPY(QUmlPort)
    Q_DECLARE_PRIVATE(QUmlPort)

public:
    Q_INVOKABLE explicit QUmlPort(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlPort();

    // Attributes from QUmlPort
    Q_INVOKABLE bool isConjugated() const;
    Q_INVOKABLE void setConjugated(bool isConjugated);
    Q_INVOKABLE void unsetConjugated();
    Q_INVOKABLE bool isBehavior() const;
    Q_INVOKABLE void setBehavior(bool isBehavior);
    Q_INVOKABLE void unsetBehavior();
    Q_INVOKABLE bool isService() const;
    Q_INVOKABLE void setService(bool isService);
    Q_INVOKABLE void unsetService();

    // Association ends from QUmlPort
    Q_INVOKABLE QUmlProtocolStateMachine *protocol() const;
    Q_INVOKABLE void setProtocol(QUmlProtocolStateMachine *protocol);
    Q_INVOKABLE QSet<QUmlInterface *> required() const;
    Q_INVOKABLE QSet<QUmlInterface *> provided() const;
    Q_INVOKABLE QSet<QUmlPort *> redefinedPorts() const;
    Q_INVOKABLE void addRedefinedPort(QUmlPort *redefinedPort);
    Q_INVOKABLE void removeRedefinedPort(QUmlPort *redefinedPort);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addRedefinedProperty(QWrappedObjectPointer<QUmlPort> redefinedPort);
    Q_INVOKABLE void removeRedefinedProperty(QWrappedObjectPointer<QUmlPort> redefinedPort);

    virtual void setPropertyData();

protected:
    explicit QUmlPort(QUmlPortPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLPORT_H

