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
#ifndef CLASSES_KERNEL_QNAMESPACE_H
#define CLASSES_KERNEL_QNAMESPACE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QNamedElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QNamespacePrivate;

class QElementImport;
class QPackageableElement;
class QConstraint;
class QPackageImport;

class Q_UML_EXPORT QNamespace : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QList<QElementImport *> * elementImport READ elementImport)
    Q_PROPERTY(const QList<QNamedElement *> * member READ member)
    Q_PROPERTY(const QList<QNamedElement *> * ownedMember READ ownedMember)
    Q_PROPERTY(QList<QConstraint *> * ownedRule READ ownedRule)
    Q_PROPERTY(QList<QPackageImport *> * packageImport READ packageImport)

public:
    explicit QNamespace(QObject *parent = 0);
    virtual ~QNamespace();

    // Association-ends (except those derived && !derivedUnion)
    QList<QElementImport *> *elementImport() const;
    const QList<QNamedElement *> *member() const;
    const QList<QNamedElement *> *ownedMember() const;
    QList<QConstraint *> *ownedRule() const;
    QList<QPackageImport *> *packageImport() const;

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    QList<QPackageableElement *> *excludeCollisions(QPackageableElement *imps) const;
    QString getNamesOfMember(QNamedElement *element) const;
    QList<QPackageableElement *> *importMembers(QPackageableElement *imps) const;
    QList<QPackageableElement *> *importedMember() const;
    bool membersAreDistinguishable() const;

private:
    Q_DISABLE_COPY(QNamespace)
    Q_DECLARE_PRIVATE(QNamespace)
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QNamespace) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QNamespace) *> *)

QT_END_HEADER

#endif // CLASSES_KERNEL_QNAMESPACE_H

