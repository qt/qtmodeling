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
#ifndef QUMLCLASS_H
#define QUMLCLASS_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlclass_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlClassifier;
class QUmlExtension;
class QUmlNamedElement;
class QUmlOperation;
class QUmlProperty;
class QUmlReception;

class Q_UML_EXPORT QUmlClass : public QObject, public UmlClass
{
    Q_OBJECT
    Q_PROPERTY(QSet<QUmlExtension *> extension READ extension)
    Q_PROPERTY(bool isAbstract READ isAbstract)
    Q_PROPERTY(bool isActive READ isActive)
    Q_PROPERTY(QList<QUmlClassifier *> nestedClassifier READ nestedClassifier)
    Q_PROPERTY(QList<QUmlProperty *> ownedAttribute READ ownedAttribute)
    Q_PROPERTY(QList<QUmlOperation *> ownedOperation READ ownedOperation)
    Q_PROPERTY(QSet<QUmlReception *> ownedReception READ ownedReception)
    Q_PROPERTY(QSet<QUmlClass *> superClass READ superClass)

public:
    Q_INVOKABLE explicit QUmlClass(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QSet<QUmlExtension *> extension() const;
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE bool isActive() const;
    Q_INVOKABLE void setActive(bool isActive);
    Q_INVOKABLE const QList<QUmlClassifier *> nestedClassifier() const;
    Q_INVOKABLE void addNestedClassifier(UmlClassifier *nestedClassifier);
    Q_INVOKABLE void removeNestedClassifier(UmlClassifier *nestedClassifier);
    Q_INVOKABLE const QList<QUmlProperty *> ownedAttribute() const;
    Q_INVOKABLE void addOwnedAttribute(UmlProperty *ownedAttribute);
    Q_INVOKABLE void removeOwnedAttribute(UmlProperty *ownedAttribute);
    Q_INVOKABLE const QList<QUmlOperation *> ownedOperation() const;
    Q_INVOKABLE void addOwnedOperation(UmlOperation *ownedOperation);
    Q_INVOKABLE void removeOwnedOperation(UmlOperation *ownedOperation);
    Q_INVOKABLE const QSet<QUmlReception *> ownedReception() const;
    Q_INVOKABLE void addOwnedReception(UmlReception *ownedReception);
    Q_INVOKABLE void removeOwnedReception(UmlReception *ownedReception);
    Q_INVOKABLE const QSet<QUmlClass *> superClass() const;
    Q_INVOKABLE void addSuperClass(UmlClass *superClass);
    Q_INVOKABLE void removeSuperClass(UmlClass *superClass);

    // Operations
    Q_INVOKABLE QSet<QUmlNamedElement *> inherit(QSet<QUmlNamedElement *> inhs) const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlClass *)
Q_DECLARE_METATYPE(QList<QUmlClass *> *)
Q_DECLARE_METATYPE(QSet<QUmlClass *> *)

QT_END_HEADER

#endif // QUMLCLASS_H

