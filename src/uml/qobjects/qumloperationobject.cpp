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
#include "qumloperationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlOperation>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDataType>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperationTemplateParameter>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlOperationObject::QUmlOperationObject(QUmlOperation *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlOperationObject::~QUmlOperationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlOperation *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOperationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOperationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlOperation *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOperation *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [TemplateableElement]

QObject *QUmlOperationObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlOperation *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOperation *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlOperationObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlOperationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlOperationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->name();
}

QObject *QUmlOperationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlOperation *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOperation *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlOperationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlOperation *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOperation *>(this)->namespace_()->asQModelingObject();
}

QString QUmlOperationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlOperationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->visibility();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlOperationObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlOperationObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isLeaf();
}

const QSet<QObject *> QUmlOperationObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlOperationObject::featuringClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->featuringClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOperationObject::isStatic() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isStatic();
}

// OWNED ATTRIBUTES [BehavioralFeature]

QtUml::CallConcurrencyKind QUmlOperationObject::concurrency() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->concurrency();
}

bool QUmlOperationObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isAbstract();
}

const QSet<QObject *> QUmlOperationObject::methods() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->methods())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->ownedParameterSets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlOperationObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlOperation *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOperation *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [Operation]

QObject *QUmlOperationObject::bodyCondition() const
{
    if (!qmodelingelementproperty_cast<QUmlOperation *>(this)->bodyCondition())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOperation *>(this)->bodyCondition()->asQModelingObject();
}

QObject *QUmlOperationObject::class_() const
{
    if (!qmodelingelementproperty_cast<QUmlOperation *>(this)->class_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOperation *>(this)->class_()->asQModelingObject();
}

QObject *QUmlOperationObject::datatype() const
{
    if (!qmodelingelementproperty_cast<QUmlOperation *>(this)->datatype())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOperation *>(this)->datatype()->asQModelingObject();
}

QObject *QUmlOperationObject::interface_() const
{
    if (!qmodelingelementproperty_cast<QUmlOperation *>(this)->interface_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOperation *>(this)->interface_()->asQModelingObject();
}

bool QUmlOperationObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isOrdered();
}

bool QUmlOperationObject::isQuery() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isQuery();
}

bool QUmlOperationObject::isUnique() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isUnique();
}

int QUmlOperationObject::lower() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->lower();
}

const QList<QObject *> QUmlOperationObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlOperationObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->postconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->preconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::raisedExceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->raisedExceptions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::redefinedOperations() const
{
    QSet<QObject *> set;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->redefinedOperations())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOperationObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlOperation *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOperation *>(this)->templateParameter()->asQModelingObject();
}

QObject *QUmlOperationObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlOperation *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOperation *>(this)->type()->asQModelingObject();
}

int QUmlOperationObject::upper() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->upper();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOperationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOperationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->mustBeOwned();
}

// OPERATIONS [TemplateableElement]

bool QUmlOperationObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isTemplate();
}

QSet<QObject *> QUmlOperationObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlOperationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlOperationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlOperationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlOperationObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlOperationObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlOperationObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOperationObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->membersAreDistinguishable();
}

// OPERATIONS [RedefinableElement]

bool QUmlOperationObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [BehavioralFeature]

bool QUmlOperationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

// OPERATIONS [ParameterableElement]

bool QUmlOperationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlOperationObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isTemplateParameter();
}

// OPERATIONS [Operation]

bool QUmlOperationObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlOperation *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

QSet<QObject *> QUmlOperationObject::returnResult() const
{
    QSet<QObject *> set;
    foreach (QUmlParameter *element, qmodelingelementproperty_cast<QUmlOperation *>(this)->returnResult())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOperationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOperationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOperationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOperationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOperationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlOperationObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlTemplateSignature *>(ownedTemplateSignature));
}

void QUmlOperationObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlOperationObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOperationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOperationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOperationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setName(name);
}

void QUmlOperationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlOperationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlOperationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setQualifiedName(qualifiedName);
}

void QUmlOperationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlOperationObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlOperationObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlOperationObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlOperationObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlOperationObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlOperationObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlOperationObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlOperationObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlOperationObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlOperationObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlOperationObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlOperationObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlOperationObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setLeaf(isLeaf);
}

void QUmlOperationObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlOperationObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOperationObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOperationObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlOperationObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlOperationObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlOperationObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlOperationObject::setStatic(bool isStatic)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setStatic(isStatic);
}

void QUmlOperationObject::unsetStatic()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("static"));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioralFeature]

void QUmlOperationObject::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setConcurrency(concurrency);
}

void QUmlOperationObject::unsetConcurrency()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("concurrency"));
}

void QUmlOperationObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setAbstract(isAbstract);
}

void QUmlOperationObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlOperationObject::addMethod(QObject *method)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addMethod(qmodelingelementproperty_cast<QUmlBehavior *>(method));
}

void QUmlOperationObject::removeMethod(QObject *method)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeMethod(qmodelingelementproperty_cast<QUmlBehavior *>(method));
}

void QUmlOperationObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlOperationObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}
// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlOperationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [Operation]

void QUmlOperationObject::setBodyCondition(QObject *bodyCondition)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setBodyCondition(qmodelingelementproperty_cast<QUmlConstraint *>(bodyCondition));
}

void QUmlOperationObject::setClass(QObject *class_)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setClass(qmodelingelementproperty_cast<QUmlClass *>(class_));
}

void QUmlOperationObject::setDatatype(QObject *datatype)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setDatatype(qmodelingelementproperty_cast<QUmlDataType *>(datatype));
}

void QUmlOperationObject::setInterface(QObject *interface_)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setInterface(qmodelingelementproperty_cast<QUmlInterface *>(interface_));
}

void QUmlOperationObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setOrdered(isOrdered);
}

void QUmlOperationObject::unsetOrdered()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordered"));
}

void QUmlOperationObject::setQuery(bool isQuery)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setQuery(isQuery);
}

void QUmlOperationObject::unsetQuery()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("query"));
}

void QUmlOperationObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setUnique(isUnique);
}

void QUmlOperationObject::unsetUnique()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unique"));
}

void QUmlOperationObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setLower(lower);
}

void QUmlOperationObject::unsetLower()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlOperationObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlOperationObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlOperationObject::addPostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlOperationObject::removePostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removePostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlOperationObject::addPrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlOperationObject::removePrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removePrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlOperationObject::addRaisedException(QObject *raisedException)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addRaisedException(qmodelingelementproperty_cast<QUmlType *>(raisedException));
}

void QUmlOperationObject::removeRaisedException(QObject *raisedException)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeRaisedException(qmodelingelementproperty_cast<QUmlType *>(raisedException));
}

void QUmlOperationObject::addRedefinedOperation(QObject *redefinedOperation)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->addRedefinedOperation(qmodelingelementproperty_cast<QUmlOperation *>(redefinedOperation));
}

void QUmlOperationObject::removeRedefinedOperation(QObject *redefinedOperation)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->removeRedefinedOperation(qmodelingelementproperty_cast<QUmlOperation *>(redefinedOperation));
}

void QUmlOperationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlOperationTemplateParameter *>(templateParameter));
}

void QUmlOperationObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

void QUmlOperationObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QUmlOperation *>(this)->setUpper(upper);
}

void QUmlOperationObject::unsetUpper()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}


void QUmlOperationObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateableElement");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedTemplateSignature"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateBindings"))));

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
    d->groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameterSets"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlOperation");
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("bodyCondition"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("class_"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("datatype"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interface_"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isOrdered"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isQuery"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isUnique"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lower"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameters"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("postconditions"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("preconditions"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("raisedExceptions"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedOperations"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));
    d->groupProperties.insert(QStringLiteral("QUmlOperation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upper"))));
}

void QUmlOperationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, bodyCondition, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, bodyCondition, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, bodyCondition, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, bodyCondition, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, bodyCondition, DocumentationRole, QStringLiteral("An optional Constraint on the result values of an invocation of this Operation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, bodyCondition, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, bodyCondition, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, bodyCondition, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, class_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, class_, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, class_, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, class_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, class_, DocumentationRole, QStringLiteral("The class that owns the operation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, class_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, class_, SubsettedPropertiesRole, QStringLiteral("Feature-featuringClassifier RedefinableElement-redefinitionContext NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, class_, OppositeEndRole, QStringLiteral("Class-ownedOperation"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, datatype, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, datatype, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, datatype, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, datatype, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, datatype, DocumentationRole, QStringLiteral("The DataType that owns this Operation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, datatype, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, datatype, SubsettedPropertiesRole, QStringLiteral("Feature-featuringClassifier RedefinableElement-redefinitionContext NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, datatype, OppositeEndRole, QStringLiteral("DataType-ownedOperation"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, interface_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, interface_, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, interface_, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, interface_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, interface_, DocumentationRole, QStringLiteral("The Interface that owns this Operation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, interface_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, interface_, SubsettedPropertiesRole, QStringLiteral("Feature-featuringClassifier RedefinableElement-redefinitionContext NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, interface_, OppositeEndRole, QStringLiteral("Interface-ownedOperation"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isOrdered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isOrdered, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isOrdered, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isOrdered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isOrdered, DocumentationRole, QStringLiteral("This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isOrdered, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isOrdered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isOrdered, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isQuery, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isQuery, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isQuery, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isQuery, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isQuery, DocumentationRole, QStringLiteral("Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false)."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isQuery, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isQuery, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isQuery, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isUnique, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isUnique, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isUnique, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isUnique, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isUnique, DocumentationRole, QStringLiteral("Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isUnique, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isUnique, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, isUnique, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, lower, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, lower, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, lower, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, lower, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, lower, DocumentationRole, QStringLiteral("This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, lower, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, lower, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, lower, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, ownedParameters, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, ownedParameters, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, ownedParameters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, ownedParameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, ownedParameters, DocumentationRole, QStringLiteral("Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, ownedParameters, RedefinedPropertiesRole, QStringLiteral("BehavioralFeature-ownedParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, ownedParameters, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, ownedParameters, OppositeEndRole, QStringLiteral("Parameter-operation"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, postconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, postconditions, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, postconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, postconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, postconditions, DocumentationRole, QStringLiteral("An optional set of Constraints specifying the state of the system when the Operation is completed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, postconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, postconditions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, postconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, preconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, preconditions, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, preconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, preconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, preconditions, DocumentationRole, QStringLiteral("An optional set of Constraints on the state of the system when the Operation is invoked."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, preconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, preconditions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, preconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, raisedExceptions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, raisedExceptions, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, raisedExceptions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, raisedExceptions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, raisedExceptions, DocumentationRole, QStringLiteral("References the Types representing exceptions that may be raised during an invocation of this operation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, raisedExceptions, RedefinedPropertiesRole, QStringLiteral("BehavioralFeature-raisedException"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, raisedExceptions, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, raisedExceptions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, redefinedOperations, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, redefinedOperations, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, redefinedOperations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, redefinedOperations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, redefinedOperations, DocumentationRole, QStringLiteral("References the Operations that are redefined by this Operation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, redefinedOperations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, redefinedOperations, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, redefinedOperations, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, templateParameter, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, templateParameter, RedefinedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, templateParameter, OppositeEndRole, QStringLiteral("OperationTemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, type, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, type, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, type, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, type, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, type, DocumentationRole, QStringLiteral("This information is derived from the return result for this Operation.Specifies the return result of the operation, if present."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, type, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, type, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, type, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, upper, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, upper, PropertyClassRole, QStringLiteral("QUmlOperation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, upper, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, upper, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, upper, DocumentationRole, QStringLiteral("This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, upper, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, upper, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOperation, upper, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

