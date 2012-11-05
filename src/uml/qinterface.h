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

    // From QInterface
    Q_PROPERTY(QProtocolStateMachine * protocol READ protocol WRITE setProtocol)
    Q_PROPERTY(const QSet<QInterface *> * redefinedInterfaces READ redefinedInterfaces)
    Q_PROPERTY(const QSet<QReception *> * ownedReceptions READ ownedReceptions)
    Q_PROPERTY(const QList<QOperation *> * ownedOperations READ ownedOperations)
    Q_PROPERTY(const QList<QClassifier *> * nestedClassifiers READ nestedClassifiers)
    Q_PROPERTY(const QList<QProperty *> * ownedAttributes READ ownedAttributes)

    Q_DISABLE_COPY(QInterface)
    Q_DECLARE_PRIVATE(QInterface)

public:
    explicit QInterface(QObject *parent = 0);
    virtual ~QInterface();

    // Association ends from QInterface
    QProtocolStateMachine *protocol() const;
    void setProtocol(QProtocolStateMachine *protocol);
    const QSet<QInterface *> *redefinedInterfaces() const;
    void addRedefinedInterface(QInterface *redefinedInterface);
    void removeRedefinedInterface(QInterface *redefinedInterface);
    const QSet<QReception *> *ownedReceptions() const;
    void addOwnedReception(QReception *ownedReception);
    void removeOwnedReception(QReception *ownedReception);
    const QList<QOperation *> *ownedOperations() const;
    void addOwnedOperation(QOperation *ownedOperation);
    void removeOwnedOperation(QOperation *ownedOperation);
    const QList<QClassifier *> *nestedClassifiers() const;
    void addNestedClassifier(QClassifier *nestedClassifier);
    void removeNestedClassifier(QClassifier *nestedClassifier);
    const QList<QProperty *> *ownedAttributes() const;
    void addOwnedAttribute(QProperty *ownedAttribute);
    void removeOwnedAttribute(QProperty *ownedAttribute);

    // Overriden methods for subsetted properties
    void addRedefinedClassifier(QInterface *redefinedInterface);
    void removeRedefinedClassifier(QInterface *redefinedInterface);

protected:
    explicit QInterface(QInterfacePrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QInterface) *)
Q_DECLARE_METATYPE(QSet<QT_PREPEND_NAMESPACE_QTUML(QInterface) *> *)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QInterface) *> *)

QT_END_HEADER

#endif // QTUML_QINTERFACE_H

