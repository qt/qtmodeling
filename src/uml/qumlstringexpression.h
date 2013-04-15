/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QUMLSTRINGEXPRESSION_H
#define QUMLSTRINGEXPRESSION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlExpression>
#include <QtUml/QUmlTemplateableElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlStringExpression;

class QUmlStringExpressionPrivate;

class Q_UML_EXPORT QUmlStringExpression : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QUmlTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(QSet<QUmlTemplateBinding *> templateBindings READ templateBindings)

    Q_PROPERTY(QUmlStringExpression * owningExpression READ owningExpression WRITE setOwningExpression)
    Q_PROPERTY(QSet<QUmlStringExpression *> subExpressions READ subExpressions)

    Q_DISABLE_COPY(QUmlStringExpression)
    Q_DECLARE_PRIVATE(QUmlStringExpression)

public:
    Q_INVOKABLE explicit QUmlStringExpression(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlStringExpression();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Association ends from aggregated QUmlTemplateableElement
    Q_INVOKABLE QUmlTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE QSet<QUmlTemplateBinding *> templateBindings() const;
    Q_INVOKABLE void addTemplateBinding(QUmlTemplateBinding *templateBinding);
    Q_INVOKABLE void removeTemplateBinding(QUmlTemplateBinding *templateBinding);

    // Association ends from QUmlStringExpression
    Q_INVOKABLE QUmlStringExpression *owningExpression() const;
    Q_INVOKABLE void setOwningExpression(QUmlStringExpression *owningExpression);
    Q_INVOKABLE QSet<QUmlStringExpression *> subExpressions() const;
    Q_INVOKABLE void addSubExpression(QUmlStringExpression *subExpression);
    Q_INVOKABLE void removeSubExpression(QUmlStringExpression *subExpression);

    // Operations
    Q_INVOKABLE QString stringValue() const;

    virtual void setPropertyData();

protected:
    explicit QUmlStringExpression(QUmlStringExpressionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlExpression *_wrappedUmlExpression;
    QUmlTemplateableElement *_wrappedUmlTemplateableElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSTRINGEXPRESSION_H

