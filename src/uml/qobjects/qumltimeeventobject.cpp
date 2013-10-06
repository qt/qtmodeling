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
#include "qumltimeeventobject_p.h"

#include <QtUml/QUmlTimeEvent>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTimeExpression>

QT_BEGIN_NAMESPACE

QUmlTimeEventObject::QUmlTimeEventObject(QUmlTimeEvent *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlTimeEventObject::~QUmlTimeEventObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTimeEventObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTimeEventObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTimeEventObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlTimeEventObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlTimeEventObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTimeEventObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlTimeEventObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->name();
}

QObject *QUmlTimeEventObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->nameExpression()->asQObject();
}

QObject *QUmlTimeEventObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->namespace_()->asQObject();
}

QString QUmlTimeEventObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlTimeEventObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->visibility();
}

// OWNED ATTRIBUTES [TimeEvent]

bool QUmlTimeEventObject::isRelative() const
{
    return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->isRelative();
}

QObject *QUmlTimeEventObject::when() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->when())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->when()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTimeEventObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTimeEventObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlTimeEventObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlTimeEventObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTimeEventObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlTimeEventObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTimeEventObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTimeEventObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTimeEventObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeEventObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeEventObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeEventObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeEventObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlTimeEventObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlTimeEventObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTimeEventObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeEventObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeEventObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->setName(name);
}

void QUmlTimeEventObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTimeEventObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTimeEventObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlTimeEventObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->setVisibility(visibility);
}

void QUmlTimeEventObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TimeEvent]

void QUmlTimeEventObject::setRelative(bool isRelative)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->setRelative(isRelative);
}

void QUmlTimeEventObject::unsetRelative()
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("relative"));
}

void QUmlTimeEventObject::setWhen(QObject *when)
{
    qmodelingobjectproperty_cast<QUmlTimeEvent *>(this)->setWhen(qmodelingobjectproperty_cast<QUmlTimeExpression *>(when));
}

QT_END_NAMESPACE

