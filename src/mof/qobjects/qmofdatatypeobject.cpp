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
#include "qmofdatatypeobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofDataType>
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

QMofDataTypeObject::QMofDataTypeObject(QMofDataType *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofDataTypeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofDataType *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofDataTypeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofDataType *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofDataTypeObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofDataType *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofDataType *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

QString QMofDataTypeObject::name() const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->name();
}

QObject *QMofDataTypeObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QMofDataType *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofDataType *>(this)->namespace_()->asQModelingObject();
}

QString QMofDataTypeObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtMof::VisibilityKind QMofDataTypeObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QMofDataTypeObject::package() const
{
    if (!qmodelingelementproperty_cast<QMofDataType *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofDataType *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QMofDataTypeObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->isLeaf();
}

const QSet<QObject *> QMofDataTypeObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QMofRedefinableElement *element, qmodelingelementproperty_cast<QMofDataType *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofDataTypeObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofDataType *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QMofDataTypeObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QMofElementImport *element, qmodelingelementproperty_cast<QMofDataType *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofDataTypeObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofDataType *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofDataTypeObject::members() const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofDataType *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofDataTypeObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofDataType *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofDataTypeObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QMofConstraint *element, qmodelingelementproperty_cast<QMofDataType *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofDataTypeObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QMofPackageImport *element, qmodelingelementproperty_cast<QMofDataType *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QMofDataTypeObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QMofProperty *element, qmodelingelementproperty_cast<QMofDataType *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofDataTypeObject::features() const
{
    QSet<QObject *> set;
    foreach (QMofFeature *element, qmodelingelementproperty_cast<QMofDataType *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofDataTypeObject::generals() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofDataType *>(this)->generals())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofDataTypeObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QMofGeneralization *element, qmodelingelementproperty_cast<QMofDataType *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofDataTypeObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofDataType *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofDataTypeObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->isAbstract();
}

bool QMofDataTypeObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->isFinalSpecialization();
}

const QSet<QObject *> QMofDataTypeObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofDataType *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DataType]

const QList<QObject *> QMofDataTypeObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QMofProperty *element, qmodelingelementproperty_cast<QMofDataType *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QMofDataTypeObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QMofOperation *element, qmodelingelementproperty_cast<QMofDataType *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QMofDataTypeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofDataType *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofDataTypeObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->mustBeOwned();
}

QObject *QMofDataTypeObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofDataType *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofDataType *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofDataTypeObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofDataType *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofDataType *>(this)->container()->asQModelingObject();
}

bool QMofDataTypeObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofDataTypeObject::delete_()
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->delete_();
}

// OPERATIONS [NamedElement]

QList<QObject *> QMofDataTypeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QMofNamespace *element, qmodelingelementproperty_cast<QMofDataType *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

bool QMofDataTypeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QMofNamedElement *>(n), qmodelingelementproperty_cast<QMofNamespace *>(ns));
}

QString QMofDataTypeObject::separator() const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->separator();
}

// OPERATIONS [Type]

bool QMofDataTypeObject::isInstance(QObject *object) const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->isInstance(qmodelingelementproperty_cast<QMofObject *>(object));
}

// OPERATIONS [RedefinableElement]

bool QMofDataTypeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->isConsistentWith(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinee));
}

bool QMofDataTypeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QMofDataTypeObject::excludeCollisions(QObject *imps) const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofDataType *>(this)->excludeCollisions(qmodelingelementproperty_cast<QMofPackageableElement *>(imps)))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QMofDataTypeObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QMofNamedElement *>(element));
}

QSet<QObject *> QMofDataTypeObject::importMembers(QObject *imps) const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofDataType *>(this)->importMembers(qmodelingelementproperty_cast<QMofPackageableElement *>(imps)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofDataTypeObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->membersAreDistinguishable();
}

// OPERATIONS [Classifier]

QSet<QObject *> QMofDataTypeObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QMofFeature *element, qmodelingelementproperty_cast<QMofDataType *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QMofDataTypeObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofDataType *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofDataTypeObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->conformsTo(qmodelingelementproperty_cast<QMofClassifier *>(other));
}

bool QMofDataTypeObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QMofNamedElement *>(n));
}

QSet<QObject *> QMofDataTypeObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofDataType *>(this)->inheritableMembers(qmodelingelementproperty_cast<QMofClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofDataTypeObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QMofDataType *>(this)->maySpecializeType(qmodelingelementproperty_cast<QMofClassifier *>(c));
}

QSet<QObject *> QMofDataTypeObject::parents() const
{
    QSet<QObject *> set;
    foreach (QMofClassifier *element, qmodelingelementproperty_cast<QMofDataType *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [DataType]

QSet<QObject *> QMofDataTypeObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QMofNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QMofNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofDataType *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofDataTypeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofDataTypeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofDataTypeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofDataTypeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofDataTypeObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QMofDataTypeObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->setName(name);
}

void QMofDataTypeObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->setNamespace(qmodelingelementproperty_cast<QMofNamespace *>(namespace_));
}

void QMofDataTypeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QMofDataTypeObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->setVisibility(visibility);
}

void QMofDataTypeObject::unsetVisibility()
{
    Q_D(QModelingObject);
    setVisibility(QtMof::VisibilityKindPublic);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QMofDataTypeObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->setPackage(qmodelingelementproperty_cast<QMofPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QMofDataTypeObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->setLeaf(isLeaf);
}

void QMofDataTypeObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QMofDataTypeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinedElement));
}

void QMofDataTypeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QMofRedefinableElement *>(redefinedElement));
}

void QMofDataTypeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QMofClassifier *>(redefinitionContext));
}

void QMofDataTypeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QMofClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QMofDataTypeObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addElementImport(qmodelingelementproperty_cast<QMofElementImport *>(elementImport));
}

void QMofDataTypeObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeElementImport(qmodelingelementproperty_cast<QMofElementImport *>(elementImport));
}

void QMofDataTypeObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addImportedMember(qmodelingelementproperty_cast<QMofPackageableElement *>(importedMember));
}

void QMofDataTypeObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeImportedMember(qmodelingelementproperty_cast<QMofPackageableElement *>(importedMember));
}

void QMofDataTypeObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addMember(qmodelingelementproperty_cast<QMofNamedElement *>(member));
}

void QMofDataTypeObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeMember(qmodelingelementproperty_cast<QMofNamedElement *>(member));
}

void QMofDataTypeObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addOwnedMember(qmodelingelementproperty_cast<QMofNamedElement *>(ownedMember));
}

void QMofDataTypeObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QMofNamedElement *>(ownedMember));
}

void QMofDataTypeObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addOwnedRule(qmodelingelementproperty_cast<QMofConstraint *>(ownedRule));
}

void QMofDataTypeObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QMofConstraint *>(ownedRule));
}

void QMofDataTypeObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addPackageImport(qmodelingelementproperty_cast<QMofPackageImport *>(packageImport));
}

void QMofDataTypeObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removePackageImport(qmodelingelementproperty_cast<QMofPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QMofDataTypeObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addAttribute(qmodelingelementproperty_cast<QMofProperty *>(attribute));
}

void QMofDataTypeObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeAttribute(qmodelingelementproperty_cast<QMofProperty *>(attribute));
}

void QMofDataTypeObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addFeature(qmodelingelementproperty_cast<QMofFeature *>(feature));
}

void QMofDataTypeObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeFeature(qmodelingelementproperty_cast<QMofFeature *>(feature));
}

void QMofDataTypeObject::addGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addGeneral(qmodelingelementproperty_cast<QMofClassifier *>(general));
}

void QMofDataTypeObject::removeGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeGeneral(qmodelingelementproperty_cast<QMofClassifier *>(general));
}

void QMofDataTypeObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addGeneralization(qmodelingelementproperty_cast<QMofGeneralization *>(generalization));
}

void QMofDataTypeObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeGeneralization(qmodelingelementproperty_cast<QMofGeneralization *>(generalization));
}

void QMofDataTypeObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addInheritedMember(qmodelingelementproperty_cast<QMofNamedElement *>(inheritedMember));
}

void QMofDataTypeObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QMofNamedElement *>(inheritedMember));
}

void QMofDataTypeObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->setAbstract(isAbstract);
}

void QMofDataTypeObject::unsetAbstract()
{
    Q_D(QModelingObject);
    setAbstract(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isAbstract"));
}

void QMofDataTypeObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QMofDataTypeObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    setFinalSpecialization(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isFinalSpecialization"));
}

void QMofDataTypeObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QMofClassifier *>(redefinedClassifier));
}

void QMofDataTypeObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QMofClassifier *>(redefinedClassifier));
}

// SLOTS FOR OWNED ATTRIBUTES [DataType]

void QMofDataTypeObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QMofProperty *>(ownedAttribute));
}

void QMofDataTypeObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QMofProperty *>(ownedAttribute));
}

void QMofDataTypeObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QMofOperation *>(ownedOperation));
}

void QMofDataTypeObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QMofDataType *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QMofOperation *>(ownedOperation));
}


void QMofDataTypeObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generals"))));
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalizations"))));
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inheritedMembers"))));
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isAbstract"))));
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isFinalSpecialization"))));
    d->groupProperties.insert(QStringLiteral("QMofClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedClassifiers"))));

    d->propertyGroups << QStringLiteral("QMofDataType");
    d->groupProperties.insert(QStringLiteral("QMofDataType"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedAttributes"))));
    d->groupProperties.insert(QStringLiteral("QMofDataType"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedOperations"))));
}

void QMofDataTypeObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedAttributes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedAttributes, PropertyClassRole, QStringLiteral("QMofDataType"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedAttributes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedAttributes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedAttributes, DocumentationRole, QStringLiteral("The Attributes owned by the DataType."));
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedAttributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedAttributes, SubsettedPropertiesRole, QStringLiteral("Classifier-attribute Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedAttributes, OppositeEndRole, QStringLiteral("Property-datatype"));

    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedOperations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedOperations, PropertyClassRole, QStringLiteral("QMofDataType"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedOperations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedOperations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedOperations, DocumentationRole, QStringLiteral("The Operations owned by the DataType."));
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedOperations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedOperations, SubsettedPropertiesRole, QStringLiteral("Classifier-feature Namespace-ownedMember A_redefinitionContext_redefinableElement-redefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDataType, ownedOperations, OppositeEndRole, QStringLiteral("Operation-datatype"));

}

QT_END_NAMESPACE

