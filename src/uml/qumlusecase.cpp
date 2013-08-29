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
#include "qumlusecase.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlExtend>
#include <QtUml/QUmlExtensionPoint>
#include <QtUml/QUmlInclude>

QT_BEGIN_NAMESPACE

QUmlUseCase::QUmlUseCase(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QSet<QUmlExtend *> QUmlUseCase::extend() const
{
    return *(reinterpret_cast<const QSet<QUmlExtend *> *>(&_extend));
}

void QUmlUseCase::addExtend(UmlExtend *extend)
{
    UmlUseCase::addExtend(extend);
}

void QUmlUseCase::removeExtend(UmlExtend *extend)
{
    UmlUseCase::removeExtend(extend);
}

const QSet<QUmlExtensionPoint *> QUmlUseCase::extensionPoint() const
{
    return *(reinterpret_cast<const QSet<QUmlExtensionPoint *> *>(&_extensionPoint));
}

void QUmlUseCase::addExtensionPoint(UmlExtensionPoint *extensionPoint)
{
    UmlUseCase::addExtensionPoint(extensionPoint);
}

void QUmlUseCase::removeExtensionPoint(UmlExtensionPoint *extensionPoint)
{
    UmlUseCase::removeExtensionPoint(extensionPoint);
}

const QSet<QUmlInclude *> QUmlUseCase::include() const
{
    return *(reinterpret_cast<const QSet<QUmlInclude *> *>(&_include));
}

void QUmlUseCase::addInclude(UmlInclude *include)
{
    UmlUseCase::addInclude(include);
}

void QUmlUseCase::removeInclude(UmlInclude *include)
{
    UmlUseCase::removeInclude(include);
}

const QSet<QUmlClassifier *> QUmlUseCase::subject() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_subject));
}

void QUmlUseCase::addSubject(UmlClassifier *subject)
{
    UmlUseCase::addSubject(subject);
}

void QUmlUseCase::removeSubject(UmlClassifier *subject)
{
    UmlUseCase::removeSubject(subject);
}

// Operations

QSet<QUmlUseCase *> QUmlUseCase::allIncludedUseCases() const
{
    QSet<QUmlUseCase *> r;
    foreach (UmlUseCase *element, UmlUseCase::allIncludedUseCases())
        r.insert(reinterpret_cast<QUmlUseCase *>(element));
    return r;
}

QT_END_NAMESPACE

