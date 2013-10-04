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

QUmlReceptionObject::QUmlReceptionObject(QUmlReception *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlReceptionObject::~QUmlReceptionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlReception *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReceptionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReceptionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlReception *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReception *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReceptionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlReceptionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->name();
}

QObject *QUmlReceptionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlReception *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReception *>(this)->nameExpression()->asQObject();
}

QObject *QUmlReceptionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlReception *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReception *>(this)->namespace_()->asQObject();
}

QString QUmlReceptionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReceptionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->visibility();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlReceptionObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReceptionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReceptionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlReceptionObject::featuringClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->featuringClassifier())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReceptionObject::isStatic() const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->isStatic();
}

// OWNED ATTRIBUTES [BehavioralFeature]

QtUml::CallConcurrencyKind QUmlReceptionObject::concurrency() const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->concurrency();
}

bool QUmlReceptionObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->isAbstract();
}

const QSet<QObject *> QUmlReceptionObject::method() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->method())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlReceptionObject::ownedParameter() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->ownedParameter())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlReceptionObject::ownedParameterSet() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->ownedParameterSet())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReceptionObject::raisedException() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->raisedException())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Reception]

QObject *QUmlReceptionObject::signal() const
{
    if (!qmodelingobjectproperty_cast<QUmlReception *>(this)->signal())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReception *>(this)->signal()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReceptionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReceptionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReceptionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlReceptionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

QString QUmlReceptionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlReceptionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlReceptionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlReceptionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlReception *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlReceptionObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->membersAreDistinguishable();
}

// OPERATIONS [RedefinableElement]

bool QUmlReceptionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReceptionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [BehavioralFeature]

bool QUmlReceptionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlReception *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReceptionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReceptionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReceptionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReceptionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReceptionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReceptionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReceptionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReceptionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->setName(name);
}

void QUmlReceptionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReceptionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReceptionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReceptionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlReceptionObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlReceptionObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlReceptionObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlReceptionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlReceptionObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlReceptionObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlReceptionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlReceptionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlReceptionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlReceptionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlReceptionObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlReceptionObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReceptionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlReception *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlReceptionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlReceptionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReceptionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReceptionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReceptionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlReceptionObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlReceptionObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlReceptionObject::setStatic(bool isStatic)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->setStatic(isStatic);
    qmodelingobjectproperty_cast<QUmlReception *>(this)->modifiedResettableProperties() << QStringLiteral("static");
}

void QUmlReceptionObject::unsetStatic()
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("static"));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioralFeature]

void QUmlReceptionObject::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->setConcurrency(concurrency);
    qmodelingobjectproperty_cast<QUmlReception *>(this)->modifiedResettableProperties() << QStringLiteral("concurrency");
}

void QUmlReceptionObject::unsetConcurrency()
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("concurrency"));
}

void QUmlReceptionObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->setAbstract(isAbstract);
    qmodelingobjectproperty_cast<QUmlReception *>(this)->modifiedResettableProperties() << QStringLiteral("abstract");
}

void QUmlReceptionObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlReceptionObject::addMethod(QObject *method)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addMethod(qmodelingobjectproperty_cast<QUmlBehavior *>(method));
}

void QUmlReceptionObject::removeMethod(QObject *method)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeMethod(qmodelingobjectproperty_cast<QUmlBehavior *>(method));
}

void QUmlReceptionObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlReceptionObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlReceptionObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlReceptionObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlReceptionObject::addRaisedException(QObject *raisedException)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->addRaisedException(qmodelingobjectproperty_cast<QUmlType *>(raisedException));
}

void QUmlReceptionObject::removeRaisedException(QObject *raisedException)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->removeRaisedException(qmodelingobjectproperty_cast<QUmlType *>(raisedException));
}

// SLOTS FOR OWNED ATTRIBUTES [Reception]

void QUmlReceptionObject::setSignal(QObject *signal)
{
    qmodelingobjectproperty_cast<QUmlReception *>(this)->setSignal(qmodelingobjectproperty_cast<QUmlSignal *>(signal));
}

QT_END_NAMESPACE

