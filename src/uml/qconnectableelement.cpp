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
   
void QConnectableElementPrivate::setTemplateParameter(const QConnectableElementTemplateParameter *templateParameter) 
{  
    this->templateParameter = const_cast<QConnectableElementTemplateParameter *>(templateParameter);   
}

/*!
    \class QConnectableElement

    \inmodule QtUml

    \brief ConnectableElement is an abstract metaclass representing a set of instances that play roles of a classifier. Connectable elements may be joined by attached connectors and specify configurations of linked instances to be created within an instance of the containing classifier.A connectable element may be exposed as a connectable element template parameter.
 */

QConnectableElement::QConnectableElement()
{
    d_umlptr = new QConnectableElementPrivate;
}

QConnectableElement::~QConnectableElement()
{
}

/*!
    Denotes a set of connector ends that attaches to this connectable element.
 */
const QList<QConnectorEnd *> *QConnectableElement::ends() const
{
    qWarning("QConnectableElement::ends: to be implemented (this is a derived associationend)");
}

/*!
    The ConnectableElementTemplateParameter for this ConnectableElement parameter.
 */
QConnectableElementTemplateParameter *QConnectableElement::templateParameter() const
{
    Q_D(const QConnectableElement);
    return d->templateParameter;
}

void QConnectableElement::setTemplateParameter(const QConnectableElementTemplateParameter *templateParameter)
{
    Q_D(QConnectableElement);
    d->setTemplateParameter(const_cast<QConnectableElementTemplateParameter *>(templateParameter));
}

QT_END_NAMESPACE_QTUML

