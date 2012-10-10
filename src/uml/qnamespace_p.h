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
#ifndef QTUML_QNAMESPACE_P_H
#define QTUML_QNAMESPACE_P_H

#include <QtUml/QtUmlGlobal>

// Base class includes

#include "qnamedelement_p.h"

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QPackageImport;
class QConstraint;
class QElementImport;
class QPackageableElement;

class QNamespacePrivate : public virtual QNamedElementPrivate
{
public:
    explicit QNamespacePrivate();
    virtual ~QNamespacePrivate();

    QSet<QPackageImport *> *packageImports;
    QSet<QNamedElement *> *members;
    QSet<QElementImport *> *elementImports;
    QSet<QConstraint *> *ownedRules;
    QSet<QNamedElement *> *ownedMembers;

    // Internal functions for association-ends
    void addPackageImport(const QPackageImport *packageImport);
    void removePackageImport(const QPackageImport *packageImport);
    void addMember(const QNamedElement *member);
    void removeMember(const QNamedElement *member);
    void addImportedMember(const QPackageableElement *importedMember);
    void removeImportedMember(const QPackageableElement *importedMember);
    void addElementImport(const QElementImport *elementImport);
    void removeElementImport(const QElementImport *elementImport);
    void addOwnedRule(const QConstraint *ownedRule);
    void removeOwnedRule(const QConstraint *ownedRule);
    void addOwnedMember(const QNamedElement *ownedMember);
    void removeOwnedMember(const QNamedElement *ownedMember);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QNAMESPACE_P_H

