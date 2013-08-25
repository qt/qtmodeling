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
#include "qumlinterfacerealization.h"
#include "qumlinterfacerealization_p.h"

#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlInterface>

QT_BEGIN_NAMESPACE

QUmlInterfaceRealizationPrivate::QUmlInterfaceRealizationPrivate() :
    contract(0),
    implementingClassifier(0)
{
}

/*!
    \class QUmlInterfaceRealization

    \inmodule QtUml

    \brief An interface realization is a specialized realization relationship between a classifier and an interface. This relationship signifies that the realizing classifier conforms to the contract specified by the interface.
 */

QUmlInterfaceRealization::QUmlInterfaceRealization(bool create_d_ptr) :
    QUmlRealization(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlInterfaceRealizationPrivate);
}

// Owned attributes

/*!
    References the Interface specifying the conformance contract.
 */
QUmlInterface *QUmlInterfaceRealization::contract() const
{
    return 0;
}

void QUmlInterfaceRealization::setContract(QUmlInterface *contract)
{
    Q_UNUSED(contract);
}

/*!
    References the BehavioredClassifier that owns this Interfacerealization (i.e., the classifier that realizes the Interface to which it points).
 */
QUmlBehavioredClassifier *QUmlInterfaceRealization::implementingClassifier() const
{
    return 0;
}

void QUmlInterfaceRealization::setImplementingClassifier(QUmlBehavioredClassifier *implementingClassifier)
{
    Q_UNUSED(implementingClassifier);
}

QT_END_NAMESPACE

