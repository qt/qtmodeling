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
#ifndef QTUML_QEXECUTABLENODE_H
#define QTUML_QEXECUTABLENODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QActivityNode>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QExceptionHandler;

class QExecutableNodePrivate;

class Q_UML_EXPORT QExecutableNode : public QActivityNode
{
    Q_OBJECT

    Q_PROPERTY(QSet<QtUml::QExceptionHandler *> handlers READ handlers)

    Q_DISABLE_COPY(QExecutableNode)
    Q_DECLARE_PRIVATE(QExecutableNode)

public:
    Q_INVOKABLE explicit QExecutableNode(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QExecutableNode();

    // Association ends from QExecutableNode
    Q_INVOKABLE QSet<QExceptionHandler *> handlers() const;
    Q_INVOKABLE void addHandler(QExceptionHandler *handler);
    Q_INVOKABLE void removeHandler(QExceptionHandler *handler);

    virtual void setPropertyData();

protected:
    explicit QExecutableNode(QExecutableNodePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QEXECUTABLENODE_H

