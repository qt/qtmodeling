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

void QUseCasePrivate::addExtensionPoint(QExtensionPoint *extensionPoint)
{
    this->extensionPoints->insert(extensionPoint);

    // Adjust subsetted property(ies)
    addOwnedMember(extensionPoint);
}

void QUseCasePrivate::removeExtensionPoint(QExtensionPoint *extensionPoint)
{
    this->extensionPoints->remove(extensionPoint);

    // Adjust subsetted property(ies)
    removeOwnedMember(extensionPoint);
}

void QUseCasePrivate::addInclude(QInclude *include)
{
    this->includes->insert(include);

    // Adjust subsetted property(ies)
    addOwnedMember(include);
}

void QUseCasePrivate::removeInclude(QInclude *include)
{
    this->includes->remove(include);

    // Adjust subsetted property(ies)
    removeOwnedMember(include);
}

void QUseCasePrivate::addSubject(QClassifier *subject)
{
    this->subjects->insert(subject);
}

void QUseCasePrivate::removeSubject(QClassifier *subject)
{
    this->subjects->remove(subject);
}

void QUseCasePrivate::addExtend(QExtend *extend)
{
    this->extends->insert(extend);

    // Adjust subsetted property(ies)
    addOwnedMember(extend);
}

void QUseCasePrivate::removeExtend(QExtend *extend)
{
    this->extends->remove(extend);

    // Adjust subsetted property(ies)
    removeOwnedMember(extend);
}

/*!
    \class QUseCase

    \inmodule QtUml

    \brief A use case is the specification of a set of actions performed by a system, which yields an observable result that is, typically, of value for one or more actors or other stakeholders of the system.
 */

QUseCase::QUseCase(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QUseCasePrivate;
}

QUseCase::QUseCase(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QUseCasePrivate;
}

QUseCase::~QUseCase()
{
}

/*!
    References the ExtensionPoints owned by the use case.
 */
const QSet<QExtensionPoint *> *QUseCase::extensionPoints() const
{
    QTUML_D(const QUseCase);
    return d->extensionPoints;
}

void QUseCase::addExtensionPoint(QExtensionPoint *extensionPoint)
{
    QTUML_D(QUseCase);
    if (!d->extensionPoints->contains(extensionPoint)) {
        d->addExtensionPoint(extensionPoint);

        // Adjust opposite property
        extensionPoint->setUseCase(this);
    }
}

void QUseCase::removeExtensionPoint(QExtensionPoint *extensionPoint)
{
    QTUML_D(QUseCase);
    if (d->extensionPoints->contains(extensionPoint)) {
        d->removeExtensionPoint(extensionPoint);

        // Adjust opposite property
        extensionPoint->setUseCase(0);
    }
}

/*!
    References the Include relationships owned by this use case.
 */
const QSet<QInclude *> *QUseCase::includes() const
{
    QTUML_D(const QUseCase);
    return d->includes;
}

void QUseCase::addInclude(QInclude *include)
{
    QTUML_D(QUseCase);
    if (!d->includes->contains(include)) {
        d->addInclude(include);

        // Adjust opposite property
        include->setIncludingCase(this);
    }
}

void QUseCase::removeInclude(QInclude *include)
{
    QTUML_D(QUseCase);
    if (d->includes->contains(include)) {
        d->removeInclude(include);

        // Adjust opposite property
        include->setIncludingCase(0);
    }
}

/*!
    References the subjects to which this use case applies. The subject or its parts realize all the use cases that apply to this subject. Use cases need not be attached to any specific subject, however. The subject may, but need not, own the use cases that apply to it.
 */
const QSet<QClassifier *> *QUseCase::subjects() const
{
    QTUML_D(const QUseCase);
    return d->subjects;
}

void QUseCase::addSubject(QClassifier *subject)
{
    QTUML_D(QUseCase);
    if (!d->subjects->contains(subject)) {
        d->addSubject(subject);

        // Adjust opposite property
        subject->addUseCase(this);
    }
}

void QUseCase::removeSubject(QClassifier *subject)
{
    QTUML_D(QUseCase);
    if (d->subjects->contains(subject)) {
        d->removeSubject(subject);

        // Adjust opposite property
        subject->removeUseCase(this);
    }
}

/*!
    References the Extend relationships owned by this use case.
 */
const QSet<QExtend *> *QUseCase::extends() const
{
    QTUML_D(const QUseCase);
    return d->extends;
}

void QUseCase::addExtend(QExtend *extend)
{
    QTUML_D(QUseCase);
    if (!d->extends->contains(extend)) {
        d->addExtend(extend);

        // Adjust opposite property
        extend->setExtension(this);
    }
}

void QUseCase::removeExtend(QExtend *extend)
{
    QTUML_D(QUseCase);
    if (d->extends->contains(extend)) {
        d->removeExtend(extend);

        // Adjust opposite property
        extend->setExtension(0);
    }
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

