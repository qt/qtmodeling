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

// Base class includes
#include <QtUml/QNamedElement>

// QtUml includes
#include <QtUml/QtUmlEnumerations>
#include <QtUml/QtUmlEnumerations>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QMessageEnd;
class QInteraction;
class QValueSpecification;
class QConnector;

class QMessagePrivate;

class Q_UML_EXPORT QMessage : public QNamedElement
{
    Q_OBJECT

    // From QMessage
    Q_PROPERTY(QtUml::MessageSort messageSort READ messageSort WRITE setMessageSort)
    Q_PROPERTY(QtUml::MessageKind messageKind READ messageKind STORED false)
    Q_PROPERTY(QNamedElement * signature READ signature WRITE setSignature)
    Q_PROPERTY(const QList<QValueSpecification *> * arguments READ arguments)
    Q_PROPERTY(QMessageEnd * receiveEvent READ receiveEvent WRITE setReceiveEvent)
    Q_PROPERTY(QInteraction * interaction READ interaction WRITE setInteraction)
    Q_PROPERTY(QMessageEnd * sendEvent READ sendEvent WRITE setSendEvent)
    Q_PROPERTY(QConnector * connector READ connector WRITE setConnector)

    Q_DISABLE_COPY(QMessage)
    Q_DECLARE_PRIVATE(QMessage)

public:
    explicit QMessage(QObject *parent = 0);
    virtual ~QMessage();

    // Attributes from QMessage
    QtUml::MessageSort messageSort() const;
    void setMessageSort(QtUml::MessageSort messageSort);
    QtUml::MessageKind messageKind() const;

    // Association ends from QMessage
    QNamedElement *signature() const;
    void setSignature(QNamedElement *signature);
    const QList<QValueSpecification *> *arguments() const;
    void addArgument(QValueSpecification *argument);
    void removeArgument(QValueSpecification *argument);
    QMessageEnd *receiveEvent() const;
    void setReceiveEvent(QMessageEnd *receiveEvent);
    QInteraction *interaction() const;
    void setInteraction(QInteraction *interaction);
    QMessageEnd *sendEvent() const;
    void setSendEvent(QMessageEnd *sendEvent);
    QConnector *connector() const;
    void setConnector(QConnector *connector);

protected:
    explicit QMessage(QMessagePrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QMessage) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QMessage) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QMessage) *> *)

QT_END_HEADER

#endif // QTUML_QMESSAGE_H

