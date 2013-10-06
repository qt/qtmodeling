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
#include "qumlinterfaceobject_p.h"

#include <QtUml/QUmlInterface>
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
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlProtocolStateMachine>
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

QUmlInterfaceObject::QUmlInterfaceObject(QUmlInterface *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlInterfaceObject::~QUmlInterfaceObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInterface *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInterfaceObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInterfaceObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterface *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterface *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInterfaceObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInterfaceObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->name();
}

QObject *QUmlInterfaceObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterface *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterface *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInterfaceObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterface *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterface *>(this)->namespace_()->asQObject();
}

QString QUmlInterfaceObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlInterfaceObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->elementImports())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->importedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->members())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->ownedMembers())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->ownedRules())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->packageImports())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlInterfaceObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterface *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterface *>(this)->owningTemplateParameter()->asQObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlInterfaceObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlInterfaceObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterface *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterface *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlInterfaceObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->isLeaf();
}

const QSet<QObject *> QUmlInterfaceObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlInterfaceObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->templateBindings())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlInterfaceObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->attributes())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->collaborationUses())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->features())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::generals() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->generals())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->generalizations())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->inheritedMembers())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInterfaceObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->isAbstract();
}

bool QUmlInterfaceObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->isFinalSpecialization();
}

QObject *QUmlInterfaceObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterface *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterface *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlInterfaceObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->ownedUseCases())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->powertypeExtents())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInterfaceObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->redefinedClassifiers())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInterfaceObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterface *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterface *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlInterfaceObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->substitutions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInterfaceObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterface *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterface *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlInterfaceObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->useCases())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Interface]

const QList<QObject *> QUmlInterfaceObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->nestedClassifiers())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlInterfaceObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->ownedAttributes())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlInterfaceObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->ownedOperations())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlInterfaceObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->ownedReceptions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInterfaceObject::protocol() const
{
    if (!qmodelingobjectproperty_cast<QUmlInterface *>(this)->protocol())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInterface *>(this)->protocol()->asQObject();
}

const QSet<QObject *> QUmlInterfaceObject::redefinedInterfaces() const
{
    QSet<QObject *> set;
    foreach (QUmlInterface *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->redefinedInterfaces())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInterfaceObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInterfaceObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInterfaceObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInterfaceObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInterfaceObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInterfaceObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlInterfaceObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlInterfaceObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlInterfaceObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlInterfaceObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlInterfaceObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlInterfaceObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlInterfaceObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlInterfaceObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlInterfaceObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlInterfaceObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInterfaceObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInterfaceObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlInterfaceObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlInterfaceObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInterfaceObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlInterfaceObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->isTemplate();
}

bool QUmlInterfaceObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlInterface *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlInterfaceObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInterface *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInterfaceObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInterfaceObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInterfaceObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInterfaceObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInterfaceObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInterfaceObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInterfaceObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInterfaceObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setName(name);
}

void QUmlInterfaceObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInterfaceObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInterfaceObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlInterfaceObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInterfaceObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInterfaceObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInterfaceObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInterfaceObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInterfaceObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInterfaceObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInterfaceObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInterfaceObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInterfaceObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInterfaceObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlInterfaceObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlInterfaceObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlInterfaceObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setVisibility(visibility);
}

void QUmlInterfaceObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlInterfaceObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlInterfaceObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setLeaf(isLeaf);
}

void QUmlInterfaceObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlInterfaceObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInterfaceObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInterfaceObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlInterfaceObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlInterfaceObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlInterfaceObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlInterfaceObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlInterfaceObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlInterfaceObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlInterfaceObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlInterfaceObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlInterfaceObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlInterfaceObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlInterfaceObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlInterfaceObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlInterfaceObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlInterfaceObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlInterfaceObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlInterfaceObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setAbstract(isAbstract);
}

void QUmlInterfaceObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlInterfaceObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlInterfaceObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlInterfaceObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlInterfaceObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlInterfaceObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlInterfaceObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlInterfaceObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlInterfaceObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlInterfaceObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlInterfaceObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlInterfaceObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlInterfaceObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlInterfaceObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlInterfaceObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlInterfaceObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Interface]

void QUmlInterfaceObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlInterfaceObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeNestedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(nestedClassifier));
}

void QUmlInterfaceObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlInterfaceObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlInterfaceObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlInterfaceObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlInterfaceObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlInterfaceObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeOwnedReception(qmodelingobjectproperty_cast<QUmlReception *>(ownedReception));
}

void QUmlInterfaceObject::setProtocol(QObject *protocol)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->setProtocol(qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(protocol));
}

void QUmlInterfaceObject::addRedefinedInterface(QObject *redefinedInterface)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->addRedefinedInterface(qmodelingobjectproperty_cast<QUmlInterface *>(redefinedInterface));
}

void QUmlInterfaceObject::removeRedefinedInterface(QObject *redefinedInterface)
{
    qmodelingobjectproperty_cast<QUmlInterface *>(this)->removeRedefinedInterface(qmodelingobjectproperty_cast<QUmlInterface *>(redefinedInterface));
}

QT_END_NAMESPACE

