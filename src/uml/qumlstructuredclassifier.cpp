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
#include "qumlstructuredclassifier.h"
#include "qumlstructuredclassifier_p.h"

#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

QUmlStructuredClassifierPrivate::QUmlStructuredClassifierPrivate()
{
}

/*!
    \class QUmlStructuredClassifier

    \inmodule QtUml

    \brief A structured classifier is an abstract metaclass that represents any classifier whose behavior can be fully or partly described by the collaboration of owned or referenced instances.
 */

QUmlStructuredClassifier::QUmlStructuredClassifier(bool create_d_ptr) :
    QUmlClassifier(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlStructuredClassifierPrivate);
}

// OWNED ATTRIBUTES

/*!
    References the properties owned by the classifier.
 */
QList<QUmlProperty *> QUmlStructuredClassifier::ownedAttribute() const
{
    // This is a read-write association end

    QM_D(const QUmlStructuredClassifier);
    return d->ownedAttribute;
}

void QUmlStructuredClassifier::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    QM_D(QUmlStructuredClassifier);
    if (!d->ownedAttribute.contains(ownedAttribute)) {
        d->ownedAttribute.append(ownedAttribute);
    }
}

void QUmlStructuredClassifier::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    QM_D(QUmlStructuredClassifier);
    if (d->ownedAttribute.contains(ownedAttribute)) {
        d->ownedAttribute.removeAll(ownedAttribute);
    }
}

/*!
    References the connectors owned by the classifier.
 */
QSet<QUmlConnector *> QUmlStructuredClassifier::ownedConnector() const
{
    // This is a read-write association end

    QM_D(const QUmlStructuredClassifier);
    return d->ownedConnector;
}

void QUmlStructuredClassifier::addOwnedConnector(QUmlConnector *ownedConnector)
{
    // This is a read-write association end

    QM_D(QUmlStructuredClassifier);
    if (!d->ownedConnector.contains(ownedConnector)) {
        d->ownedConnector.insert(ownedConnector);
    }
}

void QUmlStructuredClassifier::removeOwnedConnector(QUmlConnector *ownedConnector)
{
    // This is a read-write association end

    QM_D(QUmlStructuredClassifier);
    if (d->ownedConnector.contains(ownedConnector)) {
        d->ownedConnector.remove(ownedConnector);
    }
}

/*!
    References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true.
 */
QSet<QUmlProperty *> QUmlStructuredClassifier::part() const
{
    // This is a read-only derived association end

    qWarning("QUmlStructuredClassifier::part(): to be implemented (this is a derived association end)");

    return QSet<QUmlProperty *>();
}

/*!
    References the roles that instances may play in this classifier.
 */
QSet<QUmlConnectableElement *> QUmlStructuredClassifier::role() const
{
    // This is a read-only derived union association end

    QM_D(const QUmlStructuredClassifier);
    return d->role;
}

QT_END_NAMESPACE

