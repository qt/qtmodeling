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
#include "qumltemplateableelement.h"
#include "qumltemplateableelement_p.h"

#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlParameterableElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTemplateableElementPrivate::QUmlTemplateableElementPrivate() :
    ownedTemplateSignature(0)
{
}

QUmlTemplateableElementPrivate::~QUmlTemplateableElementPrivate()
{
}

/*!
    \class QUmlTemplateableElement

    \inmodule QtUml

    \brief A templateable element is an element that can optionally be defined as a template and bound to other templates.
 */

QUmlTemplateableElement::QUmlTemplateableElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(*new QUmlTemplateableElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlTemplateableElement::QUmlTemplateableElement(QUmlTemplateableElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlTemplateableElement::~QUmlTemplateableElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlTemplateSignature *QUmlTemplateableElement::ownedTemplateSignature() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateableElement);
    return d->ownedTemplateSignature;
}

void QUmlTemplateableElement::setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature)
{
    // This is a read-write association end

    Q_D(QUmlTemplateableElement);
    if (d->ownedTemplateSignature != ownedTemplateSignature) {
        // Adjust opposite property

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->ownedTemplateSignature));

        d->ownedTemplateSignature = ownedTemplateSignature;

        // Adjust subsetted property(ies)
        if (ownedTemplateSignature) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(ownedTemplateSignature));
        }

        // Adjust opposite property
        ownedTemplateSignature->setTemplate_(this);
    }
}

/*!
    The optional bindings from this element to templates.
 */
QSet<QUmlTemplateBinding *> QUmlTemplateableElement::templateBindings() const
{
    // This is a read-write association end

    Q_D(const QUmlTemplateableElement);
    return d->templateBindings;
}

void QUmlTemplateableElement::addTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    // This is a read-write association end

    Q_D(QUmlTemplateableElement);
    if (!d->templateBindings.contains(templateBinding)) {
        d->templateBindings.insert(templateBinding);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(templateBinding));

        // Adjust opposite property
        templateBinding->setBoundElement(this);
    }
}

void QUmlTemplateableElement::removeTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    // This is a read-write association end

    Q_D(QUmlTemplateableElement);
    if (d->templateBindings.contains(templateBinding)) {
        d->templateBindings.remove(templateBinding);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(templateBinding));

        // Adjust opposite property
        templateBinding->setBoundElement(0);
    }
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QUmlTemplateableElement::isTemplate() const
{
    qWarning("QUmlTemplateableElement::isTemplate: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query parameterableElements() returns the set of elements that may be used as the parametered elements for a template parameter of this templateable element. By default, this set includes all the owned elements. Subclasses may override this operation if they choose to restrict the set of parameterable elements.
 */
QSet<QUmlParameterableElement *> QUmlTemplateableElement::parameterableElements() const
{
    qWarning("QUmlTemplateableElement::parameterableElements: operation to be implemented");

    return QSet<QUmlParameterableElement *>(); // change here to your derived return
}

void QUmlTemplateableElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The optional template signature specifying the formal template parameters.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlTemplateSignature::template");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("templateBindings")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("templateBindings")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("templateBindings")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The optional bindings from this element to templates.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("templateBindings")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("templateBindings")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTemplateableElement")][QString::fromLatin1("templateBindings")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlTemplateBinding::boundElement");

    QUmlElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltemplateableelement.cpp"

