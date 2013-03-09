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

#include "qumltemplateparametersubstitution.h"
#include "qumltemplateparametersubstitution_p.h"

#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateBinding>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTemplateParameterSubstitutionPrivate::QUmlTemplateParameterSubstitutionPrivate() :
    ownedActual(0),
    formal(0),
    actual(0),
    templateBinding(0)
{
}

QUmlTemplateParameterSubstitutionPrivate::~QUmlTemplateParameterSubstitutionPrivate()
{
}

/*!
    \class QUmlTemplateParameterSubstitution

    \inmodule QtUml

    \brief A template parameter substitution relates the actual parameter to a formal template parameter as part of a template binding.
 */

QUmlTemplateParameterSubstitution::QUmlTemplateParameterSubstitution(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(*new QUmlTemplateParameterSubstitutionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlTemplateParameterSubstitution::QUmlTemplateParameterSubstitution(QUmlTemplateParameterSubstitutionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlTemplateParameterSubstitution::~QUmlTemplateParameterSubstitution()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlTemplateParameterSubstitution
// ---------------------------------------------------------------

/*!
    The actual parameter that is owned by this substitution.
 */
QUmlParameterableElement *QUmlTemplateParameterSubstitution::ownedActual() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateParameterSubstitution);
    return d->ownedActual;
}

void QUmlTemplateParameterSubstitution::setOwnedActual(QUmlParameterableElement *ownedActual)
{
    // This is a read-write association end

    Q_D(QUmlTemplateParameterSubstitution);
    if (d->ownedActual != ownedActual) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->ownedActual));

        d->ownedActual = ownedActual;

        // Adjust subsetted property(ies)
        if (ownedActual) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(ownedActual));
        }
        (qwrappedobject_cast<QUmlTemplateParameterSubstitution *>(this))->setActual(qwrappedobject_cast<QUmlParameterableElement *>(ownedActual));
    }
}

/*!
    The formal template parameter that is associated with this substitution.
 */
QUmlTemplateParameter *QUmlTemplateParameterSubstitution::formal() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateParameterSubstitution);
    return d->formal;
}

void QUmlTemplateParameterSubstitution::setFormal(QUmlTemplateParameter *formal)
{
    // This is a read-write association end

    Q_D(QUmlTemplateParameterSubstitution);
    if (d->formal != formal) {
        d->formal = formal;
    }
}

/*!
    The element that is the actual parameter for this substitution.
 */
QUmlParameterableElement *QUmlTemplateParameterSubstitution::actual() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateParameterSubstitution);
    return d->actual;
}

void QUmlTemplateParameterSubstitution::setActual(QUmlParameterableElement *actual)
{
    // This is a read-write association end

    Q_D(QUmlTemplateParameterSubstitution);
    if (d->actual != actual) {
        d->actual = actual;
    }
}

/*!
    The optional bindings from this element to templates.
 */
QUmlTemplateBinding *QUmlTemplateParameterSubstitution::templateBinding() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateParameterSubstitution);
    return d->templateBinding;
}

void QUmlTemplateParameterSubstitution::setTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    // This is a read-write association end

    Q_D(QUmlTemplateParameterSubstitution);
    if (d->templateBinding != templateBinding) {
        // Adjust opposite property
        if (d->templateBinding)
            d->templateBinding->removeParameterSubstitution(this);

        d->templateBinding = templateBinding;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(templateBinding));

        // Adjust opposite property
        if (templateBinding)
            templateBinding->addParameterSubstitution(this);
    }
}

void QUmlTemplateParameterSubstitution::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The actual parameter that is owned by this substitution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements QUmlTemplateParameterSubstitution::actual");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The formal template parameter that is associated with this substitution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element that is the actual parameter for this substitution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The optional bindings from this element to templates.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlTemplateBinding::parameterSubstitution");

    QUmlElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltemplateparametersubstitution.cpp"

