/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QTMOF_QEXPRESSION_H
#define QTMOF_QEXPRESSION_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QValueSpecification>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

class QExpressionPrivate;

class Q_MOF_EXPORT QExpression : public QValueSpecification
{
    Q_OBJECT

    Q_PROPERTY(QString symbol READ symbol WRITE setSymbol)
    Q_PROPERTY(QList<QValueSpecification *> operands READ operands)

    Q_DISABLE_COPY(QExpression)
    Q_DECLARE_PRIVATE(QExpression)

public:
    Q_INVOKABLE explicit QExpression(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QExpression();

    // Attributes from QExpression
    Q_INVOKABLE QString symbol() const;
    Q_INVOKABLE void setSymbol(QString symbol);

    // Association ends from QExpression
    Q_INVOKABLE const QList<QValueSpecification *> &operands() const;
    Q_INVOKABLE void addOperand(QValueSpecification *operand);
    Q_INVOKABLE void removeOperand(QValueSpecification *operand);

protected:
    explicit QExpression(QExpressionPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

QT_END_HEADER

#endif // QTMOF_QEXPRESSION_H

