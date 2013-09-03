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
#include "qumlredefinabletemplatesignatureobject_p.h"

#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlRedefinableTemplateSignatureObject::QUmlRedefinableTemplateSignatureObject(QUmlRedefinableTemplateSignature *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlRedefinableTemplateSignatureObject::~QUmlRedefinableTemplateSignatureObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlRedefinableTemplateSignatureObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [TemplateSignature]

const QList<QObject *> QUmlRedefinableTemplateSignatureObject::ownedParameter() const
{
    QList<QObject *> list;
    foreach (QUmlTemplateParameter *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->ownedParameter())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlRedefinableTemplateSignatureObject::parameter() const
{
    QList<QObject *> list;
    foreach (QUmlTemplateParameter *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->parameter())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlRedefinableTemplateSignatureObject::template_() const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->template_()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlRedefinableTemplateSignatureObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->name();
}

QObject *QUmlRedefinableTemplateSignatureObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->nameExpression()->asQObject();
}

QObject *QUmlRedefinableTemplateSignatureObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->namespace_()->asQObject();
}

QString QUmlRedefinableTemplateSignatureObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlRedefinableTemplateSignatureObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlRedefinableTemplateSignatureObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->isLeaf();
}

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [RedefinableTemplateSignature]

QObject *QUmlRedefinableTemplateSignatureObject::classifier() const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->classifier()->asQObject();
}

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::extendedSignature() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableTemplateSignature *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->extendedSignature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRedefinableTemplateSignatureObject::inheritedParameter() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateParameter *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->inheritedParameter())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlRedefinableTemplateSignatureObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRedefinableTemplateSignatureObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlRedefinableTemplateSignatureObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlRedefinableTemplateSignatureObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRedefinableTemplateSignatureObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlRedefinableTemplateSignatureObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlRedefinableTemplateSignatureObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [RedefinableTemplateSignature]

bool QUmlRedefinableTemplateSignatureObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRedefinableTemplateSignatureObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRedefinableTemplateSignatureObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRedefinableTemplateSignatureObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRedefinableTemplateSignatureObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRedefinableTemplateSignatureObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateSignature]

void QUmlRedefinableTemplateSignatureObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addOwnedParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(ownedParameter));
}

void QUmlRedefinableTemplateSignatureObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeOwnedParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(ownedParameter));
}

void QUmlRedefinableTemplateSignatureObject::addParameter(QObject *parameter)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(parameter));
}

void QUmlRedefinableTemplateSignatureObject::removeParameter(QObject *parameter)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(parameter));
}

void QUmlRedefinableTemplateSignatureObject::setTemplate(QObject *template_)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setTemplate(qmodelingobjectproperty_cast<QUmlTemplateableElement *>(template_));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRedefinableTemplateSignatureObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRedefinableTemplateSignatureObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRedefinableTemplateSignatureObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setName(name);
}
    
void QUmlRedefinableTemplateSignatureObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlRedefinableTemplateSignatureObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlRedefinableTemplateSignatureObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlRedefinableTemplateSignatureObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRedefinableTemplateSignatureObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setLeaf(isLeaf);
}
    
void QUmlRedefinableTemplateSignatureObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRedefinableTemplateSignatureObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRedefinableTemplateSignatureObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlRedefinableTemplateSignatureObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableTemplateSignature]

void QUmlRedefinableTemplateSignatureObject::setClassifier(QObject *classifier)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->setClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(classifier));
}

void QUmlRedefinableTemplateSignatureObject::addExtendedSignature(QObject *extendedSignature)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addExtendedSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(extendedSignature));
}

void QUmlRedefinableTemplateSignatureObject::removeExtendedSignature(QObject *extendedSignature)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeExtendedSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(extendedSignature));
}

void QUmlRedefinableTemplateSignatureObject::addInheritedParameter(QObject *inheritedParameter)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->addInheritedParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(inheritedParameter));
}

void QUmlRedefinableTemplateSignatureObject::removeInheritedParameter(QObject *inheritedParameter)
{
    qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(this)->removeInheritedParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(inheritedParameter));
}

QT_END_NAMESPACE

