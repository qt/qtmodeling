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
#ifndef QTUML_QELEMENTIMPORT_H
#define QTUML_QELEMENTIMPORT_H

#include <QtUml/QtUmlGlobal>

// QtUml includes
#include <QtUml/QtUmlEnumerations>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QDirectedRelationship>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QElementImportPrivate;
class QPackageableElement;
class QNamespace;

class Q_UML_EXPORT QElementImport : public QObject, public QDirectedRelationship
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)

    // From QRelationship
    Q_PROPERTY(const QSet<QElement *> * relatedElements READ relatedElements)

    // From QDirectedRelationship
    Q_PROPERTY(const QSet<QElement *> * sources READ sources)
    Q_PROPERTY(const QSet<QElement *> * targets READ targets)

    // From QElementImport
    Q_PROPERTY(QString alias READ alias WRITE setAlias)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QPackageableElement * importedElement READ importedElement WRITE setImportedElement)
    Q_PROPERTY(QNamespace * importingNamespace READ importingNamespace WRITE setImportingNamespace)

    Q_DISABLE_COPY(QElementImport)
    Q_DECLARE_PRIVATE(QElementImport)

public:
    explicit QElementImport(QObject *parent = 0);
    virtual ~QElementImport();

    // Attributes
    QString alias() const;
    void setAlias(QString alias);
    QtUml::VisibilityKind visibility() const;
    void setVisibility(QtUml::VisibilityKind visibility);

    // Association-ends
    QPackageableElement *importedElement() const;
    void setImportedElement(const QPackageableElement *importedElement);
    QNamespace *importingNamespace() const;
    void setImportingNamespace(const QNamespace *importingNamespace);

    // Operations
    QString getName() const;

private:
    QElementImportPrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QElementImport) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QElementImport) *> *)

QT_END_HEADER

#endif // QTUML_QELEMENTIMPORT_H

