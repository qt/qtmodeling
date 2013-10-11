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
#include "qumlreceptionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlReception>
#include <QtUml/QUmlBehavior>
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
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlSignal>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlReceptionObject::QUmlReceptionObject(QUmlReception *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlReceptionObject::~QUmlReceptionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlReception *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReceptionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlReception *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlReception *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlReceptionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlReception *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReception *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReceptionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlReception *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlReceptionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->name();
}

QObject *QUmlReceptionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlReception *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReception *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlReceptionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlReception *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReception *>(this)->namespace_()->asQModelingObject();
}

QString QUmlReceptionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReceptionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->visibility();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlReceptionObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlReception *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlReception *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlReception *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlReception *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlReception *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlReception *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReceptionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReceptionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlReception *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlReception *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlReceptionObject::featuringClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlReception *>(this)->featuringClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlReceptionObject::isStatic() const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->isStatic();
}

// OWNED ATTRIBUTES [BehavioralFeature]

QtUml::CallConcurrencyKind QUmlReceptionObject::concurrency() const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->concurrency();
}

bool QUmlReceptionObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->isAbstract();
}

const QSet<QObject *> QUmlReceptionObject::methods() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlReception *>(this)->methods())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlReceptionObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingelementproperty_cast<QUmlReception *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlReceptionObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingelementproperty_cast<QUmlReception *>(this)->ownedParameterSets())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::raisedExceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingelementproperty_cast<QUmlReception *>(this)->raisedExceptions())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Reception]

QObject *QUmlReceptionObject::signal() const
{
    if (!qmodelingelementproperty_cast<QUmlReception *>(this)->signal())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReception *>(this)->signal()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReceptionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlReception *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlReceptionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReceptionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlReception *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlReceptionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlReception *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlReceptionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlReceptionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlReception *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlReceptionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlReceptionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlReception *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlReceptionObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->membersAreDistinguishable();
}

// OPERATIONS [RedefinableElement]

bool QUmlReceptionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReceptionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [BehavioralFeature]

bool QUmlReceptionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlReception *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReceptionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReceptionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReceptionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReceptionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReceptionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReceptionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReceptionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReceptionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->setName(name);
}

void QUmlReceptionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReceptionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReceptionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReceptionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlReceptionObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlReceptionObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlReceptionObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlReceptionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlReceptionObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlReceptionObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlReceptionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlReceptionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlReceptionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlReceptionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlReceptionObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlReceptionObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReceptionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->setLeaf(isLeaf);
}

void QUmlReceptionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlReceptionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReceptionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReceptionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReceptionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlReceptionObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlReceptionObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlReceptionObject::setStatic(bool isStatic)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->setStatic(isStatic);
}

void QUmlReceptionObject::unsetStatic()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("static"));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioralFeature]

void QUmlReceptionObject::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->setConcurrency(concurrency);
}

void QUmlReceptionObject::unsetConcurrency()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("concurrency"));
}

void QUmlReceptionObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->setAbstract(isAbstract);
}

void QUmlReceptionObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlReceptionObject::addMethod(QObject *method)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addMethod(qmodelingelementproperty_cast<QUmlBehavior *>(method));
}

void QUmlReceptionObject::removeMethod(QObject *method)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeMethod(qmodelingelementproperty_cast<QUmlBehavior *>(method));
}

void QUmlReceptionObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlReceptionObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlReceptionObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlReceptionObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlReceptionObject::addRaisedException(QObject *raisedException)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->addRaisedException(qmodelingelementproperty_cast<QUmlType *>(raisedException));
}

void QUmlReceptionObject::removeRaisedException(QObject *raisedException)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->removeRaisedException(qmodelingelementproperty_cast<QUmlType *>(raisedException));
}

// SLOTS FOR OWNED ATTRIBUTES [Reception]

void QUmlReceptionObject::setSignal(QObject *signal)
{
    qmodelingelementproperty_cast<QUmlReception *>(this)->setSignal(qmodelingelementproperty_cast<QUmlSignal *>(signal));
}


void QUmlReceptionObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlNamespace");
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QUmlRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QUmlFeature");
    d->groupProperties.insert(QStringLiteral("QUmlFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("featuringClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isStatic"))));

    d->propertyGroups << QStringLiteral("QUmlBehavioralFeature");
    d->groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("concurrency"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isAbstract"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("methods"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameters"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameterSets"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("raisedExceptions"))));

    d->propertyGroups << QStringLiteral("QUmlReception");
    d->groupProperties.insert(QStringLiteral("QUmlReception"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("signal"))));
}

void QUmlReceptionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, DocumentationRole, QStringLiteral("References the ElementImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, OppositeEndRole, QStringLiteral("ElementImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, DocumentationRole, QStringLiteral("References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, DocumentationRole, QStringLiteral("A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, DocumentationRole, QStringLiteral("A collection of NamedElements owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, OppositeEndRole, QStringLiteral("NamedElement-namespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, DocumentationRole, QStringLiteral("Specifies a set of Constraints owned by this Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, OppositeEndRole, QStringLiteral("Constraint-context"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, DocumentationRole, QStringLiteral("References the PackageImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, OppositeEndRole, QStringLiteral("PackageImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, PropertyClassRole, QStringLiteral("QUmlFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, DocumentationRole, QStringLiteral("The Classifiers that have this Feature as a feature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, OppositeEndRole, QStringLiteral("Classifier-feature"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, PropertyClassRole, QStringLiteral("QUmlFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, DocumentationRole, QStringLiteral("Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true)."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, concurrency, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, concurrency, PropertyClassRole, QStringLiteral("QUmlBehavioralFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, concurrency, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, concurrency, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, concurrency, DocumentationRole, QStringLiteral("Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a class with isActive being false). Active instances control access to their own behavioral features."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, concurrency, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, concurrency, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, concurrency, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, isAbstract, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, isAbstract, PropertyClassRole, QStringLiteral("QUmlBehavioralFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, isAbstract, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, isAbstract, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, isAbstract, DocumentationRole, QStringLiteral("If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, isAbstract, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, isAbstract, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, isAbstract, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, methods, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, methods, PropertyClassRole, QStringLiteral("QUmlBehavioralFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, methods, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, methods, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, methods, DocumentationRole, QStringLiteral("A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior)."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, methods, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, methods, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, methods, OppositeEndRole, QStringLiteral("Behavior-specification"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameters, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameters, PropertyClassRole, QStringLiteral("QUmlBehavioralFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameters, DocumentationRole, QStringLiteral("Specifies the ordered set of formal parameters of this BehavioralFeature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameters, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameters, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameterSets, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameterSets, PropertyClassRole, QStringLiteral("QUmlBehavioralFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameterSets, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameterSets, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameterSets, DocumentationRole, QStringLiteral("The ParameterSets owned by this BehavioralFeature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameterSets, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameterSets, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, ownedParameterSets, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, raisedExceptions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, raisedExceptions, PropertyClassRole, QStringLiteral("QUmlBehavioralFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, raisedExceptions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, raisedExceptions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, raisedExceptions, DocumentationRole, QStringLiteral("References the Types representing exceptions that may be raised during an invocation of this feature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, raisedExceptions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, raisedExceptions, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioralFeature, raisedExceptions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlReception, signal, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReception, signal, PropertyClassRole, QStringLiteral("QUmlReception"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReception, signal, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlReception, signal, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlReception, signal, DocumentationRole, QStringLiteral("The signal that this reception handles."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReception, signal, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReception, signal, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReception, signal, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

