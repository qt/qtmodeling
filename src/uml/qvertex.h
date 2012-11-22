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
#ifndef QTUML_QVERTEX_H
#define QTUML_QVERTEX_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QNamedElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QRegion;
class QTransition;
class QStateMachine;

class QVertexPrivate;

class Q_UML_EXPORT QVertex : public QNamedElement
{
    Q_OBJECT

    Q_PROPERTY(const QSet<QTransition *> * incomings READ incomings STORED false)
    Q_PROPERTY(QRegion * container READ container WRITE setContainer)
    Q_PROPERTY(const QSet<QTransition *> * outgoings READ outgoings STORED false)

    Q_DISABLE_COPY(QVertex)
    Q_DECLARE_PRIVATE(QVertex)

public:
    Q_INVOKABLE explicit QVertex(QObject *parent = 0);
    virtual ~QVertex();

    // Association ends from QVertex
    Q_INVOKABLE const QSet<QTransition *> *incomings() const;
    Q_INVOKABLE QRegion *container() const;
    Q_INVOKABLE void setContainer(QRegion *container);
    Q_INVOKABLE const QSet<QTransition *> *outgoings() const;

    // Operations
    Q_INVOKABLE QStateMachine *containingStateMachine() const;

    // Classes which access read-only opposite properties should be friend
    friend class QTransition;

protected:
    explicit QVertex(QVertexPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QVertex) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QVertex) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QVertex) *> *)

QT_END_HEADER

#endif // QTUML_QVERTEX_H

