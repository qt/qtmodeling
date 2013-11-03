/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofoperationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofOperation>
#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofDataType>
#include <QtMof/QMofElement>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofPackageImport>
#include <QtMof/QMofParameter>
#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

QMofOperationObject::QMofOperationObject(QMofOperation *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofOperationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofOperation *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofOperationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofOperation *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofOperationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofOperation *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOperation *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

QString QMofOperationObject::name() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->name();
}

QObject *QMofOperationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QMofOperation *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOperation *>(this)->namespace_()->asQModelingObject();
}

QString QMofOperationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->qualifiedName();
}

QtMof::VisibilityKind QMofOperationObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QMofOperationObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->isLeaf();
}

const QSet<QObject *> QMofOperationObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QMofRedefinableElement *element, qmodelingelementproperty_cast<QMofOperation *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofOperationObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofOperation *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QMofOperationObject::featuringClassifiers() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofOperation *>(this)->featuringClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofOperationObject::isStatic() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->isStatic();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QMofOperationObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QMofElementImport *element, qmodelingelementproperty_cast<QMofOperation *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofOperationObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofOperation *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofOperationObject::members() const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofOperation *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofOperationObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofOperation *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofOperationObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QMofConstraint *element, qmodelingelementproperty_cast<QMofOperation *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofOperationObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QMofPackageImport *element, qmodelingelementproperty_cast<QMofOperation *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Operation]

QObject *QMofOperationObject::bodyCondition() const
{
    if (!qmodelingelementproperty_cast<QMofOperation *>(this)->bodyCondition())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOperation *>(this)->bodyCondition()->asQModelingObject();
}

QObject *QMofOperationObject::class_() const
{
    if (!qmodelingelementproperty_cast<QMofOperation *>(this)->class_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOperation *>(this)->class_()->asQModelingObject();
}

QObject *QMofOperationObject::datatype() const
{
    if (!qmodelingelementproperty_cast<QMofOperation *>(this)->datatype())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOperation *>(this)->datatype()->asQModelingObject();
}

bool QMofOperationObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->isOrdered();
}

bool QMofOperationObject::isQuery() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->isQuery();
}

bool QMofOperationObject::isUnique() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->isUnique();
}

int QMofOperationObject::lower() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->lower();
}

const QList<QObject *> QMofOperationObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QMofParameter *element, qmodelingelementproperty_cast<QMofOperation *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QMofOperationObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QMofConstraint *element, qmodelingelementproperty_cast<QMofOperation *>(this)->postconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofOperationObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QMofConstraint *element, qmodelingelementproperty_cast<QMofOperation *>(this)->preconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofOperationObject::raisedExceptions() const
{
    QSet<QObject *> set;
    foreach (QMofType *element, qmodelingelementproperty_cast<QMofOperation *>(this)->raisedExceptions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofOperationObject::redefinedOperations() const
{
    QSet<QObject *> set;
    foreach (QMofOperation *element, qmodelingelementproperty_cast<QMofOperation *>(this)->redefinedOperations())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofOperationObject::type() const
{
    if (!qmodelingelementproperty_cast<QMofOperation *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOperation *>(this)->type()->asQModelingObject();
}

int QMofOperationObject::upper() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->upper();
}

// OPERATIONS [Element]

QSet<QObject *> QMofOperationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofOperation *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofOperationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->mustBeOwned();
}

QObject *QMofOperationObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofOperation *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOperation *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofOperationObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofOperation *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofOperation *>(this)->container()->asQModelingObject();
}

bool QMofOperationObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofOperationObject::delete_()
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->delete_();
}

// OPERATIONS [NamedElement]

QList<QObject *> QMofOperationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QMofNamespace *element, qmodelingelementproperty_cast<QMofOperation *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QString QMofOperationObject::separator() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QMofOperationObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QMofOperationObject::excludeCollisions(QObject *imps) const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofOperation *>(this)->excludeCollisions(qmodelingelementproperty_cast<QMofPackageableElement *>(imps)))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QMofOperationObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QMofNamedElement *>(element));
}

QSet<QObject *> QMofOperationObject::importMembers(QObject *imps) const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofOperation *>(this)->importMembers(qmodelingelementproperty_cast<QMofPackageableElement *>(imps)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofOperationObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->membersAreDistinguishable();
}

// OPERATIONS [BehavioralFeature]

bool QMofOperationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QMofNamedElement *>(n), qmodelingelementproperty_cast<QMofNamespace *>(ns));
}

// OPERATIONS [Operation]

bool QMofOperationObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QMofOperation *>(this)->isConsistentWith(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinee));
}

QSet<QObject *> QMofOperationObject::returnResult() const
{
    QSet<QObject *> set;
    foreach (QMofParameter *element, qmodelingelementproperty_cast<QMofOperation *>(this)->returnResult())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofOperationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofOperationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofOperationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofOperationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofOperationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QMofOperationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QMofOperationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setNamespace(qmodelingelementproperty_cast<QMofNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QMofOperationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QMofOperationObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QMofOperationObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setLeaf(isLeaf);
    emit isLeafChanged(this->isLeaf());
}

void QMofOperationObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QMofOperationObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QMofOperationObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QMofOperationObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QMofClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

void QMofOperationObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QMofClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QMofOperationObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addFeaturingClassifier(qmodelingelementproperty_cast<QMofClassifier *>(featuringClassifier));
    emit featuringClassifiersChanged(this->featuringClassifiers());
}

void QMofOperationObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeFeaturingClassifier(qmodelingelementproperty_cast<QMofClassifier *>(featuringClassifier));
    emit featuringClassifiersChanged(this->featuringClassifiers());
}

void QMofOperationObject::setStatic(bool isStatic)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setStatic(isStatic);
    emit isStaticChanged(this->isStatic());
}

void QMofOperationObject::unsetStatic()
{
    Q_D(QModelingObject);
    setStatic(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isStatic"));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QMofOperationObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addElementImport(qmodelingelementproperty_cast<QMofElementImport *>(elementImport));
    emit elementImportsChanged(this->elementImports());
}

void QMofOperationObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeElementImport(qmodelingelementproperty_cast<QMofElementImport *>(elementImport));
    emit elementImportsChanged(this->elementImports());
}

void QMofOperationObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addImportedMember(qmodelingelementproperty_cast<QMofPackageableElement *>(importedMember));
    emit importedMembersChanged(this->importedMembers());
}

void QMofOperationObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeImportedMember(qmodelingelementproperty_cast<QMofPackageableElement *>(importedMember));
    emit importedMembersChanged(this->importedMembers());
}

void QMofOperationObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addMember(qmodelingelementproperty_cast<QMofNamedElement *>(member));
    emit membersChanged(this->members());
}

void QMofOperationObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeMember(qmodelingelementproperty_cast<QMofNamedElement *>(member));
    emit membersChanged(this->members());
}

void QMofOperationObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addOwnedMember(qmodelingelementproperty_cast<QMofNamedElement *>(ownedMember));
    emit ownedMembersChanged(this->ownedMembers());
}

void QMofOperationObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QMofNamedElement *>(ownedMember));
    emit ownedMembersChanged(this->ownedMembers());
}

void QMofOperationObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addOwnedRule(qmodelingelementproperty_cast<QMofConstraint *>(ownedRule));
    emit ownedRulesChanged(this->ownedRules());
}

void QMofOperationObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QMofConstraint *>(ownedRule));
    emit ownedRulesChanged(this->ownedRules());
}

void QMofOperationObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addPackageImport(qmodelingelementproperty_cast<QMofPackageImport *>(packageImport));
    emit packageImportsChanged(this->packageImports());
}

void QMofOperationObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removePackageImport(qmodelingelementproperty_cast<QMofPackageImport *>(packageImport));
    emit packageImportsChanged(this->packageImports());
}

// SLOTS FOR OWNED ATTRIBUTES [Operation]

void QMofOperationObject::setBodyCondition(QObject *bodyCondition)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setBodyCondition(qmodelingelementproperty_cast<QMofConstraint *>(bodyCondition));
    emit bodyConditionChanged(this->bodyCondition());
}

void QMofOperationObject::setClass(QObject *class_)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setClass(qmodelingelementproperty_cast<QMofClass *>(class_));
    emit classChanged(this->class_());
}

void QMofOperationObject::setDatatype(QObject *datatype)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setDatatype(qmodelingelementproperty_cast<QMofDataType *>(datatype));
    emit datatypeChanged(this->datatype());
}

void QMofOperationObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setOrdered(isOrdered);
    emit isOrderedChanged(this->isOrdered());
}

void QMofOperationObject::unsetOrdered()
{
    Q_D(QModelingObject);
    setOrdered(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isOrdered"));
}

void QMofOperationObject::setQuery(bool isQuery)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setQuery(isQuery);
    emit isQueryChanged(this->isQuery());
}

void QMofOperationObject::unsetQuery()
{
    Q_D(QModelingObject);
    setQuery(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isQuery"));
}

void QMofOperationObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setUnique(isUnique);
    emit isUniqueChanged(this->isUnique());
}

void QMofOperationObject::unsetUnique()
{
    Q_D(QModelingObject);

    setUnique(true);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isUnique"));
}

void QMofOperationObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setLower(lower);
    emit lowerChanged(this->lower());
}

void QMofOperationObject::unsetLower()
{
    Q_D(QModelingObject);
    setLower(1);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QMofOperationObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QMofParameter *>(ownedParameter));
    emit ownedParametersChanged(this->ownedParameters());
}

void QMofOperationObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QMofParameter *>(ownedParameter));
    emit ownedParametersChanged(this->ownedParameters());
}

void QMofOperationObject::addPostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addPostcondition(qmodelingelementproperty_cast<QMofConstraint *>(postcondition));
    emit postconditionsChanged(this->postconditions());
}

void QMofOperationObject::removePostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removePostcondition(qmodelingelementproperty_cast<QMofConstraint *>(postcondition));
    emit postconditionsChanged(this->postconditions());
}

void QMofOperationObject::addPrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addPrecondition(qmodelingelementproperty_cast<QMofConstraint *>(precondition));
    emit preconditionsChanged(this->preconditions());
}

void QMofOperationObject::removePrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removePrecondition(qmodelingelementproperty_cast<QMofConstraint *>(precondition));
    emit preconditionsChanged(this->preconditions());
}

void QMofOperationObject::addRaisedException(QObject *raisedException)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addRaisedException(qmodelingelementproperty_cast<QMofType *>(raisedException));
    emit raisedExceptionsChanged(this->raisedExceptions());
}

void QMofOperationObject::removeRaisedException(QObject *raisedException)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeRaisedException(qmodelingelementproperty_cast<QMofType *>(raisedException));
    emit raisedExceptionsChanged(this->raisedExceptions());
}

void QMofOperationObject::addRedefinedOperation(QObject *redefinedOperation)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->addRedefinedOperation(qmodelingelementproperty_cast<QMofOperation *>(redefinedOperation));
    emit redefinedOperationsChanged(this->redefinedOperations());
}

void QMofOperationObject::removeRedefinedOperation(QObject *redefinedOperation)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->removeRedefinedOperation(qmodelingelementproperty_cast<QMofOperation *>(redefinedOperation));
    emit redefinedOperationsChanged(this->redefinedOperations());
}

void QMofOperationObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setType(qmodelingelementproperty_cast<QMofType *>(type));
    emit typeChanged(this->type());
}

void QMofOperationObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QMofOperation *>(this)->setUpper(upper);
    emit upperChanged(this->upper());
}

void QMofOperationObject::unsetUpper()
{
    Q_D(QModelingObject);
    setUpper(1);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}


void QMofOperationObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMofElement");
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QMofNamedElement");
    d->groupProperties.insert(QStringLiteral("QMofNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QMofNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QMofNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    d->groupProperties.insert(QStringLiteral("QMofNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QMofRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QMofRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QMofRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QMofRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QMofFeature");
    d->groupProperties.insert(QStringLiteral("QMofFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("featuringClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QMofFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isStatic"))));

    d->propertyGroups << QStringLiteral("QMofNamespace");
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QMofBehavioralFeature");

    d->propertyGroups << QStringLiteral("QMofOperation");
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("bodyCondition"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("class_"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("datatype"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isOrdered"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isQuery"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isUnique"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lower"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameters"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("postconditions"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("preconditions"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("raisedExceptions"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedOperations"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));
    d->groupProperties.insert(QStringLiteral("QMofOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upper"))));
}

void QMofOperationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("Element-owner A_member_memberNamespace-memberNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QMofRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QMofRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QMofRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, PropertyClassRole, QStringLiteral("QMofFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, DocumentationRole, QStringLiteral("The Classifiers that have this Feature as a feature."));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, featuringClassifiers, OppositeEndRole, QStringLiteral("Classifier-feature"));

    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, PropertyClassRole, QStringLiteral("QMofFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, DocumentationRole, QStringLiteral("Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true)."));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofFeature, isStatic, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, DocumentationRole, QStringLiteral("References the ElementImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, OppositeEndRole, QStringLiteral("ElementImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, DocumentationRole, QStringLiteral("References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, DocumentationRole, QStringLiteral("A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, DocumentationRole, QStringLiteral("A collection of NamedElements owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, OppositeEndRole, QStringLiteral("NamedElement-namespace"));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, DocumentationRole, QStringLiteral("Specifies a set of Constraints owned by this Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, OppositeEndRole, QStringLiteral("Constraint-context"));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, DocumentationRole, QStringLiteral("References the PackageImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, OppositeEndRole, QStringLiteral("PackageImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, ownedParameters, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, ownedParameters, PropertyClassRole, QStringLiteral("QMofBehavioralFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, ownedParameters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, ownedParameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, ownedParameters, DocumentationRole, QStringLiteral("Specifies the ordered set of formal parameters of this BehavioralFeature."));
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, ownedParameters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, ownedParameters, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, ownedParameters, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, raisedExceptions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, raisedExceptions, PropertyClassRole, QStringLiteral("QMofBehavioralFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, raisedExceptions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, raisedExceptions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, raisedExceptions, DocumentationRole, QStringLiteral("References the Types representing exceptions that may be raised during an invocation of this feature."));
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, raisedExceptions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, raisedExceptions, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofBehavioralFeature, raisedExceptions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, bodyCondition, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, bodyCondition, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, bodyCondition, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, bodyCondition, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, bodyCondition, DocumentationRole, QStringLiteral("An optional Constraint on the result values of an invocation of this Operation."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, bodyCondition, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, bodyCondition, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, bodyCondition, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, class_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, class_, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, class_, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, class_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, class_, DocumentationRole, QStringLiteral("The class that owns the operation."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, class_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, class_, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace Feature-featuringClassifier RedefinableElement-redefinitionContext"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, class_, OppositeEndRole, QStringLiteral("Class-ownedOperation"));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, datatype, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, datatype, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, datatype, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, datatype, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, datatype, DocumentationRole, QStringLiteral("The DataType that owns this Operation."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, datatype, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, datatype, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace Feature-featuringClassifier RedefinableElement-redefinitionContext"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, datatype, OppositeEndRole, QStringLiteral("DataType-ownedOperation"));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isOrdered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isOrdered, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isOrdered, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isOrdered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isOrdered, DocumentationRole, QStringLiteral("Specifies whether the return parameter is ordered or not, if present."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isOrdered, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isOrdered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isOrdered, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isQuery, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isQuery, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isQuery, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isQuery, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isQuery, DocumentationRole, QStringLiteral("Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false)."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isQuery, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isQuery, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isQuery, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isUnique, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isUnique, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isUnique, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isUnique, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isUnique, DocumentationRole, QStringLiteral("Specifies whether the return parameter is unique or not, if present."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isUnique, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isUnique, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, isUnique, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, lower, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, lower, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, lower, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, lower, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, lower, DocumentationRole, QStringLiteral("Specifies the lower multiplicity of the return parameter, if present."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, lower, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, lower, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, lower, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, ownedParameters, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, ownedParameters, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, ownedParameters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, ownedParameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, ownedParameters, DocumentationRole, QStringLiteral("Specifies the parameters owned by this Operation."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, ownedParameters, RedefinedPropertiesRole, QStringLiteral("BehavioralFeature-ownedParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, ownedParameters, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, ownedParameters, OppositeEndRole, QStringLiteral("Parameter-operation"));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, postconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, postconditions, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, postconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, postconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, postconditions, DocumentationRole, QStringLiteral("An optional set of Constraints specifying the state of the system when the Operation is completed."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, postconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, postconditions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, postconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, preconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, preconditions, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, preconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, preconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, preconditions, DocumentationRole, QStringLiteral("An optional set of Constraints on the state of the system when the Operation is invoked."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, preconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, preconditions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, preconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, raisedExceptions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, raisedExceptions, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, raisedExceptions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, raisedExceptions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, raisedExceptions, DocumentationRole, QStringLiteral("References the Types representing exceptions that may be raised during an invocation of this operation."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, raisedExceptions, RedefinedPropertiesRole, QStringLiteral("BehavioralFeature-raisedException"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, raisedExceptions, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, raisedExceptions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, redefinedOperations, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, redefinedOperations, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, redefinedOperations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, redefinedOperations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, redefinedOperations, DocumentationRole, QStringLiteral("References the Operations that are redefined by this Operation."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, redefinedOperations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, redefinedOperations, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, redefinedOperations, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, type, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, type, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, type, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, type, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, type, DocumentationRole, QStringLiteral("Specifies the return result of the operation, if present."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, type, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, type, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, type, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, upper, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, upper, PropertyClassRole, QStringLiteral("QMofOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, upper, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, upper, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, upper, DocumentationRole, QStringLiteral("Specifies the upper multiplicity of the return parameter, if present."));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, upper, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, upper, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofOperation, upper, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

