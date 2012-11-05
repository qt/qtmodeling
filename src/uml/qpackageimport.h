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
#ifndef QTUML_QPACKAGEIMPORT_H
#define QTUML_QPACKAGEIMPORT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QDirectedRelationship>

// QtUml includes
#include <QtUml/QtUmlEnumerations>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QPackage;
class QNamespace;

class QPackageImportPrivate;

class Q_UML_EXPORT QPackageImport : public QDirectedRelationship
{
    Q_OBJECT

    // From QPackageImport
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QNamespace * importingNamespace READ importingNamespace WRITE setImportingNamespace)
    Q_PROPERTY(QPackage * importedPackage READ importedPackage WRITE setImportedPackage)

    Q_DISABLE_COPY(QPackageImport)
    Q_DECLARE_PRIVATE(QPackageImport)

public:
    explicit QPackageImport(QObject *parent = 0);
    virtual ~QPackageImport();

    // Attributes from QPackageImport
    QtUml::VisibilityKind visibility() const;
    void setVisibility(QtUml::VisibilityKind visibility);

    // Association ends from QPackageImport
    QNamespace *importingNamespace() const;
    void setImportingNamespace(QNamespace *importingNamespace);
    QPackage *importedPackage() const;
    void setImportedPackage(QPackage *importedPackage);

protected:
    explicit QPackageImport(QPackageImportPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QPackageImport) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QPackageImport) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QPackageImport) *> *)

QT_END_HEADER

#endif // QTUML_QPACKAGEIMPORT_H

