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
#include "qmofclassobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofElement>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofFeature>
#include <QtMof/QMofGeneralization>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofObject>
#include <QtMof/QMofOperation>
#include <QtMof/QMofPackage>
#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofPackageImport>
#include <QtMof/QMofProperty>
#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

QMofClassObject::QMofClassObject(QMofClass *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofClassObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofClass *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofClassObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofClass *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofClassObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofClass *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofClass *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

QString QMofClassObject::name() const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->name();
}

QObject *QMofClassObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QMofClass *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofClass *>(this)->namespace_()->asQModelingObject();
}

QString QMofClassObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtMof::VisibilityKind QMofClassObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QMofClassObject::package() const
{
    if (!qmodelingelementproperty_cast<QMofClass *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofClass *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QMofClassObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->isLeaf();
}

const QSet<QObject *> QMofClassObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QMofRedefinableElement *element, qmodelingelementproperty_cast<QMofClass *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofClassObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofClass *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QMofClassObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QMofElementImport *element, qmodelingelementproperty_cast<QMofClass *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofClassObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofClass *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofClassObject::members() const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofClass *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofClassObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofClass *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofClassObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QMofConstraint *element, qmodelingelementproperty_cast<QMofClass *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofClassObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QMofPackageImport *element, qmodelingelementproperty_cast<QMofClass *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QMofClassObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QMofProperty *element, qmodelingelementproperty_cast<QMofClass *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofClassObject::features() const
{
    QSet<QObject *> set;
    foreach (QMofFeature *element, qmodelingelementproperty_cast<QMofClass *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofClassObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QMofGeneralization *element, qmodelingelementproperty_cast<QMofClass *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofClassObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofClass *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofClassObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->isFinalSpecialization();
}

const QSet<QObject *> QMofClassObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofClass *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

bool QMofClassObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->isAbstract();
}

const QList<QObject *> QMofClassObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofClass *>(this)->nestedClassifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QMofClassObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QMofProperty *element, qmodelingelementproperty_cast<QMofClass *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QMofClassObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QMofOperation *element, qmodelingelementproperty_cast<QMofClass *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QMofClassObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QMofClass *element, qmodelingelementproperty_cast<QMofClass *>(this)->superClasses())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QMofClassObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofClass *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofClassObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->mustBeOwned();
}

QObject *QMofClassObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofClass *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofClass *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofClassObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofClass *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofClass *>(this)->container()->asQModelingObject();
}

bool QMofClassObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofClassObject::delete_()
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->delete_();
}

// OPERATIONS [NamedElement]

QList<QObject *> QMofClassObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QMofNamespace *element, qmodelingelementproperty_cast<QMofClass *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

bool QMofClassObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QMofNamedElement *>(n), qmodelingelementproperty_cast<QMofNamespace *>(ns));
}

QString QMofClassObject::separator() const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->separator();
}

// OPERATIONS [Type]

bool QMofClassObject::isInstance(QObject *object) const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->isInstance(qmodelingelementproperty_cast<QMofObject *>(object));
}

// OPERATIONS [RedefinableElement]

bool QMofClassObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->isConsistentWith(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinee));
}

bool QMofClassObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QMofClassObject::excludeCollisions(QObject *imps) const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofClass *>(this)->excludeCollisions(qmodelingelementproperty_cast<QMofPackageableElement *>(imps)))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QMofClassObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QMofNamedElement *>(element));
}

QSet<QObject *> QMofClassObject::importMembers(QObject *imps) const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofClass *>(this)->importMembers(qmodelingelementproperty_cast<QMofPackageableElement *>(imps)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofClassObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->membersAreDistinguishable();
}

// OPERATIONS [Classifier]

QSet<QObject *> QMofClassObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QMofFeature *element, qmodelingelementproperty_cast<QMofClass *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QMofClassObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofClass *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofClassObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->conformsTo(qmodelingelementproperty_cast<QMofClassifier *>(other));
}

bool QMofClassObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QMofNamedElement *>(n));
}

QSet<QObject *> QMofClassObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofClass *>(this)->inheritableMembers(qmodelingelementproperty_cast<QMofClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofClassObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QMofClass *>(this)->maySpecializeType(qmodelingelementproperty_cast<QMofClassifier *>(c));
}

QSet<QObject *> QMofClassObject::parents() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofClass *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QMofClassObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QMofNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QMofNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofClass *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofClassObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofClassObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofClassObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofClassObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofClassObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QMofClassObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->setName(name);
}

void QMofClassObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->setNamespace(qmodelingelementproperty_cast<QMofNamespace *>(namespace_));
}

void QMofClassObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QMofClassObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->setVisibility(visibility);
}

void QMofClassObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QMofClassObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->setPackage(qmodelingelementproperty_cast<QMofPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QMofClassObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->setLeaf(isLeaf);
}

void QMofClassObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QMofClassObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinedElement));
}

void QMofClassObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinedElement));
}

void QMofClassObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QMofClassifier *>(redefinitionContext));
}

void QMofClassObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QMofClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QMofClassObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addElementImport(qmodelingelementproperty_cast<QMofElementImport *>(elementImport));
}

void QMofClassObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeElementImport(qmodelingelementproperty_cast<QMofElementImport *>(elementImport));
}

void QMofClassObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addImportedMember(qmodelingelementproperty_cast<QMofPackageableElement *>(importedMember));
}

void QMofClassObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeImportedMember(qmodelingelementproperty_cast<QMofPackageableElement *>(importedMember));
}

void QMofClassObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addMember(qmodelingelementproperty_cast<QMofNamedElement *>(member));
}

void QMofClassObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeMember(qmodelingelementproperty_cast<QMofNamedElement *>(member));
}

void QMofClassObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addOwnedMember(qmodelingelementproperty_cast<QMofNamedElement *>(ownedMember));
}

void QMofClassObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QMofNamedElement *>(ownedMember));
}

void QMofClassObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addOwnedRule(qmodelingelementproperty_cast<QMofConstraint *>(ownedRule));
}

void QMofClassObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QMofConstraint *>(ownedRule));
}

void QMofClassObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addPackageImport(qmodelingelementproperty_cast<QMofPackageImport *>(packageImport));
}

void QMofClassObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removePackageImport(qmodelingelementproperty_cast<QMofPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QMofClassObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addAttribute(qmodelingelementproperty_cast<QMofProperty *>(attribute));
}

void QMofClassObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeAttribute(qmodelingelementproperty_cast<QMofProperty *>(attribute));
}

void QMofClassObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addFeature(qmodelingelementproperty_cast<QMofFeature *>(feature));
}

void QMofClassObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeFeature(qmodelingelementproperty_cast<QMofFeature *>(feature));
}

void QMofClassObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addGeneralization(qmodelingelementproperty_cast<QMofGeneralization *>(generalization));
}

void QMofClassObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeGeneralization(qmodelingelementproperty_cast<QMofGeneralization *>(generalization));
}

void QMofClassObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addInheritedMember(qmodelingelementproperty_cast<QMofNamedElement *>(inheritedMember));
}

void QMofClassObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QMofNamedElement *>(inheritedMember));
}

void QMofClassObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QMofClassObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QMofClassObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QMofClassifier *>(redefinedClassifier));
}

void QMofClassObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QMofClassifier *>(redefinedClassifier));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QMofClassObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->setAbstract(isAbstract);
}

void QMofClassObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QMofClassObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addNestedClassifier(qmodelingelementproperty_cast<QMofClassifier *>(nestedClassifier));
}

void QMofClassObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeNestedClassifier(qmodelingelementproperty_cast<QMofClassifier *>(nestedClassifier));
}

void QMofClassObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QMofProperty *>(ownedAttribute));
}

void QMofClassObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QMofProperty *>(ownedAttribute));
}

void QMofClassObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QMofOperation *>(ownedOperation));
}

void QMofClassObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QMofOperation *>(ownedOperation));
}

void QMofClassObject::addSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->addSuperClass(qmodelingelementproperty_cast<QMofClass *>(superClass));
}

void QMofClassObject::removeSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QMofClass *>(this)->removeSuperClass(qmodelingelementproperty_cast<QMofClass *>(superClass));
}


void QMofClassObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QMofPackageableElement");
    d->groupProperties.insert(QStringLiteral("QMofPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QMofType");
    d->groupProperties.insert(QStringLiteral("QMofType"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("package"))));

    d->propertyGroups << QStringLiteral("QMofRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QMofRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QMofRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QMofRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QMofNamespace");
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QMofClassifier");
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("attributes"))));
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("features"))));
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalizations"))));
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inheritedMembers"))));
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isFinalSpecialization"))));
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedClassifiers"))));

    d->propertyGroups << QStringLiteral("QMofClass");
    d->groupProperties.insert(QStringLiteral("QMofClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isAbstract"))));
    d->groupProperties.insert(QStringLiteral("QMofClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nestedClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QMofClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedAttributes"))));
    d->groupProperties.insert(QStringLiteral("QMofClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedOperations"))));
    d->groupProperties.insert(QStringLiteral("QMofClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("superClasses"))));
}

void QMofClassObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, PropertyClassRole, QStringLiteral("QMofPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofType, package, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofType, package, PropertyClassRole, QStringLiteral("QMofType"));
    Q_DECLARE_METAPROPERTY_INFO(QMofType, package, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofType, package, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofType, package, DocumentationRole, QStringLiteral("Specifies the owning package of this classifier, if any."));
    Q_DECLARE_METAPROPERTY_INFO(QMofType, package, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofType, package, SubsettedPropertiesRole, QStringLiteral("A_packagedElement_owningPackage-owningPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QMofType, package, OppositeEndRole, QStringLiteral("Package-ownedType"));

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

    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, attributes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, attributes, PropertyClassRole, QStringLiteral("QMofClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, attributes, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, attributes, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, attributes, DocumentationRole, QStringLiteral("Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, attributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, attributes, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, attributes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, features, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, features, PropertyClassRole, QStringLiteral("QMofClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, features, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, features, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, features, DocumentationRole, QStringLiteral("Specifies each feature defined in the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, features, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, features, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, features, OppositeEndRole, QStringLiteral("Feature-featuringClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generals, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generals, PropertyClassRole, QStringLiteral("QMofClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generals, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generals, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generals, DocumentationRole, QStringLiteral("Specifies the general Classifiers for this Classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generals, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generals, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generals, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generalizations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generalizations, PropertyClassRole, QStringLiteral("QMofClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generalizations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generalizations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generalizations, DocumentationRole, QStringLiteral("Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generalizations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generalizations, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, generalizations, OppositeEndRole, QStringLiteral("Generalization-specific"));

    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, inheritedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, inheritedMembers, PropertyClassRole, QStringLiteral("QMofClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, inheritedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, inheritedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, inheritedMembers, DocumentationRole, QStringLiteral("Specifies all elements inherited by this classifier from the general classifiers."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, inheritedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, inheritedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, inheritedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isAbstract, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isAbstract, PropertyClassRole, QStringLiteral("QMofClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isAbstract, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isAbstract, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isAbstract, DocumentationRole, QStringLiteral("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isAbstract, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isAbstract, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isAbstract, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isFinalSpecialization, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isFinalSpecialization, PropertyClassRole, QStringLiteral("QMofClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isFinalSpecialization, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isFinalSpecialization, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isFinalSpecialization, DocumentationRole, QStringLiteral("If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isFinalSpecialization, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isFinalSpecialization, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, isFinalSpecialization, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, redefinedClassifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, redefinedClassifiers, PropertyClassRole, QStringLiteral("QMofClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, redefinedClassifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, redefinedClassifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, redefinedClassifiers, DocumentationRole, QStringLiteral("References the Classifiers that are redefined by this Classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, redefinedClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, redefinedClassifiers, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClassifier, redefinedClassifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofClass, isAbstract, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, isAbstract, PropertyClassRole, QStringLiteral("QMofClass"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, isAbstract, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, isAbstract, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, isAbstract, DocumentationRole, QStringLiteral("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, isAbstract, RedefinedPropertiesRole, QStringLiteral("Classifier-isAbstract"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, isAbstract, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, isAbstract, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofClass, nestedClassifiers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, nestedClassifiers, PropertyClassRole, QStringLiteral("QMofClass"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, nestedClassifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, nestedClassifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, nestedClassifiers, DocumentationRole, QStringLiteral("References all the Classifiers that are defined (nested) within the Class."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, nestedClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, nestedClassifiers, SubsettedPropertiesRole, QStringLiteral("A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, nestedClassifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedAttributes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedAttributes, PropertyClassRole, QStringLiteral("QMofClass"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedAttributes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedAttributes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedAttributes, DocumentationRole, QStringLiteral("The attributes (i.e. the properties) owned by the class."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedAttributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedAttributes, SubsettedPropertiesRole, QStringLiteral("Classifier-attribute Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedAttributes, OppositeEndRole, QStringLiteral("Property-class"));

    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedOperations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedOperations, PropertyClassRole, QStringLiteral("QMofClass"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedOperations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedOperations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedOperations, DocumentationRole, QStringLiteral("The operations owned by the class."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedOperations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedOperations, SubsettedPropertiesRole, QStringLiteral("Classifier-feature Namespace-ownedMember A_redefinitionContext_redefinableElement-redefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, ownedOperations, OppositeEndRole, QStringLiteral("Operation-class"));

    Q_DECLARE_METAPROPERTY_INFO(QMofClass, superClasses, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, superClasses, PropertyClassRole, QStringLiteral("QMofClass"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, superClasses, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, superClasses, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, superClasses, DocumentationRole, QStringLiteral("This gives the superclasses of a class."));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, superClasses, RedefinedPropertiesRole, QStringLiteral("Classifier-general"));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, superClasses, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofClass, superClasses, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

