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
#include "qumlparameterableelement.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlParameterableElement

    \inmodule QtUml

    \brief A parameterable element is an element that can be exposed as a formal template parameter for a template, or specified as an actual parameter in a binding of a template.
 */

QUmlParameterableElement::QUmlParameterableElement() :
    _owningTemplateParameter(0),
    _templateParameter(0)
{
    d_ptr->object.setProperty("owningTemplateParameter", QVariant::fromValue((QUmlTemplateParameter *)(0)));
    d_ptr->object.setProperty("templateParameter", QVariant::fromValue((QUmlTemplateParameter *)(0)));
}

// OWNED ATTRIBUTES

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlParameterableElement::owningTemplateParameter() const
{
    // This is a read-write association end

    return _owningTemplateParameter;
}

void QUmlParameterableElement::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    // This is a read-write association end

    if (_owningTemplateParameter != owningTemplateParameter) {
        // Adjust subsetted properties

        _owningTemplateParameter = owningTemplateParameter;

        // Adjust subsetted properties
        setTemplateParameter(owningTemplateParameter);
        setOwner(owningTemplateParameter);
    }
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlParameterableElement::templateParameter() const
{
    // This is a read-write association end

    return _templateParameter;
}

void QUmlParameterableElement::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    // This is a read-write association end

    if (_templateParameter != templateParameter) {
        _templateParameter = templateParameter;
    }
}

// OPERATIONS

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. Subclasses should override this operation to specify different compatibility constraints.
 */
bool QUmlParameterableElement::isCompatibleWith(
    QUmlParameterableElement *p) const
{
    qWarning("QUmlParameterableElement::isCompatibleWith(): to be implemented (operation)");

    Q_UNUSED(p);
    return bool ();
}

/*!
    The query isTemplateParameter() determines if this parameterable element is exposed as a formal template parameter.
 */
bool QUmlParameterableElement::isTemplateParameter(
    ) const
{
    qWarning("QUmlParameterableElement::isTemplateParameter(): to be implemented (operation)");

    return bool ();
}

QT_END_NAMESPACE

