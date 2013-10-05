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
#include "qumltimeobservationobject_p.h"

#include <QtUml/QUmlTimeObservation>
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

QUmlTimeObservationObject::QUmlTimeObservationObject(QUmlTimeObservation *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlTimeObservationObject::~QUmlTimeObservationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTimeObservationObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTimeObservationObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTimeObservationObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlTimeObservationObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->owningTemplateParameter()->asQObject();
}

QObject *QUmlTimeObservationObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTimeObservationObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlTimeObservationObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->name();
}

QObject *QUmlTimeObservationObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->nameExpression()->asQObject();
}

QObject *QUmlTimeObservationObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->namespace_()->asQObject();
}

QString QUmlTimeObservationObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->qualifiedName();
}
// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlTimeObservationObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->visibility();
}

// OWNED ATTRIBUTES [TimeObservation]

QObject *QUmlTimeObservationObject::event() const
{
    if (!qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->event())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->event()->asQObject();
}

bool QUmlTimeObservationObject::firstEvent() const
{
    return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->firstEvent();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTimeObservationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTimeObservationObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlTimeObservationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlTimeObservationObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTimeObservationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlTimeObservationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTimeObservationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTimeObservationObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTimeObservationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeObservationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeObservationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeObservationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeObservationObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlTimeObservationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlTimeObservationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTimeObservationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeObservationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeObservationObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->setName(name);
}

void QUmlTimeObservationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTimeObservationObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTimeObservationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlTimeObservationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->setVisibility(visibility);
}

void QUmlTimeObservationObject::unsetVisibility()
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TimeObservation]

void QUmlTimeObservationObject::setEvent(QObject *event)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->setEvent(qmodelingobjectproperty_cast<QUmlNamedElement *>(event));
}

void QUmlTimeObservationObject::setFirstEvent(bool firstEvent)
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->setFirstEvent(firstEvent);
}

void QUmlTimeObservationObject::unsetFirstEvent()
{
    qmodelingobjectproperty_cast<QUmlTimeObservation *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("firstEvent"));
}

QT_END_NAMESPACE

