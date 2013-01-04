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
#ifndef QTUML_QTIMEEXPRESSION_H
#define QTUML_QTIMEEXPRESSION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QValueSpecification>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QObservation;

class QTimeExpressionPrivate;

class Q_UML_EXPORT QTimeExpression : public QValueSpecification
{
    Q_OBJECT

    Q_PROPERTY(QSet<QObservation *> observations READ observations)
    Q_PROPERTY(QValueSpecification * expr READ expr WRITE setExpr)

    Q_DISABLE_COPY(QTimeExpression)
    Q_DECLARE_PRIVATE(QTimeExpression)

public:
    Q_INVOKABLE explicit QTimeExpression(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QTimeExpression();

    // Association ends from QTimeExpression
    Q_INVOKABLE QSet<QObservation *> observations() const;
    Q_INVOKABLE void addObservation(QObservation *observation);
    Q_INVOKABLE void removeObservation(QObservation *observation);
    Q_INVOKABLE QValueSpecification *expr() const;
    Q_INVOKABLE void setExpr(QValueSpecification *expr);
    virtual void registerMetaTypes() const;
    virtual void setPropertyData();

protected:
    explicit QTimeExpression(QTimeExpressionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QTIMEEXPRESSION_H

