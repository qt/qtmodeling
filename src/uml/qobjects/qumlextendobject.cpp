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
#include "qumlextendobject_p.h"

#include <QtUml/QUmlExtend>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExtensionPoint>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlExtendObject::QUmlExtendObject(QUmlExtend *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlExtendObject::~QUmlExtendObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlExtend *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExtendObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlExtend *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtendObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtend *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExtendObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlExtendObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtend *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlExtendObject::source() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtend *>(this)->source())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtendObject::target() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtend *>(this)->target())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExtendObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlExtend *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlExtendObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->name();
}

QObject *QUmlExtendObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->nameExpression()->asQObject();
}

QObject *QUmlExtendObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->namespace_()->asQObject();
}

QString QUmlExtendObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlExtendObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->visibility();
}

// OWNED ATTRIBUTES [Extend]

QObject *QUmlExtendObject::condition() const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->condition()->asQObject();
}

QObject *QUmlExtendObject::extendedCase() const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->extendedCase()->asQObject();
}

QObject *QUmlExtendObject::extension() const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->extension()->asQObject();
}

const QList<QObject *> QUmlExtendObject::extensionLocation() const
{
    QList<QObject *> list;
    foreach (QUmlExtensionPoint *element, qmodelingobjectproperty_cast<QUmlExtend *>(this)->extensionLocation())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExtendObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtend *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtendObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExtendObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlExtend *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlExtendObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlExtend *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtendObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExtendObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlExtend *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExtendObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExtendObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExtendObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtendObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtendObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlExtendObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlExtendObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlExtendObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlExtendObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlExtendObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlExtendObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExtendObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtendObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtendObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->setName(name);
}
    
void QUmlExtendObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExtendObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExtendObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlExtendObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [Extend]

void QUmlExtendObject::setCondition(QObject *condition)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->setCondition(qmodelingobjectproperty_cast<QUmlConstraint *>(condition));
}

void QUmlExtendObject::setExtendedCase(QObject *extendedCase)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->setExtendedCase(qmodelingobjectproperty_cast<QUmlUseCase *>(extendedCase));
}

void QUmlExtendObject::setExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->setExtension(qmodelingobjectproperty_cast<QUmlUseCase *>(extension));
}

void QUmlExtendObject::addExtensionLocation(QObject *extensionLocation)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->addExtensionLocation(qmodelingobjectproperty_cast<QUmlExtensionPoint *>(extensionLocation));
}

void QUmlExtendObject::removeExtensionLocation(QObject *extensionLocation)
{
    qmodelingobjectproperty_cast<QUmlExtend *>(this)->removeExtensionLocation(qmodelingobjectproperty_cast<QUmlExtensionPoint *>(extensionLocation));
}

QT_END_NAMESPACE

