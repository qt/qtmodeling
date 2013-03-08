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
#ifndef QUMLACCEPTEVENTACTION_H
#define QUMLACCEPTEVENTACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlAction>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlOutputPin;
class QUmlTrigger;

class QUmlAcceptEventActionPrivate;

class Q_UML_EXPORT QUmlAcceptEventAction : public QUmlAction
{
    Q_OBJECT

    Q_PROPERTY(bool isUnmarshall READ isUnmarshall WRITE setUnmarshall RESET unsetUnmarshall)
    Q_PROPERTY(QSet<QUmlTrigger *> triggers READ triggers)
    Q_PROPERTY(QSet<QUmlOutputPin *> results READ results)

    Q_DISABLE_COPY(QUmlAcceptEventAction)
    Q_DECLARE_PRIVATE(QUmlAcceptEventAction)

public:
    Q_INVOKABLE explicit QUmlAcceptEventAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlAcceptEventAction();

    // Attributes from QUmlAcceptEventAction
    Q_INVOKABLE bool isUnmarshall() const;
    Q_INVOKABLE void setUnmarshall(bool isUnmarshall);
    Q_INVOKABLE void unsetUnmarshall();

    // Association ends from QUmlAcceptEventAction
    Q_INVOKABLE QSet<QUmlTrigger *> triggers() const;
    Q_INVOKABLE void addTrigger(QUmlTrigger *trigger);
    Q_INVOKABLE void removeTrigger(QUmlTrigger *trigger);
    Q_INVOKABLE QSet<QUmlOutputPin *> results() const;
    Q_INVOKABLE void addResult(QUmlOutputPin *result);
    Q_INVOKABLE void removeResult(QUmlOutputPin *result);

    virtual void setPropertyData();

protected:
    explicit QUmlAcceptEventAction(QUmlAcceptEventActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLACCEPTEVENTACTION_H

