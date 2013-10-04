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
#include "qumlsignaleventobject_p.h"

#include <QtUml/QUmlSignalEvent>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlSignal>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlSignalEventObject::QUmlSignalEventObject(QUmlSignalEvent *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlSignalEventObject::~QUmlSignalEventObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlSignalEventObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSignalEventObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSignalEventObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlSignalEventObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlSignalEventObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlSignalEventObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlSignalEventObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->name();
}

QObject *QUmlSignalEventObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->nameExpression()->asQObject();
}

QObject *QUmlSignalEventObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->namespace_()->asQObject();
}

QString QUmlSignalEventObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlSignalEventObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->visibility();
}

// OWNED ATTRIBUTES [SignalEvent]

QObject *QUmlSignalEventObject::signal() const
{
    if (!qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->signal())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->signal()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlSignalEventObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSignalEventObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlSignalEventObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlSignalEventObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlSignalEventObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlSignalEventObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSignalEventObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlSignalEventObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlSignalEventObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSignalEventObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSignalEventObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSignalEventObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSignalEventObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlSignalEventObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlSignalEventObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlSignalEventObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSignalEventObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSignalEventObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->setName(name);
}

void QUmlSignalEventObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlSignalEventObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlSignalEventObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlSignalEventObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->setVisibility(visibility);
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->modifiedResettableProperties() << QStringLiteral("visibility");
}

void QUmlSignalEventObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [SignalEvent]

void QUmlSignalEventObject::setSignal(QObject *signal)
{
    qmodelingobjectproperty_cast<QUmlSignalEvent *>(this)->setSignal(qmodelingobjectproperty_cast<QUmlSignal *>(signal));
}

QT_END_NAMESPACE

