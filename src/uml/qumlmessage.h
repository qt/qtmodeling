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

class QUmlComment;
class QUmlConnector;
class QUmlDependency;
class QUmlElement;
class QUmlInteraction;
class QUmlMessageEnd;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlPackage;
class QUmlStringExpression;
class QUmlValueSpecification;

class Q_UML_EXPORT QUmlMessage : public QObject, public UmlMessage
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QUmlDependency *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [Message]
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

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QUmlDependency *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [Message]
    Q_INVOKABLE const QList<QUmlValueSpecification *> argument() const;
    Q_INVOKABLE QUmlConnector *connector() const;
    Q_INVOKABLE QUmlInteraction *interaction() const;
    Q_INVOKABLE QtUml::MessageKind messageKind() const;
    Q_INVOKABLE QtUml::MessageSort messageSort() const;
    Q_INVOKABLE QUmlMessageEnd *receiveEvent() const;
    Q_INVOKABLE QUmlMessageEnd *sendEvent() const;
    Q_INVOKABLE QUmlNamedElement *signature() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QUmlNamespace *> allNamespaces() const;
    Q_INVOKABLE QSet<QUmlPackage *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;
    Q_INVOKABLE QString separator() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(UmlDependency *clientDependency);
    void removeClientDependency(UmlDependency *clientDependency);
    void setName(QString name);
    void setNameExpression(QUmlStringExpression *nameExpression);
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [Message]
    void addArgument(UmlValueSpecification *argument);
    void removeArgument(UmlValueSpecification *argument);
    void setConnector(QUmlConnector *connector);
    void setInteraction(QUmlInteraction *interaction);
    void setMessageSort(QtUml::MessageSort messageSort);
    void setReceiveEvent(QUmlMessageEnd *receiveEvent);
    void setSendEvent(QUmlMessageEnd *sendEvent);
    void setSignature(QUmlNamedElement *signature);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlMessage *)
Q_DECLARE_METATYPE(QList<QUmlMessage *> *)
Q_DECLARE_METATYPE(QSet<QUmlMessage *> *)

QT_END_HEADER

#endif // QUMLMESSAGE_H

