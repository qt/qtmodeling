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
#include "qumlextend.h"

#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlExtensionPoint>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlExtend

    \inmodule QtUml

    \brief A relationship from an extending use case to an extended use case that specifies how and when the behavior defined in the extending use case can be inserted into the behavior defined in the extended use case.
 */

QUmlExtend::QUmlExtend() :
    _condition(0),
    _extendedCase(0),
    _extension(0)
{
}

// OWNED ATTRIBUTES

/*!
    References the condition that must hold when the first extension point is reached for the extension to take place. If no constraint is associated with the extend relationship, the extension is unconditional.
 */
QUmlConstraint *QUmlExtend::condition() const
{
    // This is a read-write association end

    return _condition;
}

void QUmlExtend::setCondition(QUmlConstraint *condition)
{
    // This is a read-write association end

    if (_condition != condition) {
        _condition = condition;
    }
}

/*!
    References the use case that is being extended.
 */
QUmlUseCase *QUmlExtend::extendedCase() const
{
    // This is a read-write association end

    return _extendedCase;
}

void QUmlExtend::setExtendedCase(QUmlUseCase *extendedCase)
{
    // This is a read-write association end

    if (_extendedCase != extendedCase) {
        _extendedCase = extendedCase;
    }
}

/*!
    References the use case that represents the extension and owns the extend relationship.
 */
QUmlUseCase *QUmlExtend::extension() const
{
    // This is a read-write association end

    return _extension;
}

void QUmlExtend::setExtension(QUmlUseCase *extension)
{
    // This is a read-write association end

    if (_extension != extension) {
        _extension = extension;
    }
}

/*!
    An ordered list of extension points belonging to the extended use case, specifying where the respective behavioral fragments of the extending use case are to be inserted. The first fragment in the extending use case is associated with the first extension point in the list, the second fragment with the second point, and so on. (Note that, in most practical cases, the extending use case has just a single behavior fragment, so that the list of extension points is trivial.)
 */
QList<QUmlExtensionPoint *> QUmlExtend::extensionLocation() const
{
    // This is a read-write association end

    return _extensionLocation;
}

void QUmlExtend::addExtensionLocation(QUmlExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    if (!_extensionLocation.contains(extensionLocation)) {
        _extensionLocation.append(extensionLocation);
    }
}

void QUmlExtend::removeExtensionLocation(QUmlExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    if (_extensionLocation.contains(extensionLocation)) {
        _extensionLocation.removeAll(extensionLocation);
    }
}

QT_END_NAMESPACE

