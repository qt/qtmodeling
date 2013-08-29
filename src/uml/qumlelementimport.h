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
#ifndef QUMLELEMENTIMPORT_H
#define QUMLELEMENTIMPORT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlelementimport_p.h"
#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlNamespace;
class QUmlPackageableElement;

class Q_UML_EXPORT QUmlElementImport : public QObject, public UmlElementImport
{
    Q_OBJECT
    Q_PROPERTY(QString alias READ alias)
    Q_PROPERTY(QUmlPackageableElement * importedElement READ importedElement)
    Q_PROPERTY(QUmlNamespace * importingNamespace READ importingNamespace)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

public:
    Q_INVOKABLE explicit QUmlElementImport(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QString alias() const;
    Q_INVOKABLE void setAlias(QString alias);
    Q_INVOKABLE QUmlPackageableElement *importedElement() const;
    Q_INVOKABLE void setImportedElement(QUmlPackageableElement *importedElement);
    Q_INVOKABLE QUmlNamespace *importingNamespace() const;
    Q_INVOKABLE void setImportingNamespace(QUmlNamespace *importingNamespace);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);

    // Operations
    Q_INVOKABLE QString getName() const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlElementImport *)
Q_DECLARE_METATYPE(QList<QUmlElementImport *> *)
Q_DECLARE_METATYPE(QSet<QUmlElementImport *> *)

QT_END_HEADER

#endif // QUMLELEMENTIMPORT_H

