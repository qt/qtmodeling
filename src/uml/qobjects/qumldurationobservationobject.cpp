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
#include "qumldurationobservationobject_p.h"

#include <QtUml/QUmlDurationObservation>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlDurationObservationObject::QUmlDurationObservationObject(QUmlDurationObservation *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlDurationObservationObject::~QUmlDurationObservationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDurationObservationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDurationObservationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDurationObservationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDurationObservationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlDurationObservationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDurationObservationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDurationObservationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->name();
}

QObject *QUmlDurationObservationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDurationObservationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->namespace_()->asQObject();
}

QString QUmlDurationObservationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDurationObservationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->visibility();
}

// OWNED ATTRIBUTES [DurationObservation]

QObject *QUmlDurationObservationObject::event() const
{
    if (!qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->event())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->event()->asQObject();
}

bool QUmlDurationObservationObject::firstEvent() const
{
    return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->firstEvent();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDurationObservationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDurationObservationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlDurationObservationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDurationObservationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDurationObservationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDurationObservationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDurationObservationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDurationObservationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDurationObservationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationObservationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationObservationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationObservationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationObservationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDurationObservationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlDurationObservationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDurationObservationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationObservationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationObservationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->setName(name);
}

void QUmlDurationObservationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDurationObservationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDurationObservationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDurationObservationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->setVisibility(visibility);
}

void QUmlDurationObservationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [DurationObservation]

void QUmlDurationObservationObject::setEvent(QObject *event)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->setEvent(qmodelingobjectproperty_cast<QUmlNamedElement *>(event));
}

void QUmlDurationObservationObject::setFirstEvent(bool firstEvent)
{
    qmodelingobjectproperty_cast<QUmlDurationObservation *>(this)->setFirstEvent(firstEvent);
}

QT_END_NAMESPACE

