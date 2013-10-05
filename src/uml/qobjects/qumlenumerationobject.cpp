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
#include "qumlenumerationobject_p.h"

#include <QtUml/QUmlEnumeration>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlEnumerationLiteral>
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

QUmlEnumerationObject::QUmlEnumerationObject(QUmlEnumeration *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlEnumerationObject::~QUmlEnumerationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlEnumerationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlEnumerationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlEnumerationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlEnumerationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->name();
}

QObject *QUmlEnumerationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->nameExpression()->asQObject();
}

QObject *QUmlEnumerationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->namespace_()->asQObject();
}

QString QUmlEnumerationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlEnumerationObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlEnumerationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlEnumerationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlEnumerationObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlEnumerationObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->isLeaf();
}

const QSet<QObject *> QUmlEnumerationObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlEnumerationObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlEnumerationObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::general() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->general())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlEnumerationObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->isAbstract();
}

bool QUmlEnumerationObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->isFinalSpecialization();
}

QObject *QUmlEnumerationObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlEnumerationObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlEnumerationObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlEnumerationObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlEnumerationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlEnumerationObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DataType]

const QList<QObject *> QUmlEnumerationObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlEnumerationObject::ownedOperation() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->ownedOperation())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [Enumeration]

const QList<QObject *> QUmlEnumerationObject::ownedLiteral() const
{
    QList<QObject *> list;
    foreach (QUmlEnumerationLiteral *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->ownedLiteral())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlEnumerationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlEnumerationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlEnumerationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlEnumerationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlEnumerationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlEnumerationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlEnumerationObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlEnumerationObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlEnumerationObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlEnumerationObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlEnumerationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlEnumerationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlEnumerationObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlEnumerationObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlEnumerationObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlEnumerationObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlEnumerationObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlEnumerationObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlEnumerationObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlEnumerationObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlEnumerationObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->isTemplate();
}

bool QUmlEnumerationObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlEnumerationObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [DataType]

QSet<QObject *> QUmlEnumerationObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlEnumerationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlEnumerationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlEnumerationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlEnumerationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlEnumerationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlEnumerationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlEnumerationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlEnumerationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setName(name);
}

void QUmlEnumerationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlEnumerationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlEnumerationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlEnumerationObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlEnumerationObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlEnumerationObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlEnumerationObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlEnumerationObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlEnumerationObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlEnumerationObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlEnumerationObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlEnumerationObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlEnumerationObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlEnumerationObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlEnumerationObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlEnumerationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlEnumerationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setVisibility(visibility);
}

void QUmlEnumerationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlEnumerationObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlEnumerationObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setLeaf(isLeaf);
}

void QUmlEnumerationObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlEnumerationObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlEnumerationObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlEnumerationObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlEnumerationObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlEnumerationObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlEnumerationObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlEnumerationObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlEnumerationObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlEnumerationObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlEnumerationObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlEnumerationObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlEnumerationObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlEnumerationObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlEnumerationObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlEnumerationObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlEnumerationObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlEnumerationObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlEnumerationObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlEnumerationObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setAbstract(isAbstract);
}

void QUmlEnumerationObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlEnumerationObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setFinalSpecialization(isFinalSpecialization);
}

void QUmlEnumerationObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlEnumerationObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlEnumerationObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlEnumerationObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlEnumerationObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlEnumerationObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlEnumerationObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlEnumerationObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlEnumerationObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlEnumerationObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlEnumerationObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlEnumerationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlEnumerationObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlEnumerationObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [DataType]

void QUmlEnumerationObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlEnumerationObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlEnumerationObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlEnumerationObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

// SLOTS FOR OWNED ATTRIBUTES [Enumeration]

void QUmlEnumerationObject::addOwnedLiteral(QObject *ownedLiteral)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->addOwnedLiteral(qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(ownedLiteral));
}

void QUmlEnumerationObject::removeOwnedLiteral(QObject *ownedLiteral)
{
    qmodelingobjectproperty_cast<QUmlEnumeration *>(this)->removeOwnedLiteral(qmodelingobjectproperty_cast<QUmlEnumerationLiteral *>(ownedLiteral));
}

QT_END_NAMESPACE

