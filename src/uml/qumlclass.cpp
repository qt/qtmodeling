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
#include "qumlclass.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlReception>

QT_BEGIN_NAMESPACE

QUmlClass::QUmlClass(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QSet<QUmlExtension *> QUmlClass::extension() const
{
    QSet<QUmlExtension *> r;
    foreach (UmlExtension *element, UmlClass::extension())
        r.insert(reinterpret_cast<QUmlExtension *>(element));
    return r;
}

bool QUmlClass::isAbstract() const
{
    return _isAbstract;
}

void QUmlClass::setAbstract(bool isAbstract)
{
    UmlClass::setAbstract(isAbstract);
}

bool QUmlClass::isActive() const
{
    return _isActive;
}

void QUmlClass::setActive(bool isActive)
{
    UmlClass::setActive(isActive);
}

const QList<QUmlClassifier *> QUmlClass::nestedClassifier() const
{
    return *(reinterpret_cast<const QList<QUmlClassifier *> *>(&_nestedClassifier));
}

void QUmlClass::addNestedClassifier(UmlClassifier *nestedClassifier)
{
    UmlClass::addNestedClassifier(nestedClassifier);
}

void QUmlClass::removeNestedClassifier(UmlClassifier *nestedClassifier)
{
    UmlClass::removeNestedClassifier(nestedClassifier);
}

const QList<QUmlProperty *> QUmlClass::ownedAttribute() const
{
    return *(reinterpret_cast<const QList<QUmlProperty *> *>(&_ownedAttribute));
}

void QUmlClass::addOwnedAttribute(UmlProperty *ownedAttribute)
{
    UmlClass::addOwnedAttribute(ownedAttribute);
}

void QUmlClass::removeOwnedAttribute(UmlProperty *ownedAttribute)
{
    UmlClass::removeOwnedAttribute(ownedAttribute);
}

const QList<QUmlOperation *> QUmlClass::ownedOperation() const
{
    return *(reinterpret_cast<const QList<QUmlOperation *> *>(&_ownedOperation));
}

void QUmlClass::addOwnedOperation(UmlOperation *ownedOperation)
{
    UmlClass::addOwnedOperation(ownedOperation);
}

void QUmlClass::removeOwnedOperation(UmlOperation *ownedOperation)
{
    UmlClass::removeOwnedOperation(ownedOperation);
}

const QSet<QUmlReception *> QUmlClass::ownedReception() const
{
    return *(reinterpret_cast<const QSet<QUmlReception *> *>(&_ownedReception));
}

void QUmlClass::addOwnedReception(UmlReception *ownedReception)
{
    UmlClass::addOwnedReception(ownedReception);
}

void QUmlClass::removeOwnedReception(UmlReception *ownedReception)
{
    UmlClass::removeOwnedReception(ownedReception);
}

const QSet<QUmlClass *> QUmlClass::superClass() const
{
    QSet<QUmlClass *> r;
    foreach (UmlClass *element, UmlClass::superClass())
        r.insert(reinterpret_cast<QUmlClass *>(element));
    return r;
}

void QUmlClass::addSuperClass(UmlClass *superClass)
{
    UmlClass::addSuperClass(superClass);
}

void QUmlClass::removeSuperClass(UmlClass *superClass)
{
    UmlClass::removeSuperClass(superClass);
}

// Operations

QSet<QUmlNamedElement *> QUmlClass::inherit(QSet<QUmlNamedElement *> inhs) const
{
    QSet<QUmlNamedElement *> r;
    foreach (UmlNamedElement *element, UmlClass::inherit(*(reinterpret_cast<QSet<UmlNamedElement *> *>(&inhs))))
        r.insert(reinterpret_cast<QUmlNamedElement *>(element));
    return r;
}

QT_END_NAMESPACE

