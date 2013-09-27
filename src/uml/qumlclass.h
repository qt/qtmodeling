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

#include <QtUml/QUmlEncapsulatedClassifier>
#include <QtUml/QUmlBehavioredClassifier>


QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlClassifier;
class QUmlExtension;
class QUmlNamedElement;
class QUmlOperation;
class QUmlProperty;
class QUmlReception;

class Q_UML_EXPORT QUmlClass : public QUmlEncapsulatedClassifier, public QUmlBehavioredClassifier
{
public:
    explicit QUmlClass(bool createQObject = true);
    virtual ~QUmlClass();

    QModelingObject *clone() const;

    // Owned attributes
    const QSet<QUmlExtension *> extension() const;
    Q_DECL_HIDDEN void addExtension(QUmlExtension *extension);
    Q_DECL_HIDDEN void removeExtension(QUmlExtension *extension);
    bool isAbstract() const;
    void setAbstract(bool isAbstract);
    bool isActive() const;
    void setActive(bool isActive);
    const QList<QUmlClassifier *> nestedClassifier() const;
    void addNestedClassifier(QUmlClassifier *nestedClassifier);
    void removeNestedClassifier(QUmlClassifier *nestedClassifier);
    const QList<QUmlProperty *> ownedAttribute() const;
    void addOwnedAttribute(QUmlProperty *ownedAttribute);
    void removeOwnedAttribute(QUmlProperty *ownedAttribute);
    const QList<QUmlOperation *> ownedOperation() const;
    void addOwnedOperation(QUmlOperation *ownedOperation);
    void removeOwnedOperation(QUmlOperation *ownedOperation);
    const QSet<QUmlReception *> ownedReception() const;
    void addOwnedReception(QUmlReception *ownedReception);
    void removeOwnedReception(QUmlReception *ownedReception);
    const QSet<QUmlClass *> superClass() const;
    void addSuperClass(QUmlClass *superClass);
    void removeSuperClass(QUmlClass *superClass);

    // Operations
    QSet<QUmlNamedElement *> inherit(QSet<QUmlNamedElement *> inhs) const;

protected:
    bool _isAbstract;
    bool _isActive;
    QList<QUmlClassifier *> _nestedClassifier;
    QList<QUmlProperty *> _ownedAttribute;
    QList<QUmlOperation *> _ownedOperation;
    QSet<QUmlReception *> _ownedReception;

    virtual void setPropertyData();
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QUmlClass) *)

QT_END_HEADER

#endif // QUMLCLASS_H

