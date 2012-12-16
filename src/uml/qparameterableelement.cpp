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

#include "qparameterableelement.h"
#include "qparameterableelement_p.h"

#include <QtUml/QTemplateParameter>

QT_BEGIN_NAMESPACE_QTUML

QParameterableElementPrivate::QParameterableElementPrivate() :
    owningTemplateParameter(0),
    templateParameter(0)
{
}

QParameterableElementPrivate::~QParameterableElementPrivate()
{
}

/*!
    \class QParameterableElement

    \inmodule QtUml

    \brief A parameterable element is an element that can be exposed as a formal template parameter for a template, or specified as an actual parameter in a binding of a template.
 */

QParameterableElement::QParameterableElement(QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(*new QParameterableElementPrivate, parent, wrapper)
{
}

QParameterableElement::QParameterableElement(QParameterableElementPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(dd, parent, wrapper)
{
}

QParameterableElement::~QParameterableElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QParameterableElement::owningTemplateParameter() const
{
    // This is a read-write association end

    Q_D(const QParameterableElement);
    return d->owningTemplateParameter;
}

void QParameterableElement::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    // This is a read-write association end

    Q_D(QParameterableElement);
    if (d->owningTemplateParameter != owningTemplateParameter) {
        // Adjust opposite property

        d->owningTemplateParameter = owningTemplateParameter;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QParameterableElement *>(this))->setTemplateParameter(qwrappedobject_cast<QTemplateParameter *>(owningTemplateParameter));
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(owningTemplateParameter));

        // Adjust opposite property
        owningTemplateParameter->setOwnedParameteredElement(this);
    }
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QTemplateParameter *QParameterableElement::templateParameter() const
{
    // This is a read-write association end

    Q_D(const QParameterableElement);
    return d->templateParameter;
}

void QParameterableElement::setTemplateParameter(QTemplateParameter *templateParameter)
{
    // This is a read-write association end

    Q_D(QParameterableElement);
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
bool QParameterableElement::isCompatibleWith(const QParameterableElement *p) const
{
    qWarning("QParameterableElement::isCompatibleWith: operation to be implemented");
    Q_UNUSED(p);

    return bool(); // change here to your derived return
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QParameterableElement::isTemplateParameter() const
{
    qWarning("QParameterableElement::isTemplateParameter: operation to be implemented");

    return bool(); // change here to your derived return
}

void QParameterableElement::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QParameterableElement) *>("QT_PREPEND_NAMESPACE_QTUML(QParameterableElement) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QParameterableElement) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QParameterableElement) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QParameterableElement) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QParameterableElement) *> *");
    qRegisterMetaType<QParameterableElement *>("QParameterableElement *");
    qRegisterMetaType<const QSet<QParameterableElement *> *>("const QSet<QParameterableElement *> *");
    qRegisterMetaType<const QList<QParameterableElement *> *>("const QList<QParameterableElement *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QTemplateParameter) *>("QT_PREPEND_NAMESPACE_QTUML(QTemplateParameter) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QTemplateParameter) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QTemplateParameter) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QTemplateParameter) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QTemplateParameter) *> *");
    qRegisterMetaType<QTemplateParameter *>("QTemplateParameter *");
    qRegisterMetaType<const QSet<QTemplateParameter *> *>("const QSet<QTemplateParameter *> *");
    qRegisterMetaType<const QList<QTemplateParameter *> *>("const QList<QTemplateParameter *> *");


    QElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qparameterableelement.cpp"

QT_END_NAMESPACE_QTUML

