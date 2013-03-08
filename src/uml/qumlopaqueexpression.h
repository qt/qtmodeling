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
#ifndef QUMLOPAQUEEXPRESSION_H
#define QUMLOPAQUEEXPRESSION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlValueSpecification>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlBehavior;
class QUmlParameter;

class QUmlOpaqueExpressionPrivate;

class Q_UML_EXPORT QUmlOpaqueExpression : public QUmlValueSpecification
{
    Q_OBJECT

    Q_PROPERTY(QList<QString> bodies READ bodies)
    Q_PROPERTY(QList<QString> languages READ languages)
    Q_PROPERTY(QUmlBehavior * behavior READ behavior WRITE setBehavior)
    Q_PROPERTY(QUmlParameter * result READ result STORED false)

    Q_DISABLE_COPY(QUmlOpaqueExpression)
    Q_DECLARE_PRIVATE(QUmlOpaqueExpression)

public:
    Q_INVOKABLE explicit QUmlOpaqueExpression(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlOpaqueExpression();

    // Attributes from QUmlOpaqueExpression
    Q_INVOKABLE QList<QString> bodies() const;
    Q_INVOKABLE void addBody(QString body);
    Q_INVOKABLE void removeBody(QString body);
    Q_INVOKABLE QList<QString> languages() const;
    Q_INVOKABLE void addLanguage(QString language);
    Q_INVOKABLE void removeLanguage(QString language);

    // Association ends from QUmlOpaqueExpression
    Q_INVOKABLE QUmlBehavior *behavior() const;
    Q_INVOKABLE void setBehavior(QUmlBehavior *behavior);
    Q_INVOKABLE QUmlParameter *result() const;

    // Operations
    Q_INVOKABLE bool isIntegral() const;
    Q_INVOKABLE bool isNonNegative() const;
    Q_INVOKABLE bool isPositive() const;
    Q_INVOKABLE qint32 value() const;

    virtual void setPropertyData();

protected:
    explicit QUmlOpaqueExpression(QUmlOpaqueExpressionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLOPAQUEEXPRESSION_H

