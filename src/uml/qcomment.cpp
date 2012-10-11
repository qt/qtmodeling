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

#include "qcomment.h"
#include "qcomment_p.h"


QT_BEGIN_NAMESPACE_QTUML

QCommentPrivate::QCommentPrivate() :
    annotatedElements(new QSet<QElement *>)
{
}

QCommentPrivate::~QCommentPrivate()
{
    delete annotatedElements;
}

void QCommentPrivate::setBody(QString body)
{
    this->body = body;
}

void QCommentPrivate::addAnnotatedElement(const QElement *annotatedElement)
{
    this->annotatedElements->insert(const_cast<QElement *>(annotatedElement));
}

void QCommentPrivate::removeAnnotatedElement(const QElement *annotatedElement)
{
    this->annotatedElements->remove(const_cast<QElement *>(annotatedElement));
}

/*!
    \class QComment

    \inmodule QtUml

    \brief A comment is a textual annotation that can be attached to a set of elements.
 */

QComment::QComment(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QCommentPrivate;
}

QComment::QComment(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QCommentPrivate;
}

QComment::~QComment()
{
}

/*!
    Specifies a string that is the comment.
 */
QString QComment::body() const
{
    QTUML_D(const QComment);
    return d->body;
}

void QComment::setBody(QString body)
{
    QTUML_D(QComment);
    d->setBody(body);
}

/*!
    References the Element(s) being commented.
 */
const QSet<QElement *> *QComment::annotatedElements() const
{
    QTUML_D(const QComment);
    return d->annotatedElements;
}

void QComment::addAnnotatedElement(const QElement *annotatedElement)
{
    QTUML_D(QComment);
    d->addAnnotatedElement(const_cast<QElement *>(annotatedElement));
}

void QComment::removeAnnotatedElement(const QElement *annotatedElement)
{
    QTUML_D(QComment);
    d->removeAnnotatedElement(const_cast<QElement *>(annotatedElement));
}

#include "moc_qcomment.cpp"

QT_END_NAMESPACE_QTUML

