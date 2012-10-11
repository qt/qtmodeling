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

#include "qextensionend.h"
#include "qextensionend_p.h"

#include <QtUml/QStereotype>

QT_BEGIN_NAMESPACE_QTUML

QExtensionEndPrivate::QExtensionEndPrivate() :
    type(0)
{
}

QExtensionEndPrivate::~QExtensionEndPrivate()
{
}

void QExtensionEndPrivate::setType(const QStereotype *type)
{
    this->type = const_cast<QStereotype *>(type);
}

/*!
    \class QExtensionEnd

    \inmodule QtUml

    \brief An extension end is used to tie an extension to a stereotype when extending a metaclass.The default multiplicity of an extension end is 0..1.
 */

QExtensionEnd::QExtensionEnd(QObject *parent)
    : QProperty(false, parent)
{
    d_umlptr = new QExtensionEndPrivate;
}

QExtensionEnd::QExtensionEnd(bool createPimpl, QObject *parent)
    : QProperty(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QExtensionEndPrivate;
}

QExtensionEnd::~QExtensionEnd()
{
}

/*!
    This redefinition changes the default multiplicity of association ends, since model elements are usually extended by 0 or 1 instance of the extension stereotype.
 */
qint32 QExtensionEnd::lower() const
{
    qWarning("QExtensionEnd::lower: to be implemented (this is a derived attribute)");
}

void QExtensionEnd::setLower(qint32 lower)
{
    qWarning("QExtensionEnd::setLower: to be implemented (this is a derived attribute)");
}

/*!
    References the type of the ExtensionEnd. Note that this association restricts the possible types of an ExtensionEnd to only be Stereotypes.
 */
QStereotype *QExtensionEnd::type() const
{
    Q_D(const QExtensionEnd);
    return d->type;
}

void QExtensionEnd::setType(const QStereotype *type)
{
    Q_D(QExtensionEnd);
    d->setType(const_cast<QStereotype *>(type));
}

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an Integer. This is a redefinition of the default lower bound, which normally, for MultiplicityElements, evaluates to 1 if empty.
 */
qint32 QExtensionEnd::lowerBound() const
{
    qWarning("QExtensionEnd::lowerBound: operation to be implemented");
}

#include "moc_qextensionend.cpp"

QT_END_NAMESPACE_QTUML
