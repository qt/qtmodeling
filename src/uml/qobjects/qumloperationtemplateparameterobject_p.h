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
#ifndef QUMLOPERATIONTEMPLATEPARAMETEROBJECT_H
#define QUMLOPERATIONTEMPLATEPARAMETEROBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtModeling/QModelingObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlOperationTemplateParameter;
class QModelingObjectPrivate;
class Q_UML_EXPORT QUmlOperationTemplateParameterObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QUmlOperationTemplateParameterObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComments READ ownedComments)
    Q_PROPERTY(QSet<QObject *> ownedElements READ ownedElements)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [TemplateParameter]
    Q_PROPERTY(QObject * default_ READ default_ WRITE setDefault)
    Q_PROPERTY(QObject * ownedDefault READ ownedDefault WRITE setOwnedDefault)
    Q_PROPERTY(QObject * ownedParameteredElement READ ownedParameteredElement WRITE setOwnedParameteredElement)
    Q_PROPERTY(QObject * signature READ signature WRITE setSignature)

    // Properties [OperationTemplateParameter]
    Q_PROPERTY(QObject * parameteredElement READ parameteredElement WRITE setParameteredElement)

public:
    Q_INVOKABLE explicit QUmlOperationTemplateParameterObject(QUmlOperationTemplateParameter *modelingElement);
    virtual ~QUmlOperationTemplateParameterObject();

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [TemplateParameter]
    Q_INVOKABLE QObject *default_() const;
    Q_INVOKABLE QObject *ownedDefault() const;
    Q_INVOKABLE QObject *ownedParameteredElement() const;
    Q_INVOKABLE QObject *signature() const;

    // Owned attributes [OperationTemplateParameter]
    Q_INVOKABLE QObject *parameteredElement() const;

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

    // Slots for owned attributes [TemplateParameter]
    void setDefault(QObject *default_ = 0);
    void setOwnedDefault(QObject *ownedDefault = 0);
    void setOwnedParameteredElement(QObject *ownedParameteredElement = 0);
    void setSignature(QObject *signature = 0);

    // Slots for owned attributes [OperationTemplateParameter]
    void setParameteredElement(QObject *parameteredElement = 0);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLOPERATIONTEMPLATEPARAMETEROBJECT_H

