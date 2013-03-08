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
#ifndef QUMLINTERACTIONUSE_H
#define QUMLINTERACTIONUSE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlInteractionFragment>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlProperty;
class QUmlInteraction;
class QUmlGate;
class QUmlValueSpecification;

class QUmlInteractionUsePrivate;

class Q_UML_EXPORT QUmlInteractionUse : public QUmlInteractionFragment
{
    Q_OBJECT

    Q_PROPERTY(QSet<QUmlGate *> actualGates READ actualGates)
    Q_PROPERTY(QUmlValueSpecification * returnValue READ returnValue WRITE setReturnValue)
    Q_PROPERTY(QUmlInteraction * refersTo READ refersTo WRITE setRefersTo)
    Q_PROPERTY(QList<QUmlValueSpecification *> arguments READ arguments)
    Q_PROPERTY(QUmlProperty * returnValueRecipient READ returnValueRecipient WRITE setReturnValueRecipient)

    Q_DISABLE_COPY(QUmlInteractionUse)
    Q_DECLARE_PRIVATE(QUmlInteractionUse)

public:
    Q_INVOKABLE explicit QUmlInteractionUse(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlInteractionUse();

    // Association ends from QUmlInteractionUse
    Q_INVOKABLE QSet<QUmlGate *> actualGates() const;
    Q_INVOKABLE void addActualGate(QUmlGate *actualGate);
    Q_INVOKABLE void removeActualGate(QUmlGate *actualGate);
    Q_INVOKABLE QUmlValueSpecification *returnValue() const;
    Q_INVOKABLE void setReturnValue(QUmlValueSpecification *returnValue);
    Q_INVOKABLE QUmlInteraction *refersTo() const;
    Q_INVOKABLE void setRefersTo(QUmlInteraction *refersTo);
    Q_INVOKABLE QList<QUmlValueSpecification *> arguments() const;
    Q_INVOKABLE void addArgument(QUmlValueSpecification *argument);
    Q_INVOKABLE void removeArgument(QUmlValueSpecification *argument);
    Q_INVOKABLE QUmlProperty *returnValueRecipient() const;
    Q_INVOKABLE void setReturnValueRecipient(QUmlProperty *returnValueRecipient);

    virtual void setPropertyData();

protected:
    explicit QUmlInteractionUse(QUmlInteractionUsePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLINTERACTIONUSE_H

