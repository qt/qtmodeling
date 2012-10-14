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

#include "qextend.h"
#include "qextend_p.h"
#include "qdirectedrelationship_p.h"
#include "qnamedelement_p.h"
#include "qelement_p.h"

#include <QtUml/QConstraint>
#include <QtUml/QUseCase>
#include <QtUml/QExtensionPoint>

QT_BEGIN_NAMESPACE_QTUML

QExtendPrivate::QExtendPrivate() :
    extendedCase(0),
    extension(0),
    extensionLocations(new QList<QExtensionPoint *>),
    condition(0)
{
}

QExtendPrivate::~QExtendPrivate()
{
    delete extensionLocations;
}

void QExtendPrivate::setExtendedCase(QUseCase *extendedCase)
{
    // This is a read-write association end

    // Adjust subsetted property(ies)
    removeTarget(this->extendedCase);

    this->extendedCase = extendedCase;

    // Adjust subsetted property(ies)
    addTarget(extendedCase);
}

void QExtendPrivate::setExtension(QUseCase *extension)
{
    // This is a read-write association end

    // Adjust subsetted property(ies)
    removeSource(this->extension);

    this->extension = extension;

    // Adjust subsetted property(ies)
    addSource(extension);
    setNamespace_(extension);
}

void QExtendPrivate::addExtensionLocation(QExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    this->extensionLocations->append(extensionLocation);
}

void QExtendPrivate::removeExtensionLocation(QExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    this->extensionLocations->removeAll(extensionLocation);
}

void QExtendPrivate::setCondition(QConstraint *condition)
{
    // This is a read-write association end

    // Adjust subsetted property(ies)
    removeOwnedElement(this->condition);

    this->condition = condition;

    // Adjust subsetted property(ies)
    addOwnedElement(condition);
}

/*!
    \class QExtend

    \inmodule QtUml

    \brief A relationship from an extending use case to an extended use case that specifies how and when the behavior defined in the extending use case can be inserted into the behavior defined in the extended use case.
 */

QExtend::QExtend(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QExtendPrivate;
}

QExtend::QExtend(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QExtendPrivate;
}

QExtend::~QExtend()
{
}

/*!
    References the use case that is being extended.
 */
QUseCase *QExtend::extendedCase() const
{
    // This is a read-write association end

    QTUML_D(const QExtend);
    return d->extendedCase;
}

void QExtend::setExtendedCase(QUseCase *extendedCase)
{
    // This is a read-write association end

    QTUML_D(QExtend);
    if (d->extendedCase != extendedCase) {
        d->setExtendedCase(extendedCase);
    }
}

/*!
    References the use case that represents the extension and owns the extend relationship.
 */
QUseCase *QExtend::extension() const
{
    // This is a read-write association end

    QTUML_D(const QExtend);
    return d->extension;
}

void QExtend::setExtension(QUseCase *extension)
{
    // This is a read-write association end

    QTUML_D(QExtend);
    if (d->extension != extension) {
        d->setExtension(extension);

        // Adjust opposite property
        extension->addExtend(this);
    }
}

/*!
    An ordered list of extension points belonging to the extended use case, specifying where the respective behavioral fragments of the extending use case are to be inserted. The first fragment in the extending use case is associated with the first extension point in the list, the second fragment with the second point, and so on. (Note that, in most practical cases, the extending use case has just a single behavior fragment, so that the list of extension points is trivial.)
 */
const QList<QExtensionPoint *> *QExtend::extensionLocations() const
{
    // This is a read-write association end

    QTUML_D(const QExtend);
    return d->extensionLocations;
}

void QExtend::addExtensionLocation(QExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    QTUML_D(QExtend);
    if (!d->extensionLocations->contains(extensionLocation)) {
        d->addExtensionLocation(extensionLocation);
    }
}

void QExtend::removeExtensionLocation(QExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    QTUML_D(QExtend);
    if (d->extensionLocations->contains(extensionLocation)) {
        d->removeExtensionLocation(extensionLocation);
    }
}

/*!
    References the condition that must hold when the first extension point is reached for the extension to take place. If no constraint is associated with the extend relationship, the extension is unconditional.
 */
QConstraint *QExtend::condition() const
{
    // This is a read-write association end

    QTUML_D(const QExtend);
    return d->condition;
}

void QExtend::setCondition(QConstraint *condition)
{
    // This is a read-write association end

    QTUML_D(QExtend);
    if (d->condition != condition) {
        d->setCondition(condition);
    }
}

#include "moc_qextend.cpp"

QT_END_NAMESPACE_QTUML

