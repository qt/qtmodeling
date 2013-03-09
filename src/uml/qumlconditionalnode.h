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
#ifndef QUMLCONDITIONALNODE_H
#define QUMLCONDITIONALNODE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlStructuredActivityNode>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlClause;
class QUmlOutputPin;

class QUmlConditionalNodePrivate;

class Q_UML_EXPORT QUmlConditionalNode : public QUmlStructuredActivityNode
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(bool isAssured READ isAssured WRITE setAssured RESET unsetAssured)
    Q_PROPERTY(bool isDeterminate READ isDeterminate WRITE setDeterminate RESET unsetDeterminate)
    Q_PROPERTY(QSet<QUmlClause *> clauses READ clauses)
    Q_PROPERTY(QList<QUmlOutputPin *> results READ results)

    Q_DISABLE_COPY(QUmlConditionalNode)
    Q_DECLARE_PRIVATE(QUmlConditionalNode)

public:
    Q_INVOKABLE explicit QUmlConditionalNode(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlConditionalNode();

    // Attributes from QUmlConditionalNode
    Q_INVOKABLE bool isAssured() const;
    Q_INVOKABLE void setAssured(bool isAssured);
    Q_INVOKABLE void unsetAssured();
    Q_INVOKABLE bool isDeterminate() const;
    Q_INVOKABLE void setDeterminate(bool isDeterminate);
    Q_INVOKABLE void unsetDeterminate();

    // Association ends from QUmlConditionalNode
    Q_INVOKABLE QSet<QUmlClause *> clauses() const;
    Q_INVOKABLE void addClause(QUmlClause *clause);
    Q_INVOKABLE void removeClause(QUmlClause *clause);
    Q_INVOKABLE QList<QUmlOutputPin *> results() const;
    Q_INVOKABLE void addResult(QUmlOutputPin *result);
    Q_INVOKABLE void removeResult(QUmlOutputPin *result);

    virtual void setPropertyData();

protected:
    explicit QUmlConditionalNode(QUmlConditionalNodePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCONDITIONALNODE_H

