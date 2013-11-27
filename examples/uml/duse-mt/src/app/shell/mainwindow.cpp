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
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_aboutplugins.h"
#include "ui_aboutdusemt.h"
#include "ui_newmodel.h"

#include <QtCore/QTimer>
#include <QtCore/QSettings>
#include <QtCore/QJsonArray>
#include <QtCore/QJsonObject>
#include <QtCore/QPluginLoader>
#include <QtCore/QStringListModel>

#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QItemDelegate>
#include <QtWidgets/QProgressDialog>

#include <QtGui/QKeyEvent>

#include <QtModeling/QXmiWriter>
#include <QtModeling/QXmiReader>
#include <QtModeling/QModelingObject>
#include <QtModeling/QModelingElement>
#include <QtModeling/QMetaModelPlugin>
#include <QtModelingWidgets/QModelingObjectModel>
#include <QtModelingWidgets/QModelingObjectView>
#include <QtModelingWidgets/QModelingObjectPropertyModel>

#include <duseinterfaces/icore.h>
#include <duseinterfaces/iplugin.h>
#include <duseinterfaces/iplugincontroller.h>
#include <duseinterfaces/iprojectcontroller.h>

namespace DuSE
{

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _aboutPluginsDialog(new QDialog(this)),
    _aboutPlugins(new Ui::AboutPlugins),
    _aboutDuSEMTDialog(new QDialog(this)),
    _aboutDuSEMT(new Ui::AboutDuSEMT),
    _newModelDialog(new QDialog(this)),
    _newModel(new Ui::NewModel)
{
    ui->setupUi(this);

    _newModel->setupUi(_newModelDialog);
    connect(_newModel->cboMetamodel, SIGNAL(currentIndexChanged(QString)), SLOT(metaModelChanged(QString)));
    _aboutPlugins->setupUi(_aboutPluginsDialog);
    _aboutDuSEMT->setupUi(_aboutDuSEMTDialog);

//    connect(ui->modelingObjectView, &QModelingObjectView::addToView, this, &MainWindow::addToView);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete _aboutPlugins;
    delete _newModel;
    delete _aboutDuSEMT;
}

void MainWindow::readSettings()
{
    QSettings settings("QtProject", "duse-mt");
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());
}

void MainWindow::on_actionFileNewModel_triggered()
{
    _newModel->lneModel->clear();
    _newModel->cboMetamodel->clear();
    foreach (QMetaModelPlugin *metamodelPlugin, ICore::self()->pluginController()->metamodelPlugins().values())
        _newModel->cboMetamodel->addItem(metamodelPlugin->metaObject()->className());
    _newModel->lneModel->setFocus();
    if (_newModelDialog->exec() == QDialog::Accepted) {
        QMetaModelPlugin *metamodelPlugin = 0;
        foreach (QMetaModelPlugin *plugin, ICore::self()->pluginController()->metamodelPlugins().values()) {
            if (plugin->metaObject()->className() == _newModel->cboMetamodel->currentText())
                metamodelPlugin = plugin;
        }
        if (ICore::self()->projectController()->createModel(_newModel->lneModel->text(), metamodelPlugin, _newModel->lstTopLevelContainers->currentItem()->text()))
            setWindowTitle(ICore::self()->projectController()->currentModelFileName() + " - DuSE-MT");
    }
}

void MainWindow::on_actionFileOpenModel_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open"), QDir::currentPath(), "XMI files (*.xmi)");
    if (!fileName.isEmpty()) {
        setCursor(Qt::WaitCursor);
        bool ret = ICore::self()->projectController()->openModel(fileName);
        setCursor(Qt::ArrowCursor);
        if (!ret) {
            QMessageBox::critical(this, tr("Open model"), ICore::self()->projectController()->errorStrings().first());
            return;
        }
        setWindowTitle(QFileInfo(QFile(fileName)).fileName() + " - DuSE-MT");

//        _currentFileName = fileName;
////        foreach (QWrappedObject *object, _inputModel)
////            delete object;
//        _inputModel = loadXmi(_currentFileName);
//        _modelQuickView->setClearBeforeRendering(true);
//        _modelQuickView->setSource(QUrl("qrc:/qml/modelview.qml"));
//        addToView(_inputModel[0]);
    }
}

void MainWindow::evaluateQualityMetrics()
{
//    _engine.evaluate("var m = designspace.qualityMetrics.length;
//                      for (var j = 0; j < m; ++j)
//                          designspace.qualityMetrics[j].value = Math.random()*60+eval(designspace.qualityMetrics[j].expression)");
}

void MainWindow::populateDesignSpaceView(QModelingElement *modelingObject)
{
    Q_UNUSED(modelingObject);
//    QDuseDesignSpace *designSpace = qobject_cast<QDuseDesignSpace *>(modelingObject);
//    ui->tblDesignSpace->setRowCount(0);
//    int row = 0;
//    foreach (QDuseDesignDimension *dimension, designSpace->designDimensions()) {
//        ui->tblDesignSpace->setRowCount(ui->tblDesignSpace->rowCount() + dimension->designDimensionInstances().count());
//        foreach (QDuseDesignDimensionInstance *instance, dimension->designDimensionInstances()) {
//            ui->tblDesignSpace->setItem(row, 0, new QTableWidgetItem(dimension->name()));
//            ui->tblDesignSpace->setItem(row, 1, new QTableWidgetItem(instance->objectName()));
//            QComboBox *comboBox = new QComboBox;
//            foreach (QDuseVariationPoint *variationPoint, dimension->variationPoints()) {
//                comboBox->addItem(variationPoint->objectName());
//            }
//            ui->tblDesignSpace->setCellWidget(row, 2, comboBox);
//            connect(comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(designSpaceChanged()));
//            ++row;
//        }
//    }
//    ui->tblDesignSpace->resizeRowsToContents();
}

void MainWindow::on_actionFileSaveAs_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save As"), QDir::currentPath(), "XMI files (*.xmi)");
    if (!fileName.isEmpty())
        saveXmi(fileName);
}

void MainWindow::on_actionFileSave_triggered()
{
    if (ICore::self()->projectController()->currentModelFileName().isEmpty())
        on_actionFileSaveAs_triggered();
    else
        saveXmi();
}

void MainWindow::saveXmi(QString fileName)
{
    IProjectController *projectController = ICore::self()->projectController();
    setCursor(Qt::WaitCursor);
    bool ret;
    if (fileName.isEmpty())
        ret = projectController->saveModel();
    else
        ret = projectController->saveModelAs(fileName);
    setCursor(Qt::ArrowCursor);
    if (!ret) {
        QMessageBox::critical(this, tr("Save model%1").arg(fileName.isEmpty() ? "":" as"), projectController->errorStrings().first());
        return;
    }
    else {
        statusBar()->showMessage("XMI file successfully saved !", 3000);
        setWindowTitle(projectController->currentModelFileName() + " - DuSE-MT");
    }
}

void MainWindow::on_actionHelpAboutPlugins_triggered()
{
    _aboutPluginsDialog->exec();
}

void MainWindow::on_actionHelpAboutDuSEMT_triggered()
{
    _aboutDuSEMTDialog->exec();
}

void MainWindow::on_centralWidget_currentChanged(int)
{
//    if (_currentFileName.isEmpty())
//        return;
//    if (ui->centralWidget->currentIndex() == 1) {
//        foreach (QWrappedObject *object, _inputModel)
//            delete object;
//        _inputModel = loadXmi(_currentFileName);
//        evaluateQualityMetrics();
//    }
//    else if (ui->centralWidget->currentIndex() == 2) {
//        foreach (QWrappedObject *object, _designSpaceLocation)
//            delete object;
//        _designSpaceLocation = loadXmi("/data/devel/qtmodeling/examples/uml/r1.xmi");
//        addToDesignSpaceView(_designSpaceLocation.first());
//        evaluateQualityMetrics();
//    }
//    else if (ui->centralWidget->currentIndex() == 3) {
//        foreach (QWrappedObject *object, _designSpaceLocation)
//            delete object;
//    }
}

//void MainWindow::on_btnOptimize_clicked()
//{
//    progress = new QProgressDialog("Optimizing architecture", "Abort", 0, 100, this);
//    progress->setWindowModality(Qt::WindowModal);
//    timer = new QTimer(this);
//    connect(progress, SIGNAL(finished(int)), timer, SLOT(stop()));
//    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
//    timer->start(1000);
//}

void MainWindow::update()
{
    progress->setValue(progress->value()+10);
    if (progress->value() == 99) {
        timer->stop();
        progress->hide();
//        _designSpaceLocation = loadXmi(QString::fromLatin1("/data/devel/qtmodeling/examples/uml/r%1.xmi").arg(qrand() % 11));
//        addToPareto(_designSpaceLocation.first(), 0);
//        _designSpaceLocation = loadXmi(QString::fromLatin1("/data/devel/qtmodeling/examples/uml/r%1.xmi").arg(qrand() % 11));
//        addToPareto(_designSpaceLocation.first(), 1);
//        _designSpaceLocation = loadXmi(QString::fromLatin1("/data/devel/qtmodeling/examples/uml/r%1.xmi").arg(qrand() % 11));
//        addToPareto(_designSpaceLocation.first(), 2);
        evaluateQualityMetrics();
    }
}

void MainWindow::metaModelChanged(QString newMetaModel)
{
    _newModel->lstTopLevelContainers->clear();
    QVariantList list;
    foreach (QMetaModelPlugin *metamodelPlugin, ICore::self()->pluginController()->metamodelPlugins()) {
        if (metamodelPlugin->metaObject()->className() == newMetaModel)
            list = metamodelPlugin->property("metadata").value<QJsonObject>().value("MetaModelTopLevelTypes").toArray().toVariantList();
    }
    foreach (QVariant variant, list)
        _newModel->lstTopLevelContainers->addItem(variant.toString());
    _newModel->lstTopLevelContainers->setCurrentRow(0);
}

//void MainWindow::addToDesignSpaceView(QModelingElement *modelingObject, QQuickItem *parent)
//{
//    QQmlContext *context = new QQmlContext(_designSpaceQuickView->engine()->rootContext());
//    //modelingObject->setQmlContextProperties(context);
//    _qmlComponent = new QQmlComponent(_designSpaceQuickView->engine());
//    int x = qrand() % 400;
//    int y = qrand() % 400;
//    _qmlComponent->setData(QString("import QtQuick 2.0\nimport QtModeling.Uml 1.0\n\n%1 { x: %2; y: %3}").arg(QString(modelingObject->asQModelingObject()->metaObject()->className()).remove(QRegularExpression("^Q"))).arg(x).arg(y).toLatin1(), QUrl());

//    QQuickItem *item = 0;
//    if (_qmlComponent->isError()) {
//        qWarning() << _qmlComponent->errors();
//    } else {
//        item = qobject_cast<QQuickItem *>(_qmlComponent->create(context));
//        if (item) {
//            item->setParentItem(parent ? parent:(qobject_cast<QQuickFlickable *>(_designSpaceQuickView->rootObject()))->contentItem());
//        }
//    }

//    foreach (QObject *child, modelingObject->asQModelingObject()->children())
//        addToDesignSpaceView(dynamic_cast<QModelingElement *>(qModelingElement(child)));

//    _qmlComponent->deleteLater();
//}

void MainWindow::addToPareto(QModelingElement *modelingObject, int pos)
{
    Q_UNUSED(modelingObject);
    Q_UNUSED(pos);
//    QQmlContext *context = _paretoFrontQuickView->engine()->rootContext();
//    //modelingObject->setQmlContextProperties(context);
//    _qmlComponent = new QQmlComponent(_paretoFrontQuickView->engine());
//    int x = qrand() % 400;
//    int y = qrand() % 400;
//    _qmlComponent->setData(QString("import QtQuick 2.0\nimport QtModeling.Uml 1.0\n\n%1 { x: %2; y: %3}").arg(QString(modelingObject->asQModelingObject()->metaObject()->className()).remove(QRegularExpression("^Q"))).arg(x).arg(y).toLatin1(), QUrl());

//    QQuickItem *item = 0;
//    if (_qmlComponent->isError()) {
//        qWarning() << _qmlComponent->errors();
//    } else {
//        item = qobject_cast<QQuickItem *>(_qmlComponent->create(context));
//        if (item) {
//            item->setParentItem(_paretoFrontQuickView->rootObject()->childItems().first()->childItems().first()->childItems().at(pos));
//        }
//    }

//    foreach (QObject *child, modelingObject->asQModelingObject()->children())
//        addToPareto(dynamic_cast<QModelingElement *>(qModelingElement(child)), pos);

//    _qmlComponent->deleteLater();
}

void MainWindow::designSpaceChanged()
{
//    _designSpaceQuickView->setSource(QUrl("qrc:/qml/designspaceview.qml"));
//    _designSpaceQuickView->setClearBeforeRendering(true);

//    foreach (QWrappedObject *object, _designSpaceLocation)
//        delete object;

//    _designSpaceLocation = loadXmi(QString::fromLatin1("/data/devel/qtmodeling/examples/uml/r%1.xmi").arg(qrand() % 11));
//    addToDesignSpaceView(_designSpaceLocation.first());
//    evaluateQualityMetrics();
}

QTreeWidgetItem *MainWindow::itemForCategory(const QString &category)
{
    int topLevelItemCount = _aboutPlugins->loadedPlugins->topLevelItemCount();
    for (int i = 0; i < topLevelItemCount; ++i)
        if (_aboutPlugins->loadedPlugins->topLevelItem(i)->text(0) == category)
            return _aboutPlugins->loadedPlugins->topLevelItem(i);
    QTreeWidgetItem *topLevelItem = new QTreeWidgetItem(_aboutPlugins->loadedPlugins, QStringList() << category);
    topLevelItem->setData(1, Qt::CheckStateRole, QVariant(Qt::Checked));
    return topLevelItem;
}

void MainWindow::populatePluginDialog()
{
    _aboutPlugins->loadedPlugins->setColumnWidth(1, 40);
    _aboutPlugins->loadedPlugins->header()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    _aboutPlugins->loadedPlugins->header()->setSectionResizeMode(2, QHeaderView::ResizeToContents);

    foreach (QMetaModelPlugin *metamodelPlugin, ICore::self()->pluginController()->metamodelPlugins()) {
        QJsonObject jsonObject = metamodelPlugin->property("metadata").value<QJsonObject>();
        QTreeWidgetItem *metamodelItem = new QTreeWidgetItem(itemForCategory("Metamodels"),
                                                             QStringList() << metamodelPlugin->metaObject()->className()
                                                                           << QString()
                                                                           << jsonObject.value("Version").toString()
                                                                           << jsonObject.value("Vendor").toString());
        metamodelItem->setData(1, Qt::CheckStateRole, QVariant(Qt::Checked));
    }
    foreach (DuSE::IPlugin *dusePlugin, ICore::self()->pluginController()->dusemtPlugins()) {
        QJsonObject jsonObject = dusePlugin->property("metadata").value<QJsonObject>();
        QTreeWidgetItem *dusemtItem = new QTreeWidgetItem(itemForCategory(jsonObject.value("Category").toString()),
                                                          QStringList() << dusePlugin->metaObject()->className()
                                                                        << QString()
                                                                        << jsonObject.value("Version").toString()
                                                                        << jsonObject.value("Vendor").toString());
        dusemtItem->setData(1, Qt::CheckStateRole, QVariant(Qt::Checked));
    }

    _aboutPlugins->loadedPlugins->expandAll();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    QSettings settings("QtProject", "duse-mt");
    settings.setValue("geometry", saveGeometry());
    settings.setValue("windowState", saveState());
    QMainWindow::closeEvent(event);
}

}
