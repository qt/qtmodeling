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

QUmlReclassifyObjectAction::QUmlReclassifyObjectAction(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

bool QUmlReclassifyObjectAction::isReplaceAll() const
{
    return _isReplaceAll;
}

void QUmlReclassifyObjectAction::setReplaceAll(bool isReplaceAll)
{
    UmlReclassifyObjectAction::setReplaceAll(isReplaceAll);
}

const QSet<QUmlClassifier *> QUmlReclassifyObjectAction::newClassifier() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_newClassifier));
}

void QUmlReclassifyObjectAction::addNewClassifier(UmlClassifier *newClassifier)
{
    UmlReclassifyObjectAction::addNewClassifier(newClassifier);
}

void QUmlReclassifyObjectAction::removeNewClassifier(UmlClassifier *newClassifier)
{
    UmlReclassifyObjectAction::removeNewClassifier(newClassifier);
}

QUmlInputPin *QUmlReclassifyObjectAction::object() const
{
    return reinterpret_cast<QUmlInputPin *>(_object);
}

void QUmlReclassifyObjectAction::setObject(QUmlInputPin *object)
{
    UmlReclassifyObjectAction::setObject(object);
}

const QSet<QUmlClassifier *> QUmlReclassifyObjectAction::oldClassifier() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_oldClassifier));
}

void QUmlReclassifyObjectAction::addOldClassifier(UmlClassifier *oldClassifier)
{
    UmlReclassifyObjectAction::addOldClassifier(oldClassifier);
}

void QUmlReclassifyObjectAction::removeOldClassifier(UmlClassifier *oldClassifier)
{
    UmlReclassifyObjectAction::removeOldClassifier(oldClassifier);
}

QT_END_NAMESPACE

