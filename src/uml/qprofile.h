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
#ifndef QTUML_QPROFILE_H
#define QTUML_QPROFILE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QPackage>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QElementImport;
class QPackageImport;

class QProfilePrivate;

class Q_UML_EXPORT QProfile : public QPackage
{
    Q_OBJECT

    Q_PROPERTY(const QSet<QPackageImport *> * metamodelReferences READ metamodelReferences)
    Q_PROPERTY(const QSet<QElementImport *> * metaclassReferences READ metaclassReferences)

    Q_DISABLE_COPY(QProfile)
    Q_DECLARE_PRIVATE(QProfile)

public:
    Q_INVOKABLE explicit QProfile(QObject *parent = 0);
    virtual ~QProfile();

    // Association ends from QProfile
    Q_INVOKABLE const QSet<QPackageImport *> *metamodelReferences() const;
    Q_INVOKABLE void addMetamodelReference(QPackageImport *metamodelReference);
    Q_INVOKABLE void removeMetamodelReference(QPackageImport *metamodelReference);
    Q_INVOKABLE const QSet<QElementImport *> *metaclassReferences() const;
    Q_INVOKABLE void addMetaclassReference(QElementImport *metaclassReference);
    Q_INVOKABLE void removeMetaclassReference(QElementImport *metaclassReference);

protected:
    explicit QProfile(QProfilePrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QProfile) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QProfile) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QProfile) *> *)

QT_END_HEADER

#endif // QTUML_QPROFILE_H

