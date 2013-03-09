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
#ifndef QMOFEXPRESSION_H
#define QMOFEXPRESSION_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofValueSpecification>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofExpressionPrivate;

class Q_MOF_EXPORT QMofExpression : public QMofValueSpecification
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(QString symbol READ symbol WRITE setSymbol)
    Q_PROPERTY(QList<QMofValueSpecification *> operands READ operands)

    Q_DISABLE_COPY(QMofExpression)
    Q_DECLARE_PRIVATE(QMofExpression)

public:
    Q_INVOKABLE explicit QMofExpression(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofExpression();

    // Attributes from QMofExpression
    Q_INVOKABLE QString symbol() const;
    Q_INVOKABLE void setSymbol(QString symbol);

    // Association ends from QMofExpression
    Q_INVOKABLE QList<QMofValueSpecification *> operands() const;
    Q_INVOKABLE void addOperand(QMofValueSpecification *operand);
    Q_INVOKABLE void removeOperand(QMofValueSpecification *operand);

    virtual void setPropertyData();

protected:
    explicit QMofExpression(QMofExpressionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFEXPRESSION_H

