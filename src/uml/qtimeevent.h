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
#ifndef QTUML_QTIMEEVENT_H
#define QTUML_QTIMEEVENT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QEvent>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QTimeExpression;

class QTimeEventPrivate;

class Q_UML_EXPORT QTimeEvent : public QEvent
{
    Q_OBJECT

    Q_PROPERTY(bool isRelative READ isRelative WRITE setRelative RESET unsetRelative)
    Q_PROPERTY(QTimeExpression * when READ when WRITE setWhen)

    Q_DISABLE_COPY(QTimeEvent)
    Q_DECLARE_PRIVATE(QTimeEvent)

public:
    Q_INVOKABLE explicit QTimeEvent(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QTimeEvent();

    // Attributes from QTimeEvent
    Q_INVOKABLE bool isRelative() const;
    Q_INVOKABLE void setRelative(bool isRelative);
    Q_INVOKABLE void unsetRelative();

    // Association ends from QTimeEvent
    Q_INVOKABLE QTimeExpression *when() const;
    Q_INVOKABLE void setWhen(QTimeExpression *when);
    virtual void registerMetaTypes() const;
    virtual void setPropertyData();

protected:
    explicit QTimeEvent(QTimeEventPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QTIMEEVENT_H

