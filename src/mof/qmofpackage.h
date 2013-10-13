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
#ifndef QMOFPACKAGE_H
#define QMOFPACKAGE_H

#include <QtMof/QtMofGlobal>

#include <QtMof/QMofNamespace>
#include <QtMof/QMofPackageableElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofNamedElement;
class QMofPackageMerge;
class QMofType;

class Q_MOF_EXPORT QMofPackage : public QMofNamespace, public QMofPackageableElement
{
public:
    explicit QMofPackage(bool createQModelingObject = true);

    virtual QModelingElement *clone() const;

    // Owned attributes
    QString URI() const;
    void setURI(QString URI);
    const QSet<QMofPackage *> nestedPackages() const;
    void addNestedPackage(QMofPackage *nestedPackage);
    void removeNestedPackage(QMofPackage *nestedPackage);
    QMofPackage *nestingPackage() const;
    void setNestingPackage(QMofPackage *nestingPackage);
    const QSet<QMofType *> ownedTypes() const;
    void addOwnedType(QMofType *ownedType);
    void removeOwnedType(QMofType *ownedType);
    const QSet<QMofPackageMerge *> packageMerges() const;
    void addPackageMerge(QMofPackageMerge *packageMerge);
    void removePackageMerge(QMofPackageMerge *packageMerge);
    const QSet<QMofPackageableElement *> packagedElements() const;
    void addPackagedElement(QMofPackageableElement *packagedElement);
    void removePackagedElement(QMofPackageableElement *packagedElement);

    // Operations
    bool makesVisible(QMofNamedElement *el) const;
    bool mustBeOwned() const;
    QSet<QMofPackageableElement *> visibleMembers() const;

protected:
    QString _URI;
    QMofPackage *_nestingPackage;
    QSet<QMofPackageMerge *> _packageMerges;
    QSet<QMofPackageableElement *> _packagedElements;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QMofPackage) *)

QT_END_HEADER

#endif // QMOFPACKAGE_H

