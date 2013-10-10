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
#include "private/qmodelingobject_p.h"

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

QUmlUseCaseObject::QUmlUseCaseObject(QUmlUseCase *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlUseCaseObject::~QUmlUseCaseObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlUseCase *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlUseCaseObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlUseCaseObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlUseCase *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUseCase *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlUseCaseObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlUseCaseObject::name() const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->name();
}

QObject *QUmlUseCaseObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlUseCase *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUseCase *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlUseCaseObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlUseCase *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUseCase *>(this)->namespace_()->asQModelingObject();
}

QString QUmlUseCaseObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlUseCaseObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlUseCaseObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlUseCase *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUseCase *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlUseCaseObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlUseCaseObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlUseCase *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUseCase *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlUseCaseObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->isLeaf();
}

const QSet<QObject *> QUmlUseCaseObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlUseCaseObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlUseCaseObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->generals())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlUseCaseObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->isAbstract();
}

bool QUmlUseCaseObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->isFinalSpecialization();
}

QObject *QUmlUseCaseObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlUseCase *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUseCase *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlUseCaseObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlUseCaseObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlUseCase *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUseCase *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlUseCaseObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlUseCaseObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlUseCase *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUseCase *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlUseCaseObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlUseCaseObject::classifierBehavior() const
{
    if (!qmodelingelementproperty_cast<QUmlUseCase *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUseCase *>(this)->classifierBehavior()->asQModelingObject();
}

const QSet<QObject *> QUmlUseCaseObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->interfaceRealizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->ownedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [UseCase]

const QSet<QObject *> QUmlUseCaseObject::extends() const
{
    QSet<QObject *> set;
    foreach (QUmlExtend *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->extends())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::extensionPoints() const
{
    QSet<QObject *> set;
    foreach (QUmlExtensionPoint *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->extensionPoints())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::includes() const
{
    QSet<QObject *> set;
    foreach (QUmlInclude *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->includes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUseCaseObject::subjects() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->subjects())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlUseCaseObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlUseCaseObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlUseCaseObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlUseCaseObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlUseCaseObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlUseCaseObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlUseCaseObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlUseCaseObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlUseCaseObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlUseCaseObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlUseCaseObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlUseCaseObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlUseCaseObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlUseCaseObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlUseCaseObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlUseCaseObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlUseCaseObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlUseCaseObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlUseCaseObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlUseCaseObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlUseCaseObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlUseCaseObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->isTemplate();
}

bool QUmlUseCaseObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlUseCase *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlUseCaseObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [UseCase]

QSet<QObject *> QUmlUseCaseObject::allIncludedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlUseCase *>(this)->allIncludedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlUseCaseObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUseCaseObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUseCaseObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUseCaseObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUseCaseObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlUseCaseObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUseCaseObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUseCaseObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setName(name);
}

void QUmlUseCaseObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlUseCaseObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlUseCaseObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlUseCaseObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlUseCaseObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlUseCaseObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlUseCaseObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlUseCaseObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlUseCaseObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlUseCaseObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlUseCaseObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlUseCaseObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlUseCaseObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlUseCaseObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlUseCaseObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlUseCaseObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlUseCaseObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setVisibility(visibility);
}

void QUmlUseCaseObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlUseCaseObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlUseCaseObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setLeaf(isLeaf);
}

void QUmlUseCaseObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlUseCaseObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlUseCaseObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlUseCaseObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlUseCaseObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlUseCaseObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlUseCaseObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlUseCaseObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlUseCaseObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlUseCaseObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlUseCaseObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlUseCaseObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlUseCaseObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlUseCaseObject::addGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlUseCaseObject::removeGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlUseCaseObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlUseCaseObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlUseCaseObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlUseCaseObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlUseCaseObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setAbstract(isAbstract);
}

void QUmlUseCaseObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlUseCaseObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlUseCaseObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlUseCaseObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlUseCaseObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlUseCaseObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlUseCaseObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlUseCaseObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlUseCaseObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlUseCaseObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlUseCaseObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlUseCaseObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlUseCaseObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlUseCaseObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlUseCaseObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlUseCaseObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlUseCaseObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->setClassifierBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(classifierBehavior));
}

void QUmlUseCaseObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlUseCaseObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
}

void QUmlUseCaseObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

void QUmlUseCaseObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
}

// SLOTS FOR OWNED ATTRIBUTES [UseCase]

void QUmlUseCaseObject::addExtend(QObject *extend)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addExtend(qmodelingelementproperty_cast<QUmlExtend *>(extend));
}

void QUmlUseCaseObject::removeExtend(QObject *extend)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeExtend(qmodelingelementproperty_cast<QUmlExtend *>(extend));
}

void QUmlUseCaseObject::addExtensionPoint(QObject *extensionPoint)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addExtensionPoint(qmodelingelementproperty_cast<QUmlExtensionPoint *>(extensionPoint));
}

void QUmlUseCaseObject::removeExtensionPoint(QObject *extensionPoint)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeExtensionPoint(qmodelingelementproperty_cast<QUmlExtensionPoint *>(extensionPoint));
}

void QUmlUseCaseObject::addInclude(QObject *include)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addInclude(qmodelingelementproperty_cast<QUmlInclude *>(include));
}

void QUmlUseCaseObject::removeInclude(QObject *include)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeInclude(qmodelingelementproperty_cast<QUmlInclude *>(include));
}

void QUmlUseCaseObject::addSubject(QObject *subject)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->addSubject(qmodelingelementproperty_cast<QUmlClassifier *>(subject));
}

void QUmlUseCaseObject::removeSubject(QObject *subject)
{
    qmodelingelementproperty_cast<QUmlUseCase *>(this)->removeSubject(qmodelingelementproperty_cast<QUmlClassifier *>(subject));
}


void QUmlUseCaseObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlNamespace");
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlType");
    d->groupProperties.insert(QStringLiteral("QUmlType"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("package"))));

    d->propertyGroups << QStringLiteral("QUmlRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateableElement");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateBindings"))));

    d->propertyGroups << QStringLiteral("QUmlClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("attributes"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("collaborationUses"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("features"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generals"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalizations"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inheritedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isAbstract"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isFinalSpecialization"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedTemplateSignature"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedUseCases"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("powertypeExtents"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("representation"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("substitutions"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("useCases"))));

    d->propertyGroups << QStringLiteral("QUmlBehavioredClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("classifierBehavior"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interfaceRealizations"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedBehaviors"))));

    d->propertyGroups << QStringLiteral("QUmlUseCase");
    d->groupProperties.insert(QStringLiteral("QUmlUseCase"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("extends"))));
    d->groupProperties.insert(QStringLiteral("QUmlUseCase"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("extensionPoints"))));
    d->groupProperties.insert(QStringLiteral("QUmlUseCase"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("includes"))));
    d->groupProperties.insert(QStringLiteral("QUmlUseCase"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("subjects"))));
}

void QUmlUseCaseObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extends, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extends, PropertyClassRole, QStringLiteral("QUmlUseCase"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extends, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extends, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extends, DocumentationRole, QStringLiteral("References the Extend relationships owned by this use case."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extends, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extends, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extends, OppositeEndRole, QStringLiteral("Extend-extension"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extensionPoints, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extensionPoints, PropertyClassRole, QStringLiteral("QUmlUseCase"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extensionPoints, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extensionPoints, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extensionPoints, DocumentationRole, QStringLiteral("References the ExtensionPoints owned by the use case."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extensionPoints, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extensionPoints, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, extensionPoints, OppositeEndRole, QStringLiteral("ExtensionPoint-useCase"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, includes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, includes, PropertyClassRole, QStringLiteral("QUmlUseCase"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, includes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, includes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, includes, DocumentationRole, QStringLiteral("References the Include relationships owned by this use case."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, includes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, includes, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, includes, OppositeEndRole, QStringLiteral("Include-includingCase"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, subjects, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, subjects, PropertyClassRole, QStringLiteral("QUmlUseCase"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, subjects, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, subjects, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, subjects, DocumentationRole, QStringLiteral("References the subjects to which this use case applies. The subject or its parts realize all the use cases that apply to this subject. Use cases need not be attached to any specific subject, however. The subject may, but need not, own the use cases that apply to it."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, subjects, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, subjects, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUseCase, subjects, OppositeEndRole, QStringLiteral("Classifier-useCase"));

}

QT_END_NAMESPACE

