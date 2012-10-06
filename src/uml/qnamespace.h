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
#ifndef QTUML_QNAMESPACE_H
#define QTUML_QNAMESPACE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QNamedElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QNamespacePrivate;
class QPackageImport;
class QConstraint;
class QElementImport;
class QPackageableElement;

class Q_UML_EXPORT QNamespace : public virtual QNamedElement
{
    Q_DISABLE_COPY(QNamespace)
    Q_DECLARE_PRIVATE(QNamespace)

public:
    virtual ~QNamespace();

    // Association-ends
    const QSet<QElementImport *> *elementImports() const;
    void addElementImport(const QElementImport *elementImport);
    void removeElementImport(const QElementImport *elementImport);
    const QSet<QPackageableElement *> *importedMembers() const;
    const QSet<QNamedElement *> *members() const;
    const QSet<QNamedElement *> *ownedMembers() const;
    const QSet<QConstraint *> *ownedRules() const;
    void addOwnedRule(const QConstraint *ownedRule);
    void removeOwnedRule(const QConstraint *ownedRule);
    const QSet<QPackageImport *> *packageImports() const;
    void addPackageImport(const QPackageImport *packageImport);
    void removePackageImport(const QPackageImport *packageImport);

    // Operations
    const QSet<QPackageableElement *> *excludeCollisions(const QSet<QPackageableElement *> *imps) const;
    const QSet<QString> *getNamesOfMember(const QNamedElement *element) const;
    const QSet<QPackageableElement *> *importMembers(const QSet<QPackageableElement *> *imps) const;
    bool membersAreDistinguishable() const;

protected:
    // Synchronization functions for read-only subsetted properties
    void addMember(const QNamedElement *member);
    void removeMember(const QNamedElement *member);
    void addOwnedMember(const QNamedElement *ownedMember);
    void removeOwnedMember(const QNamedElement *ownedMember);

protected:
    explicit QNamespace();

private:
    QNamespacePrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QNAMESPACE_H

