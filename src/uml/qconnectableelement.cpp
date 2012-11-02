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

#include "qconnectableelement.h"
#include "qconnectableelement_p.h"

#include <QtUml/QConnectorEnd>
#include <QtUml/QConnectableElementTemplateParameter>

QT_BEGIN_NAMESPACE_QTUML

QConnectableElementPrivate::QConnectableElementPrivate() :
    templateParameter(0)
{
}

QConnectableElementPrivate::~QConnectableElementPrivate()
{
}

void QConnectableElementPrivate::addEnd(QConnectorEnd *end)
{
    // This is a read-only derived association end

    qWarning("QConnectableElement::addEnd: to be implemented (this is a derived associationend)");

    if (false /* <derivedinclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QConnectableElement);
        end->setRole(q);
    }
}

void QConnectableElementPrivate::removeEnd(QConnectorEnd *end)
{
    // This is a read-only derived association end

    qWarning("QConnectableElement::removeEnd: to be implemented (this is a derived associationend)");

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust opposite property
        Q_Q(QConnectableElement);
        end->setRole(0);
    }
}

/*!
    \class QConnectableElement

    \inmodule QtUml

    \brief ConnectableElement is an abstract metaclass representing a set of instances that play roles of a classifier. Connectable elements may be joined by attached connectors and specify configurations of linked instances to be created within an instance of the containing classifier.A connectable element may be exposed as a connectable element template parameter.
 */

QConnectableElement::QConnectableElement(QObject *parent) :
    QObject(*new QConnectableElementPrivate, parent),
    _wrappedTypedElement(new QTypedElement(this)),
    _wrappedParameterableElement(new QParameterableElement(this))
{
}

QConnectableElement::QConnectableElement(QConnectableElementPrivate &dd, QObject *parent) :
    QObject(dd, parent),
    _wrappedTypedElement(new QTypedElement(this)),
    _wrappedParameterableElement(new QParameterableElement(this))
{
}

QConnectableElement::~QConnectableElement()
{
}

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
const QList<QConnectorEnd *> *QConnectableElement::ends() const
{
    // This is a read-only derived association end

    qWarning("QConnectableElement::ends: to be implemented (this is a derived associationend)");

    //Q_D(const QConnectableElement);
    //return <derived-return>;
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QConnectableElementTemplateParameter *QConnectableElement::templateParameter() const
{
    // This is a read-write association end

    Q_D(const QConnectableElement);
    return d->templateParameter;
}

void QConnectableElement::setTemplateParameter(QConnectableElementTemplateParameter *templateParameter)
{
    // This is a read-write association end

    Q_D(QConnectableElement);
    if (d->templateParameter != templateParameter) {
        // Adjust opposite property

        d->templateParameter = templateParameter;

        // Adjust opposite property
        templateParameter->setParameteredElement(this);
    }
}

QT_END_NAMESPACE_QTUML

