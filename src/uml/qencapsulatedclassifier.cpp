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

#include "qencapsulatedclassifier.h"
#include "qencapsulatedclassifier_p.h"

#include <QtUml/QPort>

QT_BEGIN_NAMESPACE_QTUML

QEncapsulatedClassifierPrivate::QEncapsulatedClassifierPrivate()
{
}

QEncapsulatedClassifierPrivate::~QEncapsulatedClassifierPrivate()
{
}

/*!
    \class QEncapsulatedClassifier

    \inmodule QtUml

    \brief A classifier has the ability to own ports as specific and type checked interaction points.
 */

QEncapsulatedClassifier::QEncapsulatedClassifier(QWrappedObject *parent, QWrappedObject *wrapper) :
    QStructuredClassifier(*new QEncapsulatedClassifierPrivate, parent, wrapper)
{
}

QEncapsulatedClassifier::QEncapsulatedClassifier(QEncapsulatedClassifierPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QStructuredClassifier(dd, parent, wrapper)
{
}

QEncapsulatedClassifier::~QEncapsulatedClassifier()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QEncapsulatedClassifier
// ---------------------------------------------------------------

/*!
    References a set of ports that an encapsulated classifier owns.
 */
const QSet<QPort *> *QEncapsulatedClassifier::ownedPorts() const
{
    // This is a read-only derived association end

    qWarning("QEncapsulatedClassifier::ownedPorts: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

void QEncapsulatedClassifier::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QEncapsulatedClassifier) *>("QT_PREPEND_NAMESPACE_QTUML(QEncapsulatedClassifier) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QEncapsulatedClassifier) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QEncapsulatedClassifier) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QEncapsulatedClassifier) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QEncapsulatedClassifier) *> *");
    qRegisterMetaType<QEncapsulatedClassifier *>("QEncapsulatedClassifier *");
    qRegisterMetaType<const QSet<QEncapsulatedClassifier *> *>("const QSet<QEncapsulatedClassifier *> *");
    qRegisterMetaType<const QList<QEncapsulatedClassifier *> *>("const QList<QEncapsulatedClassifier *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QPort) *>("QT_PREPEND_NAMESPACE_QTUML(QPort) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QPort) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QPort) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QPort) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QPort) *> *");
    qRegisterMetaType<QPort *>("QPort *");
    qRegisterMetaType<const QSet<QPort *> *>("const QSet<QPort *> *");
    qRegisterMetaType<const QList<QPort *> *>("const QList<QPort *> *");


    QStructuredClassifier::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qencapsulatedclassifier.cpp"

QT_END_NAMESPACE_QTUML

