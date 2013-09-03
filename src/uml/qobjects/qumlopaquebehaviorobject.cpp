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
#include "qumlopaquebehaviorobject_p.h"

#include <QtUml/QUmlOpaqueBehavior>
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

QUmlOpaqueBehaviorObject::QUmlOpaqueBehaviorObject(QUmlOpaqueBehavior *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlOpaqueBehaviorObject::~QUmlOpaqueBehaviorObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOpaqueBehaviorObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlOpaqueBehaviorObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlOpaqueBehaviorObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->name();
}

QObject *QUmlOpaqueBehaviorObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->nameExpression()->asQObject();
}

QObject *QUmlOpaqueBehaviorObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->namespace_()->asQObject();
}

QString QUmlOpaqueBehaviorObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlOpaqueBehaviorObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlOpaqueBehaviorObject::owningTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlOpaqueBehaviorObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlOpaqueBehaviorObject::package() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlOpaqueBehaviorObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->isLeaf();
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlOpaqueBehaviorObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlOpaqueBehaviorObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->isFinalSpecialization();
}

QObject *QUmlOpaqueBehaviorObject::ownedTemplateSignature() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOpaqueBehaviorObject::representation() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOpaqueBehaviorObject::templateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedConnector() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedConnector())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::part() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->part())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::role() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->role())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedPort() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedPort())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlOpaqueBehaviorObject::classifierBehavior() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::interfaceRealization() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->interfaceRealization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedBehavior() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedBehavior())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlOpaqueBehaviorObject::extension() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->extension())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->isAbstract();
}

bool QUmlOpaqueBehaviorObject::isActive() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->isActive();
}

const QList<QObject *> QUmlOpaqueBehaviorObject::nestedClassifier() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->nestedClassifier())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlOpaqueBehaviorObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlOpaqueBehaviorObject::ownedOperation() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedOperation())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedReception() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedReception())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::superClass() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->superClass())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlOpaqueBehaviorObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->context()->asQObject();
}

bool QUmlOpaqueBehaviorObject::isReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->isReentrant();
}

const QList<QObject *> QUmlOpaqueBehaviorObject::ownedParameter() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedParameter())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::ownedParameterSet() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->ownedParameterSet())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::postcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->postcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::precondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->precondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueBehaviorObject::redefinedBehavior() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->redefinedBehavior())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOpaqueBehaviorObject::specification() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->specification()->asQObject();
}

// OWNED ATTRIBUTES [OpaqueBehavior]

const QList<QString> QUmlOpaqueBehaviorObject::body() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->body();
}

const QList<QString> QUmlOpaqueBehaviorObject::language() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->language();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOpaqueBehaviorObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlOpaqueBehaviorObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlOpaqueBehaviorObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlOpaqueBehaviorObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlOpaqueBehaviorObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlOpaqueBehaviorObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlOpaqueBehaviorObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlOpaqueBehaviorObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlOpaqueBehaviorObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlOpaqueBehaviorObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlOpaqueBehaviorObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlOpaqueBehaviorObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlOpaqueBehaviorObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlOpaqueBehaviorObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlOpaqueBehaviorObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlOpaqueBehaviorObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlOpaqueBehaviorObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->isTemplate();
}

bool QUmlOpaqueBehaviorObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlOpaqueBehaviorObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlOpaqueBehaviorObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOpaqueBehaviorObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOpaqueBehaviorObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOpaqueBehaviorObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOpaqueBehaviorObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOpaqueBehaviorObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOpaqueBehaviorObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOpaqueBehaviorObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOpaqueBehaviorObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setName(name);
}
    
void QUmlOpaqueBehaviorObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlOpaqueBehaviorObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlOpaqueBehaviorObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setQualifiedName(qualifiedName);
}
    // SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlOpaqueBehaviorObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlOpaqueBehaviorObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlOpaqueBehaviorObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlOpaqueBehaviorObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlOpaqueBehaviorObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlOpaqueBehaviorObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlOpaqueBehaviorObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlOpaqueBehaviorObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlOpaqueBehaviorObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlOpaqueBehaviorObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlOpaqueBehaviorObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlOpaqueBehaviorObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlOpaqueBehaviorObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlOpaqueBehaviorObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlOpaqueBehaviorObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlOpaqueBehaviorObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setLeaf(isLeaf);
}
    
void QUmlOpaqueBehaviorObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOpaqueBehaviorObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOpaqueBehaviorObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlOpaqueBehaviorObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlOpaqueBehaviorObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlOpaqueBehaviorObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlOpaqueBehaviorObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlOpaqueBehaviorObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlOpaqueBehaviorObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlOpaqueBehaviorObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlOpaqueBehaviorObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlOpaqueBehaviorObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlOpaqueBehaviorObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlOpaqueBehaviorObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlOpaqueBehaviorObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlOpaqueBehaviorObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlOpaqueBehaviorObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setFinalSpecialization(isFinalSpecialization);
}
    
void QUmlOpaqueBehaviorObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlOpaqueBehaviorObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlOpaqueBehaviorObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlOpaqueBehaviorObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlOpaqueBehaviorObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlOpaqueBehaviorObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlOpaqueBehaviorObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlOpaqueBehaviorObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlOpaqueBehaviorObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlOpaqueBehaviorObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlOpaqueBehaviorObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlOpaqueBehaviorObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlOpaqueBehaviorObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlOpaqueBehaviorObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlOpaqueBehaviorObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlOpaqueBehaviorObject::addPart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addPart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlOpaqueBehaviorObject::removePart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removePart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlOpaqueBehaviorObject::addRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlOpaqueBehaviorObject::removeRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlOpaqueBehaviorObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlOpaqueBehaviorObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlOpaqueBehaviorObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlOpaqueBehaviorObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlOpaqueBehaviorObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlOpaqueBehaviorObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlOpaqueBehaviorObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlOpaqueBehaviorObject::addExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlOpaqueBehaviorObject::removeExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlOpaqueBehaviorObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setAbstract(isAbstract);
}
    
void QUmlOpaqueBehaviorObject::setActive(bool isActive)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setActive(isActive);
}
    
void QUmlOpaqueBehaviorObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlOpaqueBehaviorObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlOpaqueBehaviorObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlOpaqueBehaviorObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlOpaqueBehaviorObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlOpaqueBehaviorObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlOpaqueBehaviorObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlOpaqueBehaviorObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlOpaqueBehaviorObject::addSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

void QUmlOpaqueBehaviorObject::removeSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlOpaqueBehaviorObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setContext(qmodelingobjectproperty_cast<QUmlBehavioredClassifier *>(context));
}

void QUmlOpaqueBehaviorObject::setReentrant(bool isReentrant)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setReentrant(isReentrant);
}
    
void QUmlOpaqueBehaviorObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlOpaqueBehaviorObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedParameter(qmodelingobjectproperty_cast<QUmlParameter *>(ownedParameter));
}

void QUmlOpaqueBehaviorObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlOpaqueBehaviorObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeOwnedParameterSet(qmodelingobjectproperty_cast<QUmlParameterSet *>(ownedParameterSet));
}

void QUmlOpaqueBehaviorObject::addPostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlOpaqueBehaviorObject::removePostcondition(QObject *postcondition)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removePostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postcondition));
}

void QUmlOpaqueBehaviorObject::addPrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlOpaqueBehaviorObject::removePrecondition(QObject *precondition)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removePrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(precondition));
}

void QUmlOpaqueBehaviorObject::addRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addRedefinedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlOpaqueBehaviorObject::removeRedefinedBehavior(QObject *redefinedBehavior)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeRedefinedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(redefinedBehavior));
}

void QUmlOpaqueBehaviorObject::setSpecification(QObject *specification)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->setSpecification(qmodelingobjectproperty_cast<QUmlBehavioralFeature *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [OpaqueBehavior]

void QUmlOpaqueBehaviorObject::addBody(QString  body)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addBody(body);
}

void QUmlOpaqueBehaviorObject::removeBody(QString  body)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeBody(body);
}

void QUmlOpaqueBehaviorObject::addLanguage(QString  language)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->addLanguage(language);
}

void QUmlOpaqueBehaviorObject::removeLanguage(QString  language)
{
    qmodelingobjectproperty_cast<QUmlOpaqueBehavior *>(this)->removeLanguage(language);
}

QT_END_NAMESPACE

