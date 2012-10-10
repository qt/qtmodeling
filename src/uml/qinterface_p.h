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
#ifndef QTUML_QINTERFACE_P_H
#define QTUML_QINTERFACE_P_H

#include <QtUml/QtUmlGlobal>

// Base class includes

#include "qclassifier_p.h"

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QProtocolStateMachine;
class QReception;
class QProperty;
class QOperation;

class QInterfacePrivate : public QClassifierPrivate
{
public:
    explicit QInterfacePrivate();
    virtual ~QInterfacePrivate();

    QProtocolStateMachine *protocol;
    QSet<QInterface *> *redefinedInterfaces;
    QSet<QReception *> *ownedReceptions;
    QList<QOperation *> *ownedOperations;
    QList<QClassifier *> *nestedClassifiers;
    QList<QProperty *> *ownedAttributes;

    // Association-ends
    void setProtocol(const QProtocolStateMachine *protocol);
    void addRedefinedInterface(const QInterface *redefinedInterface);
    void removeRedefinedInterface(const QInterface *redefinedInterface);
    void addOwnedReception(const QReception *ownedReception);
    void removeOwnedReception(const QReception *ownedReception);
    void addOwnedOperation(const QOperation *ownedOperation);
    void removeOwnedOperation(const QOperation *ownedOperation);
    void addNestedClassifier(const QClassifier *nestedClassifier);
    void removeNestedClassifier(const QClassifier *nestedClassifier);
    void addOwnedAttribute(const QProperty *ownedAttribute);
    void removeOwnedAttribute(const QProperty *ownedAttribute);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QINTERFACE_P_H

