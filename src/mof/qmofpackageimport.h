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
#ifndef QMOFPACKAGEIMPORT_H
#define QMOFPACKAGEIMPORT_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofDirectedRelationship>

// QtMof includes
#include <QtMof/QtMofNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofPackage;
class QMofNamespace;

class QMofPackageImportPrivate;

class Q_MOF_EXPORT QMofPackageImport : public QMofDirectedRelationship
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)
    Q_PROPERTY(QMofNamespace * importingNamespace READ importingNamespace WRITE setImportingNamespace)
    Q_PROPERTY(QMofPackage * importedPackage READ importedPackage WRITE setImportedPackage)

    Q_DISABLE_COPY(QMofPackageImport)
    Q_DECLARE_PRIVATE(QMofPackageImport)

public:
    Q_INVOKABLE explicit QMofPackageImport(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofPackageImport();

    // Attributes from QMofPackageImport
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMof::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from QMofPackageImport
    Q_INVOKABLE QMofNamespace *importingNamespace() const;
    Q_INVOKABLE void setImportingNamespace(QMofNamespace *importingNamespace);
    Q_INVOKABLE QMofPackage *importedPackage() const;
    Q_INVOKABLE void setImportedPackage(QMofPackage *importedPackage);

    virtual void setPropertyData();

protected:
    explicit QMofPackageImport(QMofPackageImportPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFPACKAGEIMPORT_H

