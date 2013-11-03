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
#ifndef QUMLTEMPLATEPARAMETERSUBSTITUTIONOBJECT_H
#define QUMLTEMPLATEPARAMETERSUBSTITUTIONOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtModeling/QModelingObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlTemplateParameterSubstitution;
class QModelingObjectPrivate;
class Q_UML_EXPORT QUmlTemplateParameterSubstitutionObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QUmlTemplateParameterSubstitutionObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComments READ ownedComments NOTIFY ownedCommentsChanged)
    Q_PROPERTY(QSet<QObject *> ownedElements READ ownedElements NOTIFY ownedElementsChanged)
    Q_PROPERTY(QObject * owner READ owner NOTIFY ownerChanged)

    // Properties [TemplateParameterSubstitution]
    Q_PROPERTY(QObject * actual READ actual WRITE setActual NOTIFY actualChanged)
    Q_PROPERTY(QObject * formal READ formal WRITE setFormal NOTIFY formalChanged)
    Q_PROPERTY(QObject * ownedActual READ ownedActual WRITE setOwnedActual NOTIFY ownedActualChanged)
    Q_PROPERTY(QObject * templateBinding READ templateBinding WRITE setTemplateBinding NOTIFY templateBindingChanged)

public:
    Q_INVOKABLE explicit QUmlTemplateParameterSubstitutionObject(QUmlTemplateParameterSubstitution *modelingElement);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [TemplateParameterSubstitution]
    Q_INVOKABLE QObject *actual() const;
    Q_INVOKABLE QObject *formal() const;
    Q_INVOKABLE QObject *ownedActual() const;
    Q_INVOKABLE QObject *templateBinding() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [TemplateParameterSubstitution]
    void setActual(QObject *actual = 0);
    void setFormal(QObject *formal = 0);
    void setOwnedActual(QObject *ownedActual = 0);
    void setTemplateBinding(QObject *templateBinding = 0);

Q_SIGNALS:

    // Signals for owned attributes [Element]
    void ownedCommentsChanged(QSet<QObject *> ownedComments);
    void ownedElementsChanged(QSet<QObject *> ownedElements);
    void ownerChanged(QObject *owner);

    // Signals for owned attributes [TemplateParameterSubstitution]
    void actualChanged(QObject *actual);
    void formalChanged(QObject *formal);
    void ownedActualChanged(QObject *ownedActual);
    void templateBindingChanged(QObject *templateBinding);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLTEMPLATEPARAMETERSUBSTITUTIONOBJECT_H

