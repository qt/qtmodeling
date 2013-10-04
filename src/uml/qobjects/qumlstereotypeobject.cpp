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
#include "qumlstereotypeobject_p.h"

#include <QtUml/QUmlStereotype>
#include <QtUml/QUmlBehavior>
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
#include <QtUml/QUmlImage>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlProfile>
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

QUmlStereotypeObject::QUmlStereotypeObject(QUmlStereotype *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlStereotypeObject::~QUmlStereotypeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlStereotype *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStereotypeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStereotypeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlStereotype *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStereotypeObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlStereotypeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->name();
}

QObject *QUmlStereotypeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlStereotype *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->nameExpression()->asQObject();
}

QObject *QUmlStereotypeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlStereotype *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->namespace_()->asQObject();
}

QString QUmlStereotypeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlStereotypeObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlStereotypeObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlStereotype *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlStereotypeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlStereotypeObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlStereotype *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlStereotypeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->isLeaf();
}

const QSet<QObject *> QUmlStereotypeObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlStereotypeObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlStereotypeObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStereotypeObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->isFinalSpecialization();
}

QObject *QUmlStereotypeObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlStereotypeObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStereotypeObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlStereotype *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlStereotypeObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStereotypeObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlStereotype *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlStereotypeObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlStereotypeObject::ownedConnector() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedConnector())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::part() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->part())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::role() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->role())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlStereotypeObject::ownedPort() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedPort())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlStereotypeObject::classifierBehavior() const
{
    if (!qmodelingobjectproperty_cast<QUmlStereotype *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlStereotypeObject::interfaceRealization() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->interfaceRealization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::ownedBehavior() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedBehavior())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlStereotypeObject::extension() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->extension())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStereotypeObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->isAbstract();
}

bool QUmlStereotypeObject::isActive() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->isActive();
}

const QList<QObject *> QUmlStereotypeObject::nestedClassifier() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->nestedClassifier())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlStereotypeObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlStereotypeObject::ownedOperation() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedOperation())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlStereotypeObject::ownedReception() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->ownedReception())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStereotypeObject::superClass() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->superClass())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Stereotype]

const QSet<QObject *> QUmlStereotypeObject::icon() const
{
    QSet<QObject *> set;
    foreach (QUmlImage *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->icon())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStereotypeObject::profile() const
{
    if (!qmodelingobjectproperty_cast<QUmlStereotype *>(this)->profile())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->profile()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStereotypeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStereotypeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStereotypeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlStereotypeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStereotypeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStereotypeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlStereotypeObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlStereotypeObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlStereotypeObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlStereotypeObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlStereotypeObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlStereotypeObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlStereotypeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlStereotypeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlStereotypeObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlStereotypeObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlStereotypeObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStereotypeObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlStereotypeObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlStereotypeObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlStereotypeObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->isTemplate();
}

bool QUmlStereotypeObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlStereotypeObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlStereotypeObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStereotype *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Stereotype]

QObject *QUmlStereotypeObject::containingProfile() const
{
    if (!qmodelingobjectproperty_cast<QUmlStereotype *>(this)->containingProfile())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlStereotype *>(this)->containingProfile()->asQObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStereotypeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStereotypeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStereotypeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStereotypeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStereotypeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStereotypeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStereotypeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStereotypeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setName(name);
}

void QUmlStereotypeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStereotypeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStereotypeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlStereotypeObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStereotypeObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStereotypeObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStereotypeObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStereotypeObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStereotypeObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStereotypeObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStereotypeObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStereotypeObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStereotypeObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStereotypeObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlStereotypeObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlStereotypeObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlStereotypeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlStereotypeObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlStereotypeObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlStereotypeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlStereotypeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlStereotypeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStereotypeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStereotypeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlStereotypeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlStereotypeObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlStereotypeObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlStereotypeObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlStereotypeObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlStereotypeObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlStereotypeObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlStereotypeObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlStereotypeObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlStereotypeObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlStereotypeObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlStereotypeObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlStereotypeObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlStereotypeObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setFinalSpecialization(isFinalSpecialization);
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->modifiedResettableProperties() << QStringLiteral("finalSpecialization");
}

void QUmlStereotypeObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlStereotypeObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlStereotypeObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlStereotypeObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlStereotypeObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlStereotypeObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlStereotypeObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlStereotypeObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlStereotypeObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlStereotypeObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlStereotypeObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlStereotypeObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlStereotypeObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlStereotypeObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlStereotypeObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlStereotypeObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeOwnedConnector(qmodelingobjectproperty_cast<QUmlConnector *>(ownedConnector));
}

void QUmlStereotypeObject::addPart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addPart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlStereotypeObject::removePart(QObject *part)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removePart(qmodelingobjectproperty_cast<QUmlProperty *>(part));
}

void QUmlStereotypeObject::addRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

void QUmlStereotypeObject::removeRole(QObject *role)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeRole(qmodelingobjectproperty_cast<QUmlConnectableElement *>(role));
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlStereotypeObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

void QUmlStereotypeObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeOwnedPort(qmodelingobjectproperty_cast<QUmlPort *>(ownedPort));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlStereotypeObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlStereotypeObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlStereotypeObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlStereotypeObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlStereotypeObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlStereotypeObject::addExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlStereotypeObject::removeExtension(QObject *extension)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeExtension(qmodelingobjectproperty_cast<QUmlExtension *>(extension));
}

void QUmlStereotypeObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setAbstract(isAbstract);
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->modifiedResettableProperties() << QStringLiteral("abstract");
}

void QUmlStereotypeObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlStereotypeObject::setActive(bool isActive)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setActive(isActive);
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->modifiedResettableProperties() << QStringLiteral("active");
}

void QUmlStereotypeObject::unsetActive()
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("active"));
}

void QUmlStereotypeObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlStereotypeObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlStereotypeObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlStereotypeObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlStereotypeObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlStereotypeObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlStereotypeObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlStereotypeObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlStereotypeObject::addSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

void QUmlStereotypeObject::removeSuperClass(QObject *superClass)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeSuperClass(qmodelingobjectproperty_cast<QUmlClass *>(superClass));
}

// SLOTS FOR OWNED ATTRIBUTES [Stereotype]

void QUmlStereotypeObject::addIcon(QObject *icon)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->addIcon(qmodelingobjectproperty_cast<QUmlImage *>(icon));
}

void QUmlStereotypeObject::removeIcon(QObject *icon)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->removeIcon(qmodelingobjectproperty_cast<QUmlImage *>(icon));
}

void QUmlStereotypeObject::setProfile(QObject *profile)
{
    qmodelingobjectproperty_cast<QUmlStereotype *>(this)->setProfile(qmodelingobjectproperty_cast<QUmlProfile *>(profile));
}

QT_END_NAMESPACE

