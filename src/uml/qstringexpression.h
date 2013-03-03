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

    Q_PROPERTY(QSet<QElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(QSet<QComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(QSet<QTemplateBinding *> templateBindings READ templateBindings)

    Q_PROPERTY(QStringExpression * owningExpression READ owningExpression WRITE setOwningExpression)
    Q_PROPERTY(QSet<QStringExpression *> subExpressions READ subExpressions)

    Q_DISABLE_COPY(QStringExpression)
    Q_DECLARE_PRIVATE(QStringExpression)

public:
    Q_INVOKABLE explicit QStringExpression(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QStringExpression();

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Association ends from aggregated QTemplateableElement
    Q_INVOKABLE QTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE QSet<QTemplateBinding *> templateBindings() const;
    Q_INVOKABLE void addTemplateBinding(QTemplateBinding *templateBinding);
    Q_INVOKABLE void removeTemplateBinding(QTemplateBinding *templateBinding);

    // Association ends from QStringExpression
    Q_INVOKABLE QStringExpression *owningExpression() const;
    Q_INVOKABLE void setOwningExpression(QStringExpression *owningExpression);
    Q_INVOKABLE QSet<QStringExpression *> subExpressions() const;
    Q_INVOKABLE void addSubExpression(QStringExpression *subExpression);
    Q_INVOKABLE void removeSubExpression(QStringExpression *subExpression);

    // Operations
    Q_INVOKABLE QString stringValue() const;

    virtual void setPropertyData();

protected:
    explicit QStringExpression(QStringExpressionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QExpression *_wrappedExpression;
    QTemplateableElement *_wrappedTemplateableElement;
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QSTRINGEXPRESSION_H

