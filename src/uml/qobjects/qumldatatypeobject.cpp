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
#include "qumldatatypeobject_p.h"

#include <QtUml/QUmlDataType>
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

QUmlDataTypeObject::QUmlDataTypeObject(QUmlDataType *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlDataTypeObject::~QUmlDataTypeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDataType *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDataTypeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDataTypeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataType *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataType *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDataTypeObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDataTypeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->name();
}

QObject *QUmlDataTypeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataType *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataType *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDataTypeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataType *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataType *>(this)->namespace_()->asQObject();
}

QString QUmlDataTypeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlDataTypeObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDataTypeObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataType *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataType *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDataTypeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlDataTypeObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataType *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataType *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlDataTypeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->isLeaf();
}

const QSet<QObject *> QUmlDataTypeObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlDataTypeObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlDataTypeObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::general() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->general())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDataTypeObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->isAbstract();
}

bool QUmlDataTypeObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->isFinalSpecialization();
}

QObject *QUmlDataTypeObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataType *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataType *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlDataTypeObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDataTypeObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDataTypeObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataType *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataType *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlDataTypeObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDataTypeObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlDataType *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDataType *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlDataTypeObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DataType]

const QList<QObject *> QUmlDataTypeObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlDataTypeObject::ownedOperation() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->ownedOperation())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDataTypeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDataTypeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDataTypeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDataTypeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDataTypeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDataTypeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlDataTypeObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlDataTypeObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlDataTypeObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlDataTypeObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlDataTypeObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDataTypeObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlDataTypeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlDataTypeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlDataTypeObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlDataTypeObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDataTypeObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDataTypeObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlDataTypeObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlDataTypeObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlDataTypeObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->isTemplate();
}

bool QUmlDataTypeObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlDataType *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlDataTypeObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [DataType]

QSet<QObject *> QUmlDataTypeObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlDataType *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDataTypeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDataTypeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDataTypeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDataTypeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDataTypeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDataTypeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDataTypeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDataTypeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setName(name);
}

void QUmlDataTypeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDataTypeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDataTypeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlDataTypeObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlDataTypeObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlDataTypeObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlDataTypeObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlDataTypeObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlDataTypeObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlDataTypeObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlDataTypeObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlDataTypeObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlDataTypeObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlDataTypeObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlDataTypeObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDataTypeObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDataTypeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlDataTypeObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlDataTypeObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlDataTypeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlDataTypeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlDataTypeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDataTypeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDataTypeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlDataTypeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlDataTypeObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlDataTypeObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlDataTypeObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlDataTypeObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlDataTypeObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlDataTypeObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlDataTypeObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlDataTypeObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlDataTypeObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlDataTypeObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlDataTypeObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlDataTypeObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlDataTypeObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlDataTypeObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlDataTypeObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setAbstract(isAbstract);
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->modifiedResettableProperties() << QStringLiteral("abstract");
}

void QUmlDataTypeObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlDataTypeObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setFinalSpecialization(isFinalSpecialization);
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->modifiedResettableProperties() << QStringLiteral("finalSpecialization");
}

void QUmlDataTypeObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlDataTypeObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlDataTypeObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlDataTypeObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlDataTypeObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlDataTypeObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlDataTypeObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlDataTypeObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlDataTypeObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlDataTypeObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlDataTypeObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlDataTypeObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlDataTypeObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlDataTypeObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [DataType]

void QUmlDataTypeObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlDataTypeObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlDataTypeObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlDataTypeObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlDataType *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

QT_END_NAMESPACE

