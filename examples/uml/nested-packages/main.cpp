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
#include <QtUml/QUmlComment>
#include <QtCore/QDebug>

int main ()
{
    QUmlComment *c1 = new QUmlComment;
    c1->asQModelingObject()->setObjectName("c1");
    QUmlComment *c2 = new QUmlComment;
    c2->asQModelingObject()->setObjectName("c2");
    QUmlComment *c3 = new QUmlComment;
    c3->asQModelingObject()->setObjectName("c3");
    c3->setBody("c3 body");

    c1->setBody("c1 body");
    c2->setBody("c2 body");
    c1->addOwnedComment(c2);
    c1->addOwnedComment(c3);
    qDebug() << "c2's parent:" << c2->asQModelingObject()->parent()->objectName();
    qDebug() << "c3's parent:" << c3->asQModelingObject()->parent()->objectName();

    QUmlComment *c4 = dynamic_cast<QUmlComment *>(c1->clone());
    qDebug() << "c1 body:" << c4->body();
    foreach (QUmlComment *comment, c1->ownedComments())
        qDebug() << "c1 owned comment body:" << comment->body();
    qDebug() << "c4 body:" << c4->body();
    foreach (QUmlComment *comment, c4->ownedComments())
        qDebug() << "c4 owned comment body:" << comment->body();

    //c1->removeOwnedComment(c3);
    qDebug() << "c3's parent:" << c3->asQModelingObject()->parent();

    qDebug() << "Comment size:" << c1->ownedComments().size();
    delete c2;
    //c1->removeOwnedComment(c2);
    qDebug() << "Comment size:" << c1->ownedComments().size();
    foreach (QObject *c, c1->asQModelingObject()->property("ownedComment").value< QSet<QObject *> >())
        qDebug() << c->objectName();

    foreach (QObject *c, c1->asQModelingObject()->property("ownedElement").value< QSet<QObject *> >())
        qDebug() << c->objectName();

    delete c1;
    delete c4;
    //delete c3;
}
