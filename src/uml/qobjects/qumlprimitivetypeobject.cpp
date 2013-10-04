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
#include "qumlprimitivetypeobject_p.h"

#include <QtUml/QUmlPrimitiveType>
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

QUmlPrimitiveTypeObject::QUmlPrimitiveTypeObject(QUmlPrimitiveType *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlPrimitiveTypeObject::~QUmlPrimitiveTypeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPrimitiveTypeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPrimitiveTypeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlPrimitiveTypeObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlPrimitiveTypeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->name();
}

QObject *QUmlPrimitiveTypeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->nameExpression()->asQObject();
}

QObject *QUmlPrimitiveTypeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->namespace_()->asQObject();
}

QString QUmlPrimitiveTypeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlPrimitiveTypeObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlPrimitiveTypeObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlPrimitiveTypeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlPrimitiveTypeObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlPrimitiveTypeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->isLeaf();
}

const QSet<QObject *> QUmlPrimitiveTypeObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlPrimitiveTypeObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlPrimitiveTypeObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::general() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->general())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPrimitiveTypeObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->isAbstract();
}

bool QUmlPrimitiveTypeObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->isFinalSpecialization();
}

QObject *QUmlPrimitiveTypeObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlPrimitiveTypeObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPrimitiveTypeObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPrimitiveTypeObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlPrimitiveTypeObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPrimitiveTypeObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlPrimitiveTypeObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DataType]

const QList<QObject *> QUmlPrimitiveTypeObject::ownedAttribute() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->ownedAttribute())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlPrimitiveTypeObject::ownedOperation() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->ownedOperation())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPrimitiveTypeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPrimitiveTypeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlPrimitiveTypeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlPrimitiveTypeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPrimitiveTypeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlPrimitiveTypeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlPrimitiveTypeObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlPrimitiveTypeObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlPrimitiveTypeObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlPrimitiveTypeObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlPrimitiveTypeObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlPrimitiveTypeObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlPrimitiveTypeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlPrimitiveTypeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlPrimitiveTypeObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlPrimitiveTypeObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlPrimitiveTypeObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPrimitiveTypeObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlPrimitiveTypeObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlPrimitiveTypeObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlPrimitiveTypeObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->isTemplate();
}

bool QUmlPrimitiveTypeObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlPrimitiveTypeObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [DataType]

QSet<QObject *> QUmlPrimitiveTypeObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPrimitiveTypeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPrimitiveTypeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPrimitiveTypeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPrimitiveTypeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPrimitiveTypeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlPrimitiveTypeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPrimitiveTypeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPrimitiveTypeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setName(name);
}

void QUmlPrimitiveTypeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlPrimitiveTypeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlPrimitiveTypeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlPrimitiveTypeObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlPrimitiveTypeObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlPrimitiveTypeObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlPrimitiveTypeObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlPrimitiveTypeObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlPrimitiveTypeObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlPrimitiveTypeObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlPrimitiveTypeObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlPrimitiveTypeObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlPrimitiveTypeObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlPrimitiveTypeObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlPrimitiveTypeObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlPrimitiveTypeObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlPrimitiveTypeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlPrimitiveTypeObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlPrimitiveTypeObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlPrimitiveTypeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlPrimitiveTypeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlPrimitiveTypeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlPrimitiveTypeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlPrimitiveTypeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlPrimitiveTypeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlPrimitiveTypeObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlPrimitiveTypeObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlPrimitiveTypeObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlPrimitiveTypeObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlPrimitiveTypeObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlPrimitiveTypeObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlPrimitiveTypeObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlPrimitiveTypeObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlPrimitiveTypeObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlPrimitiveTypeObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlPrimitiveTypeObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlPrimitiveTypeObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlPrimitiveTypeObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlPrimitiveTypeObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlPrimitiveTypeObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setAbstract(isAbstract);
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->modifiedResettableProperties() << QStringLiteral("abstract");
}

void QUmlPrimitiveTypeObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlPrimitiveTypeObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setFinalSpecialization(isFinalSpecialization);
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->modifiedResettableProperties() << QStringLiteral("finalSpecialization");
}

void QUmlPrimitiveTypeObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlPrimitiveTypeObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlPrimitiveTypeObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlPrimitiveTypeObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlPrimitiveTypeObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlPrimitiveTypeObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlPrimitiveTypeObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlPrimitiveTypeObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlPrimitiveTypeObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlPrimitiveTypeObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlPrimitiveTypeObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlPrimitiveTypeObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlPrimitiveTypeObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlPrimitiveTypeObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [DataType]

void QUmlPrimitiveTypeObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlPrimitiveTypeObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeOwnedAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(ownedAttribute));
}

void QUmlPrimitiveTypeObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->addOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

void QUmlPrimitiveTypeObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingobjectproperty_cast<QUmlPrimitiveType *>(this)->removeOwnedOperation(qmodelingobjectproperty_cast<QUmlOperation *>(ownedOperation));
}

QT_END_NAMESPACE

