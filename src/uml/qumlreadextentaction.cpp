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
#include "qumlreadextentaction.h"
#include "qumlreadextentaction_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlReadExtentActionPrivate::QUmlReadExtentActionPrivate() :
    classifier(0),
    result(0)
{
}

/*!
    \class QUmlReadExtentAction

    \inmodule QtUml

    \brief A read extent action is an action that retrieves the current instances of a classifier.
 */

QUmlReadExtentAction::QUmlReadExtentAction(bool create_d_ptr) :
    QUmlAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlReadExtentActionPrivate);
}

// OWNED ATTRIBUTES

/*!
    The classifier whose instances are to be retrieved.
 */
QUmlClassifier *QUmlReadExtentAction::classifier() const
{
    // This is a read-write association end

    QM_D(const QUmlReadExtentAction);
    return d->classifier;
}

void QUmlReadExtentAction::setClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    QM_D(QUmlReadExtentAction);
    if (d->classifier != classifier) {
        d->classifier = classifier;
    }
}

/*!
    The runtime instances of the classifier.
 */
QUmlOutputPin *QUmlReadExtentAction::result() const
{
    // This is a read-write association end

    QM_D(const QUmlReadExtentAction);
    return d->result;
}

void QUmlReadExtentAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    QM_D(QUmlReadExtentAction);
    if (d->result != result) {
        d->result = result;
    }
}

QT_END_NAMESPACE

