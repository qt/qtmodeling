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
#ifndef QTMOF_QELEMENTIMPORT_H
#define QTMOF_QELEMENTIMPORT_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QDirectedRelationship>

// QtMof includes
#include <QtMof/QtMofEnumerations>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QPackageableElement;
class QNamespace;

class QElementImportPrivate;

class Q_MOF_EXPORT QElementImport : public QDirectedRelationship
{
    Q_OBJECT

    Q_PROPERTY(QString alias READ alias WRITE setAlias)
    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)
    Q_PROPERTY(QPackageableElement * importedElement READ importedElement WRITE setImportedElement)
    Q_PROPERTY(QNamespace * importingNamespace READ importingNamespace WRITE setImportingNamespace)

    Q_DISABLE_COPY(QElementImport)
    Q_DECLARE_PRIVATE(QElementImport)

public:
    Q_INVOKABLE explicit QElementImport(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QElementImport();

    // Attributes from QElementImport
    Q_INVOKABLE QString alias() const;
    Q_INVOKABLE void setAlias(QString alias);
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMof::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from QElementImport
    Q_INVOKABLE QPackageableElement *importedElement() const;
    Q_INVOKABLE void setImportedElement(QPackageableElement *importedElement);
    Q_INVOKABLE QNamespace *importingNamespace() const;
    Q_INVOKABLE void setImportingNamespace(QNamespace *importingNamespace);

    // Operations
    Q_INVOKABLE QString getName() const;

protected:
    explicit QElementImport(QElementImportPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

QT_END_HEADER

#endif // QTMOF_QELEMENTIMPORT_H

