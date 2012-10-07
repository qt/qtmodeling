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

#include <QtUml/QConstraint>
#include <QtUml/QUseCase>
#include <QtUml/QExtensionPoint>

QT_BEGIN_NAMESPACE_QTUML

class QExtendPrivate
{
public:
    explicit QExtendPrivate();
    virtual ~QExtendPrivate();

    QConstraint *condition;
    QUseCase *extendedCase;
    QUseCase *extension;
    QList<QExtensionPoint *> *extensionLocations;
};

QExtendPrivate::QExtendPrivate() :
    condition(0),
    extendedCase(0),
    extension(0),
    extensionLocations(new QList<QExtensionPoint *>)
{
}

QExtendPrivate::~QExtendPrivate()
{
    delete extensionLocations;
}

/*!
    \class QExtend

    \inmodule QtUml

    \brief A relationship from an extending use case to an extended use case that specifies how and when the behavior defined in the extending use case can be inserted into the behavior defined in the extended use case.
 */

QExtend::QExtend(QObject *parent)
    : QObject(parent), d_ptr(new QExtendPrivate)
{
}

QExtend::~QExtend()
{
    delete d_ptr;
}

/*!
    References the condition that must hold when the first extension point is reached for the extension to take place. If no constraint is associated with the extend relationship, the extension is unconditional.
 */
QConstraint *QExtend::condition() const
{
    return d_ptr->condition;
}

void QExtend::setCondition(const QConstraint *condition)
{
    d_ptr->condition = const_cast<QConstraint *>(condition);
}

/*!
    References the use case that is being extended.
 */
QUseCase *QExtend::extendedCase() const
{
    return d_ptr->extendedCase;
}

void QExtend::setExtendedCase(const QUseCase *extendedCase)
{
    d_ptr->extendedCase = const_cast<QUseCase *>(extendedCase);
}

/*!
    References the use case that represents the extension and owns the extend relationship.
 */
QUseCase *QExtend::extension() const
{
    return d_ptr->extension;
}

void QExtend::setExtension(const QUseCase *extension)
{
    d_ptr->extension = const_cast<QUseCase *>(extension);
}

/*!
    An ordered list of extension points belonging to the extended use case, specifying where the respective behavioral fragments of the extending use case are to be inserted. The first fragment in the extending use case is associated with the first extension point in the list, the second fragment with the second point, and so on. (Note that, in most practical cases, the extending use case has just a single behavior fragment, so that the list of extension points is trivial.)
 */
const QList<QExtensionPoint *> *QExtend::extensionLocations() const
{
    return d_ptr->extensionLocations;
}

void QExtend::addExtensionLocation(const QExtensionPoint *extensionLocation)
{
    d_ptr->extensionLocations->append(const_cast<QExtensionPoint *>(extensionLocation));
}

void QExtend::removeExtensionLocation(const QExtensionPoint *extensionLocation)
{
    d_ptr->extensionLocations->removeAll(const_cast<QExtensionPoint *>(extensionLocation));
}

#include "moc_qextend.cpp"

QT_END_NAMESPACE_QTUML

