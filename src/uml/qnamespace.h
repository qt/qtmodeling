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

// Forward decls for function parameters
class QPackageImport;
class QConstraint;
class QElementImport;
class QPackageableElement;

class QNamespacePrivate;

class Q_UML_EXPORT QNamespace : public QNamedElement
{
    Q_OBJECT

    Q_PROPERTY(QSet<QPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QNamedElement *> members READ members)
    Q_PROPERTY(QSet<QPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QNamedElement *> ownedMembers READ ownedMembers)

    Q_DISABLE_COPY(QNamespace)
    Q_DECLARE_PRIVATE(QNamespace)

public:
    Q_INVOKABLE explicit QNamespace(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QNamespace();

    // Association ends from QNamespace
    Q_INVOKABLE QSet<QPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QPackageImport *packageImport);
    Q_INVOKABLE QSet<QNamedElement *> members() const;
    Q_INVOKABLE QSet<QPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QElementImport *elementImport);
    Q_INVOKABLE QSet<QConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE QSet<QNamedElement *> ownedMembers() const;

    // Operations
    Q_INVOKABLE QSet<QPackageableElement *> excludeCollisions(QSet<QPackageableElement *> imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(const QNamedElement *element) const;
    Q_INVOKABLE QSet<QPackageableElement *> importMembers(QSet<QPackageableElement *> imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;
    virtual void registerMetaTypes() const;
    virtual void setPropertyData();

    // Classes which access read-only opposite properties should be friend
    friend class QNamedElementPrivate;

protected:
    explicit QNamespace(QNamespacePrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QNAMESPACE_H

