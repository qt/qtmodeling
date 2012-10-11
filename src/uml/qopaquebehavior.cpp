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

#include "qopaquebehavior.h"
#include "qopaquebehavior_p.h"


QT_BEGIN_NAMESPACE_QTUML

QOpaqueBehaviorPrivate::QOpaqueBehaviorPrivate() :
    languages(new QList<QString>),
    bodies(new QList<QString>)
{
}

QOpaqueBehaviorPrivate::~QOpaqueBehaviorPrivate()
{
    delete languages;
    delete bodies;
}

void QOpaqueBehaviorPrivate::addLanguage(QString language)
{
    this->languages->append(language);
}

void QOpaqueBehaviorPrivate::removeLanguage(QString language)
{
    this->languages->removeAll(language);
}

void QOpaqueBehaviorPrivate::addBody(QString body)
{
    this->bodies->append(body);
}

void QOpaqueBehaviorPrivate::removeBody(QString body)
{
    this->bodies->removeAll(body);
}

/*!
    \class QOpaqueBehavior

    \inmodule QtUml

    \brief An behavior with implementation-specific semantics.
 */

QOpaqueBehavior::QOpaqueBehavior(QObject *parent)
    : QBehavior(false, parent)
{
    d_umlptr = new QOpaqueBehaviorPrivate;
}

QOpaqueBehavior::QOpaqueBehavior(bool createPimpl, QObject *parent)
    : QBehavior(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QOpaqueBehaviorPrivate;
}

QOpaqueBehavior::~QOpaqueBehavior()
{
}

/*!
    Languages the body strings use in the same order as the body strings.
 */
const QList<QString> *QOpaqueBehavior::languages() const
{
    QTUML_D(const QOpaqueBehavior);
    return d->languages;
}

void QOpaqueBehavior::addLanguage(QString language)
{
    QTUML_D(QOpaqueBehavior);
    d->addLanguage(language);
}

void QOpaqueBehavior::removeLanguage(QString language)
{
    QTUML_D(QOpaqueBehavior);
    d->removeLanguage(language);
}

/*!
    Specifies the behavior in one or more languages.
 */
const QList<QString> *QOpaqueBehavior::bodies() const
{
    QTUML_D(const QOpaqueBehavior);
    return d->bodies;
}

void QOpaqueBehavior::addBody(QString body)
{
    QTUML_D(QOpaqueBehavior);
    d->addBody(body);
}

void QOpaqueBehavior::removeBody(QString body)
{
    QTUML_D(QOpaqueBehavior);
    d->removeBody(body);
}

#include "moc_qopaquebehavior.cpp"

QT_END_NAMESPACE_QTUML

