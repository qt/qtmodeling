/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofcomment.h"
#include "qmofcomment_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofCommentPrivate::QMofCommentPrivate()
{
}

QMofCommentPrivate::~QMofCommentPrivate()
{
}

/*!
    \class QMofComment

    \inmodule QtMof

    \brief A comment is a textual annotation that can be attached to a set of elements.
 */

QMofComment::QMofComment(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(*new QMofCommentPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofComment::QMofComment(QMofCommentPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofComment::~QMofComment()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofComment
// ---------------------------------------------------------------

/*!
    Specifies a string that is the comment.
 */
QString QMofComment::body() const
{
    // This is a read-write attribute

    Q_D(const QMofComment);
    return d->body;
}

void QMofComment::setBody(QString body)
{
    // This is a read-write attribute

    Q_D(QMofComment);
    if (d->body != body) {
        d->body = body;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofComment
// ---------------------------------------------------------------

/*!
    References the Element(s) being commented.
 */
QSet<QMofElement *> QMofComment::annotatedElements() const
{
    // This is a read-write association end

    Q_D(const QMofComment);
    return d->annotatedElements;
}

void QMofComment::addAnnotatedElement(QMofElement *annotatedElement)
{
    // This is a read-write association end

    Q_D(QMofComment);
    if (!d->annotatedElements.contains(annotatedElement)) {
        d->annotatedElements.insert(annotatedElement);
    }
}

void QMofComment::removeAnnotatedElement(QMofElement *annotatedElement)
{
    // This is a read-write association end

    Q_D(QMofComment);
    if (d->annotatedElements.contains(annotatedElement)) {
        d->annotatedElements.remove(annotatedElement);
    }
}

void QMofComment::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("body")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("body")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("body")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies a string that is the comment.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("body")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("body")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("body")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("annotatedElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("annotatedElements")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("annotatedElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Element(s) being commented.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("annotatedElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("annotatedElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofComment")][QString::fromLatin1("annotatedElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QMofElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofcomment.cpp"

