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
#include "qumlliteralnullobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlLiteralNull>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlLiteralNullObject::QUmlLiteralNullObject(QUmlLiteralNull *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlLiteralNullObject::~QUmlLiteralNullObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLiteralNullObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLiteralNullObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLiteralNullObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLiteralNullObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlLiteralNullObject::name() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->name();
}

QObject *QUmlLiteralNullObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlLiteralNullObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->namespace_()->asQModelingObject();
}

QString QUmlLiteralNullObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlLiteralNullObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlLiteralNullObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlLiteralNullObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlLiteralNullObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->visibility();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLiteralNullObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLiteralNullObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLiteralNullObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlLiteralNullObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLiteralNullObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLiteralNullObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlLiteralNullObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlLiteralNullObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->booleanValue();
}

int QUmlLiteralNullObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->integerValue();
}

bool QUmlLiteralNullObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

double QUmlLiteralNullObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->realValue();
}

QString QUmlLiteralNullObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->stringValue();
}

int QUmlLiteralNullObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->unlimitedValue();
}

// OPERATIONS [LiteralNull]

bool QUmlLiteralNullObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->isComputable();
}

bool QUmlLiteralNullObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->isNull();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLiteralNullObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralNullObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralNullObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralNullObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralNullObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLiteralNullObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralNullObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralNullObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->setName(name);
}

void QUmlLiteralNullObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLiteralNullObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLiteralNullObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlLiteralNullObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlLiteralNullObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlLiteralNullObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlLiteralNullObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlLiteralNull *>(this)->setVisibility(visibility);
}

void QUmlLiteralNullObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}


void QUmlLiteralNullObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlTypedElement");
    d->groupProperties.insert(QStringLiteral("QUmlTypedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlValueSpecification");

    d->propertyGroups << QStringLiteral("QUmlLiteralSpecification");

    d->propertyGroups << QStringLiteral("QUmlLiteralNull");
}

void QUmlLiteralNullObject::setPropertyData()
{
}

QT_END_NAMESPACE

