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

#include <QtModeling/QXmiReader>
#include <QtModeling/QModelingElement>

#include <QtUml/QUmlPort>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlComponent>

class TestQtUmlConnectorTypeComponentParts : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void qtumlconnectortypeandcomponentparts();
};

void TestQtUmlConnectorTypeComponentParts::qtumlconnectortypeandcomponentparts()
{
    QFile file("test.xmi");

    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Cannot read file !";
        return;
    }

    QXmiReader reader;
    QList<QModelingElement *> rootElements = reader.readFile(&file);

    QUmlConnector *connector1 = qmodelingelementproperty_cast<QUmlConnector *>(rootElements.first()->asQModelingObject()->findChild<QObject *>("assemblyConnector"));
    QCOMPARE(connector1->kind(), QtUml::ConnectorKindAssembly);

    QUmlConnector *connector2 = qmodelingelementproperty_cast<QUmlConnector *>(rootElements.first()->asQModelingObject()->findChild<QObject *>("delegationConnector"));
    QCOMPARE(connector2->kind(), QtUml::ConnectorKindDelegation);

    QUmlComponent *component = qmodelingelementproperty_cast<QUmlComponent *>(rootElements.first()->asQModelingObject()->findChild<QObject *>("WebServer"));
    QCOMPARE(component->parts().size(), 2);
    QCOMPARE(component->parts().contains(qmodelingelementproperty_cast<QUmlProperty *>(rootElements.first()->asQModelingObject()->findChild<QObject *>("leaderFollowers"))), true);
    QCOMPARE(component->parts().contains(qmodelingelementproperty_cast<QUmlProperty *>(rootElements.first()->asQModelingObject()->findChild<QObject *>("threadPool"))), true);

//    qDeleteAll(rootElements);
}

QTEST_MAIN(TestQtUmlConnectorTypeComponentParts)
#include "tst_qtumlconnectortypeandcomponentparts.moc"

