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
#ifndef QUMLINTERACTIONUSE_H
#define QUMLINTERACTIONUSE_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlinteractionuse_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlGate;
class QUmlInteraction;
class QUmlProperty;
class QUmlValueSpecification;

class Q_UML_EXPORT QUmlInteractionUse : public QObject, public UmlInteractionUse
{
    Q_OBJECT
    Q_PROPERTY(QSet<QUmlGate *> actualGate READ actualGate)
    Q_PROPERTY(QList<QUmlValueSpecification *> argument READ argument)
    Q_PROPERTY(QUmlInteraction * refersTo READ refersTo)
    Q_PROPERTY(QUmlValueSpecification * returnValue READ returnValue)
    Q_PROPERTY(QUmlProperty * returnValueRecipient READ returnValueRecipient)

public:
    Q_INVOKABLE explicit QUmlInteractionUse(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QSet<QUmlGate *> actualGate() const;
    Q_INVOKABLE void addActualGate(UmlGate *actualGate);
    Q_INVOKABLE void removeActualGate(UmlGate *actualGate);
    Q_INVOKABLE const QList<QUmlValueSpecification *> argument() const;
    Q_INVOKABLE void addArgument(UmlValueSpecification *argument);
    Q_INVOKABLE void removeArgument(UmlValueSpecification *argument);
    Q_INVOKABLE QUmlInteraction *refersTo() const;
    Q_INVOKABLE void setRefersTo(QUmlInteraction *refersTo);
    Q_INVOKABLE QUmlValueSpecification *returnValue() const;
    Q_INVOKABLE void setReturnValue(QUmlValueSpecification *returnValue);
    Q_INVOKABLE QUmlProperty *returnValueRecipient() const;
    Q_INVOKABLE void setReturnValueRecipient(QUmlProperty *returnValueRecipient);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlInteractionUse *)
Q_DECLARE_METATYPE(QList<QUmlInteractionUse *> *)
Q_DECLARE_METATYPE(QSet<QUmlInteractionUse *> *)

QT_END_HEADER

#endif // QUMLINTERACTIONUSE_H

