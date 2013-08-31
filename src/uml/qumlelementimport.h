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

class QUmlComment;
class QUmlElement;
class QUmlNamespace;
class QUmlPackageableElement;

class Q_UML_EXPORT QUmlElementImport : public QObject, public UmlElementImport
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [Relationship]
    Q_PROPERTY(QSet<QUmlElement *> relatedElement READ relatedElement)

    // Properties [DirectedRelationship]
    Q_PROPERTY(QSet<QUmlElement *> source READ source)
    Q_PROPERTY(QSet<QUmlElement *> target READ target)

    // Properties [ElementImport]
    Q_PROPERTY(QString alias READ alias)
    Q_PROPERTY(QUmlPackageableElement * importedElement READ importedElement)
    Q_PROPERTY(QUmlNamespace * importingNamespace READ importingNamespace)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

public:
    Q_INVOKABLE explicit QUmlElementImport(QObject *parent = 0);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [Relationship]
    Q_INVOKABLE const QSet<QUmlElement *> relatedElement() const;

    // Owned attributes [DirectedRelationship]
    Q_INVOKABLE const QSet<QUmlElement *> source() const;
    Q_INVOKABLE const QSet<QUmlElement *> target() const;

    // Owned attributes [ElementImport]
    Q_INVOKABLE QString alias() const;
    Q_INVOKABLE QUmlPackageableElement *importedElement() const;
    Q_INVOKABLE QUmlNamespace *importingNamespace() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [ElementImport]
    Q_INVOKABLE QString getName() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [Relationship]

    // Slots for owned attributes [DirectedRelationship]

    // Slots for owned attributes [ElementImport]
    void setAlias(QString alias);
    void setImportedElement(QUmlPackageableElement *importedElement);
    void setImportingNamespace(QUmlNamespace *importingNamespace);
    void setVisibility(QtUml::VisibilityKind visibility);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlElementImport *)
Q_DECLARE_METATYPE(QList<QUmlElementImport *> *)
Q_DECLARE_METATYPE(QSet<QUmlElementImport *> *)

QT_END_HEADER

#endif // QUMLELEMENTIMPORT_H

