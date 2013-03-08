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
#ifndef QUMLSENDOBJECTACTION_H
#define QUMLSENDOBJECTACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlInvocationAction>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlInputPin;

class QUmlSendObjectActionPrivate;

class Q_UML_EXPORT QUmlSendObjectAction : public QUmlInvocationAction
{
    Q_OBJECT

    Q_PROPERTY(QUmlInputPin * request READ request WRITE setRequest)
    Q_PROPERTY(QUmlInputPin * target READ target WRITE setTarget)

    Q_DISABLE_COPY(QUmlSendObjectAction)
    Q_DECLARE_PRIVATE(QUmlSendObjectAction)

public:
    Q_INVOKABLE explicit QUmlSendObjectAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlSendObjectAction();

    // Association ends from QUmlSendObjectAction
    Q_INVOKABLE QUmlInputPin *request() const;
    Q_INVOKABLE void setRequest(QUmlInputPin *request);
    Q_INVOKABLE QUmlInputPin *target() const;
    Q_INVOKABLE void setTarget(QUmlInputPin *target);

    virtual void setPropertyData();

protected:
    explicit QUmlSendObjectAction(QUmlSendObjectActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSENDOBJECTACTION_H

