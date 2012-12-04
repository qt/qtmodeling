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
#ifndef QTUML_QCONDITIONALNODE_H
#define QTUML_QCONDITIONALNODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QStructuredActivityNode>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QClause;
class QOutputPin;

class QConditionalNodePrivate;

class Q_UML_EXPORT QConditionalNode : public QStructuredActivityNode
{
    Q_OBJECT

    Q_PROPERTY(bool isAssured READ isAssured WRITE setAssured)
    Q_PROPERTY(bool isDeterminate READ isDeterminate WRITE setDeterminate)
    Q_PROPERTY(const QSet<QClause *> * clauses READ clauses)
    Q_PROPERTY(const QList<QOutputPin *> * results READ results)

    Q_DISABLE_COPY(QConditionalNode)
    Q_DECLARE_PRIVATE(QConditionalNode)

public:
    Q_INVOKABLE explicit QConditionalNode(QUmlObject *parent = 0, QUmlObject *wrapper = 0);
    virtual ~QConditionalNode();

    // Attributes from QConditionalNode
    Q_INVOKABLE bool isAssured() const;
    Q_INVOKABLE void setAssured(bool isAssured);
    Q_INVOKABLE bool isDeterminate() const;
    Q_INVOKABLE void setDeterminate(bool isDeterminate);

    // Association ends from QConditionalNode
    Q_INVOKABLE const QSet<QClause *> *clauses() const;
    Q_INVOKABLE void addClause(QClause *clause);
    Q_INVOKABLE void removeClause(QClause *clause);
    Q_INVOKABLE const QList<QOutputPin *> *results() const;
    Q_INVOKABLE void addResult(QOutputPin *result);
    Q_INVOKABLE void removeResult(QOutputPin *result);

protected:
    explicit QConditionalNode(QConditionalNodePrivate &dd, QUmlObject *parent = 0, QUmlObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QConditionalNode) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QConditionalNode) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QConditionalNode) *> *)

QT_END_HEADER

#endif // QTUML_QCONDITIONALNODE_H

