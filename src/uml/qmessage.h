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
#ifndef QTUML_QMESSAGE_H
#define QTUML_QMESSAGE_H

#include <QtUml/QtUmlGlobal>

// QtUml includes
#include <QtUml/QtUmlEnumerations>
#include <QtUml/QtUmlEnumerations>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QNamedElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QMessagePrivate;
class QMessageEnd;
class QInteraction;
class QValueSpecification;
class QConnector;

class Q_UML_EXPORT QMessage : public QObject, public QNamedElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComment READ ownedComment)
    Q_PROPERTY(const QList<QElement *> * ownedElement READ ownedElement)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QList<QDependency *> * clientDependency READ clientDependency)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(const QNamespace * namespace_ READ namespace_)

    // From QMessage
    Q_PROPERTY(QtUml::MessageKind messageKind READ messageKind)
    Q_PROPERTY(QtUml::MessageSort messageSort READ messageSort WRITE setMessageSort)
    Q_PROPERTY(QList<QValueSpecification *> * argument READ argument)
    Q_PROPERTY(QConnector * connector READ connector WRITE setConnector)
    Q_PROPERTY(QInteraction * interaction READ interaction WRITE setInteraction)
    Q_PROPERTY(QMessageEnd * receiveEvent READ receiveEvent WRITE setReceiveEvent)
    Q_PROPERTY(QMessageEnd * sendEvent READ sendEvent WRITE setSendEvent)
    Q_PROPERTY(QNamedElement * signature READ signature WRITE setSignature)

public:
    explicit QMessage(QObject *parent = 0);
    virtual ~QMessage();

    // Attributes (except those derived && !derivedUnion)
    QtUml::MessageSort messageSort() const;
    void setMessageSort(QtUml::MessageSort messageSort);

    // Association-ends (except those derived && !derivedUnion)
    QList<QValueSpecification *> *argument();
    QConnector *connector() const;
    void setConnector(QConnector *connector);
    QInteraction *interaction() const;
    void setInteraction(QInteraction *interaction);
    QMessageEnd *receiveEvent() const;
    void setReceiveEvent(QMessageEnd *receiveEvent);
    QMessageEnd *sendEvent() const;
    void setSendEvent(QMessageEnd *sendEvent);
    QNamedElement *signature() const;
    void setSignature(QNamedElement *signature);

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    QtUml::MessageKind messageKind() const;

private:
    Q_DISABLE_COPY(QMessage)
    Q_DECLARE_PRIVATE(QMessage)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QMessage *>)
Q_DECLARE_METATYPE(QList<QtUml::QMessage *> *)

QT_END_HEADER

#endif // QTUML_QMESSAGE_H

