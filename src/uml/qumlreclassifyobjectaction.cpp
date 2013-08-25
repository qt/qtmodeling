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
#include "qumlreclassifyobjectaction.h"
#include "qumlreclassifyobjectaction_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlInputPin>

QT_BEGIN_NAMESPACE

QUmlReclassifyObjectActionPrivate::QUmlReclassifyObjectActionPrivate() :
    isReplaceAll(false),
    object(0)
{
}

/*!
    \class QUmlReclassifyObjectAction

    \inmodule QtUml

    \brief A reclassify object action is an action that changes which classifiers classify an object.
 */

QUmlReclassifyObjectAction::QUmlReclassifyObjectAction(bool create_d_ptr) :
    QUmlAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlReclassifyObjectActionPrivate);
}

// Owned attributes

/*!
    Specifies whether existing classifiers should be removed before adding the new classifiers.
 */
bool QUmlReclassifyObjectAction::isReplaceAll() const
{
    return bool();
}

void QUmlReclassifyObjectAction::setReplaceAll(bool isReplaceAll)
{
    Q_UNUSED(isReplaceAll);
}

/*!
    A set of classifiers to be added to the classifiers of the object.
 */
QSet<QUmlClassifier *> QUmlReclassifyObjectAction::newClassifier() const
{
    return QSet<QUmlClassifier *>();
}

void QUmlReclassifyObjectAction::addNewClassifier(QSet<QUmlClassifier *> newClassifier)
{
    Q_UNUSED(newClassifier);
}

void QUmlReclassifyObjectAction::removeNewClassifier(QSet<QUmlClassifier *> newClassifier)
{
    Q_UNUSED(newClassifier);
}

/*!
    Holds the object to be reclassified.
 */
QUmlInputPin *QUmlReclassifyObjectAction::object() const
{
    return 0;
}

void QUmlReclassifyObjectAction::setObject(QUmlInputPin *object)
{
    Q_UNUSED(object);
}

/*!
    A set of classifiers to be removed from the classifiers of the object.
 */
QSet<QUmlClassifier *> QUmlReclassifyObjectAction::oldClassifier() const
{
    return QSet<QUmlClassifier *>();
}

void QUmlReclassifyObjectAction::addOldClassifier(QSet<QUmlClassifier *> oldClassifier)
{
    Q_UNUSED(oldClassifier);
}

void QUmlReclassifyObjectAction::removeOldClassifier(QSet<QUmlClassifier *> oldClassifier)
{
    Q_UNUSED(oldClassifier);
}

QT_END_NAMESPACE

