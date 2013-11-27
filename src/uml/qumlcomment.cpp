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
#include "qumlcomment.h"

#include "private/qumlcommentobject_p.h"

QT_BEGIN_NAMESPACE

/*!
    \class QUmlComment

    \inmodule QtUml

    \brief A comment is a textual annotation that can be attached to a set of elements.
 */

/*!
    Creates a new QUmlComment. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlComment::QUmlComment(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlCommentObject(this));
}

/*!
    Destroys the QUmlComment.
 */
QUmlComment::~QUmlComment()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlComment.
*/
QModelingElement *QUmlComment::clone() const
{
    QUmlComment *c = new QUmlComment;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setBody(body());
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Element(s) being commented.

    \sa addAnnotatedElement(), removeAnnotatedElement()
 */
const QSet<QUmlElement *> QUmlComment::annotatedElements() const
{
    // This is a read-write association end

    return _annotatedElements;
}

/*!
    Adds \a annotatedElement to annotatedElements.

    \sa annotatedElements(), removeAnnotatedElement()
 */
void QUmlComment::addAnnotatedElement(QUmlElement *annotatedElement)
{
    // This is a read-write association end

    if (!_annotatedElements.contains(annotatedElement)) {
        _annotatedElements.insert(annotatedElement);
        if (annotatedElement && annotatedElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(annotatedElement->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeAnnotatedElement(QObject *)));
    }
}

/*!
    Removes \a annotatedElement from annotatedElements.

    \sa annotatedElements(), addAnnotatedElement()
 */
void QUmlComment::removeAnnotatedElement(QUmlElement *annotatedElement)
{
    // This is a read-write association end

    if (_annotatedElements.contains(annotatedElement)) {
        _annotatedElements.remove(annotatedElement);
    }
}

/*!
    Specifies a string that is the comment.
 */
QString QUmlComment::body() const
{
    // This is a read-write property

    return _body;
}

/*!
    Adjusts body to \a body.
 */
void QUmlComment::setBody(QString body)
{
    // This is a read-write property

    if (_body != body) {
        _body = body;
    }
}

QT_END_NAMESPACE

