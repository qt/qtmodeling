/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qumltemplatebinding.h"
#include "qumltemplatebinding_p.h"

#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameterSubstitution>
#include <QtUml/QUmlTemplateSignature>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTemplateBindingPrivate::QUmlTemplateBindingPrivate() :
    signature(0),
    boundElement(0)
{
}

QUmlTemplateBindingPrivate::~QUmlTemplateBindingPrivate()
{
}

/*!
    \class QUmlTemplateBinding

    \inmodule QtUml

    \brief A template binding represents a relationship between a templateable element and a template. A template binding specifies the substitutions of actual parameters for the formal parameters of the template.
 */

QUmlTemplateBinding::QUmlTemplateBinding(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDirectedRelationship(*new QUmlTemplateBindingPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlTemplateBinding::QUmlTemplateBinding(QUmlTemplateBindingPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlDirectedRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlTemplateBinding::~QUmlTemplateBinding()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlTemplateBinding
// ---------------------------------------------------------------

/*!
    The template signature for the template that is the target of the binding.
 */
QUmlTemplateSignature *QUmlTemplateBinding::signature() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateBinding);
    return d->signature;
}

void QUmlTemplateBinding::setSignature(QUmlTemplateSignature *signature)
{
    // This is a read-write association end

    Q_D(QUmlTemplateBinding);
    if (d->signature != signature) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QUmlElement *>(d->signature));

        d->signature = signature;

        // Adjust subsetted property(ies)
        if (signature) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QUmlElement *>(signature));
        }
    }
}

/*!
    The element that is bound by this binding.
 */
QUmlTemplateableElement *QUmlTemplateBinding::boundElement() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateBinding);
    return d->boundElement;
}

void QUmlTemplateBinding::setBoundElement(QUmlTemplateableElement *boundElement)
{
    // This is a read-write association end

    Q_D(QUmlTemplateBinding);
    if (d->boundElement != boundElement) {
        // Adjust opposite property
        if (d->boundElement)
            d->boundElement->removeTemplateBinding(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QUmlElement *>(d->boundElement));

        d->boundElement = boundElement;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(boundElement));
        if (boundElement) {
            (qwrappedobject_cast<QUmlDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QUmlElement *>(boundElement));
        }

        // Adjust opposite property
        if (boundElement)
            boundElement->addTemplateBinding(this);
    }
}

/*!
    The parameter substitutions owned by this template binding.
 */
QSet<QUmlTemplateParameterSubstitution *> QUmlTemplateBinding::parameterSubstitutions() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateBinding);
    return d->parameterSubstitutions;
}

void QUmlTemplateBinding::addParameterSubstitution(QUmlTemplateParameterSubstitution *parameterSubstitution)
{
    // This is a read-write association end

    Q_D(QUmlTemplateBinding);
    if (!d->parameterSubstitutions.contains(parameterSubstitution)) {
        d->parameterSubstitutions.insert(parameterSubstitution);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(parameterSubstitution));

        // Adjust opposite property
        parameterSubstitution->setTemplateBinding(this);
    }
}

void QUmlTemplateBinding::removeParameterSubstitution(QUmlTemplateParameterSubstitution *parameterSubstitution)
{
    // This is a read-write association end

    Q_D(QUmlTemplateBinding);
    if (d->parameterSubstitutions.contains(parameterSubstitution)) {
        d->parameterSubstitutions.remove(parameterSubstitution);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(parameterSubstitution));

        // Adjust opposite property
        parameterSubstitution->setTemplateBinding(0);
    }
}

void QUmlTemplateBinding::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("signature")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("signature")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("signature")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The template signature for the template that is the target of the binding.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("signature")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("signature")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlDirectedRelationship::targets");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("signature")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("boundElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("boundElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("boundElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element that is bound by this binding.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("boundElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("boundElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner QUmlDirectedRelationship::sources");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("boundElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QTemplateableElement::templateBinding");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("parameterSubstitutions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("parameterSubstitutions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("parameterSubstitutions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The parameter substitutions owned by this template binding.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("parameterSubstitutions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("parameterSubstitutions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateBinding")][QString::fromLatin1("parameterSubstitutions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QTemplateParameterSubstitution::templateBinding");

    QUmlDirectedRelationship::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltemplatebinding.cpp"

