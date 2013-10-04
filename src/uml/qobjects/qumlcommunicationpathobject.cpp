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

QUmlCommunicationPathObject::QUmlCommunicationPathObject(QUmlCommunicationPath *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlCommunicationPathObject::~QUmlCommunicationPathObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCommunicationPathObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCommunicationPathObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCommunicationPathObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlCommunicationPathObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->name();
}

QObject *QUmlCommunicationPathObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->nameExpression()->asQObject();
}

QObject *QUmlCommunicationPathObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->namespace_()->asQObject();
}

QString QUmlCommunicationPathObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlCommunicationPathObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlCommunicationPathObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlCommunicationPathObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlCommunicationPathObject::package() const
{
    if (!qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->package())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->package()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCommunicationPathObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCommunicationPathObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlCommunicationPathObject::templateBinding() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->templateBinding())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlCommunicationPathObject::attribute() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->attribute())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::collaborationUse() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->collaborationUse())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::feature() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->feature())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::general() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->general())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::generalization() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->generalization())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::inheritedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->inheritedMember())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCommunicationPathObject::isAbstract() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->isAbstract();
}

bool QUmlCommunicationPathObject::isFinalSpecialization() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->isFinalSpecialization();
}

QObject *QUmlCommunicationPathObject::ownedTemplateSignature() const
{
    if (!qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->ownedTemplateSignature()->asQObject();
}

const QSet<QObject *> QUmlCommunicationPathObject::ownedUseCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->ownedUseCase())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::powertypeExtent() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->powertypeExtent())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCommunicationPathObject::redefinedClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->redefinedClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCommunicationPathObject::representation() const
{
    if (!qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->representation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->representation()->asQObject();
}

const QSet<QObject *> QUmlCommunicationPathObject::substitution() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->substitution())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCommunicationPathObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->templateParameter()->asQObject();
}

const QSet<QObject *> QUmlCommunicationPathObject::useCase() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->useCase())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlCommunicationPathObject::relatedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->relatedElement())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Association]

const QList<QObject *> QUmlCommunicationPathObject::endType() const
{
    QList<QObject *> list;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->endType())
        list.append(element->asQObject());
    return list;
}

bool QUmlCommunicationPathObject::isDerived() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->isDerived();
}

const QList<QObject *> QUmlCommunicationPathObject::memberEnd() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->memberEnd())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlCommunicationPathObject::navigableOwnedEnd() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->navigableOwnedEnd())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlCommunicationPathObject::ownedEnd() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->ownedEnd())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCommunicationPathObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCommunicationPathObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCommunicationPathObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCommunicationPathObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCommunicationPathObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCommunicationPathObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlCommunicationPathObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlCommunicationPathObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlCommunicationPathObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlCommunicationPathObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlCommunicationPathObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlCommunicationPathObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]
// OPERATIONS [RedefinableElement]

bool QUmlCommunicationPathObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCommunicationPathObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlCommunicationPathObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->parameterableElements())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlCommunicationPathObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->allFeatures())
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCommunicationPathObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->allParents())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCommunicationPathObject::conformsTo(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->conformsTo(qmodelingobjectproperty_cast<QUmlClassifier *>(other));
}

bool QUmlCommunicationPathObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->hasVisibilityOf(qmodelingobjectproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlCommunicationPathObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingobjectproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->inherit(inhsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCommunicationPathObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->inheritableMembers(qmodelingobjectproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQObject());
    return set;
}

bool QUmlCommunicationPathObject::isTemplate() const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->isTemplate();
}

bool QUmlCommunicationPathObject::maySpecializeType(QObject *c) const
{
    return qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->maySpecializeType(qmodelingobjectproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlCommunicationPathObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->parents())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCommunicationPathObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCommunicationPathObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCommunicationPathObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCommunicationPathObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCommunicationPathObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCommunicationPathObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCommunicationPathObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCommunicationPathObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setName(name);
}

void QUmlCommunicationPathObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCommunicationPathObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCommunicationPathObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlCommunicationPathObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlCommunicationPathObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlCommunicationPathObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlCommunicationPathObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlCommunicationPathObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlCommunicationPathObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlCommunicationPathObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlCommunicationPathObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlCommunicationPathObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlCommunicationPathObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlCommunicationPathObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlCommunicationPathObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlCommunicationPathObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlCommunicationPathObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlCommunicationPathObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlCommunicationPathObject::setPackage(QObject *package)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setPackage(qmodelingobjectproperty_cast<QUmlPackage *>(package));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCommunicationPathObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlCommunicationPathObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlCommunicationPathObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCommunicationPathObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCommunicationPathObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCommunicationPathObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlCommunicationPathObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlCommunicationPathObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlCommunicationPathObject::addAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlCommunicationPathObject::removeAttribute(QObject *attribute)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(attribute));
}

void QUmlCommunicationPathObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlCommunicationPathObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeCollaborationUse(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(collaborationUse));
}

void QUmlCommunicationPathObject::addFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlCommunicationPathObject::removeFeature(QObject *feature)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeFeature(qmodelingobjectproperty_cast<QUmlFeature *>(feature));
}

void QUmlCommunicationPathObject::addGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlCommunicationPathObject::removeGeneral(QObject *general)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeGeneral(qmodelingobjectproperty_cast<QUmlClassifier *>(general));
}

void QUmlCommunicationPathObject::addGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlCommunicationPathObject::removeGeneralization(QObject *generalization)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeGeneralization(qmodelingobjectproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlCommunicationPathObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlCommunicationPathObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeInheritedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(inheritedMember));
}

void QUmlCommunicationPathObject::setAbstract(bool isAbstract)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setAbstract(isAbstract);
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->modifiedResettableProperties() << QStringLiteral("abstract");
}

void QUmlCommunicationPathObject::unsetAbstract()
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("abstract"));
}

void QUmlCommunicationPathObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setFinalSpecialization(isFinalSpecialization);
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->modifiedResettableProperties() << QStringLiteral("finalSpecialization");
}

void QUmlCommunicationPathObject::unsetFinalSpecialization()
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("finalSpecialization"));
}

void QUmlCommunicationPathObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setOwnedTemplateSignature(qmodelingobjectproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
}

void QUmlCommunicationPathObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlCommunicationPathObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(ownedUseCase));
}

void QUmlCommunicationPathObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addPowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlCommunicationPathObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removePowertypeExtent(qmodelingobjectproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
}

void QUmlCommunicationPathObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlCommunicationPathObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeRedefinedClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinedClassifier));
}

void QUmlCommunicationPathObject::setRepresentation(QObject *representation)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setRepresentation(qmodelingobjectproperty_cast<QUmlCollaborationUse *>(representation));
}

void QUmlCommunicationPathObject::addSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlCommunicationPathObject::removeSubstitution(QObject *substitution)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeSubstitution(qmodelingobjectproperty_cast<QUmlSubstitution *>(substitution));
}

void QUmlCommunicationPathObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
}

void QUmlCommunicationPathObject::addUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

void QUmlCommunicationPathObject::removeUseCase(QObject *useCase)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeUseCase(qmodelingobjectproperty_cast<QUmlUseCase *>(useCase));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlCommunicationPathObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlCommunicationPathObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [Association]

void QUmlCommunicationPathObject::addEndType(QObject *endType)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addEndType(qmodelingobjectproperty_cast<QUmlType *>(endType));
}

void QUmlCommunicationPathObject::removeEndType(QObject *endType)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeEndType(qmodelingobjectproperty_cast<QUmlType *>(endType));
}

void QUmlCommunicationPathObject::setDerived(bool isDerived)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->setDerived(isDerived);
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->modifiedResettableProperties() << QStringLiteral("derived");
}

void QUmlCommunicationPathObject::unsetDerived()
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("derived"));
}

void QUmlCommunicationPathObject::addMemberEnd(QObject *memberEnd)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addMemberEnd(qmodelingobjectproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlCommunicationPathObject::removeMemberEnd(QObject *memberEnd)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeMemberEnd(qmodelingobjectproperty_cast<QUmlProperty *>(memberEnd));
}

void QUmlCommunicationPathObject::addNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addNavigableOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlCommunicationPathObject::removeNavigableOwnedEnd(QObject *navigableOwnedEnd)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeNavigableOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(navigableOwnedEnd));
}

void QUmlCommunicationPathObject::addOwnedEnd(QObject *ownedEnd)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->addOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(ownedEnd));
}

void QUmlCommunicationPathObject::removeOwnedEnd(QObject *ownedEnd)
{
    qmodelingobjectproperty_cast<QUmlCommunicationPath *>(this)->removeOwnedEnd(qmodelingobjectproperty_cast<QUmlProperty *>(ownedEnd));
}

QT_END_NAMESPACE

