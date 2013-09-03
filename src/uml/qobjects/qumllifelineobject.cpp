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
#include "qumllifelineobject_p.h"

#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPartDecomposition>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlLifelineObject::QUmlLifelineObject(QUmlLifeline *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlLifelineObject::~QUmlLifelineObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlLifeline *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLifelineObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlLifeline *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLifelineObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLifeline *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLifelineObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLifelineObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlLifeline *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlLifelineObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->name();
}

QObject *QUmlLifelineObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->nameExpression()->asQObject();
}

QObject *QUmlLifelineObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->namespace_()->asQObject();
}

QString QUmlLifelineObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlLifelineObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->visibility();
}

// OWNED ATTRIBUTES [Lifeline]

const QSet<QObject *> QUmlLifelineObject::coveredBy() const
{
    QSet<QObject *> set;
    foreach (QUmlInteractionFragment *element, qmodelingobjectproperty_cast<QUmlLifeline *>(this)->coveredBy())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLifelineObject::decomposedAs() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->decomposedAs()->asQObject();
}

QObject *QUmlLifelineObject::interaction() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->interaction()->asQObject();
}

QObject *QUmlLifelineObject::represents() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->represents()->asQObject();
}

QObject *QUmlLifelineObject::selector() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->selector()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLifelineObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLifeline *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLifelineObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLifelineObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlLifeline *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlLifelineObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlLifeline *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLifelineObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLifelineObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlLifeline *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLifelineObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLifelineObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLifelineObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLifelineObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLifelineObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLifelineObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLifelineObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLifelineObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->setName(name);
}
    
void QUmlLifelineObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLifelineObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLifelineObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlLifelineObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [Lifeline]

void QUmlLifelineObject::addCoveredBy(QObject *coveredBy)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->addCoveredBy(qmodelingobjectproperty_cast<QUmlInteractionFragment *>(coveredBy));
}

void QUmlLifelineObject::removeCoveredBy(QObject *coveredBy)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->removeCoveredBy(qmodelingobjectproperty_cast<QUmlInteractionFragment *>(coveredBy));
}

void QUmlLifelineObject::setDecomposedAs(QObject *decomposedAs)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->setDecomposedAs(qmodelingobjectproperty_cast<QUmlPartDecomposition *>(decomposedAs));
}

void QUmlLifelineObject::setInteraction(QObject *interaction)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->setInteraction(qmodelingobjectproperty_cast<QUmlInteraction *>(interaction));
}

void QUmlLifelineObject::setRepresents(QObject *represents)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->setRepresents(qmodelingobjectproperty_cast<QUmlConnectableElement *>(represents));
}

void QUmlLifelineObject::setSelector(QObject *selector)
{
    qmodelingobjectproperty_cast<QUmlLifeline *>(this)->setSelector(qmodelingobjectproperty_cast<QUmlValueSpecification *>(selector));
}

QT_END_NAMESPACE

