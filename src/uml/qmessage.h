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
#include <QtUml/QtUmlNamespace>
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

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

    Q_PROPERTY(QtUmlNS::MessageSort messageSort READ messageSort WRITE setMessageSort RESET unsetMessageSort)
    Q_PROPERTY(QtUmlNS::MessageKind messageKind READ messageKind STORED false)
    Q_PROPERTY(QtUml::QNamedElement * signature READ signature WRITE setSignature)
    Q_PROPERTY(QList<QtUml::QValueSpecification *> arguments READ arguments)
    Q_PROPERTY(QtUml::QMessageEnd * receiveEvent READ receiveEvent WRITE setReceiveEvent)
    Q_PROPERTY(QtUml::QInteraction * interaction READ interaction WRITE setInteraction)
    Q_PROPERTY(QtUml::QMessageEnd * sendEvent READ sendEvent WRITE setSendEvent)
    Q_PROPERTY(QtUml::QConnector * connector READ connector WRITE setConnector)

    Q_DISABLE_COPY(QMessage)
    Q_DECLARE_PRIVATE(QMessage)

public:
    Q_INVOKABLE explicit QMessage(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMessage();

    // Attributes from QMessage
    Q_INVOKABLE QtUmlNS::MessageSort messageSort() const;
    Q_INVOKABLE void setMessageSort(QtUmlNS::MessageSort messageSort);
    Q_INVOKABLE void unsetMessageSort();
    Q_INVOKABLE QtUmlNS::MessageKind messageKind() const;

    // Association ends from QMessage
    Q_INVOKABLE QNamedElement *signature() const;
    Q_INVOKABLE void setSignature(QNamedElement *signature);
    Q_INVOKABLE QList<QValueSpecification *> arguments() const;
    Q_INVOKABLE void addArgument(QValueSpecification *argument);
    Q_INVOKABLE void removeArgument(QValueSpecification *argument);
    Q_INVOKABLE QMessageEnd *receiveEvent() const;
    Q_INVOKABLE void setReceiveEvent(QMessageEnd *receiveEvent);
    Q_INVOKABLE QInteraction *interaction() const;
    Q_INVOKABLE void setInteraction(QInteraction *interaction);
    Q_INVOKABLE QMessageEnd *sendEvent() const;
    Q_INVOKABLE void setSendEvent(QMessageEnd *sendEvent);
    Q_INVOKABLE QConnector *connector() const;
    Q_INVOKABLE void setConnector(QConnector *connector);

    virtual void setPropertyData();

protected:
    explicit QMessage(QMessagePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QMESSAGE_H

