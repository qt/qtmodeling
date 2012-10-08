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

#include "qtypedelement.h"

#include <QtUml/QType>

QT_BEGIN_NAMESPACE_QTUML

class QTypedElementPrivate
{
public:
    explicit QTypedElementPrivate();
    virtual ~QTypedElementPrivate();

    QType *type;
};

QTypedElementPrivate::QTypedElementPrivate() :
    type(0)
{
}

QTypedElementPrivate::~QTypedElementPrivate()
{
}

/*!
    \class QTypedElement

    \inmodule QtUml

    \brief A typed element is a kind of named element that represents an element with a type.A typed element has a type.
 */

QTypedElement::QTypedElement()
    : d_ptr(new QTypedElementPrivate)
{
}

QTypedElement::~QTypedElement()
{
    delete d_ptr;
}

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QType *QTypedElement::type() const
{
    return d_ptr->type;
}

void QTypedElement::setType(const QType *type)
{
    d_ptr->type = const_cast<QType *>(type);
}

QT_END_NAMESPACE_QTUML
