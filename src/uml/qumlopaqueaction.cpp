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
#include "qumlopaqueaction.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

QT_BEGIN_NAMESPACE

QUmlOpaqueAction::QUmlOpaqueAction(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QList<QString> QUmlOpaqueAction::body() const
{
    return *(reinterpret_cast<const QList<QString> *>(&_body));
}

void QUmlOpaqueAction::addBody(QString body)
{
    UmlOpaqueAction::addBody(body);
}

void QUmlOpaqueAction::removeBody(QString body)
{
    UmlOpaqueAction::removeBody(body);
}

const QSet<QUmlInputPin *> QUmlOpaqueAction::inputValue() const
{
    return *(reinterpret_cast<const QSet<QUmlInputPin *> *>(&_inputValue));
}

void QUmlOpaqueAction::addInputValue(UmlInputPin *inputValue)
{
    UmlOpaqueAction::addInputValue(inputValue);
}

void QUmlOpaqueAction::removeInputValue(UmlInputPin *inputValue)
{
    UmlOpaqueAction::removeInputValue(inputValue);
}

const QList<QString> QUmlOpaqueAction::language() const
{
    return *(reinterpret_cast<const QList<QString> *>(&_language));
}

void QUmlOpaqueAction::addLanguage(QString language)
{
    UmlOpaqueAction::addLanguage(language);
}

void QUmlOpaqueAction::removeLanguage(QString language)
{
    UmlOpaqueAction::removeLanguage(language);
}

const QSet<QUmlOutputPin *> QUmlOpaqueAction::outputValue() const
{
    return *(reinterpret_cast<const QSet<QUmlOutputPin *> *>(&_outputValue));
}

void QUmlOpaqueAction::addOutputValue(UmlOutputPin *outputValue)
{
    UmlOpaqueAction::addOutputValue(outputValue);
}

void QUmlOpaqueAction::removeOutputValue(UmlOutputPin *outputValue)
{
    UmlOpaqueAction::removeOutputValue(outputValue);
}

QT_END_NAMESPACE

