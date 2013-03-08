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
#ifndef QUMLVERTEX_H
#define QUMLVERTEX_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlNamedElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlRegion;
class QUmlTransition;
class QUmlStateMachine;

class QUmlVertexPrivate;

class Q_UML_EXPORT QUmlVertex : public QUmlNamedElement
{
    Q_OBJECT

    Q_PROPERTY(QSet<QUmlTransition *> incomings READ incomings STORED false)
    Q_PROPERTY(QUmlRegion * container READ container WRITE setContainer)
    Q_PROPERTY(QSet<QUmlTransition *> outgoings READ outgoings STORED false)

    Q_DISABLE_COPY(QUmlVertex)
    Q_DECLARE_PRIVATE(QUmlVertex)

public:
    Q_INVOKABLE explicit QUmlVertex(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlVertex();

    // Association ends from QUmlVertex
    Q_INVOKABLE QSet<QUmlTransition *> incomings() const;
    Q_INVOKABLE QUmlRegion *container() const;
    Q_INVOKABLE void setContainer(QUmlRegion *container);
    Q_INVOKABLE QSet<QUmlTransition *> outgoings() const;

    // Operations
    Q_INVOKABLE QUmlStateMachine *containingStateMachine() const;

    virtual void setPropertyData();

    // Classes which access read-only opposite properties should be friend
    friend class QUmlTransition;

protected:
    explicit QUmlVertex(QUmlVertexPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLVERTEX_H

