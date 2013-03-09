/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QMOFNAMESPACE_H
#define QMOFNAMESPACE_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofNamedElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofPackageImport;
class QMofConstraint;
class QMofElementImport;
class QMofPackageableElement;

class QMofNamespacePrivate;

class Q_MOF_EXPORT QMofNamespace : public QMofNamedElement
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(QSet<QMofPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QMofNamedElement *> members READ members)
    Q_PROPERTY(QSet<QMofPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QMofElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QMofConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QMofNamedElement *> ownedMembers READ ownedMembers)

    Q_DISABLE_COPY(QMofNamespace)
    Q_DECLARE_PRIVATE(QMofNamespace)

public:
    Q_INVOKABLE explicit QMofNamespace(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofNamespace();

    // Association ends from QMofNamespace
    Q_INVOKABLE QSet<QMofPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QMofPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QMofPackageImport *packageImport);
    Q_INVOKABLE QSet<QMofNamedElement *> members() const;
    Q_INVOKABLE QSet<QMofPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QMofElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QMofElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QMofElementImport *elementImport);
    Q_INVOKABLE QSet<QMofConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QMofConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QMofConstraint *ownedRule);
    Q_INVOKABLE QSet<QMofNamedElement *> ownedMembers() const;

    // Operations
    Q_INVOKABLE QSet<QMofPackageableElement *> excludeCollisions(const QMofPackageableElement *imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(const QMofNamedElement *element) const;
    Q_INVOKABLE QSet<QMofPackageableElement *> importMembers(const QMofPackageableElement *imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

    virtual void setPropertyData();

    // Classes which access read-only opposite properties should be friend
    friend class QMofNamedElementPrivate;

protected:
    explicit QMofNamespace(QMofNamespacePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFNAMESPACE_H

