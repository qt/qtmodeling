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
#include "qumlencapsulatedclassifier.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlPort>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlEncapsulatedClassifier

    \inmodule QtUml

    \brief A classifier has the ability to own ports as specific and type checked interaction points.
 */

QUmlEncapsulatedClassifier::QUmlEncapsulatedClassifier()
{
    d_ptr->object.setProperty("ownedPort", QVariant::fromValue(QSet<QUmlPort *>()));
}

// OWNED ATTRIBUTES

/*!
    References a set of ports that an encapsulated classifier owns.
 */
const QSet<QUmlPort *> QUmlEncapsulatedClassifier::ownedPort() const
{
    // This is a read-only derived association end

    qWarning("QUmlEncapsulatedClassifier::ownedPort(): to be implemented (this is a derived association end)");

    return QSet<QUmlPort *>();
}

void QUmlEncapsulatedClassifier::addOwnedPort(QUmlPort *ownedPort)
{
    // This is a read-only derived association end

    qWarning("QUmlEncapsulatedClassifier::ownedPort(): to be implemented (this is a derived association end)");
    Q_UNUSED(ownedPort);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addOwnedAttribute(ownedPort);
    }
}

void QUmlEncapsulatedClassifier::removeOwnedPort(QUmlPort *ownedPort)
{
    // This is a read-only derived association end

    qWarning("QUmlEncapsulatedClassifier::ownedPort(): to be implemented (this is a derived association end)");
    Q_UNUSED(ownedPort);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removeOwnedAttribute(ownedPort);
    }
}

QT_END_NAMESPACE

