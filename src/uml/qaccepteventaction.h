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
#ifndef QTUML_QACCEPTEVENTACTION_H
#define QTUML_QACCEPTEVENTACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QAction>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QOutputPin;
class QTrigger;

class QAcceptEventActionPrivate;

class Q_UML_EXPORT QAcceptEventAction : public QAction
{
    Q_OBJECT

    Q_PROPERTY(bool isUnmarshall READ isUnmarshall WRITE setUnmarshall)
    Q_PROPERTY(const QSet<QTrigger *> * triggers READ triggers)
    Q_PROPERTY(const QSet<QOutputPin *> * results READ results)

    Q_DISABLE_COPY(QAcceptEventAction)
    Q_DECLARE_PRIVATE(QAcceptEventAction)

public:
    Q_INVOKABLE explicit QAcceptEventAction(QtMof::QMofObject *parent = 0, QtMof::QMofObject *wrapper = 0);
    virtual ~QAcceptEventAction();

    // Attributes from QAcceptEventAction
    Q_INVOKABLE bool isUnmarshall() const;
    Q_INVOKABLE void setUnmarshall(bool isUnmarshall);

    // Association ends from QAcceptEventAction
    Q_INVOKABLE const QSet<QTrigger *> *triggers() const;
    Q_INVOKABLE void addTrigger(QTrigger *trigger);
    Q_INVOKABLE void removeTrigger(QTrigger *trigger);
    Q_INVOKABLE const QSet<QOutputPin *> *results() const;
    Q_INVOKABLE void addResult(QOutputPin *result);
    Q_INVOKABLE void removeResult(QOutputPin *result);

protected:
    explicit QAcceptEventAction(QAcceptEventActionPrivate &dd, QtMof::QMofObject *parent = 0, QtMof::QMofObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QAcceptEventAction) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QAcceptEventAction) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QAcceptEventAction) *> *)

QT_END_HEADER

#endif // QTUML_QACCEPTEVENTACTION_H

