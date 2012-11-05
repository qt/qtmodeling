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

QUseCase::QUseCase(QObject *parent) :
    QBehavioredClassifier(*new QUseCasePrivate, parent)
{
}

QUseCase::QUseCase(QUseCasePrivate &dd, QObject *parent) :
    QBehavioredClassifier(dd, parent)
{
}

QUseCase::~QUseCase()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUseCase
// ---------------------------------------------------------------

/*!
    References the ExtensionPoints owned by the use case.
 */
const QSet<QExtensionPoint *> *QUseCase::extensionPoints() const
{
    // This is a read-write association end

    Q_D(const QUseCase);
    return d->extensionPoints;
}

void QUseCase::addExtensionPoint(QExtensionPoint *extensionPoint)
{
    // This is a read-write association end

    Q_D(QUseCase);
    if (!d->extensionPoints->contains(extensionPoint)) {
        d->extensionPoints->insert(extensionPoint);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->addOwnedMember(qtuml_object_cast<QNamedElement *>(extensionPoint));

        // Adjust opposite property
        extensionPoint->setUseCase(this);
    }
}

void QUseCase::removeExtensionPoint(QExtensionPoint *extensionPoint)
{
    // This is a read-write association end

    Q_D(QUseCase);
    if (d->extensionPoints->contains(extensionPoint)) {
        d->extensionPoints->remove(extensionPoint);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->removeOwnedMember(qtuml_object_cast<QNamedElement *>(extensionPoint));

        // Adjust opposite property
        extensionPoint->setUseCase(0);
    }
}

/*!
    References the Include relationships owned by this use case.
 */
const QSet<QInclude *> *QUseCase::includes() const
{
    // This is a read-write association end

    Q_D(const QUseCase);
    return d->includes;
}

void QUseCase::addInclude(QInclude *include)
{
    // This is a read-write association end

    Q_D(QUseCase);
    if (!d->includes->contains(include)) {
        d->includes->insert(include);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->addOwnedMember(qtuml_object_cast<QNamedElement *>(include));

        // Adjust opposite property
        include->setIncludingCase(this);
    }
}

void QUseCase::removeInclude(QInclude *include)
{
    // This is a read-write association end

    Q_D(QUseCase);
    if (d->includes->contains(include)) {
        d->includes->remove(include);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->removeOwnedMember(qtuml_object_cast<QNamedElement *>(include));

        // Adjust opposite property
        include->setIncludingCase(0);
    }
}

/*!
    References the subjects to which this use case applies. The subject or its parts realize all the use cases that apply to this subject. Use cases need not be attached to any specific subject, however. The subject may, but need not, own the use cases that apply to it.
 */
const QSet<QClassifier *> *QUseCase::subjects() const
{
    // This is a read-write association end

    Q_D(const QUseCase);
    return d->subjects;
}

void QUseCase::addSubject(QClassifier *subject)
{
    // This is a read-write association end

    Q_D(QUseCase);
    if (!d->subjects->contains(subject)) {
        d->subjects->insert(subject);

        // Adjust opposite property
        subject->addUseCase(this);
    }
}

void QUseCase::removeSubject(QClassifier *subject)
{
    // This is a read-write association end

    Q_D(QUseCase);
    if (d->subjects->contains(subject)) {
        d->subjects->remove(subject);

        // Adjust opposite property
        if (subject)
            subject->removeUseCase(this);
    }
}

/*!
    References the Extend relationships owned by this use case.
 */
const QSet<QExtend *> *QUseCase::extends() const
{
    // This is a read-write association end

    Q_D(const QUseCase);
    return d->extends;
}

void QUseCase::addExtend(QExtend *extend)
{
    // This is a read-write association end

    Q_D(QUseCase);
    if (!d->extends->contains(extend)) {
        d->extends->insert(extend);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->addOwnedMember(qtuml_object_cast<QNamedElement *>(extend));

        // Adjust opposite property
        extend->setExtension(this);
    }
}

void QUseCase::removeExtend(QExtend *extend)
{
    // This is a read-write association end

    Q_D(QUseCase);
    if (d->extends->contains(extend)) {
        d->extends->remove(extend);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->removeOwnedMember(qtuml_object_cast<QNamedElement *>(extend));

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

