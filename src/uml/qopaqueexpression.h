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
#ifndef QTUML_QOPAQUEEXPRESSION_H
#define QTUML_QOPAQUEEXPRESSION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QValueSpecification>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QBehavior;
class QParameter;

class QOpaqueExpressionPrivate;

class Q_UML_EXPORT QOpaqueExpression : public QValueSpecification
{
    Q_OBJECT

    Q_PROPERTY(const QList<QString> * bodies READ bodies)
    Q_PROPERTY(const QList<QString> * languages READ languages)
    Q_PROPERTY(QBehavior * behavior READ behavior WRITE setBehavior)
    Q_PROPERTY(QParameter * result READ result STORED false)

    Q_DISABLE_COPY(QOpaqueExpression)
    Q_DECLARE_PRIVATE(QOpaqueExpression)

public:
    Q_INVOKABLE explicit QOpaqueExpression(QUmlObject *parent = 0, QUmlObject *wrapper = 0);
    virtual ~QOpaqueExpression();

    // Attributes from QOpaqueExpression
    Q_INVOKABLE const QList<QString> *bodies() const;
    Q_INVOKABLE void addBody(QString body);
    Q_INVOKABLE void removeBody(QString body);
    Q_INVOKABLE const QList<QString> *languages() const;
    Q_INVOKABLE void addLanguage(QString language);
    Q_INVOKABLE void removeLanguage(QString language);

    // Association ends from QOpaqueExpression
    Q_INVOKABLE QBehavior *behavior() const;
    Q_INVOKABLE void setBehavior(QBehavior *behavior);
    Q_INVOKABLE QParameter *result() const;

    // Operations
    Q_INVOKABLE bool isIntegral() const;
    Q_INVOKABLE bool isNonNegative() const;
    Q_INVOKABLE bool isPositive() const;
    Q_INVOKABLE qint32 value() const;

protected:
    explicit QOpaqueExpression(QOpaqueExpressionPrivate &dd, QUmlObject *parent = 0, QUmlObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QOpaqueExpression) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QOpaqueExpression) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QOpaqueExpression) *> *)

QT_END_HEADER

#endif // QTUML_QOPAQUEEXPRESSION_H

