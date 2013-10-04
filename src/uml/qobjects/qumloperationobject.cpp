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

QUmlOperationObject::QUmlOperationObject(QUmlOperation *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlOperationObject::~QUmlOperationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlOperation *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOperationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOperationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperation *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperation *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [TemplateableElement]

QObject *QUmlOperationObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperation *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperation *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlOperationObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlOperationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlOperationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->name();
}

QObject *QUmlOperationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperation *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperation *>(this)->nameExpression()->asQObject();
}

QObject *QUmlOperationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperation *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperation *>(this)->namespace_()->asQObject();
}

QString QUmlOperationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlOperationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->visibility();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlOperationObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlOperationObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isLeaf();
}

const QSet<QObject *> QUmlOperationObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlOperationObject::featuringClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->featuringClassifier())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOperationObject::isStatic() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isStatic();
}

// OWNED ATTRIBUTES [BehavioralFeature]

QtUml::CallConcurrencyKind QUmlOperationObject::concurrency() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->concurrency();
}

bool QUmlOperationObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isAbstract();
}

const QSet<QObject *> QUmlOperationObject::method() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->method())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::ownedParameterSet() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->ownedParameterSet())
        set.insert(element->asQObject());
    return set;
}
// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlOperationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperation *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperation *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [Operation]

QObject *QUmlOperationObject::bodyCondition() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperation *>(this)->bodyCondition())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperation *>(this)->bodyCondition()->asQObject();
}

QObject *QUmlOperationObject::class_() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperation *>(this)->class_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperation *>(this)->class_()->asQObject();
}

QObject *QUmlOperationObject::datatype() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperation *>(this)->datatype())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperation *>(this)->datatype()->asQObject();
}

QObject *QUmlOperationObject::interface_() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperation *>(this)->interface_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperation *>(this)->interface_()->asQObject();
}

bool QUmlOperationObject::isOrdered() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isOrdered();
}

bool QUmlOperationObject::isQuery() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isQuery();
}

bool QUmlOperationObject::isUnique() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isUnique();
}

int QUmlOperationObject::lower() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->lower();
}

const QList<QObject *> QUmlOperationObject::ownedParameter() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->ownedParameter())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlOperationObject::postcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->postcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::precondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->precondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::raisedException() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->raisedException())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOperationObject::redefinedOperation() const
{
    QSet<QObject *> set;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->redefinedOperation())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOperationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperation *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperation *>(this)->templateParameter()->asQObject();
}

QObject *QUmlOperationObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlOperation *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOperation *>(this)->type()->asQObject();
}

int QUmlOperationObject::upper() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->upper();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOperationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOperationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->mustBeOwned();
}

// OPERATIONS [TemplateableElement]

bool QUmlOperationObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isTemplate();
}

QSet<QObject *> QUmlOperationObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlOperationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlOperationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

QString QUmlOperationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlOperationObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlOperationObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlOperationObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlOperationObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->membersAreDistinguishable();
}

// OPERATIONS [RedefinableElement]

bool QUmlOperationObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [BehavioralFeature]

bool QUmlOperationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

// OPERATIONS [ParameterableElement]

bool QUmlOperationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlOperationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isTemplateParameter();
}

// OPERATIONS [Operation]

bool QUmlOperationObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlOperation *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

QSet<QObject *> QUmlOperationObject::returnResult() const
{
    QSet<QObject *> set;
    foreach (QUmlParameter *element, qmodelingobjectproperty_cast<QUmlOperation *>(this)->returnResult())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOperationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOperationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOperationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOperationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOperationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlOperationObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlTemplateSignature *>(ownedTemplateSignature));
}

void QUmlOperationObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlOperationObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOperationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOperationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOperationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setName(name);
}

void QUmlOperationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlOperationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlOperationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setQualifiedName(qualifiedName);
}

void QUmlOperationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlOperationObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlOperationObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlOperationObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlOperationObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlOperationObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlOperationObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlOperationObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlOperationObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlOperationObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlOperationObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlOperationObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlOperationObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlOperationObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlOperationObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlOperationObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOperationObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOperationObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlOperationObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlOperationObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlOperationObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlOperationObject::setStatic(bool isStatic)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setStatic(isStatic);
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties() << QStringLiteral("static");
}

void QUmlOperationObject::unsetStatic()
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("static"));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioralFeature]

void QUmlOperationObject::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setConcurrency(concurrency);
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties() << QStringLiteral("concurrency");
}

void QUmlOperationObject::unsetConcurrency()
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("concurrency"));
}

void QUmlOperationObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setAbstract(isAbstract);
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties() << QStringLiteral("abstract");
}

void QUmlOperationObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlOperationObject::addMethod(QObject *method)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addMethod(qmodelingobjectproperty_cast<QUmlBehavior *>(method));
}

void QUmlOperationObject::removeMethod(QObject *method)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeMethod(qmodelingobjectproperty_cast<QUmlBehavior *>(method));
}

void QUmlOperationObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlOperationObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}
// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlOperationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [Operation]

void QUmlOperationObject::setBodyCondition(QObject *bodyCondition)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setBodyCondition(qmodelingobjectproperty_cast<QUmlConstraint *>(bodyCondition));
}

void QUmlOperationObject::setClass(QObject *class_)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setClass(qmodelingobjectproperty_cast<QUmlClass *>(class_));
}

void QUmlOperationObject::setDatatype(QObject *datatype)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setDatatype(qmodelingobjectproperty_cast<QUmlDataType *>(datatype));
}

void QUmlOperationObject::setInterface(QObject *interface_)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setInterface(qmodelingobjectproperty_cast<QUmlInterface *>(interface_));
}

void QUmlOperationObject::setOrdered(bool isOrdered)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setOrdered(isOrdered);
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties() << QStringLiteral("ordered");
}

void QUmlOperationObject::unsetOrdered()
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordered"));
}

void QUmlOperationObject::setQuery(bool isQuery)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setQuery(isQuery);
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties() << QStringLiteral("query");
}

void QUmlOperationObject::unsetQuery()
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("query"));
}

void QUmlOperationObject::setUnique(bool isUnique)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setUnique(isUnique);
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties() << QStringLiteral("unique");
}

void QUmlOperationObject::unsetUnique()
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("unique"));
}

void QUmlOperationObject::setLower(int lower)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setLower(lower);
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties() << QStringLiteral("lower");
}

void QUmlOperationObject::unsetLower()
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("lower"));
}

void QUmlOperationObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlOperationObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlOperationObject::addPostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlOperationObject::removePostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removePostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlOperationObject::addPrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlOperationObject::removePrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removePrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlOperationObject::addRaisedException(QObject *raisedException)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addRaisedException(qmodelingobjectproperty_cast<QUmlType *>(raisedException));
}

void QUmlOperationObject::removeRaisedException(QObject *raisedException)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeRaisedException(qmodelingobjectproperty_cast<QUmlType *>(raisedException));
}

void QUmlOperationObject::addRedefinedOperation(QObject *redefinedOperation)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->addRedefinedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(redefinedOperation));
}

void QUmlOperationObject::removeRedefinedOperation(QObject *redefinedOperation)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->removeRedefinedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(redefinedOperation));
}

void QUmlOperationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlOperationTemplateParameter *>(templateParameter));
}

void QUmlOperationObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

void QUmlOperationObject::setUpper(int upper)
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->setUpper(upper);
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties() << QStringLiteral("upper");
}

void QUmlOperationObject::unsetUpper()
{
    qmodelingobjectproperty_cast<QUmlOperation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("upper"));
}

QT_END_NAMESPACE

