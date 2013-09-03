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
    c1->asQObject()->setObjectName("c1");
    QUmlComment *c2 = new QUmlComment;
    c2->asQObject()->setObjectName("c2");
    QUmlComment *c3 = new QUmlComment;
    c3->asQObject()->setObjectName("c3");

    c2->setBody("Teste");
    c1->addOwnedComment(c2);
    c1->addOwnedComment(c3);
    qDebug() << "c2's parent:" << c2->asQObject()->parent()->objectName();
    qDebug() << "c3's parent:" << c3->asQObject()->parent()->objectName();

    //c1->removeOwnedComment(c3);
    qDebug() << "c3's parent:" << c3->asQObject()->parent();

    qDebug() << "Comment size:" << c1->ownedComment().size();
    delete c2;
    //c1->removeOwnedComment(c2);
    qDebug() << "Comment size:" << c1->ownedComment().size();
    foreach(QObject *c, c1->asQObject()->property("ownedComment").value< QSet<QObject *> >())
        qDebug() << c->objectName();

    foreach(QObject *c, c1->asQObject()->property("ownedElement").value< QSet<QObject *> >())
        qDebug() << c->objectName();

    delete c1;
    //delete c3;
}
