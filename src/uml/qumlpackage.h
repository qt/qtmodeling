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

#include <QtCore/QObject>
#include "private/umlpackage_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlNamedElement;
class QUmlPackageableElement;
class QUmlPackageMerge;
class QUmlProfile;
class QUmlProfileApplication;
class QUmlStereotype;
class QUmlType;

class Q_UML_EXPORT QUmlPackage : public QObject, public UmlPackage
{
    Q_OBJECT
    Q_PROPERTY(QString URI READ URI)
    Q_PROPERTY(QSet<QUmlPackage *> nestedPackage READ nestedPackage)
    Q_PROPERTY(QUmlPackage * nestingPackage READ nestingPackage)
    Q_PROPERTY(QSet<QUmlStereotype *> ownedStereotype READ ownedStereotype)
    Q_PROPERTY(QSet<QUmlType *> ownedType READ ownedType)
    Q_PROPERTY(QSet<QUmlPackageMerge *> packageMerge READ packageMerge)
    Q_PROPERTY(QSet<QUmlPackageableElement *> packagedElement READ packagedElement)
    Q_PROPERTY(QSet<QUmlProfileApplication *> profileApplication READ profileApplication)

public:
    Q_INVOKABLE explicit QUmlPackage(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QString URI() const;
    Q_INVOKABLE void setURI(QString URI);
    Q_INVOKABLE const QSet<QUmlPackage *> nestedPackage() const;
    Q_INVOKABLE void addNestedPackage(UmlPackage *nestedPackage);
    Q_INVOKABLE void removeNestedPackage(UmlPackage *nestedPackage);
    Q_INVOKABLE QUmlPackage *nestingPackage() const;
    Q_INVOKABLE void setNestingPackage(QUmlPackage *nestingPackage);
    Q_INVOKABLE const QSet<QUmlStereotype *> ownedStereotype() const;
    Q_INVOKABLE const QSet<QUmlType *> ownedType() const;
    Q_INVOKABLE void addOwnedType(UmlType *ownedType);
    Q_INVOKABLE void removeOwnedType(UmlType *ownedType);
    Q_INVOKABLE const QSet<QUmlPackageMerge *> packageMerge() const;
    Q_INVOKABLE void addPackageMerge(UmlPackageMerge *packageMerge);
    Q_INVOKABLE void removePackageMerge(UmlPackageMerge *packageMerge);
    Q_INVOKABLE const QSet<QUmlPackageableElement *> packagedElement() const;
    Q_INVOKABLE void addPackagedElement(UmlPackageableElement *packagedElement);
    Q_INVOKABLE void removePackagedElement(UmlPackageableElement *packagedElement);
    Q_INVOKABLE const QSet<QUmlProfileApplication *> profileApplication() const;
    Q_INVOKABLE void addProfileApplication(UmlProfileApplication *profileApplication);
    Q_INVOKABLE void removeProfileApplication(UmlProfileApplication *profileApplication);

    // Operations
    Q_INVOKABLE QSet<QUmlStereotype *> allApplicableStereotypes() const;
    Q_INVOKABLE QUmlProfile *containingProfile() const;
    Q_INVOKABLE bool makesVisible(QUmlNamedElement *el) const;
    Q_INVOKABLE bool mustBeOwned() const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> visibleMembers() const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlPackage *)
Q_DECLARE_METATYPE(QList<QUmlPackage *> *)
Q_DECLARE_METATYPE(QSet<QUmlPackage *> *)

QT_END_HEADER

#endif // QUMLPACKAGE_H

