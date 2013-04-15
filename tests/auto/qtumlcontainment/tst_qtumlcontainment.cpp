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
#include <QtTest/QtTest>

#include <QtUml/QUmlModel>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlComment>

class TestQtUmlContainment : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void qtumlcontainment();

private:
    void check(QString modelName, QString packageName, int modelSize, int packageSize);

    QWrappedObjectPointer<QUmlModel> _model;
    QWrappedObjectPointer<QUmlPackage> _package;
};

void TestQtUmlContainment::check(QString modelName, QString packageName, int modelSize, int packageSize)
{
    QCOMPARE(_model->qualifiedName(), modelName);
    QCOMPARE(_package->qualifiedName(), packageName);
    QCOMPARE(_model->members().size(), modelSize);
    QCOMPARE(_model->ownedMembers().size(), modelSize);
    QCOMPARE(_model->ownedElements().size(), modelSize);
    QCOMPARE(_package->members().size(), packageSize);
    QCOMPARE(_package->ownedMembers().size(), packageSize);
    QCOMPARE(_package->ownedElements().size(), packageSize);
}

void TestQtUmlContainment::qtumlcontainment()
{
    _model = new QUmlModel;
    _model->setName("Model");

    _package = new QUmlPackage;
    _package->setName("Package");

    check("Model", "Package", 0, 0);

    _model->addNestedPackage(_package);
    check("Model", "Model::Package", 1, 0);
    _model->removeNestedPackage(_package);
    check("Model", "Package", 0, 0);

    _model->addPackagedElement(_package);
    check("Model", "Model::Package", 1, 0);
    _model->removePackagedElement(_package);
    check("Model", "Package", 0, 0);

    _model->addNestedPackage(_package);
    check("Model", "Model::Package", 1, 0);
    _model->removePackagedElement(_package);
    check("Model", "Package", 0, 0);

    _model->addPackagedElement(_package);
    check("Model", "Model::Package", 1, 0);
    _model->removeNestedPackage(_package);
    check("Model", "Package", 0, 0);

    QWrappedObjectPointer<QUmlComment> comment = new QUmlComment;
    _package->addOwnedComment(comment);
    QCOMPARE(_package->members().size(), 0);
    QCOMPARE(_package->ownedMembers().size(), 0);
    QCOMPARE(_package->ownedElements().size(), 1);
    QCOMPARE(_package->ownedComments().size(), 1);

    delete _model.data();
    delete _package.data();
}

QTEST_MAIN(TestQtUmlContainment)
#include "tst_qtumlcontainment.moc"

