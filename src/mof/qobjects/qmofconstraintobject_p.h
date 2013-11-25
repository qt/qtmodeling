/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QMOFCONSTRAINTOBJECT_H
#define QMOFCONSTRAINTOBJECT_H

#include <QtMof/QtMofGlobal>

#include <QtModeling/QModelingObject>

#include <QtMof/QtMofNamespace>

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofConstraint;
class QModelingObjectPrivate;
class Q_MOF_EXPORT QMofConstraintObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QMofConstraintObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComments READ ownedComments NOTIFY ownedCommentsChanged)
    Q_PROPERTY(QSet<QObject *> ownedElements READ ownedElements NOTIFY ownedElementsChanged)
    Q_PROPERTY(QObject * owner READ owner NOTIFY ownerChanged)

    // Properties [NamedElement]
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QObject * namespace_ READ namespace_ NOTIFY namespaceChanged)
    Q_PROPERTY(QString qualifiedName READ qualifiedName NOTIFY qualifiedNameChanged STORED false)

    // Properties [PackageableElement]
    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility NOTIFY visibilityChanged RESET unsetVisibility)

    // Properties [Constraint]
    Q_PROPERTY(QList<QObject *> constrainedElements READ constrainedElements NOTIFY constrainedElementsChanged)
    Q_PROPERTY(QObject * context READ context WRITE setContext NOTIFY contextChanged)
    Q_PROPERTY(QObject * specification READ specification WRITE setSpecification NOTIFY specificationChanged)

public:
    Q_INVOKABLE explicit QMofConstraintObject(QMofConstraint *modelingElement);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;

    // Owned attributes [PackageableElement]
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;

    // Owned attributes [Constraint]
    Q_INVOKABLE const QList<QObject *> constrainedElements() const;
    Q_INVOKABLE QObject *context() const;
    Q_INVOKABLE QObject *specification() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;
    Q_TODO Q_INVOKABLE QObject *getMetaClass() const;
    Q_TODO Q_INVOKABLE QObject *container() const;
    Q_TODO Q_INVOKABLE bool isInstanceOfType(QObject *type, bool includesSubtypes) const;
    Q_TODO Q_INVOKABLE void delete_();

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_TODO Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [NamedElement]
    void setName(QString name);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);

    // Slots for owned attributes [PackageableElement]
    void setVisibility(QtMof::VisibilityKind visibility);
    void unsetVisibility();

    // Slots for owned attributes [Constraint]
    void addConstrainedElement(QObject *constrainedElement);
    void removeConstrainedElement(QObject *constrainedElement);
    void setContext(QObject *context = 0);
    void setSpecification(QObject *specification = 0);

Q_SIGNALS:

    // Signals for owned attributes [Element]
    void ownedCommentsChanged(QSet<QObject *> ownedComments);
    void ownedElementsChanged(QSet<QObject *> ownedElements);
    void ownerChanged(QObject *owner);

    // Signals for owned attributes [NamedElement]
    void nameChanged(QString name);
    void namespaceChanged(QObject *namespace_);
    void qualifiedNameChanged(QString qualifiedName);

    // Signals for owned attributes [PackageableElement]
    void visibilityChanged(QtMof::VisibilityKind visibility);

    // Signals for owned attributes [Constraint]
    void constrainedElementsChanged(QList<QObject *> constrainedElements);
    void contextChanged(QObject *context);
    void specificationChanged(QObject *specification);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

#endif // QMOFCONSTRAINTOBJECT_H

