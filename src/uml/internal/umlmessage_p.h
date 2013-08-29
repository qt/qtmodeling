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
#ifndef UMLMESSAGE_H
#define UMLMESSAGE_H

#include <QtUml/QtUmlGlobal>

#include "private/umlnamedelement_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

#include <QtUml/QtUmlNamespace>

class UmlConnector;
class UmlInteraction;
class UmlMessageEnd;
class UmlValueSpecification;

class Q_UML_EXPORT UmlMessage : public UmlNamedElement
{
public:
    Q_DECL_HIDDEN explicit UmlMessage();

    // Owned attributes
    const QList<UmlValueSpecification *> argument() const;
    void addArgument(UmlValueSpecification *argument);
    void removeArgument(UmlValueSpecification *argument);
    UmlConnector *connector() const;
    void setConnector(UmlConnector *connector);
    UmlInteraction *interaction() const;
    void setInteraction(UmlInteraction *interaction);
    QtUml::MessageKind messageKind() const;
    Q_DECL_HIDDEN void setMessageKind(QtUml::MessageKind messageKind);
    QtUml::MessageSort messageSort() const;
    void setMessageSort(QtUml::MessageSort messageSort);
    UmlMessageEnd *receiveEvent() const;
    void setReceiveEvent(UmlMessageEnd *receiveEvent);
    UmlMessageEnd *sendEvent() const;
    void setSendEvent(UmlMessageEnd *sendEvent);
    UmlNamedElement *signature() const;
    void setSignature(UmlNamedElement *signature);

protected:
    QList<UmlValueSpecification *> _argument;
    UmlConnector *_connector;
    UmlInteraction *_interaction;
    QtUml::MessageSort _messageSort;
    UmlMessageEnd *_receiveEvent;
    UmlMessageEnd *_sendEvent;
    UmlNamedElement *_signature;
};

#endif // UMLMESSAGE_H

