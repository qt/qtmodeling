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
#include "qumlusecaseobject_p.h"

#include <QtUml/QUmlUseCase>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtend>
#include <QtUml/QUmlExtensionPoint>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInclude>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlUseCaseObject::QUmlUseCaseObject(QUmlUseCase *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlUseCaseObject::~QUmlUseCaseObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlUseCase *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlUseCaseObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlUseCaseObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlUseCase *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlUseCaseObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlUseCaseObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->name();
}

QObject *QUmlUseCaseObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlUseCase *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->nameExpression()->asQObject();
}

QObject *QUmlUseCaseObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlUseCase *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->namespace_()->asQObject();
}

QString QUmlUseCaseObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlUseCaseObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlUseCaseObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlUseCase *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlUseCaseObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlUseCaseObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlUseCase *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlUseCaseObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->isLeaf();
}

const QSet<QObject *> QUmlUseCaseObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlUseCaseObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlUseCaseObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::general() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->general())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlUseCaseObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->isAbstract();
}

bool QUmlUseCaseObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->isFinalSpecialization();
}

QObject *QUmlUseCaseObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlUseCase *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlUseCaseObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlUseCaseObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlUseCase *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlUseCaseObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlUseCaseObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlUseCase *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlUseCaseObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlUseCaseObject::classifierBehavior() const
{
    if (!qmodelingobjectproperty_cast<QUmlUseCase *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->classifierBehavior()->asQObject();
}

const QSet<QObject *> QUmlUseCaseObject::interfaceRealization() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->interfaceRealization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::ownedBehavior() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->ownedBehavior())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [UseCase]

const QSet<QObject *> QUmlUseCaseObject::extend() const
{
    QSet<QObject *> set;
    foreach (QUmlExtend *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->extend())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::extensionPoint() const
{
    QSet<QObject *> set;
    foreach (QUmlExtensionPoint *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->extensionPoint())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::include() const
{
    QSet<QObject *> set;
    foreach (QUmlInclude *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->include())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::subject() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->subject())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlUseCaseObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlUseCaseObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlUseCaseObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlUseCaseObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlUseCaseObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlUseCaseObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlUseCaseObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlUseCaseObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlUseCaseObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlUseCaseObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlUseCaseObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlUseCaseObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlUseCaseObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlUseCaseObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlUseCaseObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlUseCaseObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlUseCaseObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlUseCaseObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlUseCaseObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlUseCaseObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlUseCaseObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlUseCaseObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->isTemplate();
}

bool QUmlUseCaseObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlUseCase *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlUseCaseObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [UseCase]

QSet<QObject *> QUmlUseCaseObject::allIncludedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlUseCase *>(this)->allIncludedUseCases())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlUseCaseObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUseCaseObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUseCaseObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUseCaseObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUseCaseObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlUseCaseObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUseCaseObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUseCaseObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setName(name);
}

void QUmlUseCaseObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlUseCaseObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlUseCaseObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlUseCaseObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlUseCaseObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlUseCaseObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlUseCaseObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlUseCaseObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlUseCaseObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlUseCaseObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlUseCaseObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlUseCaseObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlUseCaseObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlUseCaseObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlUseCaseObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlUseCaseObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlUseCaseObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlUseCaseObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlUseCaseObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlUseCaseObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlUseCaseObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlUseCaseObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlUseCaseObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlUseCaseObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlUseCaseObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlUseCaseObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlUseCaseObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlUseCaseObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlUseCaseObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlUseCaseObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlUseCaseObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlUseCaseObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlUseCaseObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlUseCaseObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlUseCaseObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlUseCaseObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlUseCaseObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlUseCaseObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlUseCaseObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlUseCaseObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setAbstract(isAbstract);
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->modifiedResettableProperties() << QStringLiteral("abstract");
}

void QUmlUseCaseObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlUseCaseObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setFinalSpecialization(isFinalSpecialization);
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->modifiedResettableProperties() << QStringLiteral("finalSpecialization");
}

void QUmlUseCaseObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlUseCaseObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlUseCaseObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlUseCaseObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlUseCaseObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlUseCaseObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlUseCaseObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlUseCaseObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlUseCaseObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlUseCaseObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlUseCaseObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlUseCaseObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlUseCaseObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlUseCaseObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlUseCaseObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->setClassifierBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlUseCaseObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlUseCaseObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeInterfaceRealization(qmodelingobjectproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlUseCaseObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlUseCaseObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeOwnedBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [UseCase]

void QUmlUseCaseObject::addExtend(QObject *extend)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addExtend(qmodelingobjectproperty_cast<QUmlExtend *>(extend));
}

void QUmlUseCaseObject::removeExtend(QObject *extend)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeExtend(qmodelingobjectproperty_cast<QUmlExtend *>(extend));
}

void QUmlUseCaseObject::addExtensionPoint(QObject *extensionPoint)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addExtensionPoint(qmodelingobjectproperty_cast<QUmlExtensionPoint *>(extensionPoint));
}

void QUmlUseCaseObject::removeExtensionPoint(QObject *extensionPoint)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeExtensionPoint(qmodelingobjectproperty_cast<QUmlExtensionPoint *>(extensionPoint));
}

void QUmlUseCaseObject::addInclude(QObject *include)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addInclude(qmodelingobjectproperty_cast<QUmlInclude *>(include));
}

void QUmlUseCaseObject::removeInclude(QObject *include)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeInclude(qmodelingobjectproperty_cast<QUmlInclude *>(include));
}

void QUmlUseCaseObject::addSubject(QObject *subject)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->addSubject(qmodelingobjectproperty_cast<QUmlClassifier *>(subject));
}

void QUmlUseCaseObject::removeSubject(QObject *subject)
{
    qmodelingobjectproperty_cast<QUmlUseCase *>(this)->removeSubject(qmodelingobjectproperty_cast<QUmlClassifier *>(subject));
}

QT_END_NAMESPACE

