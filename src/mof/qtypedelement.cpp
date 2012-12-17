/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qtypedelement.h"
#include "qtypedelement_p.h"

#include <QtMof/QType>

QT_BEGIN_NAMESPACE_QTMOF

QTypedElementPrivate::QTypedElementPrivate() :
    type(0)
{
}

QTypedElementPrivate::~QTypedElementPrivate()
{
}

/*!
    \class QTypedElement

    \inmodule QtMof

    \brief A typed element has a type.
 */

QTypedElement::QTypedElement(QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(*new QTypedElementPrivate, parent, wrapper)
{
}

QTypedElement::QTypedElement(QTypedElementPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(dd, parent, wrapper)
{
}

QTypedElement::~QTypedElement()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTypedElement
// ---------------------------------------------------------------

/*!
    The type of the TypedElement.
 */
QType *QTypedElement::type() const
{
    // This is a read-write association end

    Q_D(const QTypedElement);
    return d->type;
}

void QTypedElement::setType(QType *type)
{
    // This is a read-write association end

    Q_D(QTypedElement);
    if (d->type != type) {
        d->type = type;
    }
}

void QTypedElement::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QTypedElement) *>("QT_PREPEND_NAMESPACE_QTMOF(QTypedElement) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QTypedElement) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QTypedElement) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QTypedElement) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QTypedElement) *> *");
    qRegisterMetaType<QTypedElement *>("QTypedElement *");
    qRegisterMetaType<const QSet<QTypedElement *> *>("const QSet<QTypedElement *> *");
    qRegisterMetaType<const QList<QTypedElement *> *>("const QList<QTypedElement *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QType) *>("QT_PREPEND_NAMESPACE_QTMOF(QType) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QType) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QType) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QType) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QType) *> *");
    qRegisterMetaType<QType *>("QType *");
    qRegisterMetaType<const QSet<QType *> *>("const QSet<QType *> *");
    qRegisterMetaType<const QList<QType *> *>("const QList<QType *> *");

    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qtypedelement.cpp"

QT_END_NAMESPACE_QTMOF

