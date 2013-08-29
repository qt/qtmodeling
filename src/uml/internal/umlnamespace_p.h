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
#ifndef UMLNAMESPACE_H
#define UMLNAMESPACE_H

#include <QtUml/QtUmlGlobal>

#include "private/umlnamedelement_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlConstraint;
class UmlElementImport;
class UmlPackageableElement;
class UmlPackageImport;

class Q_UML_EXPORT UmlNamespace : public virtual UmlNamedElement
{
public:
    Q_DECL_HIDDEN explicit UmlNamespace();

    // Owned attributes
    const QSet<UmlElementImport *> elementImport() const;
    void addElementImport(UmlElementImport *elementImport);
    void removeElementImport(UmlElementImport *elementImport);
    const QSet<UmlPackageableElement *> importedMember() const;
    Q_DECL_HIDDEN void addImportedMember(UmlPackageableElement *importedMember);
    Q_DECL_HIDDEN void removeImportedMember(UmlPackageableElement *importedMember);
    const QSet<UmlNamedElement *> member() const;
    Q_DECL_HIDDEN void addMember(UmlNamedElement *member);
    Q_DECL_HIDDEN void removeMember(UmlNamedElement *member);
    const QSet<UmlNamedElement *> ownedMember() const;
    Q_DECL_HIDDEN void addOwnedMember(UmlNamedElement *ownedMember);
    Q_DECL_HIDDEN void removeOwnedMember(UmlNamedElement *ownedMember);
    const QSet<UmlConstraint *> ownedRule() const;
    void addOwnedRule(UmlConstraint *ownedRule);
    void removeOwnedRule(UmlConstraint *ownedRule);
    const QSet<UmlPackageImport *> packageImport() const;
    void addPackageImport(UmlPackageImport *packageImport);
    void removePackageImport(UmlPackageImport *packageImport);

    // Operations
    QSet<UmlPackageableElement *> excludeCollisions(QSet<UmlPackageableElement *> imps) const;
    QSet<QString> getNamesOfMember(UmlNamedElement *element) const;
    QSet<UmlPackageableElement *> importMembers(QSet<UmlPackageableElement *> imps) const;
    bool membersAreDistinguishable() const;

protected:
    QSet<UmlElementImport *> _elementImport;
    QSet<UmlNamedElement *> _member;
    QSet<UmlNamedElement *> _ownedMember;
    QSet<UmlConstraint *> _ownedRule;
    QSet<UmlPackageImport *> _packageImport;
};

#endif // UMLNAMESPACE_H

