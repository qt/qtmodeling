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
#ifndef QUMLINTERFACE_H
#define QUMLINTERFACE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlClassifier>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlProtocolStateMachine;
class QUmlInterface;
class QUmlReception;
class QUmlProperty;
class QUmlOperation;

class QUmlInterfacePrivate;

class Q_UML_EXPORT QUmlInterface : public QUmlClassifier
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlProtocolStateMachine * protocol READ protocol WRITE setProtocol)
    Q_PROPERTY(QSet<QUmlInterface *> redefinedInterfaces READ redefinedInterfaces)
    Q_PROPERTY(QSet<QUmlReception *> ownedReceptions READ ownedReceptions)
    Q_PROPERTY(QList<QUmlOperation *> ownedOperations READ ownedOperations)
    Q_PROPERTY(QList<QUmlClassifier *> nestedClassifiers READ nestedClassifiers)
    Q_PROPERTY(QList<QUmlProperty *> ownedAttributes READ ownedAttributes)

    Q_DISABLE_COPY(QUmlInterface)
    Q_DECLARE_PRIVATE(QUmlInterface)

public:
    Q_INVOKABLE explicit QUmlInterface(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlInterface();

    // Association ends from QUmlInterface
    Q_INVOKABLE QUmlProtocolStateMachine *protocol() const;
    Q_INVOKABLE void setProtocol(QUmlProtocolStateMachine *protocol);
    Q_INVOKABLE QSet<QUmlInterface *> redefinedInterfaces() const;
    Q_INVOKABLE void addRedefinedInterface(QUmlInterface *redefinedInterface);
    Q_INVOKABLE void removeRedefinedInterface(QUmlInterface *redefinedInterface);
    Q_INVOKABLE QSet<QUmlReception *> ownedReceptions() const;
    Q_INVOKABLE void addOwnedReception(QUmlReception *ownedReception);
    Q_INVOKABLE void removeOwnedReception(QUmlReception *ownedReception);
    Q_INVOKABLE QList<QUmlOperation *> ownedOperations() const;
    Q_INVOKABLE void addOwnedOperation(QUmlOperation *ownedOperation);
    Q_INVOKABLE void removeOwnedOperation(QUmlOperation *ownedOperation);
    Q_INVOKABLE QList<QUmlClassifier *> nestedClassifiers() const;
    Q_INVOKABLE void addNestedClassifier(QUmlClassifier *nestedClassifier);
    Q_INVOKABLE void removeNestedClassifier(QUmlClassifier *nestedClassifier);
    Q_INVOKABLE QList<QUmlProperty *> ownedAttributes() const;
    Q_INVOKABLE void addOwnedAttribute(QUmlProperty *ownedAttribute);
    Q_INVOKABLE void removeOwnedAttribute(QUmlProperty *ownedAttribute);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addRedefinedClassifier(QWrappedObjectPointer<QUmlInterface> redefinedInterface);
    Q_INVOKABLE void removeRedefinedClassifier(QWrappedObjectPointer<QUmlInterface> redefinedInterface);

    virtual void setPropertyData();

protected:
    explicit QUmlInterface(QUmlInterfacePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLINTERFACE_H

