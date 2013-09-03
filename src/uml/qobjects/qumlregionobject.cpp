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
#include "qumlregionobject_p.h"

#include <QtUml/QUmlRegion>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

QUmlRegionObject::QUmlRegionObject(QUmlRegion *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlRegionObject::~QUmlRegionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlRegion *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlRegionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlRegionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlRegionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlRegionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->name();
}

QObject *QUmlRegionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->nameExpression()->asQObject();
}

QObject *QUmlRegionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->namespace_()->asQObject();
}

QString QUmlRegionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlRegionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlRegionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->isLeaf();
}

const QSet<QObject *> QUmlRegionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlRegionObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Region]

QObject *QUmlRegionObject::extendedRegion() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->extendedRegion()->asQObject();
}

QObject *QUmlRegionObject::redefinitionContext() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->redefinitionContext()->asQObject();
}

QObject *QUmlRegionObject::state() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->state()->asQObject();
}

QObject *QUmlRegionObject::stateMachine() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->stateMachine()->asQObject();
}

const QSet<QObject *> QUmlRegionObject::subvertex() const
{
    QSet<QObject *> set;
    foreach (QUmlVertex *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->subvertex())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::transition() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->transition())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlRegionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRegionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlRegionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlRegionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRegionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlRegionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->separator();
}

// OPERATIONS [RedefinableElement]
// OPERATIONS [Namespace]

QSet<QObject *> QUmlRegionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlRegionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlRegionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlRegion *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlRegionObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->membersAreDistinguishable();
}

// OPERATIONS [Region]

bool QUmlRegionObject::belongsToPSM() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->belongsToPSM();
}

QObject *QUmlRegionObject::containingStateMachine() const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->containingStateMachine()->asQObject();
}

bool QUmlRegionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlRegionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlRegion *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRegion *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRegionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRegionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRegionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRegionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRegionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRegionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRegionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRegionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->setName(name);
}
    
void QUmlRegionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlRegionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlRegionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlRegionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRegionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->setLeaf(isLeaf);
}
    
void QUmlRegionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRegionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlRegionObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlRegionObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlRegionObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlRegionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlRegionObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlRegionObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlRegionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlRegionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlRegionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlRegionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlRegionObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlRegionObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [Region]

void QUmlRegionObject::setExtendedRegion(QObject *extendedRegion)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->setExtendedRegion(qmodelingobjectproperty_cast<QUmlRegion *>(extendedRegion));
}

void QUmlRegionObject::setRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->setRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlRegionObject::setState(QObject *state)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->setState(qmodelingobjectproperty_cast<QUmlState *>(state));
}

void QUmlRegionObject::setStateMachine(QObject *stateMachine)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->setStateMachine(qmodelingobjectproperty_cast<QUmlStateMachine *>(stateMachine));
}

void QUmlRegionObject::addSubvertex(QObject *subvertex)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addSubvertex(qmodelingobjectproperty_cast<QUmlVertex *>(subvertex));
}

void QUmlRegionObject::removeSubvertex(QObject *subvertex)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removeSubvertex(qmodelingobjectproperty_cast<QUmlVertex *>(subvertex));
}

void QUmlRegionObject::addTransition(QObject *transition)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->addTransition(qmodelingobjectproperty_cast<QUmlTransition *>(transition));
}

void QUmlRegionObject::removeTransition(QObject *transition)
{
    qmodelingobjectproperty_cast<QUmlRegion *>(this)->removeTransition(qmodelingobjectproperty_cast<QUmlTransition *>(transition));
}

QT_END_NAMESPACE

