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

#include "qusecase.h"
#include "qusecase_p.h"
#include "qnamespace_p.h"
#include "qnamespace_p.h"
#include "qnamespace_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QInclude>
#include <QtUml/QExtend>
#include <QtUml/QExtensionPoint>

QT_BEGIN_NAMESPACE_QTUML

QUseCasePrivate::QUseCasePrivate() :
    extensionPoints(new QSet<QExtensionPoint *>),
    includes(new QSet<QInclude *>),
    subjects(new QSet<QClassifier *>),
    extends(new QSet<QExtend *>)
{
}

QUseCasePrivate::~QUseCasePrivate()
{
    delete extensionPoints;
    delete includes;
    delete subjects;
    delete extends;
}

/*!
    \class QUseCase

    \inmodule QtUml

    \brief A use case is the specification of a set of actions performed by a system, which yields an observable result that is, typically, of value for one or more actors or other stakeholders of the system.
 */

QUseCase::QUseCase(QObject *parent)
    : QObject(parent), d_ptr(new QUseCasePrivate)
{
}

QUseCase::~QUseCase()
{
    delete d_ptr;
}

/*!
    References the ExtensionPoints owned by the use case.
 */
const QSet<QExtensionPoint *> *QUseCase::extensionPoints() const
{
    return d_ptr->extensionPoints;
}

void QUseCase::addExtensionPoint(const QExtensionPoint *extensionPoint)
{
    d_ptr->extensionPoints->insert(const_cast<QExtensionPoint *>(extensionPoint));
}

void QUseCase::removeExtensionPoint(const QExtensionPoint *extensionPoint)
{
    d_ptr->extensionPoints->remove(const_cast<QExtensionPoint *>(extensionPoint));
}

/*!
    References the Include relationships owned by this use case.
 */
const QSet<QInclude *> *QUseCase::includes() const
{
    return d_ptr->includes;
}

void QUseCase::addInclude(const QInclude *include)
{
    d_ptr->includes->insert(const_cast<QInclude *>(include));
}

void QUseCase::removeInclude(const QInclude *include)
{
    d_ptr->includes->remove(const_cast<QInclude *>(include));
}

/*!
    References the subjects to which this use case applies. The subject or its parts realize all the use cases that apply to this subject. Use cases need not be attached to any specific subject, however. The subject may, but need not, own the use cases that apply to it.
 */
const QSet<QClassifier *> *QUseCase::subjects() const
{
    return d_ptr->subjects;
}

void QUseCase::addSubject(const QClassifier *subject)
{
    d_ptr->subjects->insert(const_cast<QClassifier *>(subject));
}

void QUseCase::removeSubject(const QClassifier *subject)
{
    d_ptr->subjects->remove(const_cast<QClassifier *>(subject));
}

/*!
    References the Extend relationships owned by this use case.
 */
const QSet<QExtend *> *QUseCase::extends() const
{
    return d_ptr->extends;
}

void QUseCase::addExtend(const QExtend *extend)
{
    d_ptr->extends->insert(const_cast<QExtend *>(extend));
}

void QUseCase::removeExtend(const QExtend *extend)
{
    d_ptr->extends->remove(const_cast<QExtend *>(extend));
}

/*!
    The query allIncludedUseCases() returns the transitive closure of all use cases (directly or indirectly) included by this use case.
 */
const QSet<QUseCase *> *QUseCase::allIncludedUseCases() const
{
    qWarning("QUseCase::allIncludedUseCases: operation to be implemented");
}

#include "moc_qusecase.cpp"

QT_END_NAMESPACE_QTUML

