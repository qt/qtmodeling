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
#ifndef QTUML_QEXPANSIONNODE_H
#define QTUML_QEXPANSIONNODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QObjectNode>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QExpansionRegion;

class QExpansionNodePrivate;

class Q_UML_EXPORT QExpansionNode : public QObjectNode
{
    Q_OBJECT

    // From QExpansionNode
    Q_PROPERTY(QExpansionRegion * regionAsOutput READ regionAsOutput WRITE setRegionAsOutput)
    Q_PROPERTY(QExpansionRegion * regionAsInput READ regionAsInput WRITE setRegionAsInput)

    Q_DISABLE_COPY(QExpansionNode)
    Q_DECLARE_PRIVATE(QExpansionNode)

public:
    explicit QExpansionNode(QObject *parent = 0);
    virtual ~QExpansionNode();

    // Association ends from QExpansionNode
    QExpansionRegion *regionAsOutput() const;
    void setRegionAsOutput(QExpansionRegion *regionAsOutput);
    QExpansionRegion *regionAsInput() const;
    void setRegionAsInput(QExpansionRegion *regionAsInput);

protected:
    explicit QExpansionNode(QExpansionNodePrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QExpansionNode) *)
Q_DECLARE_METATYPE(QSet<QT_PREPEND_NAMESPACE_QTUML(QExpansionNode) *> *)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QExpansionNode) *> *)

QT_END_HEADER

#endif // QTUML_QEXPANSIONNODE_H

