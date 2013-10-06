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
#include "qumlsubstitutionobject_p.h"

#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlSubstitutionObject::QUmlSubstitutionObject(QUmlSubstitution *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlSubstitutionObject::~QUmlSubstitutionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlSubstitutionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSubstitutionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSubstitutionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlSubstitutionObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlSubstitutionObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlSubstitutionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlSubstitutionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->name();
}

QObject *QUmlSubstitutionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->nameExpression()->asQObject();
}

QObject *QUmlSubstitutionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->namespace_()->asQObject();
}

QString QUmlSubstitutionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlSubstitutionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlSubstitutionObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->relatedElements())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlSubstitutionObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->sources())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSubstitutionObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->targets())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlSubstitutionObject::clients() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->clients())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSubstitutionObject::suppliers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->suppliers())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Abstraction]

QObject *QUmlSubstitutionObject::mapping() const
{
    if (!qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->mapping())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->mapping()->asQObject();
}

// OWNED ATTRIBUTES [Substitution]

QObject *QUmlSubstitutionObject::contract() const
{
    if (!qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->contract())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->contract()->asQObject();
}

QObject *QUmlSubstitutionObject::substitutingClassifier() const
{
    if (!qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->substitutingClassifier())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->substitutingClassifier()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlSubstitutionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSubstitutionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlSubstitutionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlSubstitutionObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlSubstitutionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlSubstitutionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSubstitutionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlSubstitutionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlSubstitutionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSubstitutionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSubstitutionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSubstitutionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSubstitutionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlSubstitutionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlSubstitutionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlSubstitutionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSubstitutionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSubstitutionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->setName(name);
}

void QUmlSubstitutionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlSubstitutionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlSubstitutionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlSubstitutionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->setVisibility(visibility);
}

void QUmlSubstitutionObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlSubstitutionObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->addRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlSubstitutionObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->removeRelatedElement(qmodelingobjectproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlSubstitutionObject::addSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->addSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlSubstitutionObject::removeSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->removeSource(qmodelingobjectproperty_cast<QUmlElement *>(source));
}

void QUmlSubstitutionObject::addTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->addTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

void QUmlSubstitutionObject::removeTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->removeTarget(qmodelingobjectproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlSubstitutionObject::addClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->addClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlSubstitutionObject::removeClient(QObject *client)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->removeClient(qmodelingobjectproperty_cast<QUmlNamedElement *>(client));
}

void QUmlSubstitutionObject::addSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->addSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlSubstitutionObject::removeSupplier(QObject *supplier)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->removeSupplier(qmodelingobjectproperty_cast<QUmlNamedElement *>(supplier));
}

// SLOTS FOR OWNED ATTRIBUTES [Abstraction]

void QUmlSubstitutionObject::setMapping(QObject *mapping)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->setMapping(qmodelingobjectproperty_cast<QUmlOpaqueExpression *>(mapping));
}

// SLOTS FOR OWNED ATTRIBUTES [Substitution]

void QUmlSubstitutionObject::setContract(QObject *contract)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->setContract(qmodelingobjectproperty_cast<QUmlClassifier *>(contract));
}

void QUmlSubstitutionObject::setSubstitutingClassifier(QObject *substitutingClassifier)
{
    qmodelingobjectproperty_cast<QUmlSubstitution *>(this)->setSubstitutingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(substitutingClassifier));
}

QT_END_NAMESPACE

