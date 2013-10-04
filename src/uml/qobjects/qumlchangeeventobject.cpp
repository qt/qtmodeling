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
#include "qumlchangeeventobject_p.h"

#include <QtUml/QUmlChangeEvent>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlChangeEventObject::QUmlChangeEventObject(QUmlChangeEvent *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlChangeEventObject::~QUmlChangeEventObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlChangeEventObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlChangeEventObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlChangeEventObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlChangeEventObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlChangeEventObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlChangeEventObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlChangeEventObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->name();
}

QObject *QUmlChangeEventObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->nameExpression()->asQObject();
}

QObject *QUmlChangeEventObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->namespace_()->asQObject();
}

QString QUmlChangeEventObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlChangeEventObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->visibility();
}

// OWNED ATTRIBUTES [ChangeEvent]

QObject *QUmlChangeEventObject::changeExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->changeExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->changeExpression()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlChangeEventObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlChangeEventObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlChangeEventObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlChangeEventObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlChangeEventObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlChangeEventObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlChangeEventObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlChangeEventObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlChangeEventObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlChangeEventObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlChangeEventObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlChangeEventObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlChangeEventObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlChangeEventObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlChangeEventObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlChangeEventObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlChangeEventObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlChangeEventObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->setName(name);
}

void QUmlChangeEventObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlChangeEventObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlChangeEventObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlChangeEventObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlChangeEventObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [ChangeEvent]

void QUmlChangeEventObject::setChangeExpression(QObject *changeExpression)
{
    qmodelingobjectproperty_cast<QUmlChangeEvent *>(this)->setChangeExpression(qmodelingobjectproperty_cast<QUmlValueSpecification *>(changeExpression));
}

QT_END_NAMESPACE

