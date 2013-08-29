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

QUmlExtend::QUmlExtend(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QUmlConstraint *QUmlExtend::condition() const
{
    return reinterpret_cast<QUmlConstraint *>(_condition);
}

void QUmlExtend::setCondition(QUmlConstraint *condition)
{
    UmlExtend::setCondition(condition);
}

QUmlUseCase *QUmlExtend::extendedCase() const
{
    return reinterpret_cast<QUmlUseCase *>(_extendedCase);
}

void QUmlExtend::setExtendedCase(QUmlUseCase *extendedCase)
{
    UmlExtend::setExtendedCase(extendedCase);
}

QUmlUseCase *QUmlExtend::extension() const
{
    return reinterpret_cast<QUmlUseCase *>(_extension);
}

void QUmlExtend::setExtension(QUmlUseCase *extension)
{
    UmlExtend::setExtension(extension);
}

const QList<QUmlExtensionPoint *> QUmlExtend::extensionLocation() const
{
    return *(reinterpret_cast<const QList<QUmlExtensionPoint *> *>(&_extensionLocation));
}

void QUmlExtend::addExtensionLocation(UmlExtensionPoint *extensionLocation)
{
    UmlExtend::addExtensionLocation(extensionLocation);
}

void QUmlExtend::removeExtensionLocation(UmlExtensionPoint *extensionLocation)
{
    UmlExtend::removeExtensionLocation(extensionLocation);
}

QT_END_NAMESPACE

