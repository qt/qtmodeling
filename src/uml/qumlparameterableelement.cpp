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

#include "qumlparameterableelement.h"
#include "qumlparameterableelement_p.h"

#include <QtUml/QUmlTemplateParameter>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlParameterableElementPrivate::QUmlParameterableElementPrivate() :
    owningTemplateParameter(0),
    templateParameter(0)
{
}

QUmlParameterableElementPrivate::~QUmlParameterableElementPrivate()
{
}

/*!
    \class QUmlParameterableElement

    \inmodule QtUml

    \brief A parameterable element is an element that can be exposed as a formal template parameter for a template, or specified as an actual parameter in a binding of a template.
 */

QUmlParameterableElement::QUmlParameterableElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(*new QUmlParameterableElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlParameterableElement::QUmlParameterableElement(QUmlParameterableElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlParameterableElement::~QUmlParameterableElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlParameterableElement::owningTemplateParameter() const
{
    // This is a read-write association end

    Q_D(const QUmlParameterableElement);
    return d->owningTemplateParameter;
}

void QUmlParameterableElement::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    // This is a read-write association end

    Q_D(QUmlParameterableElement);
    if (d->owningTemplateParameter != owningTemplateParameter) {
        // Adjust opposite property

        d->owningTemplateParameter = owningTemplateParameter;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlParameterableElement *>(this))->setTemplateParameter(qwrappedobject_cast<QUmlTemplateParameter *>(owningTemplateParameter));
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(owningTemplateParameter));

        // Adjust opposite property
        owningTemplateParameter->setOwnedParameteredElement(this);
    }
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlParameterableElement::templateParameter() const
{
    // This is a read-write association end

    Q_D(const QUmlParameterableElement);
    return d->templateParameter;
}

void QUmlParameterableElement::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    // This is a read-write association end

    Q_D(QUmlParameterableElement);
    if (d->templateParameter != templateParameter) {
        // Adjust opposite property

        d->templateParameter = templateParameter;

        // Adjust opposite property
        templateParameter->setParameteredElement(this);
    }
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlParameterableElement::isCompatibleWith(const QUmlParameterableElement *p) const
{
    qWarning("QUmlParameterableElement::isCompatibleWith: operation to be implemented");
    Q_UNUSED(p);

    return bool(); // change here to your derived return
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlParameterableElement::isTemplateParameter() const
{
    qWarning("QUmlParameterableElement::isTemplateParameter: operation to be implemented");

    return bool(); // change here to your derived return
}

void QUmlParameterableElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("owningTemplateParameter")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("owningTemplateParameter")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("owningTemplateParameter")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The formal template parameter that owns this element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("owningTemplateParameter")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("owningTemplateParameter")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlParameterableElement::templateParameter QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("owningTemplateParameter")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QTemplateParameter::ownedParameteredElement");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The template parameter that exposes this element as a formal parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlParameterableElement")][QString::fromLatin1("templateParameter")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QTemplateParameter::parameteredElement");

    QUmlElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlparameterableelement.cpp"

