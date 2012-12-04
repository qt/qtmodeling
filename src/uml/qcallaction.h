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
#ifndef QTUML_QCALLACTION_H
#define QTUML_QCALLACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QInvocationAction>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QOutputPin;

class QCallActionPrivate;

class Q_UML_EXPORT QCallAction : public QInvocationAction
{
    Q_OBJECT

    Q_PROPERTY(bool isSynchronous READ isSynchronous WRITE setSynchronous)
    Q_PROPERTY(const QList<QOutputPin *> * results READ results)

    Q_DISABLE_COPY(QCallAction)
    Q_DECLARE_PRIVATE(QCallAction)

public:
    Q_INVOKABLE explicit QCallAction(QUmlObject *parent = 0, QUmlObject *wrapper = 0);
    virtual ~QCallAction();

    // Attributes from QCallAction
    Q_INVOKABLE bool isSynchronous() const;
    Q_INVOKABLE void setSynchronous(bool isSynchronous);

    // Association ends from QCallAction
    Q_INVOKABLE const QList<QOutputPin *> *results() const;
    Q_INVOKABLE void addResult(QOutputPin *result);
    Q_INVOKABLE void removeResult(QOutputPin *result);

protected:
    explicit QCallAction(QCallActionPrivate &dd, QUmlObject *parent = 0, QUmlObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QCallAction) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QCallAction) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QCallAction) *> *)

QT_END_HEADER

#endif // QTUML_QCALLACTION_H

