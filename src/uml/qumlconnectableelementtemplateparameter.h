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
#ifndef QUMLCONNECTABLEELEMENTTEMPLATEPARAMETER_H
#define QUMLCONNECTABLEELEMENTTEMPLATEPARAMETER_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlconnectableelementtemplateparameter_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlComment;
class QUmlConnectableElement;
class QUmlElement;
class QUmlParameterableElement;
class QUmlTemplateSignature;

class Q_UML_EXPORT QUmlConnectableElementTemplateParameter : public QObject, public UmlConnectableElementTemplateParameter
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [TemplateParameter]
    Q_PROPERTY(QUmlParameterableElement * default_ READ default_)
    Q_PROPERTY(QUmlParameterableElement * ownedDefault READ ownedDefault)
    Q_PROPERTY(QUmlParameterableElement * ownedParameteredElement READ ownedParameteredElement)
    Q_PROPERTY(QUmlTemplateSignature * signature READ signature)

    // Properties [ConnectableElementTemplateParameter]
    Q_PROPERTY(QUmlConnectableElement * parameteredElement READ parameteredElement)

public:
    Q_INVOKABLE explicit QUmlConnectableElementTemplateParameter(QObject *parent = 0);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [TemplateParameter]
    Q_INVOKABLE QUmlParameterableElement *default_() const;
    Q_INVOKABLE QUmlParameterableElement *ownedDefault() const;
    Q_INVOKABLE QUmlParameterableElement *ownedParameteredElement() const;
    Q_INVOKABLE QUmlTemplateSignature *signature() const;

    // Owned attributes [ConnectableElementTemplateParameter]
    Q_INVOKABLE QUmlConnectableElement *parameteredElement() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [TemplateParameter]
    void setDefault(QUmlParameterableElement *default_);
    void setOwnedDefault(QUmlParameterableElement *ownedDefault);
    void setOwnedParameteredElement(QUmlParameterableElement *ownedParameteredElement);
    void setSignature(QUmlTemplateSignature *signature);

    // Slots for owned attributes [ConnectableElementTemplateParameter]
    void setParameteredElement(QUmlConnectableElement *parameteredElement);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlConnectableElementTemplateParameter *)
Q_DECLARE_METATYPE(QList<QUmlConnectableElementTemplateParameter *> *)
Q_DECLARE_METATYPE(QSet<QUmlConnectableElementTemplateParameter *> *)

QT_END_HEADER

#endif // QUMLCONNECTABLEELEMENTTEMPLATEPARAMETER_H

