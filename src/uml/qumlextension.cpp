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
#include "qumlextension.h"

#include <QtUml/QUmlClass>
#include <QtUml/QUmlExtensionEnd>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlExtension

    \inmodule QtUml

    \brief An extension is used to indicate that the properties of a metaclass are extended through a stereotype, and gives the ability to flexibly add (and later remove) stereotypes to classes.
 */

QUmlExtension::QUmlExtension() :
    _ownedEnd(0)
{
}

// OWNED ATTRIBUTES

/*!
    Indicates whether an instance of the extending stereotype must be created when an instance of the extended class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false. Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false.
 */
bool QUmlExtension::isRequired() const
{
    // This is a read-only derived property

    qWarning("QUmlExtension::isRequired(): to be implemented (this is a derived property)");

    return bool();
}

void QUmlExtension::setRequired(bool isRequired)
{
    // This is a read-only derived property

    qWarning("QUmlExtension::isRequired(): to be implemented (this is a derived property)");
    Q_UNUSED(isRequired);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the Class that is extended through an Extension. The property is derived from the type of the memberEnd that is not the ownedEnd.
 */
QUmlClass *QUmlExtension::metaclass() const
{
    // This is a read-only derived association end

    qWarning("QUmlExtension::metaclass(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlExtension::setMetaclass(QUmlClass *metaclass)
{
    // This is a read-only derived association end

    qWarning("QUmlExtension::metaclass(): to be implemented (this is a derived association end)");
    Q_UNUSED(metaclass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the end of the extension that is typed by a Stereotype.
 */
QUmlExtensionEnd *QUmlExtension::ownedEnd() const
{
    // This is a read-write association end

    return _ownedEnd;
}

void QUmlExtension::setOwnedEnd(QUmlExtensionEnd *ownedEnd)
{
    // This is a read-write association end

    if (_ownedEnd != ownedEnd) {
        _ownedEnd = ownedEnd;
    }
}

// OPERATIONS

/*!
    The query metaclassEnd() returns the Property that is typed by a metaclass (as opposed to a stereotype).
 */
QUmlProperty *QUmlExtension::metaclassEnd() const
{
    return 0;
}

QT_END_NAMESPACE

