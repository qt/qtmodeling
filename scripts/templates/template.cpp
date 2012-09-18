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

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

/*!
    \class QComment

    \inmodule QtUml

    \brief The QComment class specifies a textual annotation that can be attached to a set of QElement's.

    A QComment gives the ability to attach various remarks to QElement's. A QComment carries no semantic force, but may contain
    information that is useful to a modeler.

    A QComment can be owned by any QElement.
 */

/*!
    The constructor.
 */
QComment::QComment(QObject *parent)
    : QElement(*new QCommentPrivate, parent)
{
}

/*!
    The destructor.
 */
QComment::~QComment()
{
}

/*!
    Returns a string that is the comment.
 */
const QString &QComment::body() const
{
    Q_D(const QComment);
    return d->body;
}

/*!
    Specifies a string that is the comment.
 */
void QComment::setBody(const QString &body)
{
    Q_D(QComment);
    d->body = body;
}

/*!
    References the QElement(s) being commented.
 */
QList<QElement *> &QComment::annotatedElement()
{
    Q_D(QComment);
    return d->annotatedElement;
}

#include "moc_qcomment.cpp"

QT_END_NAMESPACE_UML_CLASSES_KERNEL

