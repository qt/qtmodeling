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
#include <QtTest/QtTest>

#include <QtUml/QModel>
#include <QtUml/QPackage>
#include <QtUml/QComment>

using namespace QtUml;

class TestQtUmlContainment : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void qtumlcontainment();

private:
    void check(QString modelName, QString packageName, int modelSize, int packageSize);

    QWrappedObjectPointer<QModel> _model;
    QWrappedObjectPointer<QPackage> _package;
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
    _model = new QModel;
    _model->setName("Model");

    _package = new QPackage;
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

    QWrappedObjectPointer<QComment> comment = new QComment;
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

