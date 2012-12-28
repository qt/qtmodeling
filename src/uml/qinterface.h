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
#ifndef QTUML_QINTERFACE_H
#define QTUML_QINTERFACE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QClassifier>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>
using QtWrappedObjects::QWrappedObjectPointer;

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QProtocolStateMachine;
class QReception;
class QProperty;
class QOperation;

class QInterfacePrivate;

class Q_UML_EXPORT QInterface : public QClassifier
{
    Q_OBJECT

    Q_PROPERTY(QProtocolStateMachine * protocol READ protocol WRITE setProtocol)
    Q_PROPERTY(QSet<QInterface *> redefinedInterfaces READ redefinedInterfaces)
    Q_PROPERTY(QSet<QReception *> ownedReceptions READ ownedReceptions)
    Q_PROPERTY(QList<QOperation *> ownedOperations READ ownedOperations)
    Q_PROPERTY(QList<QClassifier *> nestedClassifiers READ nestedClassifiers)
    Q_PROPERTY(QList<QProperty *> ownedAttributes READ ownedAttributes)

    Q_DISABLE_COPY(QInterface)
    Q_DECLARE_PRIVATE(QInterface)

public:
    Q_INVOKABLE explicit QInterface(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QInterface();

    // Association ends from QInterface
    Q_INVOKABLE QProtocolStateMachine *protocol() const;
    Q_INVOKABLE void setProtocol(QProtocolStateMachine *protocol);
    Q_INVOKABLE const QSet<QInterface *> &redefinedInterfaces() const;
    Q_INVOKABLE void addRedefinedInterface(QInterface *redefinedInterface);
    Q_INVOKABLE void removeRedefinedInterface(QInterface *redefinedInterface);
    Q_INVOKABLE const QSet<QReception *> &ownedReceptions() const;
    Q_INVOKABLE void addOwnedReception(QReception *ownedReception);
    Q_INVOKABLE void removeOwnedReception(QReception *ownedReception);
    Q_INVOKABLE const QList<QOperation *> &ownedOperations() const;
    Q_INVOKABLE void addOwnedOperation(QOperation *ownedOperation);
    Q_INVOKABLE void removeOwnedOperation(QOperation *ownedOperation);
    Q_INVOKABLE const QList<QClassifier *> &nestedClassifiers() const;
    Q_INVOKABLE void addNestedClassifier(QClassifier *nestedClassifier);
    Q_INVOKABLE void removeNestedClassifier(QClassifier *nestedClassifier);
    Q_INVOKABLE const QList<QProperty *> &ownedAttributes() const;
    Q_INVOKABLE void addOwnedAttribute(QProperty *ownedAttribute);
    Q_INVOKABLE void removeOwnedAttribute(QProperty *ownedAttribute);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addRedefinedClassifier(QWrappedObjectPointer<QInterface> redefinedInterface);
    Q_INVOKABLE void removeRedefinedClassifier(QWrappedObjectPointer<QInterface> redefinedInterface);

protected:
    explicit QInterface(QInterfacePrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QINTERFACE_H

