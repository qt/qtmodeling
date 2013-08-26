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

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlInputPin>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlReclassifyObjectAction

    \inmodule QtUml

    \brief A reclassify object action is an action that changes which classifiers classify an object.
 */

QUmlReclassifyObjectAction::QUmlReclassifyObjectAction() :
    _isReplaceAll(false),
    _object(0)
{
}

// OWNED ATTRIBUTES

/*!
    Specifies whether existing classifiers should be removed before adding the new classifiers.
 */
bool QUmlReclassifyObjectAction::isReplaceAll() const
{
    // This is a read-write property

    return _isReplaceAll;
}

void QUmlReclassifyObjectAction::setReplaceAll(bool isReplaceAll)
{
    // This is a read-write property

    if (_isReplaceAll != isReplaceAll) {
        _isReplaceAll = isReplaceAll;
    }
}

/*!
    A set of classifiers to be added to the classifiers of the object.
 */
QSet<QUmlClassifier *> QUmlReclassifyObjectAction::newClassifier() const
{
    // This is a read-write association end

    return _newClassifier;
}

void QUmlReclassifyObjectAction::addNewClassifier(QUmlClassifier *newClassifier)
{
    // This is a read-write association end

    if (!_newClassifier.contains(newClassifier)) {
        _newClassifier.insert(newClassifier);
    }
}

void QUmlReclassifyObjectAction::removeNewClassifier(QUmlClassifier *newClassifier)
{
    // This is a read-write association end

    if (_newClassifier.contains(newClassifier)) {
        _newClassifier.remove(newClassifier);
    }
}

/*!
    Holds the object to be reclassified.
 */
QUmlInputPin *QUmlReclassifyObjectAction::object() const
{
    // This is a read-write association end

    return _object;
}

void QUmlReclassifyObjectAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    if (_object != object) {
        _object = object;
    }
}

/*!
    A set of classifiers to be removed from the classifiers of the object.
 */
QSet<QUmlClassifier *> QUmlReclassifyObjectAction::oldClassifier() const
{
    // This is a read-write association end

    return _oldClassifier;
}

void QUmlReclassifyObjectAction::addOldClassifier(QUmlClassifier *oldClassifier)
{
    // This is a read-write association end

    if (!_oldClassifier.contains(oldClassifier)) {
        _oldClassifier.insert(oldClassifier);
    }
}

void QUmlReclassifyObjectAction::removeOldClassifier(QUmlClassifier *oldClassifier)
{
    // This is a read-write association end

    if (_oldClassifier.contains(oldClassifier)) {
        _oldClassifier.remove(oldClassifier);
    }
}

QT_END_NAMESPACE

