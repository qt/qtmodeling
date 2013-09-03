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
#include "qumlfunctionbehaviorobject_p.h"

#include <QtUml/QUmlFunctionBehavior>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlBehavioralFeature>
#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlReception>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlFunctionBehaviorObject::QUmlFunctionBehaviorObject(QUmlFunctionBehavior *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlFunctionBehaviorObject::~QUmlFunctionBehaviorObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlFunctionBehaviorObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlFunctionBehaviorObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlFunctionBehaviorObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->name();
}

QObject *QUmlFunctionBehaviorObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->nameExpression()->asQObject();
}

QObject *QUmlFunctionBehaviorObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->namespace_()->asQObject();
}

QString QUmlFunctionBehaviorObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlFunctionBehaviorObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlFunctionBehaviorObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlFunctionBehaviorObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlFunctionBehaviorObject::package() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlFunctionBehaviorObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->isLeaf();
}

const QSet<QObject *> QUmlFunctionBehaviorObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlFunctionBehaviorObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlFunctionBehaviorObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlFunctionBehaviorObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->isFinalSpecialization();
}

QObject *QUmlFunctionBehaviorObject::ownedTemplateSignature() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlFunctionBehaviorObject::representation() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlFunctionBehaviorObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlFunctionBehaviorObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlFunctionBehaviorObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedConnector() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedConnector())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::part() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->part())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::role() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->role())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedPort() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedPort())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlFunctionBehaviorObject::classifierBehavior() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlFunctionBehaviorObject::interfaceRealization() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->interfaceRealization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedBehavior() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedBehavior())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlFunctionBehaviorObject::extension() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->extension())
        set.insert(element->asQObject());
    return set;
}

bool QUmlFunctionBehaviorObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->isAbstract();
}

bool QUmlFunctionBehaviorObject::isActive() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->isActive();
}

const QList<QObject *> QUmlFunctionBehaviorObject::nestedClassifier() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->nestedClassifier())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlFunctionBehaviorObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlFunctionBehaviorObject::ownedOperation() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedOperation())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedReception() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedReception())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::superClass() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->superClass())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlFunctionBehaviorObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->context()->asQObject();
}

bool QUmlFunctionBehaviorObject::isReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->isReentrant();
}

const QList<QObject *> QUmlFunctionBehaviorObject::ownedParameter() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedParameter())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::ownedParameterSet() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->ownedParameterSet())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::postcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->postcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::precondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->precondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFunctionBehaviorObject::redefinedBehavior() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->redefinedBehavior())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlFunctionBehaviorObject::specification() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->specification()->asQObject();
}

// OWNED ATTRIBUTES [OpaqueBehavior]

const QList<QString> QUmlFunctionBehaviorObject::body() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->body();
}

const QList<QString> QUmlFunctionBehaviorObject::language() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->language();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlFunctionBehaviorObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlFunctionBehaviorObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlFunctionBehaviorObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlFunctionBehaviorObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlFunctionBehaviorObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlFunctionBehaviorObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlFunctionBehaviorObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlFunctionBehaviorObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlFunctionBehaviorObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlFunctionBehaviorObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlFunctionBehaviorObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlFunctionBehaviorObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlFunctionBehaviorObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlFunctionBehaviorObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlFunctionBehaviorObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlFunctionBehaviorObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlFunctionBehaviorObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlFunctionBehaviorObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlFunctionBehaviorObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlFunctionBehaviorObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlFunctionBehaviorObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->isTemplate();
}

bool QUmlFunctionBehaviorObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlFunctionBehaviorObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlFunctionBehaviorObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlFunctionBehaviorObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlFunctionBehaviorObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlFunctionBehaviorObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlFunctionBehaviorObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlFunctionBehaviorObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlFunctionBehaviorObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlFunctionBehaviorObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlFunctionBehaviorObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setName(name);
}
    
void QUmlFunctionBehaviorObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlFunctionBehaviorObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlFunctionBehaviorObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlFunctionBehaviorObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlFunctionBehaviorObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlFunctionBehaviorObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlFunctionBehaviorObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlFunctionBehaviorObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlFunctionBehaviorObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlFunctionBehaviorObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlFunctionBehaviorObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlFunctionBehaviorObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlFunctionBehaviorObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlFunctionBehaviorObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlFunctionBehaviorObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlFunctionBehaviorObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlFunctionBehaviorObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlFunctionBehaviorObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlFunctionBehaviorObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setLeaf(isLeaf);
}
    
void QUmlFunctionBehaviorObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlFunctionBehaviorObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlFunctionBehaviorObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlFunctionBehaviorObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlFunctionBehaviorObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlFunctionBehaviorObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlFunctionBehaviorObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlFunctionBehaviorObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlFunctionBehaviorObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlFunctionBehaviorObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlFunctionBehaviorObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlFunctionBehaviorObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlFunctionBehaviorObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlFunctionBehaviorObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlFunctionBehaviorObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlFunctionBehaviorObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlFunctionBehaviorObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setFinalSpecialization(isFinalSpecialization);
}
    
void QUmlFunctionBehaviorObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlFunctionBehaviorObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlFunctionBehaviorObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlFunctionBehaviorObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlFunctionBehaviorObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlFunctionBehaviorObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlFunctionBehaviorObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlFunctionBehaviorObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlFunctionBehaviorObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlFunctionBehaviorObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlFunctionBehaviorObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlFunctionBehaviorObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlFunctionBehaviorObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlFunctionBehaviorObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlFunctionBehaviorObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlFunctionBehaviorObject::addPart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addPart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlFunctionBehaviorObject::removePart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removePart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlFunctionBehaviorObject::addRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlFunctionBehaviorObject::removeRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlFunctionBehaviorObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlFunctionBehaviorObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlFunctionBehaviorObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlFunctionBehaviorObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlFunctionBehaviorObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlFunctionBehaviorObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlFunctionBehaviorObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlFunctionBehaviorObject::addExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlFunctionBehaviorObject::removeExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlFunctionBehaviorObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setAbstract(isAbstract);
}
    
void QUmlFunctionBehaviorObject::setActive(bool isActive)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setActive(isActive);
}
    
void QUmlFunctionBehaviorObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlFunctionBehaviorObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlFunctionBehaviorObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlFunctionBehaviorObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlFunctionBehaviorObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlFunctionBehaviorObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlFunctionBehaviorObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlFunctionBehaviorObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlFunctionBehaviorObject::addSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

void QUmlFunctionBehaviorObject::removeSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlFunctionBehaviorObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setContext(qmodelingobjectproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlFunctionBehaviorObject::setReentrant(bool isReentrant)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setReentrant(isReentrant);
}
    
void QUmlFunctionBehaviorObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlFunctionBehaviorObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlFunctionBehaviorObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlFunctionBehaviorObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlFunctionBehaviorObject::addPostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlFunctionBehaviorObject::removePostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removePostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlFunctionBehaviorObject::addPrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlFunctionBehaviorObject::removePrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removePrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlFunctionBehaviorObject::addRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addRedefinedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlFunctionBehaviorObject::removeRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeRedefinedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlFunctionBehaviorObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [OpaqueBehavior]

void QUmlFunctionBehaviorObject::addBody(QString  body)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addBody(body);
}

void QUmlFunctionBehaviorObject::removeBody(QString  body)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeBody(body);
}

void QUmlFunctionBehaviorObject::addLanguage(QString  language)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->addLanguage(language);
}

void QUmlFunctionBehaviorObject::removeLanguage(QString  language)
{
    qmodelingobjectproperty_cast<QUmlFunctionBehavior *>(this)->removeLanguage(language);
}

QT_END_NAMESPACE

