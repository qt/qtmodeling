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

#include "qtemplateableelement.h"
#include "qtemplateableelement_p.h"

#include <QtUml/QTemplateSignature>
#include <QtUml/QTemplateBinding>
#include <QtUml/QParameterableElement>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QTemplateableElementPrivate::QTemplateableElementPrivate() :
    ownedTemplateSignature(0)
{
}

QTemplateableElementPrivate::~QTemplateableElementPrivate()
{
}

/*!
    \class QTemplateableElement

    \inmodule QtUml

    \brief A templateable element is an element that can optionally be defined as a template and bound to other templates.
 */

QTemplateableElement::QTemplateableElement(QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(*new QTemplateableElementPrivate, parent, wrapper)
{
    setPropertyData();
}

QTemplateableElement::QTemplateableElement(QTemplateableElementPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(dd, parent, wrapper)
{
    setPropertyData();
}

QTemplateableElement::~QTemplateableElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional template signature specifying the formal template parameters.
 */
QTemplateSignature *QTemplateableElement::ownedTemplateSignature() const
{
    // This is a read-write association end

    Q_D(const QTemplateableElement);
    return d->ownedTemplateSignature;
}

void QTemplateableElement::setOwnedTemplateSignature(QTemplateSignature *ownedTemplateSignature)
{
    // This is a read-write association end

    Q_D(QTemplateableElement);
    if (d->ownedTemplateSignature != ownedTemplateSignature) {
        // Adjust opposite property

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->ownedTemplateSignature));

        d->ownedTemplateSignature = ownedTemplateSignature;

        // Adjust subsetted property(ies)
        if (ownedTemplateSignature) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(ownedTemplateSignature));
        }

        // Adjust opposite property
        ownedTemplateSignature->setTemplate_(this);
    }
}

/*!
    The optional bindings from this element to templates.
 */
QSet<QTemplateBinding *> QTemplateableElement::templateBindings() const
{
    // This is a read-write association end

    Q_D(const QTemplateableElement);
    return d->templateBindings;
}

void QTemplateableElement::addTemplateBinding(QTemplateBinding *templateBinding)
{
    // This is a read-write association end

    Q_D(QTemplateableElement);
    if (!d->templateBindings.contains(templateBinding)) {
        d->templateBindings.insert(templateBinding);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(templateBinding));

        // Adjust opposite property
        templateBinding->setBoundElement(this);
    }
}

void QTemplateableElement::removeTemplateBinding(QTemplateBinding *templateBinding)
{
    // This is a read-write association end

    Q_D(QTemplateableElement);
    if (d->templateBindings.contains(templateBinding)) {
        d->templateBindings.remove(templateBinding);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(templateBinding));

        // Adjust opposite property
        templateBinding->setBoundElement(0);
    }
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QTemplateableElement::isTemplate() const
{
    qWarning("QTemplateableElement::isTemplate: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query parameterableElements() returns the set of elements that may be used as the parametered elements for a template parameter of this templateable element. By default, this set includes all the owned elements. Subclasses may override this operation if they choose to restrict the set of parameterable elements.
 */
QSet<QParameterableElement *> QTemplateableElement::parameterableElements() const
{
    qWarning("QTemplateableElement::parameterableElements: operation to be implemented");

    return QSet<QParameterableElement *>(); // change here to your derived return
}

void QTemplateableElement::registerMetaTypes() const
{
    qRegisterMetaType<QTemplateSignature *>("QTemplateSignature *");
    qRegisterMetaType<QSet<QTemplateSignature *>>("QSet<QTemplateSignature *>");
    qRegisterMetaType<QList<QTemplateSignature *>>("QList<QTemplateSignature *>");

    qRegisterMetaType<QTemplateBinding *>("QTemplateBinding *");
    qRegisterMetaType<QSet<QTemplateBinding *>>("QSet<QTemplateBinding *>");
    qRegisterMetaType<QList<QTemplateBinding *>>("QList<QTemplateBinding *>");

    qRegisterMetaType<QParameterableElement *>("QParameterableElement *");
    qRegisterMetaType<QSet<QParameterableElement *>>("QSet<QParameterableElement *>");
    qRegisterMetaType<QList<QParameterableElement *>>("QList<QParameterableElement *>");

    QElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QTemplateableElement::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateableElement")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateableElement")][QString::fromLatin1("ownedTemplateSignature")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The optional template signature specifying the formal template parameters.");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateableElement")][QString::fromLatin1("templateBindings")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QTemplateableElement")][QString::fromLatin1("templateBindings")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The optional bindings from this element to templates.");

    QElement::setPropertyData();
}

#include "moc_qtemplateableelement.cpp"

QT_END_NAMESPACE_QTUML

