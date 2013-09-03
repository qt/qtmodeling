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
#include "qumlcollaborationuseobject_p.h"

#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlCollaboration>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlCollaborationUseObject::QUmlCollaborationUseObject(QUmlCollaborationUse *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlCollaborationUseObject::~QUmlCollaborationUseObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCollaborationUseObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationUseObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCollaborationUseObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCollaborationUseObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlCollaborationUseObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->name();
}

QObject *QUmlCollaborationUseObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->nameExpression()->asQObject();
}

QObject *QUmlCollaborationUseObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->namespace_()->asQObject();
}

QString QUmlCollaborationUseObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCollaborationUseObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->visibility();
}

// OWNED ATTRIBUTES [CollaborationUse]

const QSet<QObject *> QUmlCollaborationUseObject::roleBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->roleBinding())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCollaborationUseObject::type() const
{
    return qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->type()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCollaborationUseObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCollaborationUseObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCollaborationUseObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCollaborationUseObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCollaborationUseObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCollaborationUseObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCollaborationUseObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCollaborationUseObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCollaborationUseObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCollaborationUseObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCollaborationUseObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCollaborationUseObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCollaborationUseObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCollaborationUseObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->setName(name);
}
    
void QUmlCollaborationUseObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCollaborationUseObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCollaborationUseObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlCollaborationUseObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [CollaborationUse]

void QUmlCollaborationUseObject::addRoleBinding(QObject *roleBinding)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->addRoleBinding(qmodelingobjectproperty_cast<QUmlDependency *>(roleBinding));
}

void QUmlCollaborationUseObject::removeRoleBinding(QObject *roleBinding)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->removeRoleBinding(qmodelingobjectproperty_cast<QUmlDependency *>(roleBinding));
}

void QUmlCollaborationUseObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlCollaborationUse *>(this)->setType(qmodelingobjectproperty_cast<QUmlCollaboration *>(type));
}

QT_END_NAMESPACE

