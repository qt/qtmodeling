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
#ifndef QUMLPACKAGEIMPORTOBJECT_H
#define QUMLPACKAGEIMPORTOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlPackageImport;
class Q_UML_EXPORT QUmlPackageImportObject : public QObject
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QObject *> ownedElement READ ownedElement)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [Relationship]
    Q_PROPERTY(QSet<QObject *> relatedElement READ relatedElement)

    // Properties [DirectedRelationship]
    Q_PROPERTY(QSet<QObject *> source READ source)
    Q_PROPERTY(QSet<QObject *> target READ target)

    // Properties [PackageImport]
    Q_PROPERTY(QObject * importedPackage READ importedPackage)
    Q_PROPERTY(QObject * importingNamespace READ importingNamespace)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility RESET unsetVisibility)

public:
    Q_INVOKABLE explicit QUmlPackageImportObject(QUmlPackageImport *qModelingObject);
    virtual ~QUmlPackageImportObject();

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComment() const;
    Q_INVOKABLE const QSet<QObject *> ownedElement() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [Relationship]
    Q_INVOKABLE const QSet<QObject *> relatedElement() const;

    // Owned attributes [DirectedRelationship]
    Q_INVOKABLE const QSet<QObject *> source() const;
    Q_INVOKABLE const QSet<QObject *> target() const;

    // Owned attributes [PackageImport]
    Q_INVOKABLE QObject *importedPackage() const;
    Q_INVOKABLE QObject *importingNamespace() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [Relationship]
    void Q_DECL_HIDDEN addRelatedElement(QObject *relatedElement);
    void Q_DECL_HIDDEN removeRelatedElement(QObject *relatedElement);

    // Slots for owned attributes [DirectedRelationship]
    void Q_DECL_HIDDEN addSource(QObject *source);
    void Q_DECL_HIDDEN removeSource(QObject *source);
    void Q_DECL_HIDDEN addTarget(QObject *target);
    void Q_DECL_HIDDEN removeTarget(QObject *target);

    // Slots for owned attributes [PackageImport]
    void setImportedPackage(QObject *importedPackage = 0);
    void setImportingNamespace(QObject *importingNamespace = 0);
    void setVisibility(QtUml::VisibilityKind visibility);
    void unsetVisibility();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLPACKAGEIMPORTOBJECT_H

