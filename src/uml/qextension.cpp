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

#include "qextension.h"
#include "qextension_p.h"

#include <QtUml/QClass>
#include <QtUml/QExtensionEnd>
#include <QtUml/QProperty>

QT_BEGIN_NAMESPACE_QTUML

QExtensionPrivate::QExtensionPrivate() :
    ownedEnd(0)
{
}

QExtensionPrivate::~QExtensionPrivate()
{
}

void QExtensionPrivate::setOwnedEnd(const QExtensionEnd *ownedEnd)
{
    this->ownedEnd = const_cast<QExtensionEnd *>(ownedEnd);
}

/*!
    \class QExtension

    \inmodule QtUml

    \brief An extension is used to indicate that the properties of a metaclass are extended through a stereotype, and gives the ability to flexibly add (and later remove) stereotypes to classes.
 */

QExtension::QExtension(QObject *parent)
    : QAssociation(false, parent)
{
    d_umlptr = new QExtensionPrivate;
}

QExtension::QExtension(bool createPimpl, QObject *parent)
    : QAssociation(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QExtensionPrivate;
}

QExtension::~QExtension()
{
}

/*!
    Indicates whether an instance of the extending stereotype must be created when an instance of the extended class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false. Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false.
 */
bool QExtension::isRequired() const
{
    qWarning("QExtension::isRequired: to be implemented (this is a derived attribute)");
}

/*!
    References the Class that is extended through an Extension. The property is derived from the type of the memberEnd that is not the ownedEnd.
 */
QClass *QExtension::metaclass() const
{
    qWarning("QExtension::metaclass: to be implemented (this is a derived associationend)");
}

/*!
    References the end of the extension that is typed by a Stereotype.
 */
QExtensionEnd *QExtension::ownedEnd() const
{
    Q_D(const QExtension);
    return d->ownedEnd;
}

void QExtension::setOwnedEnd(const QExtensionEnd *ownedEnd)
{
    Q_D(QExtension);
    d->setOwnedEnd(const_cast<QExtensionEnd *>(ownedEnd));
}

/*!
    The query metaclassEnd() returns the Property that is typed by a metaclass (as opposed to a stereotype).
 */
QProperty *QExtension::metaclassEnd() const
{
    qWarning("QExtension::metaclassEnd: operation to be implemented");
}

#include "moc_qextension.cpp"

QT_END_NAMESPACE_QTUML
