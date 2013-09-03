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
#include "qumlinteractionoperandobject_p.h"

#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionConstraint>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlInteractionOperandObject::QUmlInteractionOperandObject(QUmlInteractionOperand *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlInteractionOperandObject::~QUmlInteractionOperandObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInteractionOperandObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInteractionOperandObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInteractionOperandObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInteractionOperandObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->name();
}

QObject *QUmlInteractionOperandObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInteractionOperandObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->namespace_()->asQObject();
}

QString QUmlInteractionOperandObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlInteractionOperandObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlInteractionOperandObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->covered())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInteractionOperandObject::enclosingInteraction() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->enclosingInteraction()->asQObject();
}

QObject *QUmlInteractionOperandObject::enclosingOperand() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->enclosingOperand()->asQObject();
}

const QSet<QObject *> QUmlInteractionOperandObject::generalOrdering() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->generalOrdering())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlInteractionOperandObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [InteractionOperand]

const QList<QObject *> QUmlInteractionOperandObject::fragment() const
{
    QList<QObject *> list;
    foreach (QUmlInteractionFragment *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->fragment())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlInteractionOperandObject::guard() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->guard()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInteractionOperandObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionOperandObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInteractionOperandObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInteractionOperandObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionOperandObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInteractionOperandObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlInteractionOperandObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlInteractionOperandObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlInteractionOperandObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlInteractionOperandObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->membersAreDistinguishable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInteractionOperandObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionOperandObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionOperandObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionOperandObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionOperandObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInteractionOperandObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionOperandObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionOperandObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->setName(name);
}
    
void QUmlInteractionOperandObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInteractionOperandObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInteractionOperandObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlInteractionOperandObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlInteractionOperandObject::addCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionOperandObject::removeCovered(QObject *covered)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removeCovered(qmodelingobjectproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionOperandObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->setEnclosingInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlInteractionOperandObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->setEnclosingOperand(qmodelingobjectproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlInteractionOperandObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlInteractionOperandObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removeGeneralOrdering(qmodelingobjectproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlInteractionOperandObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInteractionOperandObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInteractionOperandObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInteractionOperandObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInteractionOperandObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInteractionOperandObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInteractionOperandObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInteractionOperandObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInteractionOperandObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInteractionOperandObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInteractionOperandObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlInteractionOperandObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionOperand]

void QUmlInteractionOperandObject::addFragment(QObject *fragment)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->addFragment(qmodelingobjectproperty_cast<QUmlInteractionFragment *>(fragment));
}

void QUmlInteractionOperandObject::removeFragment(QObject *fragment)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->removeFragment(qmodelingobjectproperty_cast<QUmlInteractionFragment *>(fragment));
}

void QUmlInteractionOperandObject::setGuard(QObject *guard)
{
    qmodelingobjectproperty_cast<QUmlInteractionOperand *>(this)->setGuard(qmodelingobjectproperty_cast<QUmlInteractionConstraint *>(guard));
}

QT_END_NAMESPACE

