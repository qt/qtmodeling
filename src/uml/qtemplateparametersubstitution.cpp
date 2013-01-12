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

#include "qtemplateparametersubstitution.h"
#include "qtemplateparametersubstitution_p.h"

#include <QtUml/QParameterableElement>
#include <QtUml/QTemplateParameter>
#include <QtUml/QTemplateBinding>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QTemplateParameterSubstitutionPrivate::QTemplateParameterSubstitutionPrivate() :
    ownedActual(0),
    formal(0),
    actual(0),
    templateBinding(0)
{
}

QTemplateParameterSubstitutionPrivate::~QTemplateParameterSubstitutionPrivate()
{
}

/*!
    \class QTemplateParameterSubstitution

    \inmodule QtUml

    \brief A template parameter substitution relates the actual parameter to a formal template parameter as part of a template binding.
 */

QTemplateParameterSubstitution::QTemplateParameterSubstitution(QWrappedObject *wrapper, QWrappedObject *parent) :
    QElement(*new QTemplateParameterSubstitutionPrivate, wrapper, parent)
{
    setPropertyData();
}

QTemplateParameterSubstitution::QTemplateParameterSubstitution(QTemplateParameterSubstitutionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QElement(dd, wrapper, parent)
{
    setPropertyData();
}

QTemplateParameterSubstitution::~QTemplateParameterSubstitution()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTemplateParameterSubstitution
// ---------------------------------------------------------------

/*!
    The actual parameter that is owned by this substitution.
 */
QParameterableElement *QTemplateParameterSubstitution::ownedActual() const
{
    // This is a read-write association end

    Q_D(const QTemplateParameterSubstitution);
    return d->ownedActual;
}

void QTemplateParameterSubstitution::setOwnedActual(QParameterableElement *ownedActual)
{
    // This is a read-write association end

    Q_D(QTemplateParameterSubstitution);
    if (d->ownedActual != ownedActual) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->ownedActual));

        d->ownedActual = ownedActual;

        // Adjust subsetted property(ies)
        if (ownedActual) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(ownedActual));
        }
        (qwrappedobject_cast<QTemplateParameterSubstitution *>(this))->setActual(qwrappedobject_cast<QParameterableElement *>(ownedActual));
    }
}

/*!
    The formal template parameter that is associated with this substitution.
 */
QTemplateParameter *QTemplateParameterSubstitution::formal() const
{
    // This is a read-write association end

    Q_D(const QTemplateParameterSubstitution);
    return d->formal;
}

void QTemplateParameterSubstitution::setFormal(QTemplateParameter *formal)
{
    // This is a read-write association end

    Q_D(QTemplateParameterSubstitution);
    if (d->formal != formal) {
        d->formal = formal;
    }
}

/*!
    The element that is the actual parameter for this substitution.
 */
QParameterableElement *QTemplateParameterSubstitution::actual() const
{
    // This is a read-write association end

    Q_D(const QTemplateParameterSubstitution);
    return d->actual;
}

void QTemplateParameterSubstitution::setActual(QParameterableElement *actual)
{
    // This is a read-write association end

    Q_D(QTemplateParameterSubstitution);
    if (d->actual != actual) {
        d->actual = actual;
    }
}

/*!
    The optional bindings from this element to templates.
 */
QTemplateBinding *QTemplateParameterSubstitution::templateBinding() const
{
    // This is a read-write association end

    Q_D(const QTemplateParameterSubstitution);
    return d->templateBinding;
}

void QTemplateParameterSubstitution::setTemplateBinding(QTemplateBinding *templateBinding)
{
    // This is a read-write association end

    Q_D(QTemplateParameterSubstitution);
    if (d->templateBinding != templateBinding) {
        // Adjust opposite property
        if (d->templateBinding)
            d->templateBinding->removeParameterSubstitution(this);

        d->templateBinding = templateBinding;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(templateBinding));

        // Adjust opposite property
        if (templateBinding)
            templateBinding->addParameterSubstitution(this);
    }
}

void QTemplateParameterSubstitution::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The actual parameter that is owned by this substitution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements QTemplateParameterSubstitution::actual");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("ownedActual")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The formal template parameter that is associated with this substitution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("formal")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The element that is the actual parameter for this substitution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("actual")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The optional bindings from this element to templates.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateParameterSubstitution")][QString::fromLatin1("templateBinding")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QTemplateBinding::parameterSubstitution");

    QElement::setPropertyData();
}

#include "moc_qtemplateparametersubstitution.cpp"

QT_END_NAMESPACE_QTUML

