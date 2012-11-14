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
#ifndef QTUML_QCALLOPERATIONACTION_H
#define QTUML_QCALLOPERATIONACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QCallAction>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QOperation;
class QInputPin;

class QCallOperationActionPrivate;

class Q_UML_EXPORT QCallOperationAction : public QCallAction
{
    Q_OBJECT

    Q_PROPERTY(QOperation * operation READ operation WRITE setOperation)
    Q_PROPERTY(QInputPin * target READ target WRITE setTarget)

    Q_DISABLE_COPY(QCallOperationAction)
    Q_DECLARE_PRIVATE(QCallOperationAction)

public:
    explicit QCallOperationAction(QObject *parent = 0);
    virtual ~QCallOperationAction();

    // Association ends from QCallOperationAction
    QOperation *operation() const;
    void setOperation(QOperation *operation);
    QInputPin *target() const;
    void setTarget(QInputPin *target);

protected:
    explicit QCallOperationAction(QCallOperationActionPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QCallOperationAction) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QCallOperationAction) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QCallOperationAction) *> *)

QT_END_HEADER

#endif // QTUML_QCALLOPERATIONACTION_H

