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
#include "qumlinformationitemobject_p.h"

#include <QtUml/QUmlInformationItem>
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

QUmlInformationItemObject::QUmlInformationItemObject(QUmlInformationItem *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlInformationItemObject::~QUmlInformationItemObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInformationItemObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInformationItemObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInformationItemObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInformationItemObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->name();
}

QObject *QUmlInformationItemObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInformationItemObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->namespace_()->asQObject();
}

QString QUmlInformationItemObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlInformationItemObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->elementImports())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->importedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->members())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->ownedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->ownedRules())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->packageImports())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlInformationItemObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->owningTemplateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlInformationItemObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlInformationItemObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlInformationItemObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->isLeaf();
}

const QSet<QObject *> QUmlInformationItemObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlInformationItemObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->templateBindings())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlInformationItemObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->attributes())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->collaborationUses())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->features())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->generals())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->generalizations())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->inheritedMembers())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInformationItemObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->isAbstract();
}

bool QUmlInformationItemObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->isFinalSpecialization();
}

QObject *QUmlInformationItemObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlInformationItemObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->ownedUseCases())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->powertypeExtents())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInformationItemObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->redefinedClassifiers())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInformationItemObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlInformationItemObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->substitutions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInformationItemObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlInformationItemObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->useCases())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [InformationItem]

const QSet<QObject *> QUmlInformationItemObject::represented() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->represented())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInformationItemObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInformationItemObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInformationItemObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInformationItemObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInformationItemObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInformationItemObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlInformationItemObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlInformationItemObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlInformationItemObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlInformationItemObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlInformationItemObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlInformationItemObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlInformationItemObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlInformationItemObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlInformationItemObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlInformationItemObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInformationItemObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInformationItemObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlInformationItemObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlInformationItemObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInformationItemObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlInformationItemObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->isTemplate();
}

bool QUmlInformationItemObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlInformationItemObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInformationItemObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInformationItemObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInformationItemObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInformationItemObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInformationItemObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInformationItemObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInformationItemObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInformationItemObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setName(name);
}

void QUmlInformationItemObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInformationItemObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInformationItemObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlInformationItemObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInformationItemObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInformationItemObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInformationItemObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInformationItemObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInformationItemObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInformationItemObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInformationItemObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInformationItemObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInformationItemObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInformationItemObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlInformationItemObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInformationItemObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInformationItemObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setVisibility(visibility);
}

void QUmlInformationItemObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlInformationItemObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlInformationItemObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setLeaf(isLeaf);
}

void QUmlInformationItemObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlInformationItemObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInformationItemObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInformationItemObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlInformationItemObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlInformationItemObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlInformationItemObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlInformationItemObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlInformationItemObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlInformationItemObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlInformationItemObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlInformationItemObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlInformationItemObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlInformationItemObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlInformationItemObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlInformationItemObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlInformationItemObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlInformationItemObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlInformationItemObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlInformationItemObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setAbstract(isAbstract);
}

void QUmlInformationItemObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlInformationItemObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlInformationItemObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlInformationItemObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlInformationItemObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlInformationItemObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlInformationItemObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlInformationItemObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlInformationItemObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlInformationItemObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlInformationItemObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlInformationItemObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlInformationItemObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlInformationItemObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlInformationItemObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlInformationItemObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [InformationItem]

void QUmlInformationItemObject::addRepresented(QObject *represented)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->addRepresented(qmodelingobjectproperty_cast<QUmlClassifier *>(represented));
}

void QUmlInformationItemObject::removeRepresented(QObject *represented)
{
    qmodelingobjectproperty_cast<QUmlInformationItem *>(this)->removeRepresented(qmodelingobjectproperty_cast<QUmlClassifier *>(represented));
}

QT_END_NAMESPACE

