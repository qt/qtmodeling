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
#ifndef QUMLPACKAGE_H
#define QUMLPACKAGE_H

#include <QtUml/QtUmlGlobal>

#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlTemplateableElement>

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlNamedElement;
class QUmlPackageMerge;
class QUmlProfile;
class QUmlProfileApplication;
class QUmlStereotype;
class QUmlType;

class Q_UML_EXPORT QUmlPackage : public QUmlNamespace, public QUmlPackageableElement, public QUmlTemplateableElement
{
public:
    explicit QUmlPackage(bool createQModelingObject = true);
    virtual ~QUmlPackage();

    virtual QModelingElement *clone() const;

    // Owned attributes
    QString URI() const;
    void setURI(QString URI);
    const QSet<QUmlPackage *> nestedPackages() const;
    void addNestedPackage(QUmlPackage *nestedPackage);
    void removeNestedPackage(QUmlPackage *nestedPackage);
    QUmlPackage *nestingPackage() const;
    void setNestingPackage(QUmlPackage *nestingPackage);
    const QSet<QUmlStereotype *> ownedStereotypes() const;
    Q_DECL_HIDDEN void addOwnedStereotype(QUmlStereotype *ownedStereotype);
    Q_DECL_HIDDEN void removeOwnedStereotype(QUmlStereotype *ownedStereotype);
    const QSet<QUmlType *> ownedTypes() const;
    void addOwnedType(QUmlType *ownedType);
    void removeOwnedType(QUmlType *ownedType);
    const QSet<QUmlPackageMerge *> packageMerges() const;
    void addPackageMerge(QUmlPackageMerge *packageMerge);
    void removePackageMerge(QUmlPackageMerge *packageMerge);
    const QSet<QUmlPackageableElement *> packagedElements() const;
    void addPackagedElement(QUmlPackageableElement *packagedElement);
    void removePackagedElement(QUmlPackageableElement *packagedElement);
    const QSet<QUmlProfileApplication *> profileApplications() const;
    void addProfileApplication(QUmlProfileApplication *profileApplication);
    void removeProfileApplication(QUmlProfileApplication *profileApplication);

    // Operations
    QSet<QUmlStereotype *> allApplicableStereotypes() const;
    QUmlProfile *containingProfile() const;
    bool makesVisible(QUmlNamedElement *el) const;
    bool mustBeOwned() const;
    QSet<QUmlPackageableElement *> visibleMembers() const;

protected:
    QString _URI;
    QUmlPackage *_nestingPackage;
    QSet<QUmlPackageMerge *> _packageMerges;
    QSet<QUmlPackageableElement *> _packagedElements;
    QSet<QUmlProfileApplication *> _profileApplications;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QUmlPackage) *)

#endif // QUMLPACKAGE_H

