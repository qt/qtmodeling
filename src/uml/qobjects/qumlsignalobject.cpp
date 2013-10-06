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
#include "qumlsignalobject_p.h"

#include <QtUml/QUmlSignal>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
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
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlSignalObject::QUmlSignalObject(QUmlSignal *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlSignalObject::~QUmlSignalObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlSignal *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlSignalObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSignalObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignal *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignal *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlSignalObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlSignalObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->name();
}

QObject *QUmlSignalObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignal *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignal *>(this)->nameExpression()->asQObject();
}

QObject *QUmlSignalObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignal *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignal *>(this)->namespace_()->asQObject();
}

QString QUmlSignalObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlSignalObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->elementImports())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->importedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->members())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->ownedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->ownedRules())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->packageImports())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlSignalObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignal *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignal *>(this)->owningTemplateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlSignalObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlSignalObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignal *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignal *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlSignalObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->isLeaf();
}

const QSet<QObject *> QUmlSignalObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlSignalObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->templateBindings())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlSignalObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->attributes())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->collaborationUses())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->features())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->generals())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->generalizations())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->inheritedMembers())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSignalObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->isAbstract();
}

bool QUmlSignalObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->isFinalSpecialization();
}

QObject *QUmlSignalObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignal *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignal *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlSignalObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->ownedUseCases())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->powertypeExtents())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->redefinedClassifiers())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSignalObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignal *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignal *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlSignalObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->substitutions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSignalObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignal *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignal *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlSignalObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->useCases())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Signal]

const QList<QObject *> QUmlSignalObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->ownedAttributes())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlSignalObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSignalObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlSignalObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlSignalObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSignalObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlSignalObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlSignalObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlSignalObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlSignalObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlSignalObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlSignalObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlSignalObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlSignalObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlSignalObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlSignalObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlSignalObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlSignalObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSignalObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlSignalObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlSignalObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlSignalObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlSignalObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->isTemplate();
}

bool QUmlSignalObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlSignal *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlSignalObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlSignal *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlSignalObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSignalObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSignalObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSignalObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSignalObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlSignalObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSignalObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSignalObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setName(name);
}

void QUmlSignalObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlSignalObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlSignalObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlSignalObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlSignalObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlSignalObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlSignalObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlSignalObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlSignalObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlSignalObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlSignalObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlSignalObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlSignalObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlSignalObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlSignalObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlSignalObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlSignalObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setVisibility(visibility);
}

void QUmlSignalObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlSignalObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlSignalObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setLeaf(isLeaf);
}

void QUmlSignalObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlSignalObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlSignalObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlSignalObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlSignalObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlSignalObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlSignalObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlSignalObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlSignalObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlSignalObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlSignalObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlSignalObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlSignalObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlSignalObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlSignalObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlSignalObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlSignalObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlSignalObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlSignalObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlSignalObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setAbstract(isAbstract);
}

void QUmlSignalObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlSignalObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlSignalObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlSignalObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlSignalObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlSignalObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlSignalObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlSignalObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlSignalObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlSignalObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlSignalObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlSignalObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlSignalObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlSignalObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlSignalObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlSignalObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Signal]

void QUmlSignalObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlSignalObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlSignal *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

QT_END_NAMESPACE

