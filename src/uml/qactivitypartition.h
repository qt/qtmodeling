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
#ifndef QTUML_QACTIVITYPARTITION_H
#define QTUML_QACTIVITYPARTITION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QActivityGroup>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QActivityPartitionPrivate;
class QActivityEdge;
class QActivityNode;
class QElement;

class Q_UML_EXPORT QActivityPartition : public QObject, public QActivityGroup
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComment READ ownedComment)
    Q_PROPERTY(const QList<QElement *> * ownedElement READ ownedElement)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QList<QDependency *> * clientDependency READ clientDependency)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(const QNamespace * namespace_ READ namespace_)

    // From QActivityGroup
    Q_PROPERTY(const QList<QActivityEdge *> * containedEdge READ containedEdge)
    Q_PROPERTY(const QList<QActivityNode *> * containedNode READ containedNode)
    Q_PROPERTY(QActivity * inActivity READ inActivity WRITE setInActivity)
    Q_PROPERTY(const QList<QActivityGroup *> * subgroup READ subgroup)
    Q_PROPERTY(const QActivityGroup * superGroup READ superGroup)

    // From QActivityPartition
    Q_PROPERTY(bool isDimension READ isDimension WRITE setDimension)
    Q_PROPERTY(bool isExternal READ isExternal WRITE setExternal)
    Q_PROPERTY(QList<QActivityEdge *> * edge READ edge)
    Q_PROPERTY(QList<QActivityNode *> * node READ node)
    Q_PROPERTY(QElement * represents READ represents WRITE setRepresents)
    Q_PROPERTY(QList<QActivityPartition *> * subpartition READ subpartition)
    Q_PROPERTY(QActivityPartition * superPartition READ superPartition WRITE setSuperPartition)

public:
    explicit QActivityPartition(QObject *parent = 0);
    virtual ~QActivityPartition();

    // Attributes (except those derived && !derivedUnion)
    bool isDimension() const;
    void setDimension(bool isDimension);
    bool isExternal() const;
    void setExternal(bool isExternal);

    // Association-ends (except those derived && !derivedUnion)
    QList<QActivityEdge *> *edge();
    QList<QActivityNode *> *node();
    QElement *represents() const;
    void setRepresents(QElement *represents);
    QList<QActivityPartition *> *subpartition();
    QActivityPartition *superPartition() const;
    void setSuperPartition(QActivityPartition *superPartition);

private:
    Q_DISABLE_COPY(QActivityPartition)
    Q_DECLARE_PRIVATE(QActivityPartition)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QActivityPartition *>)
Q_DECLARE_METATYPE(QList<QtUml::QActivityPartition *> *)

QT_END_HEADER

#endif // QTUML_QACTIVITYPARTITION_H

