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
#include "qelement_p.h"
#include "qelement_p.h"

#include <QtUml/QTemplateSignature>
#include <QtUml/QTemplateBinding>
#include <QtUml/QParameterableElement>

QT_BEGIN_NAMESPACE_QTUML

QTemplateableElementPrivate::QTemplateableElementPrivate() :
    ownedTemplateSignature(0),
    templateBindings(new QSet<QTemplateBinding *>)
{
}

QTemplateableElementPrivate::~QTemplateableElementPrivate()
{
    delete templateBindings;
}

/*!
    \class QTemplateableElement

    \inmodule QtUml

    \brief A templateable element is an element that can optionally be defined as a template and bound to other templates.
 */

QTemplateableElement::QTemplateableElement()
    : d_ptr(new QTemplateableElementPrivate)
{
}

QTemplateableElement::~QTemplateableElement()
{
    delete d_ptr;
}

/*!
    The optional template signature specifying the formal template parameters.
 */
QTemplateSignature *QTemplateableElement::ownedTemplateSignature() const
{
    return d_ptr->ownedTemplateSignature;
}

void QTemplateableElement::setOwnedTemplateSignature(const QTemplateSignature *ownedTemplateSignature)
{
    d_ptr->ownedTemplateSignature = const_cast<QTemplateSignature *>(ownedTemplateSignature);
}

/*!
    The optional bindings from this element to templates.
 */
const QSet<QTemplateBinding *> *QTemplateableElement::templateBindings() const
{
    return d_ptr->templateBindings;
}

void QTemplateableElement::addTemplateBinding(const QTemplateBinding *templateBinding)
{
    d_ptr->templateBindings->insert(const_cast<QTemplateBinding *>(templateBinding));
}

void QTemplateableElement::removeTemplateBinding(const QTemplateBinding *templateBinding)
{
    d_ptr->templateBindings->remove(const_cast<QTemplateBinding *>(templateBinding));
}

/*!
    The query isTemplate() returns whether this templateable element is actually a template.
 */
bool QTemplateableElement::isTemplate() const
{
    qWarning("QTemplateableElement::isTemplate: operation to be implemented");
}

/*!
    The query parameterableElements() returns the set of elements that may be used as the parametered elements for a template parameter of this templateable element. By default, this set includes all the owned elements. Subclasses may override this operation if they choose to restrict the set of parameterable elements.
 */
const QSet<QParameterableElement *> *QTemplateableElement::parameterableElements() const
{
    qWarning("QTemplateableElement::parameterableElements: operation to be implemented");
}

QT_END_NAMESPACE_QTUML

