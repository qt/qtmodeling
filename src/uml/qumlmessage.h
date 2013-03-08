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
#ifndef QUMLMESSAGE_H
#define QUMLMESSAGE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlNamedElement>

// QtUml includes
#include <QtUml/QtUmlNamespace>
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlMessageEnd;
class QUmlInteraction;
class QUmlValueSpecification;
class QUmlConnector;

class QUmlMessagePrivate;

class Q_UML_EXPORT QUmlMessage : public QUmlNamedElement
{
    Q_OBJECT

    Q_PROPERTY(QtUml::MessageSort messageSort READ messageSort WRITE setMessageSort RESET unsetMessageSort)
    Q_PROPERTY(QtUml::MessageKind messageKind READ messageKind STORED false)
    Q_PROPERTY(QUmlNamedElement * signature READ signature WRITE setSignature)
    Q_PROPERTY(QList<QUmlValueSpecification *> arguments READ arguments)
    Q_PROPERTY(QUmlMessageEnd * receiveEvent READ receiveEvent WRITE setReceiveEvent)
    Q_PROPERTY(QUmlInteraction * interaction READ interaction WRITE setInteraction)
    Q_PROPERTY(QUmlMessageEnd * sendEvent READ sendEvent WRITE setSendEvent)
    Q_PROPERTY(QUmlConnector * connector READ connector WRITE setConnector)

    Q_DISABLE_COPY(QUmlMessage)
    Q_DECLARE_PRIVATE(QUmlMessage)

public:
    Q_INVOKABLE explicit QUmlMessage(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlMessage();

    // Attributes from QUmlMessage
    Q_INVOKABLE QtUml::MessageSort messageSort() const;
    Q_INVOKABLE void setMessageSort(QtUml::MessageSort messageSort);
    Q_INVOKABLE void unsetMessageSort();
    Q_INVOKABLE QtUml::MessageKind messageKind() const;

    // Association ends from QUmlMessage
    Q_INVOKABLE QUmlNamedElement *signature() const;
    Q_INVOKABLE void setSignature(QUmlNamedElement *signature);
    Q_INVOKABLE QList<QUmlValueSpecification *> arguments() const;
    Q_INVOKABLE void addArgument(QUmlValueSpecification *argument);
    Q_INVOKABLE void removeArgument(QUmlValueSpecification *argument);
    Q_INVOKABLE QUmlMessageEnd *receiveEvent() const;
    Q_INVOKABLE void setReceiveEvent(QUmlMessageEnd *receiveEvent);
    Q_INVOKABLE QUmlInteraction *interaction() const;
    Q_INVOKABLE void setInteraction(QUmlInteraction *interaction);
    Q_INVOKABLE QUmlMessageEnd *sendEvent() const;
    Q_INVOKABLE void setSendEvent(QUmlMessageEnd *sendEvent);
    Q_INVOKABLE QUmlConnector *connector() const;
    Q_INVOKABLE void setConnector(QUmlConnector *connector);

    virtual void setPropertyData();

protected:
    explicit QUmlMessage(QUmlMessagePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLMESSAGE_H

