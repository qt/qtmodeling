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
#ifndef QUMLELEMENTIMPORT_H
#define QUMLELEMENTIMPORT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlDirectedRelationship>

// QtUml includes
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlPackageableElement;
class QUmlNamespace;

class QUmlElementImportPrivate;

class Q_UML_EXPORT QUmlElementImport : public QUmlDirectedRelationship
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QString alias READ alias WRITE setAlias)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)
    Q_PROPERTY(QUmlPackageableElement * importedElement READ importedElement WRITE setImportedElement)
    Q_PROPERTY(QUmlNamespace * importingNamespace READ importingNamespace WRITE setImportingNamespace)

    Q_DISABLE_COPY(QUmlElementImport)
    Q_DECLARE_PRIVATE(QUmlElementImport)

public:
    Q_INVOKABLE explicit QUmlElementImport(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlElementImport();

    // Attributes from QUmlElementImport
    Q_INVOKABLE QString alias() const;
    Q_INVOKABLE void setAlias(QString alias);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from QUmlElementImport
    Q_INVOKABLE QUmlPackageableElement *importedElement() const;
    Q_INVOKABLE void setImportedElement(QUmlPackageableElement *importedElement);
    Q_INVOKABLE QUmlNamespace *importingNamespace() const;
    Q_INVOKABLE void setImportingNamespace(QUmlNamespace *importingNamespace);

    // Operations
    Q_INVOKABLE QString getName() const;

    virtual void setPropertyData();

protected:
    explicit QUmlElementImport(QUmlElementImportPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLELEMENTIMPORT_H

