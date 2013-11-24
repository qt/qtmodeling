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
#ifndef QMOFNAMESPACE_H
#define QMOFNAMESPACE_H

#include <QtMof/QtMofGlobal>

#include <QtMof/QMofNamedElement>

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofConstraint;
class QMofElementImport;
class QMofPackageableElement;
class QMofPackageImport;

class Q_MOF_EXPORT QMofNamespace : public virtual QMofNamedElement
{
public:
    Q_DECL_HIDDEN virtual QModelingElement *clone() const;

    // Owned attributes
    const QSet<QMofElementImport *> elementImports() const;
    void addElementImport(QMofElementImport *elementImport);
    void removeElementImport(QMofElementImport *elementImport);
    const QSet<QMofPackageableElement *> importedMembers() const;
    Q_DECL_HIDDEN void addImportedMember(QMofPackageableElement *importedMember);
    Q_DECL_HIDDEN void removeImportedMember(QMofPackageableElement *importedMember);
    const QSet<QMofNamedElement *> members() const;
    Q_DECL_HIDDEN void addMember(QMofNamedElement *member);
    Q_DECL_HIDDEN void removeMember(QMofNamedElement *member);
    const QSet<QMofNamedElement *> ownedMembers() const;
    Q_DECL_HIDDEN void addOwnedMember(QMofNamedElement *ownedMember);
    Q_DECL_HIDDEN void removeOwnedMember(QMofNamedElement *ownedMember);
    const QSet<QMofConstraint *> ownedRules() const;
    void addOwnedRule(QMofConstraint *ownedRule);
    void removeOwnedRule(QMofConstraint *ownedRule);
    const QSet<QMofPackageImport *> packageImports() const;
    void addPackageImport(QMofPackageImport *packageImport);
    void removePackageImport(QMofPackageImport *packageImport);

    // Operations
    QSet<QMofPackageableElement *> excludeCollisions(QMofPackageableElement *imps) const;
    QSet<QString> getNamesOfMember(QMofNamedElement *element) const;
    QSet<QMofPackageableElement *> importMembers(QMofPackageableElement *imps) const;
    bool membersAreDistinguishable() const;

protected:
    explicit QMofNamespace();

    QSet<QMofElementImport *> _elementImports;
    QSet<QMofNamedElement *> _members;
    QSet<QMofNamedElement *> _ownedMembers;
    QSet<QMofConstraint *> _ownedRules;
    QSet<QMofPackageImport *> _packageImports;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QMofNamespace) *)

#endif // QMOFNAMESPACE_H

