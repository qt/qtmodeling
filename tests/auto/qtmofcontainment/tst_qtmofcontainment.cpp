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
#include <QtTest/QtTest>

#include <QtMof/QMofPackage>
#include <QtMof/QMofComment>

class TestQtMofContainment : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void qtmofcontainment();

private:
    void check(QString package1Name, QString package2Name, int package1Size, int package2Size);

    QMofPackage *_package1;
    QMofPackage *_package2;
};

void TestQtMofContainment::check(QString package1Name, QString package2Name, int package1Size, int package2Size)
{
    QCOMPARE(_package1->qualifiedName(), package1Name);
    QCOMPARE(_package2->qualifiedName(), package2Name);
    QCOMPARE(_package1->members().size(), package1Size);
    QCOMPARE(_package1->ownedMembers().size(), package1Size);
    QCOMPARE(_package1->ownedElements().size(), package1Size);
    QCOMPARE(_package2->members().size(), package2Size);
    QCOMPARE(_package2->ownedMembers().size(), package2Size);
    QCOMPARE(_package2->ownedElements().size(), package2Size);
}

void TestQtMofContainment::qtmofcontainment()
{
    _package1 = new QMofPackage;
    _package1->setName("Package1");

    _package2 = new QMofPackage;
    _package2->setName("Package2");

    check("Package1", "Package2", 0, 0);

    _package1->addNestedPackage(_package2);
    check("Package1", "Package1::Package2", 1, 0);
    _package1->removeNestedPackage(_package2);
    check("Package1", "Package2", 0, 0);

    _package1->addPackagedElement(_package2);
    check("Package1", "Package1::Package2", 1, 0);
    _package1->removePackagedElement(_package2);
    check("Package1", "Package2", 0, 0);

    _package1->addNestedPackage(_package2);
    check("Package1", "Package1::Package2", 1, 0);
    _package1->removePackagedElement(_package2);
    check("Package1", "Package2", 0, 0);

    _package1->addPackagedElement(_package2);
    check("Package1", "Package1::Package2", 1, 0);
    _package1->removeNestedPackage(_package2);
    check("Package1", "Package2", 0, 0);

    QMofComment *comment = new QMofComment;
    _package1->addOwnedComment(comment);
    QCOMPARE(_package1->members().size(), 0);
    QCOMPARE(_package1->ownedMembers().size(), 0);
    QCOMPARE(_package1->ownedElements().size(), 1);
    QCOMPARE(_package1->ownedComments().size(), 1);

    delete _package1;
    delete _package2;
}

QTEST_MAIN(TestQtMofContainment)
#include "tst_qtmofcontainment.moc"

