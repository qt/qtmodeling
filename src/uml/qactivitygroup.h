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
#ifndef QTUML_QACTIVITYGROUP_H
#define QTUML_QACTIVITYGROUP_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QNamedElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QActivity;
class QActivityEdge;
class QActivityNode;

class QActivityGroupPrivate;

class Q_UML_EXPORT QActivityGroup : public QNamedElement
{
    Q_OBJECT

    Q_PROPERTY(QActivity * inActivity READ inActivity WRITE setInActivity)
    Q_PROPERTY(const QSet<QActivityNode *> * containedNodes READ containedNodes)
    Q_PROPERTY(const QSet<QActivityGroup *> * subgroups READ subgroups)
    Q_PROPERTY(const QSet<QActivityEdge *> * containedEdges READ containedEdges)
    Q_PROPERTY(QActivityGroup * superGroup READ superGroup)

    Q_DISABLE_COPY(QActivityGroup)
    Q_DECLARE_PRIVATE(QActivityGroup)

public:
    Q_INVOKABLE explicit QActivityGroup(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QActivityGroup();

    // Association ends from QActivityGroup
    Q_INVOKABLE QActivity *inActivity() const;
    Q_INVOKABLE void setInActivity(QActivity *inActivity);
    Q_INVOKABLE const QSet<QActivityNode *> *containedNodes() const;
    Q_INVOKABLE const QSet<QActivityGroup *> *subgroups() const;
    Q_INVOKABLE const QSet<QActivityEdge *> *containedEdges() const;
    Q_INVOKABLE QActivityGroup *superGroup() const;

    // Classes which access read-only opposite properties should be friend
    friend class QActivityEdgePrivate;
    friend class QActivityNodePrivate;

protected:
    explicit QActivityGroup(QActivityGroupPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QActivityGroup) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QActivityGroup) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QActivityGroup) *> *)

QT_END_HEADER

#endif // QTUML_QACTIVITYGROUP_H

