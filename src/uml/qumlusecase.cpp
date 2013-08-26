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

/*!
    \class QUmlUseCase

    \inmodule QtUml

    \brief A use case is the specification of a set of actions performed by a system, which yields an observable result that is, typically, of value for one or more actors or other stakeholders of the system.
 */

QUmlUseCase::QUmlUseCase()
{
}

// OWNED ATTRIBUTES

/*!
    References the Extend relationships owned by this use case.
 */
QSet<QUmlExtend *> QUmlUseCase::extend() const
{
    // This is a read-write association end

    return _extend;
}

void QUmlUseCase::addExtend(QUmlExtend *extend)
{
    // This is a read-write association end

    if (!_extend.contains(extend)) {
        _extend.insert(extend);

        // Adjust subsetted properties
        addOwnedMember(extend);

        // Adjust opposite properties
        if (extend) {
            extend->setExtension(this);
        }
    }
}

void QUmlUseCase::removeExtend(QUmlExtend *extend)
{
    // This is a read-write association end

    if (_extend.contains(extend)) {
        _extend.remove(extend);

        // Adjust subsetted properties
        removeOwnedMember(extend);

        // Adjust opposite properties
        if (extend) {
            extend->setExtension(0);
        }
    }
}

/*!
    References the ExtensionPoints owned by the use case.
 */
QSet<QUmlExtensionPoint *> QUmlUseCase::extensionPoint() const
{
    // This is a read-write association end

    return _extensionPoint;
}

void QUmlUseCase::addExtensionPoint(QUmlExtensionPoint *extensionPoint)
{
    // This is a read-write association end

    if (!_extensionPoint.contains(extensionPoint)) {
        _extensionPoint.insert(extensionPoint);

        // Adjust subsetted properties
        addOwnedMember(extensionPoint);

        // Adjust opposite properties
        if (extensionPoint) {
            extensionPoint->setUseCase(this);
        }
    }
}

void QUmlUseCase::removeExtensionPoint(QUmlExtensionPoint *extensionPoint)
{
    // This is a read-write association end

    if (_extensionPoint.contains(extensionPoint)) {
        _extensionPoint.remove(extensionPoint);

        // Adjust subsetted properties
        removeOwnedMember(extensionPoint);

        // Adjust opposite properties
        if (extensionPoint) {
            extensionPoint->setUseCase(0);
        }
    }
}

/*!
    References the Include relationships owned by this use case.
 */
QSet<QUmlInclude *> QUmlUseCase::include() const
{
    // This is a read-write association end

    return _include;
}

void QUmlUseCase::addInclude(QUmlInclude *include)
{
    // This is a read-write association end

    if (!_include.contains(include)) {
        _include.insert(include);

        // Adjust subsetted properties
        addOwnedMember(include);

        // Adjust opposite properties
        if (include) {
            include->setIncludingCase(this);
        }
    }
}

void QUmlUseCase::removeInclude(QUmlInclude *include)
{
    // This is a read-write association end

    if (_include.contains(include)) {
        _include.remove(include);

        // Adjust subsetted properties
        removeOwnedMember(include);

        // Adjust opposite properties
        if (include) {
            include->setIncludingCase(0);
        }
    }
}

/*!
    References the subjects to which this use case applies. The subject or its parts realize all the use cases that apply to this subject. Use cases need not be attached to any specific subject, however. The subject may, but need not, own the use cases that apply to it.
 */
QSet<QUmlClassifier *> QUmlUseCase::subject() const
{
    // This is a read-write association end

    return _subject;
}

void QUmlUseCase::addSubject(QUmlClassifier *subject)
{
    // This is a read-write association end

    if (!_subject.contains(subject)) {
        _subject.insert(subject);

        // Adjust opposite properties
        if (subject) {
            subject->addUseCase(this);
        }
    }
}

void QUmlUseCase::removeSubject(QUmlClassifier *subject)
{
    // This is a read-write association end

    if (_subject.contains(subject)) {
        _subject.remove(subject);

        // Adjust opposite properties
        if (subject) {
            subject->removeUseCase(this);
        }
    }
}

// OPERATIONS

/*!
    The query allIncludedUseCases() returns the transitive closure of all use cases (directly or indirectly) included by this use case.
 */
QSet<QUmlUseCase *> QUmlUseCase::allIncludedUseCases(
    ) const
{
    qWarning("QUmlUseCase::allIncludedUseCases(): to be implemented (operation)");

    return QSet<QUmlUseCase *> ();
}

QT_END_NAMESPACE

