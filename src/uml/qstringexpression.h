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
#ifndef QTUML_QSTRINGEXPRESSION_H
#define QTUML_QSTRINGEXPRESSION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
using QtWrappedObjects::QWrappedObject;
#include <QtUml/QExpression>
#include <QtUml/QTemplateableElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QStringExpressionPrivate;

class Q_UML_EXPORT QStringExpression : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QStringExpression * owningExpression READ owningExpression WRITE setOwningExpression)
    Q_PROPERTY(const QSet<QStringExpression *> * subExpressions READ subExpressions)

    Q_DISABLE_COPY(QStringExpression)
    Q_DECLARE_PRIVATE(QStringExpression)

public:
    Q_INVOKABLE explicit QStringExpression(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QStringExpression();

    // Association ends from aggregated QElement
    Q_INVOKABLE const QSet<QElement *> *ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE const QSet<QComment *> *ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Association ends from aggregated QTemplateableElement
    Q_INVOKABLE QTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE const QSet<QTemplateBinding *> *templateBindings() const;
    Q_INVOKABLE void addTemplateBinding(QTemplateBinding *templateBinding);
    Q_INVOKABLE void removeTemplateBinding(QTemplateBinding *templateBinding);

    // Association ends from QStringExpression
    Q_INVOKABLE QStringExpression *owningExpression() const;
    Q_INVOKABLE void setOwningExpression(QStringExpression *owningExpression);
    Q_INVOKABLE const QSet<QStringExpression *> *subExpressions() const;
    Q_INVOKABLE void addSubExpression(QStringExpression *subExpression);
    Q_INVOKABLE void removeSubExpression(QStringExpression *subExpression);

    // Operations
    Q_INVOKABLE QString stringValue() const;
    virtual void registerMetaTypes() const;

protected:
    explicit QStringExpression(QStringExpressionPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);

private:
    QExpression *_wrappedExpression;
    QTemplateableElement *_wrappedTemplateableElement;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QStringExpression) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QStringExpression) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QStringExpression) *> *)

QT_END_HEADER

#endif // QTUML_QSTRINGEXPRESSION_H

