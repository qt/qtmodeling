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

#include "qtype.h"
#include "qtype_p.h"

#include <QtUml/QPackage>

QT_BEGIN_NAMESPACE_QTUML

QTypePrivate::QTypePrivate() :
    package(0)
{
}

QTypePrivate::~QTypePrivate()
{
}

void QTypePrivate::setPackage(const QPackage *package)
{
    this->package = const_cast<QPackage *>(package);
}

/*!
    \class QType

    \inmodule QtUml

    \brief A type is a named element that is used as the type for a typed element. A type can be contained in a package.A type constrains the values represented by a typed element.
 */

QType::QType()
{
    d_umlptr = new QTypePrivate;
}

QType::~QType()
{
}

/*!
    Specifies the owning package of this classifier, if any.
 */
QPackage *QType::package() const
{
    QTUML_D(const QType);
    return d->package;
}

void QType::setPackage(const QPackage *package)
{
    QTUML_D(QType);
    d->setPackage(const_cast<QPackage *>(package));
}

/*!
    The query conformsTo() gives true for a type that conforms to another. By default, two types do not conform to each other. This query is intended to be redefined for specific conformance situations.
 */
bool QType::conformsTo(const QType *other) const
{
    qWarning("QType::conformsTo: operation to be implemented");
}

QT_END_NAMESPACE_QTUML

