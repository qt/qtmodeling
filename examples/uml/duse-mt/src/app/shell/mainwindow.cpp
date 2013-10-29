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

#include <QtQml/QQmlEngine>
#include <QtQml/QQmlContext>
#include <QtQml/QQmlComponent>

#include <QtQuick/QQuickView>
#include <QtQuick/QQuickItem>
#include "QtQuick/private/qquickflickable_p.h"

#include <interfaces/icore.h>
#include <interfaces/iplugin.h>
#include <interfaces/iplugincontroller.h>
#include <interfaces/iprojectcontroller.h>

#include "newdusedesign.h"

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
    _newModel(new Ui::NewModel),
    _newDuseDesign(new NewDuseDesign(this)),
    _welcomeQuickView(new QQuickView),
    _modelQuickView(new QQuickView),
    _designSpaceQuickView(new QQuickView),
    _metricsQuickView(new QQuickView),
    _paretoFrontQuickView(new QQuickView)
{
    ui->setupUi(this);

    _newModel->setupUi(_newModelDialog);
    connect(_newModel->cboMetamodel, SIGNAL(currentIndexChanged(QString)), SLOT(metaModelChanged(QString)));
    _aboutPlugins->setupUi(_aboutPluginsDialog);
    _aboutDuSEMT->setupUi(_aboutDuSEMTDialog);

//    connect(ui->modelingObjectView, &QModelingObjectView::addToView, this, &MainWindow::addToView);

    ui->tblDesignSpace->resizeColumnToContents(0);
    ui->tblDesignSpace->resizeColumnToContents(1);
    ui->tblDesignSpace->resizeColumnToContents(2);

    _modelQuickView->setSource(QUrl("qrc:/qml/modelview.qml"));
    ui->gridLayout_11->addWidget(QWidget::createWindowContainer(_modelQuickView, ui->modelViewWidget), 0, 0, 1, 1);

    _metricsQuickView->setSource(QUrl("qml/dialcontrol/dialcontrol.qml"));
    ui->gridLayout_10->addWidget(QWidget::createWindowContainer(_metricsQuickView, ui->metricsLayout), 0, 0, 1, 1);

    _paretoFrontQuickView->setSource(QUrl("qrc:/qml/paretofrontview.qml"));
    ui->gridLayout_12->addWidget(QWidget::createWindowContainer(_paretoFrontQuickView, ui->paretoFrontViewWidget), 0, 0, 1, 1);

    _welcomeQuickView->setSource(QUrl("qrc:/qml/welcomeview.qml"));
    ui->gridLayout_13->addWidget(QWidget::createWindowContainer(_welcomeQuickView, ui->welcomeViewWidget), 0, 0, 1, 1);

    _designSpaceQuickView->setSource(QUrl("qrc:/qml/designspaceview.qml"));
    ui->gridLayout_15->addWidget(QWidget::createWindowContainer(_designSpaceQuickView, ui->designSpaceLocationViewWidget), 0, 0, 1, 1);

    _modelQuickView->setResizeMode(QQuickView::SizeRootObjectToView);
    _designSpaceQuickView->setResizeMode(QQuickView::SizeRootObjectToView);
    _metricsQuickView->setResizeMode(QQuickView::SizeRootObjectToView);
    _paretoFrontQuickView->setResizeMode(QQuickView::SizeRootObjectToView);
    _welcomeQuickView->setResizeMode(QQuickView::SizeRootObjectToView);

    readSettings();
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
    typedef QPair<QMetaModelPlugin *, QJsonObject> MetaModelPluginPair;
    foreach (const MetaModelPluginPair &pair, ICore::self()->pluginController()->metamodelPlugins().values())
        _newModel->cboMetamodel->addItem(pair.first->metaObject()->className());
    _newModel->lneModel->setFocus();
    if (_newModelDialog->exec() == QDialog::Accepted) {
        QMetaModelPlugin *metamodelPlugin;
        foreach (const MetaModelPluginPair &pair, ICore::self()->pluginController()->metamodelPlugins().values()) {
            if (pair.first->metaObject()->className() == _newModel->cboMetamodel->currentText())
                metamodelPlugin = pair.first;
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

void MainWindow::on_actionFileNewDuseDesign_triggered()
{
    do {
        if (_newDuseDesign->exec() == QDialog::Accepted) {
            if (_newDuseDesign->_inputModelFileName.isEmpty() || _newDuseDesign->_duseInstanceModelFileName.isEmpty()) {
                QMessageBox::critical(this, tr("Create new DuSE design"), tr("You should select an input model and a DuSE instance model !"));
            }
            else {
                setCursor(Qt::WaitCursor);

                QFile file(_newDuseDesign->_duseInstanceModelFileName);
                if (!file.open(QFile::ReadOnly | QFile::Text)) {
                    QMessageBox::critical(this, tr("Create new DuSE design"), tr("Cannot read DuSE instance file !"));
                    setCursor(Qt::ArrowCursor);
                    return;
                }
                QXmiReader reader;
                QList<QModelingElement *> modelingObjectList = reader.readFile(&file);
                if (QString::fromLatin1(modelingObjectList.first()->asQModelingObject()->metaObject()->className()) != QString::fromLatin1("QDuseDesignSpace")) {
                    QMessageBox::critical(this, tr("Create new DuSE design"), QString::fromLatin1("%1 is not a valid DuSE instance !").arg(QFileInfo(file).fileName()));
                    setCursor(Qt::ArrowCursor);
                    return;
                }

//                _currentFileName = _newDuseDesign->_inputModelFileName;
//                foreach (QWrappedObject *object, _inputModel)
//                    delete object;
//                _inputModel = loadXmi(_currentFileName);

                _modelQuickView->setClearBeforeRendering(true);
                _modelQuickView->setSource(QUrl("qrc:/qml/modelview.qml"));
                addToView(_inputModel[0]);

//                QScriptValue value = _engine.evaluate("function checkProfile() \
//                                                       { \
//                                                           var length = input[0].profileApplications.length; \
//                                                           for (var i = 0; i < length; ++i) \
//                                                               if (input[0].profileApplications[0].appliedProfile.name == '" + modelingObjectList.first()->asQModelingObject()->objectName() + "Profile') \
//                                                                   return true; \
//                                                           return false; \
//                                                       } \
//                                                       checkProfile();");
//                if (!value.toBool()) {
//                    QMessageBox::critical(this, tr("Create new DuSE design"), QString::fromLatin1("Input model does not contain the required %1Profile profile application !").arg(modelingObjectList.first()->asQModelingObject()->objectName()));
//                    setCursor(Qt::ArrowCursor);
//                    return;
//                }

                //modelingObjectList.first()->setQmlContextProperties(_metricsQuickView->engine()->rootContext());

//                _engine.globalObject().setProperty("designspace", _engine.newQObject(modelingObjectList.at(0)->asQModelingObject()));
//                _engine.evaluate("var dimensionsLength = designspace.designDimensions.length; \
//                                 for (var dimensionCounter = 0; dimensionCounter < dimensionsLength; ++dimensionCounter) { \
//                                     if (designspace.designDimensions[dimensionCounter].instanceSelectionRule) { \
//                                         var selected = eval(designspace.designDimensions[dimensionCounter].instanceSelectionRule); \
//                                         var selectedLength = selected.length; \
//                                         for (var selectedCounter = 0; selectedCounter < selectedLength; ++selectedCounter) { \
//                                             var dimensionInstance = new QDuseDesignDimensionInstance(); \
//                                             dimensionInstance.objectName = selected[selectedCounter].name; \
//                                             designspace.designDimensions[dimensionCounter].addDesignDimensionInstance(dimensionInstance); \
//                                         } \
//                                     } \
//                                 }");


                evaluateQualityMetrics();
                populateDesignSpaceView(modelingObjectList.at(0));

                setCursor(Qt::ArrowCursor);
            }
        }
        else
            return;
    } while (_newDuseDesign->_inputModelFileName.isEmpty() || _newDuseDesign->_duseInstanceModelFileName.isEmpty());
}

void MainWindow::evaluateQualityMetrics()
{
//    _engine.evaluate("var m = designspace.qualityMetrics.length; \
//                      for (var j = 0; j < m; ++j) \
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

void MainWindow::on_actionFileOpenDuseDesign_triggered()
{
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
    if (ui->centralWidget->currentIndex() == 1) {
//        foreach (QWrappedObject *object, _inputModel)
//            delete object;
//        _inputModel = loadXmi(_currentFileName);
        evaluateQualityMetrics();
    }
    else if (ui->centralWidget->currentIndex() == 2) {
//        foreach (QWrappedObject *object, _designSpaceLocation)
//            delete object;
//        _designSpaceLocation = loadXmi("/data/devel/qtmodeling/examples/uml/r1.xmi");
        addToDesignSpaceView(_designSpaceLocation.first());
        evaluateQualityMetrics();
    }
    else if (ui->centralWidget->currentIndex() == 3) {
//        foreach (QWrappedObject *object, _designSpaceLocation)
//            delete object;
    }
}
void MainWindow::on_btnOptimize_clicked()
{
    progress = new QProgressDialog("Optimizing architecture", "Abort", 0, 100, this);
    progress->setWindowModality(Qt::WindowModal);
    timer = new QTimer(this);
    connect(progress, SIGNAL(finished(int)), timer, SLOT(stop()));
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000);
}

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
    typedef QPair<QMetaModelPlugin *, QJsonObject> MetaModelPluginPair;
    foreach (const MetaModelPluginPair &pair, ICore::self()->pluginController()->metamodelPlugins()) {
        if (pair.first->metaObject()->className() == newMetaModel)
            list = pair.second.value("MetaModelTopLevelTypes").toArray().toVariantList();
    }
    foreach (QVariant variant, list)
        _newModel->lstTopLevelContainers->addItem(variant.toString());
    _newModel->lstTopLevelContainers->setCurrentRow(0);
}

void MainWindow::addToView(QModelingElement *modelingObject, QQuickItem *parent)
{
    QQmlContext *context = new QQmlContext(_modelQuickView->engine()->rootContext());
    //modelingObject->setQmlContextProperties(context);
    _qmlComponent = new QQmlComponent(_modelQuickView->engine());
    int x = qrand() % 400;
    int y = qrand() % 400;
    _qmlComponent->setData(QString("import QtQuick 2.0\nimport QtModeling.Uml 1.0\n\n%1 { x: %2; y: %3}").arg(QString(modelingObject->asQModelingObject()->metaObject()->className()).remove(QRegularExpression("^Q"))).arg(x).arg(y).toLatin1(), QUrl());

    QQuickItem *item = 0;
    if (_qmlComponent->isError()) {
        qWarning() << _qmlComponent->errors();
    } else {
        item = qobject_cast<QQuickItem *>(_qmlComponent->create(context));
        if (item) {
            item->setParentItem(parent ? parent:(qobject_cast<QQuickFlickable *>(_modelQuickView->rootObject()))->contentItem());
        }
    }

    foreach (QObject *child, modelingObject->asQModelingObject()->children())
        addToView(dynamic_cast<QModelingElement *>(qModelingElement(child)));

    _qmlComponent->deleteLater();
}

void MainWindow::addToDesignSpaceView(QModelingElement *modelingObject, QQuickItem *parent)
{
    QQmlContext *context = new QQmlContext(_designSpaceQuickView->engine()->rootContext());
    //modelingObject->setQmlContextProperties(context);
    _qmlComponent = new QQmlComponent(_designSpaceQuickView->engine());
    int x = qrand() % 400;
    int y = qrand() % 400;
    _qmlComponent->setData(QString("import QtQuick 2.0\nimport QtModeling.Uml 1.0\n\n%1 { x: %2; y: %3}").arg(QString(modelingObject->asQModelingObject()->metaObject()->className()).remove(QRegularExpression("^Q"))).arg(x).arg(y).toLatin1(), QUrl());

    QQuickItem *item = 0;
    if (_qmlComponent->isError()) {
        qWarning() << _qmlComponent->errors();
    } else {
        item = qobject_cast<QQuickItem *>(_qmlComponent->create(context));
        if (item) {
            item->setParentItem(parent ? parent:(qobject_cast<QQuickFlickable *>(_designSpaceQuickView->rootObject()))->contentItem());
        }
    }

    foreach (QObject *child, modelingObject->asQModelingObject()->children())
        addToDesignSpaceView(dynamic_cast<QModelingElement *>(qModelingElement(child)));

    _qmlComponent->deleteLater();
}

void MainWindow::addToPareto(QModelingElement *modelingObject, int pos)
{
    QQmlContext *context = _paretoFrontQuickView->engine()->rootContext();
    //modelingObject->setQmlContextProperties(context);
    _qmlComponent = new QQmlComponent(_paretoFrontQuickView->engine());
    int x = qrand() % 400;
    int y = qrand() % 400;
    _qmlComponent->setData(QString("import QtQuick 2.0\nimport QtModeling.Uml 1.0\n\n%1 { x: %2; y: %3}").arg(QString(modelingObject->asQModelingObject()->metaObject()->className()).remove(QRegularExpression("^Q"))).arg(x).arg(y).toLatin1(), QUrl());

    QQuickItem *item = 0;
    if (_qmlComponent->isError()) {
        qWarning() << _qmlComponent->errors();
    } else {
        item = qobject_cast<QQuickItem *>(_qmlComponent->create(context));
        if (item) {
            item->setParentItem(_paretoFrontQuickView->rootObject()->childItems().first()->childItems().first()->childItems().at(pos));
        }
    }

    foreach (QObject *child, modelingObject->asQModelingObject()->children())
        addToPareto(dynamic_cast<QModelingElement *>(qModelingElement(child)), pos);

    _qmlComponent->deleteLater();
}

void MainWindow::designSpaceChanged()
{
    _designSpaceQuickView->setSource(QUrl("qrc:/qml/designspaceview.qml"));
    _designSpaceQuickView->setClearBeforeRendering(true);

//    foreach (QWrappedObject *object, _designSpaceLocation)
//        delete object;

//    _designSpaceLocation = loadXmi(QString::fromLatin1("/data/devel/qtmodeling/examples/uml/r%1.xmi").arg(qrand() % 11));
    addToDesignSpaceView(_designSpaceLocation.first());
    evaluateQualityMetrics();
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

    typedef QPair<QMetaModelPlugin *, QJsonObject> MetaModelPluginPair;
    foreach (const MetaModelPluginPair &pair, ICore::self()->pluginController()->metamodelPlugins()) {
        QTreeWidgetItem *metamodelItem = new QTreeWidgetItem(itemForCategory("Metamodels"),
                                                             QStringList() << pair.first->metaObject()->className()
                                                                           << QString()
                                                                           << pair.second.value("Version").toString()
                                                                           << pair.second.value("Vendor").toString());
        metamodelItem->setData(1, Qt::CheckStateRole, QVariant(Qt::Checked));
    }
    typedef QPair<DuSE::IPlugin *, QJsonObject> DuSEMTPluginPair;
    foreach (const DuSEMTPluginPair &pair, ICore::self()->pluginController()->dusemtPlugins()) {
        QTreeWidgetItem *dusemtItem = new QTreeWidgetItem(itemForCategory(pair.second.value("Category").toString()),
                                                          QStringList() << pair.first->metaObject()->className()
                                                                        << QString()
                                                                        << pair.second.value("Version").toString()
                                                                        << pair.second.value("Vendor").toString());
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
