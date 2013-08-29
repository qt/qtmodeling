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
#ifndef UMLPACKAGE_H
#define UMLPACKAGE_H

#include <QtUml/QtUmlGlobal>

#include "private/umlnamespace_p.h"
#include "private/umlpackageableelement_p.h"
#include "private/umltemplateableelement_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlNamedElement;
class UmlPackageMerge;
class UmlProfile;
class UmlProfileApplication;
class UmlStereotype;
class UmlType;

class Q_UML_EXPORT UmlPackage : public UmlNamespace, public UmlPackageableElement, public UmlTemplateableElement
{
public:
    Q_DECL_HIDDEN explicit UmlPackage();

    // Owned attributes
    QString URI() const;
    void setURI(QString URI);
    const QSet<UmlPackage *> nestedPackage() const;
    void addNestedPackage(UmlPackage *nestedPackage);
    void removeNestedPackage(UmlPackage *nestedPackage);
    UmlPackage *nestingPackage() const;
    void setNestingPackage(UmlPackage *nestingPackage);
    const QSet<UmlStereotype *> ownedStereotype() const;
    Q_DECL_HIDDEN void addOwnedStereotype(UmlStereotype *ownedStereotype);
    Q_DECL_HIDDEN void removeOwnedStereotype(UmlStereotype *ownedStereotype);
    const QSet<UmlType *> ownedType() const;
    void addOwnedType(UmlType *ownedType);
    void removeOwnedType(UmlType *ownedType);
    const QSet<UmlPackageMerge *> packageMerge() const;
    void addPackageMerge(UmlPackageMerge *packageMerge);
    void removePackageMerge(UmlPackageMerge *packageMerge);
    const QSet<UmlPackageableElement *> packagedElement() const;
    void addPackagedElement(UmlPackageableElement *packagedElement);
    void removePackagedElement(UmlPackageableElement *packagedElement);
    const QSet<UmlProfileApplication *> profileApplication() const;
    void addProfileApplication(UmlProfileApplication *profileApplication);
    void removeProfileApplication(UmlProfileApplication *profileApplication);

    // Operations
    QSet<UmlStereotype *> allApplicableStereotypes() const;
    UmlProfile *containingProfile() const;
    bool makesVisible(UmlNamedElement *el) const;
    bool mustBeOwned() const;
    QSet<UmlPackageableElement *> visibleMembers() const;

protected:
    QString _URI;
    UmlPackage *_nestingPackage;
    QSet<UmlPackageMerge *> _packageMerge;
    QSet<UmlPackageableElement *> _packagedElement;
    QSet<UmlProfileApplication *> _profileApplication;
};

#endif // UMLPACKAGE_H

