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
#include "qumlcommunicationpathobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlCommunicationPath>
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

QUmlCommunicationPathObject::QUmlCommunicationPathObject(QUmlCommunicationPath *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlCommunicationPathObject::~QUmlCommunicationPathObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCommunicationPathObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCommunicationPathObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCommunicationPathObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlCommunicationPathObject::name() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->name();
}

QObject *QUmlCommunicationPathObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlCommunicationPathObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->namespace_()->asQModelingObject();
}

QString QUmlCommunicationPathObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlCommunicationPathObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlCommunicationPathObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlCommunicationPathObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlCommunicationPathObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCommunicationPathObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCommunicationPathObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlCommunicationPathObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlCommunicationPathObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->generals())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCommunicationPathObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->isAbstract();
}

bool QUmlCommunicationPathObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->isFinalSpecialization();
}

QObject *QUmlCommunicationPathObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlCommunicationPathObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCommunicationPathObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlCommunicationPathObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCommunicationPathObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlCommunicationPathObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlCommunicationPathObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Association]

const QList<QObject *> QUmlCommunicationPathObject::endTypes() const
{
    QList<QObject *> list;
    foreach (QUmlType *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->endTypes())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlCommunicationPathObject::isDerived() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->isDerived();
}

const QList<QObject *> QUmlCommunicationPathObject::memberEnds() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->memberEnds())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlCommunicationPathObject::navigableOwnedEnds() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->navigableOwnedEnds())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlCommunicationPathObject::ownedEnds() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->ownedEnds())
        list.append(element->asQModelingObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCommunicationPathObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCommunicationPathObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCommunicationPathObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCommunicationPathObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCommunicationPathObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCommunicationPathObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlCommunicationPathObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlCommunicationPathObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlCommunicationPathObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCommunicationPathObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlCommunicationPathObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlCommunicationPathObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlCommunicationPathObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCommunicationPathObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlCommunicationPathObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlCommunicationPathObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCommunicationPathObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCommunicationPathObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlCommunicationPathObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlCommunicationPathObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCommunicationPathObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCommunicationPathObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->isTemplate();
}

bool QUmlCommunicationPathObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlCommunicationPathObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCommunicationPathObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCommunicationPathObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCommunicationPathObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCommunicationPathObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCommunicationPathObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCommunicationPathObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCommunicationPathObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCommunicationPathObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setName(name);
}

void QUmlCommunicationPathObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCommunicationPathObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCommunicationPathObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlCommunicationPathObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlCommunicationPathObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlCommunicationPathObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlCommunicationPathObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlCommunicationPathObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlCommunicationPathObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlCommunicationPathObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlCommunicationPathObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlCommunicationPathObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlCommunicationPathObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlCommunicationPathObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlCommunicationPathObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlCommunicationPathObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlCommunicationPathObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setVisibility(visibility);
}

void QUmlCommunicationPathObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlCommunicationPathObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCommunicationPathObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setLeaf(isLeaf);
}

void QUmlCommunicationPathObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlCommunicationPathObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCommunicationPathObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCommunicationPathObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCommunicationPathObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlCommunicationPathObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlCommunicationPathObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlCommunicationPathObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlCommunicationPathObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
}

void QUmlCommunicationPathObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlCommunicationPathObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlCommunicationPathObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlCommunicationPathObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
}

void QUmlCommunicationPathObject::addGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlCommunicationPathObject::removeGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
}

void QUmlCommunicationPathObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlCommunicationPathObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlCommunicationPathObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlCommunicationPathObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlCommunicationPathObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setAbstract(isAbstract);
}

void QUmlCommunicationPathObject::unsetAbstract()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("abstract"));
}

void QUmlCommunicationPathObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlCommunicationPathObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlCommunicationPathObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlCommunicationPathObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlCommunicationPathObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlCommunicationPathObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlCommunicationPathObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlCommunicationPathObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlCommunicationPathObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlCommunicationPathObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlCommunicationPathObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlCommunicationPathObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlCommunicationPathObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlCommunicationPathObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlCommunicationPathObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlCommunicationPathObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlCommunicationPathObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [Association]

void QUmlCommunicationPathObject::addEndType(QObject *endType)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addEndType(qmodelingelementproperty_cast<QUmlType *>(endType));
}

void QUmlCommunicationPathObject::removeEndType(QObject *endType)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeEndType(qmodelingelementproperty_cast<QUmlType *>(endType));
}

void QUmlCommunicationPathObject::setDerived(bool isDerived)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->setDerived(isDerived);
}

void QUmlCommunicationPathObject::unsetDerived()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("derived"));
}

void QUmlCommunicationPathObject::addMemberEnd(QObject *memberEnd)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addMemberEnd(qmodelingelementproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlCommunicationPathObject::removeMemberEnd(QObject *memberEnd)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeMemberEnd(qmodelingelementproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlCommunicationPathObject::addNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addNavigableOwnedEnd(qmodelingelementproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlCommunicationPathObject::removeNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeNavigableOwnedEnd(qmodelingelementproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlCommunicationPathObject::addOwnedEnd(QObject *ownedEnd)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->addOwnedEnd(qmodelingelementproperty_cast<QUmlProperty *>(ownedEnd));
}

void QUmlCommunicationPathObject::removeOwnedEnd(QObject *ownedEnd)
{
    qmodelingelementproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedEnd(qmodelingelementproperty_cast<QUmlProperty *>(ownedEnd));
}


void QUmlCommunicationPathObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));

    d->propertyGroups << QStringLiteral("QUmlAssociation");
    d->groupProperties.insert(QStringLiteral("QUmlAssociation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("endTypes"))));
    d->groupProperties.insert(QStringLiteral("QUmlAssociation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isDerived"))));
    d->groupProperties.insert(QStringLiteral("QUmlAssociation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("memberEnds"))));
    d->groupProperties.insert(QStringLiteral("QUmlAssociation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("navigableOwnedEnds"))));
    d->groupProperties.insert(QStringLiteral("QUmlAssociation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedEnds"))));

    d->propertyGroups << QStringLiteral("QUmlCommunicationPath");
}

void QUmlCommunicationPathObject::setPropertyData()
{
}

QT_END_NAMESPACE

