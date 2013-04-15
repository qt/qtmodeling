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
#ifndef QMOFELEMENTIMPORT_H
#define QMOFELEMENTIMPORT_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofDirectedRelationship>

// QtMof includes
#include <QtMof/QtMofNamespace>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofPackageableElement;
class QMofNamespace;

class QMofElementImportPrivate;

class Q_MOF_EXPORT QMofElementImport : public QMofDirectedRelationship
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(QString alias READ alias WRITE setAlias)
    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)
    Q_PROPERTY(QMofPackageableElement * importedElement READ importedElement WRITE setImportedElement)
    Q_PROPERTY(QMofNamespace * importingNamespace READ importingNamespace WRITE setImportingNamespace)

    Q_DISABLE_COPY(QMofElementImport)
    Q_DECLARE_PRIVATE(QMofElementImport)

public:
    Q_INVOKABLE explicit QMofElementImport(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofElementImport();

    // Attributes from QMofElementImport
    Q_INVOKABLE QString alias() const;
    Q_INVOKABLE void setAlias(QString alias);
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMof::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from QMofElementImport
    Q_INVOKABLE QMofPackageableElement *importedElement() const;
    Q_INVOKABLE void setImportedElement(QMofPackageableElement *importedElement);
    Q_INVOKABLE QMofNamespace *importingNamespace() const;
    Q_INVOKABLE void setImportingNamespace(QMofNamespace *importingNamespace);

    // Operations
    Q_INVOKABLE QString getName() const;

    virtual void setPropertyData();

protected:
    explicit QMofElementImport(QMofElementImportPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFELEMENTIMPORT_H

