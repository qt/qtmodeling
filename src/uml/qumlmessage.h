/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QUMLMESSAGE_H
#define QUMLMESSAGE_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlmessage_p.h"
#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlConnector;
class QUmlInteraction;
class QUmlMessageEnd;
class QUmlNamedElement;
class QUmlValueSpecification;

class Q_UML_EXPORT QUmlMessage : public QObject, public UmlMessage
{
    Q_OBJECT
    Q_PROPERTY(QList<QUmlValueSpecification *> argument READ argument)
    Q_PROPERTY(QUmlConnector * connector READ connector)
    Q_PROPERTY(QUmlInteraction * interaction READ interaction)
    Q_PROPERTY(QtUml::MessageKind messageKind READ messageKind)
    Q_PROPERTY(QtUml::MessageSort messageSort READ messageSort)
    Q_PROPERTY(QUmlMessageEnd * receiveEvent READ receiveEvent)
    Q_PROPERTY(QUmlMessageEnd * sendEvent READ sendEvent)
    Q_PROPERTY(QUmlNamedElement * signature READ signature)

public:
    Q_INVOKABLE explicit QUmlMessage(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QList<QUmlValueSpecification *> argument() const;
    Q_INVOKABLE void addArgument(UmlValueSpecification *argument);
    Q_INVOKABLE void removeArgument(UmlValueSpecification *argument);
    Q_INVOKABLE QUmlConnector *connector() const;
    Q_INVOKABLE void setConnector(QUmlConnector *connector);
    Q_INVOKABLE QUmlInteraction *interaction() const;
    Q_INVOKABLE void setInteraction(QUmlInteraction *interaction);
    Q_INVOKABLE QtUml::MessageKind messageKind() const;
    Q_INVOKABLE QtUml::MessageSort messageSort() const;
    Q_INVOKABLE void setMessageSort(QtUml::MessageSort messageSort);
    Q_INVOKABLE QUmlMessageEnd *receiveEvent() const;
    Q_INVOKABLE void setReceiveEvent(QUmlMessageEnd *receiveEvent);
    Q_INVOKABLE QUmlMessageEnd *sendEvent() const;
    Q_INVOKABLE void setSendEvent(QUmlMessageEnd *sendEvent);
    Q_INVOKABLE QUmlNamedElement *signature() const;
    Q_INVOKABLE void setSignature(QUmlNamedElement *signature);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlMessage *)
Q_DECLARE_METATYPE(QList<QUmlMessage *> *)
Q_DECLARE_METATYPE(QSet<QUmlMessage *> *)

QT_END_HEADER

#endif // QUMLMESSAGE_H

