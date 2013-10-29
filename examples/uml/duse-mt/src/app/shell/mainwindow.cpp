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

#include <QtScript/QScriptValue>
#include <QtScript/QScriptEngine>
//#include <QtScript/QScriptValueIterator>

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

//#include <QtDuse/QtDuse>

#include <interfaces/icore.h>
#include <interfaces/iplugin.h>
#include <interfaces/iprojectcontroller.h>

#include "newdusedesign.h"

//template <class T>
//QScriptValue qSetToScriptValue(QScriptEngine *engine, const QSet<T *> &elements)
//{
//    QScriptValue array = engine->newArray();
//    foreach (T *element, elements)
//        array.property(QString::fromLatin1("push")).call(array, QScriptValueList() << engine->newQObject(element));
//    return array;
//}

//template <class T>
//void scriptValueToQSet(const QScriptValue &obj, QSet<T *> &elements)
//{
//    QScriptValueIterator it(obj);
//    while (it.hasNext()) {
//        it.next();
//        elements.insert(qobject_cast<T *>(it.value().toQObject()));
//    }
//}

//template <class T>
//QScriptValue qListToScriptValue(QScriptEngine *engine, const QList<T *> &elements)
//{
//    QScriptValue array = engine->newArray();
//    foreach (T *element, elements)
//        array.property(QString::fromLatin1("push")).call(array, QScriptValueList() << engine->newQObject(element));
//    return array;
//}

//template <class T>
//void scriptValueToQList(const QScriptValue &obj, QList<T *> &elements)
//{
//    QScriptValueIterator it(obj);
//    while (it.hasNext()) {
//        it.next();
//        elements.append(qobject_cast<T *>(it.value().toQObject()));
//    }
//}

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
//    _codeCompletionView(new QListView),
    _welcomeQuickView(new QQuickView),
    _modelQuickView(new QQuickView),
    _designSpaceQuickView(new QQuickView),
    _metricsQuickView(new QQuickView),
    _paretoFrontQuickView(new QQuickView)
{
    ui->setupUi(this);
//    _codeCompletionView->setParent(ui->txeJavaScript);
//    _codeCompletionView->hide();

    _newModel->setupUi(_newModelDialog);
    connect(_newModel->cboMetamodel, SIGNAL(currentIndexChanged(QString)), SLOT(metaModelChanged(QString)));
    _aboutPlugins->setupUi(_aboutPluginsDialog);
    _aboutDuSEMT->setupUi(_aboutDuSEMTDialog);

//    connect(ui->modelingObjectView, &QModelingObjectView::addToView, this, &MainWindow::addToView);
//    connect(ui->modelingObjectView, &QModelingObjectView::modelingObjectChanged, this, &MainWindow::modelingObjectChanged);

//    qScriptRegisterMetaType(&_engine, qSetToScriptValue<QObject>, scriptValueToQSet<QObject>);
//    qScriptRegisterMetaType(&_engine, qListToScriptValue<QObject>, scriptValueToQList<QObject>);

//    tabifyDockWidget(ui->dckIssues, ui->dckXPath);
    tabifyDockWidget(ui->dckXPath, ui->dckOcl);
//    tabifyDockWidget(ui->dckOcl, ui->dckJavaScript);
//    ui->dckIssues->raise();
//    tabifyDockWidget(ui->dckInspector, ui->dckMetrics);
//    ui->dckInspector->raise();
//    tabifyDockWidget(ui->dckPropertyEditor, ui->dckDesignSpace);
//    ui->dckPropertyEditor->raise();
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

    foreach (QDockWidget *dockWidget, findChildren<QDockWidget *>())
        ui->menu_Window->addAction(dockWidget->toggleViewAction());
    ui->menu_Window->addSeparator();
    foreach (QToolBar *toolbar, findChildren<QToolBar *>())
        ui->menu_Window->addAction(toolbar->toggleViewAction());

    // Next line is needed because of bug in xcb: xcb_conn.c:186: write_vec: Assertion `!c->out.queue_len' failed.
    connect(ui->dckMetrics, SIGNAL(visibilityChanged(bool)), SLOT(dckMetricsVisibilityChanged(bool)));

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
    QSettings settings("LiveBlue", "DuSE-MT");
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());
}

void MainWindow::on_actionFileNewModel_triggered()
{
//    _newModel->lneModel->clear();
//    _newModel->cboMetamodel->clear();
//    int i = 0;
//    typedef QPair<QMetaModelPlugin *, QJsonObject> PluginData;
//    foreach (const PluginData &pair, _loadedPlugins.values()) {
//        _newModel->cboMetamodel->addItem(pair.first->metaObject()->className());
//        ++i;
//    }
//    int type;
//    _newModel->lneModel->setFocus();
//    if (_newModelDialog->exec() == QDialog::Accepted) {
//        foreach (const PluginData &pair, _loadedPlugins.values()) {
//            if (pair.first->metaObject()->className() == _newModel->cboMetamodel->currentText())
//                pair.first->initMetaModel(&_engine);
//        }
//        if ((type = QMetaType::type(_newModel->lstTopLevelContainers->currentItem()->text().append("*").toLatin1())) != QMetaType::UnknownType) {
//            const QMetaObject *metaObject = QMetaType::metaObjectForType(type);
//            if (metaObject) {
//                QWrappedObject *topLevelElement = dynamic_cast<QWrappedObject *>(metaObject->newInstance());
//                if (topLevelElement) {
//                    topLevelElement->setObjectName(_newModel->lneModel->text());
//                    _modelingObjectModel->clear();
//                    _modelingObjectModel->addWrappedObject(topLevelElement);
//                    setWindowTitle("DuSE-MT");
//                    ui->txeJavaScript->setText("self");
//                    QTimer::singleShot(0, this, SLOT(on_psbJSEvaluate_clicked()));
//                }
//            }
//        }
//    }
}

void MainWindow::saveXmi(QList<QModelingObject *> modelObjects)
{
    QFile file(_currentFileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::critical(this, tr("Save As"), tr("Cannot write file !"));
        return;
    }

    QXmiWriter writer;
    setCursor(Qt::WaitCursor);
    if (!writer.writeFile(modelObjects, &file))
        QMessageBox::critical(this, tr("Save As"), tr("Error when writing XMI file !"));
    else {
        statusBar()->showMessage("XMI file successfully saved !", 3000);
        setWindowTitle(QFileInfo(file).fileName() + " - DuSE-MT");
    }
    setCursor(Qt::ArrowCursor);
}

QList<QModelingElement *> MainWindow::loadXmi(QString fileName)
{
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::critical(this, tr("Open"), tr("Cannot read file !"));
        return QList<QModelingElement *>();
    }

    QXmiReader reader;
    if (fileName.contains("duse-mt"))
        setWindowTitle(QFileInfo(file).fileName() + " - DuSE-MT");
    QList<QModelingElement *> modelingObjectList = reader.readFile(&file);

//    ui->txeIssues->setModel(new QStringListModel(reader.errorStrings()));
    setModelInspector(modelingObjectList);

    return modelingObjectList;
}

void MainWindow::setModelInspector(QList<QModelingElement *> modelingObjectList)
{
    if (!modelingObjectList.isEmpty()) {
//        _engine.globalObject().setProperty(modelingObjectList.at(0)->asQModelingObject()->objectName(), _engine.newQObject(modelingObjectList.at(0)->asQModelingObject()));

//        QScriptValue array = _engine.newArray();
//        foreach (QModelingElement *modelingObject, modelingObjectList)
//            array.property(QString::fromLatin1("push")).call(array, QScriptValueList() << _engine.newQObject(modelingObject->asQModelingObject()));
//        _engine.globalObject().setProperty("input", array);

//        ui->txeJavaScript->setText("self");
        QTimer::singleShot(0, this, SLOT(on_psbJSEvaluate_clicked()));
    }
//    _modelingObjectModel->clear();
//    foreach (QModelingElement *object, modelingObjectList)
//        _modelingObjectModel->addModelingObject(object->asQModelingObject());
}

void MainWindow::on_actionFileOpenModel_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open"), QDir::currentPath(), "XMI files (*.xmi)");
    if (!fileName.isEmpty()) {
        setCursor(Qt::WaitCursor);
        bool ret = ICore::self()->projectController()->openModel(fileName);
        setCursor(Qt::ArrowCursor);
        if (!ret) {
            QMessageBox::critical(this, tr("Open Model"), ICore::self()->projectController()->errorStrings().first());
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

                _currentFileName = _newDuseDesign->_inputModelFileName;
//                foreach (QWrappedObject *object, _inputModel)
//                    delete object;
                _inputModel = loadXmi(_currentFileName);

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
    if (!fileName.isEmpty()) {
        _currentFileName = fileName;
//        saveXmi(_modelingObjectModel->modelingObjects());
    }
}

void MainWindow::on_actionFileSave_triggered()
{
    if (_currentFileName.isEmpty())
        on_actionFileSaveAs_triggered();
//    else
//        saveXmi(_modelingObjectModel->modelingObjects());
}

void MainWindow::on_actionHelpAboutPlugins_triggered()
{
    _aboutPluginsDialog->exec();
}

void MainWindow::on_actionHelpAboutDuSEMT_triggered()
{
    _aboutDuSEMTDialog->exec();
}

//void MainWindow::on_psbJSEvaluate_clicked()
//{
//    ui->txeJavaScriptEvaluation->setText(_engine.evaluate(ui->txeJavaScript->toPlainText()).toString());
////    ui->modelingObjectView->updateSelected();
//}

void MainWindow::on_centralWidget_currentChanged(int)
{
    if (_currentFileName.isEmpty())
        return;
    if (ui->centralWidget->currentIndex() == 1) {
//        foreach (QWrappedObject *object, _inputModel)
//            delete object;
        _inputModel = loadXmi(_currentFileName);
        evaluateQualityMetrics();
    }
    else if (ui->centralWidget->currentIndex() == 2) {
//        foreach (QWrappedObject *object, _designSpaceLocation)
//            delete object;
        _designSpaceLocation = loadXmi("/data/devel/qtmodeling/examples/uml/r1.xmi");
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
        _designSpaceLocation = loadXmi(QString::fromLatin1("/data/devel/qtmodeling/examples/uml/r%1.xmi").arg(qrand() % 11));
        addToPareto(_designSpaceLocation.first(), 0);
        _designSpaceLocation = loadXmi(QString::fromLatin1("/data/devel/qtmodeling/examples/uml/r%1.xmi").arg(qrand() % 11));
        addToPareto(_designSpaceLocation.first(), 1);
        _designSpaceLocation = loadXmi(QString::fromLatin1("/data/devel/qtmodeling/examples/uml/r%1.xmi").arg(qrand() % 11));
        addToPareto(_designSpaceLocation.first(), 2);
        evaluateQualityMetrics();
    }
}

void MainWindow::metaModelChanged(QString newMetaModel)
{
    _newModel->lstTopLevelContainers->clear();
    QVariantList list;
    typedef QPair<QMetaModelPlugin *, QJsonObject> PluginData;
    foreach (const PluginData &pair, _metamodelPlugins.values()) {
        if (pair.first->metaObject()->className() == newMetaModel)
            list = pair.second.value("MetaModelTopLevelClasses").toArray().toVariantList();
    }
    foreach (QVariant variant, list)
        _newModel->lstTopLevelContainers->addItem(variant.toString());
    _newModel->lstTopLevelContainers->setCurrentRow(0);
}

void MainWindow::modelingObjectChanged(QModelingObject *modelingObject)
{
//    _engine.globalObject().setProperty("self", _engine.newQObject(modelingObject));
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

void MainWindow::dckMetricsVisibilityChanged(bool visible)
{
    if (visible) {
        ui->dckMetrics->setMaximumSize(ui->dckMetrics->size());
        ui->dckMetrics->setMinimumSize(ui->dckMetrics->size());
    }
    else {
        ui->dckMetrics->setMaximumSize(QSize(524287, 524287));
        ui->dckMetrics->setMinimumSize(QSize(180, 42));
    }
}

void MainWindow::designSpaceChanged()
{
    _designSpaceQuickView->setSource(QUrl("qrc:/qml/designspaceview.qml"));
    _designSpaceQuickView->setClearBeforeRendering(true);

//    foreach (QWrappedObject *object, _designSpaceLocation)
//        delete object;

    _designSpaceLocation = loadXmi(QString::fromLatin1("/data/devel/qtmodeling/examples/uml/r%1.xmi").arg(qrand() % 11));
    addToDesignSpaceView(_designSpaceLocation.first());
    evaluateQualityMetrics();
}

//bool MainWindow::eventFilter(QObject *obj, QEvent *event)
//{
//    if (event->type() == QEvent::KeyPress && obj == ui->txeJavaScript) {
//        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
//        if (keyEvent->key() == 46) {
//            QModelingObject *modelingObject = dynamic_cast<QModelingObject *>(_engine.evaluate(ui->txeJavaScript->toPlainText()).toQObject());
//            if (modelingObject) {
//                const QMetaObject *metaObject = modelingObject->metaObject();
//                int propertyCount = metaObject->propertyCount();
//                QStringList propertyList;
//                for (int i = 0; i < propertyCount; ++i)
//                    propertyList << metaObject->property(i).name();
//                _codeCompletionView->setModel(new QStringListModel(propertyList));
//                QFont font;
//                QFontMetrics fm(font);
//                _codeCompletionView->setGeometry(ui->txeJavaScript->cursorRect().x(), ui->txeJavaScript->cursorRect().y()+fm.height(), 200, 100);
//                _codeCompletionView->show();
//                _codeCompletionView->setFocus();
//            }
//        }
//        return QObject::eventFilter(obj, event);
//    } else if (event->type() == QEvent::KeyPress && obj == _codeCompletionView) {
//        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
//         if (keyEvent->key() == 16777220 || keyEvent->key() == 32) { // spacebar or enter
//            ui->txeJavaScript->insertPlainText(_codeCompletionView->model()->data(_codeCompletionView->selectionModel()->selectedIndexes().first()).toString());
//            _codeCompletionView->hide();
//            ui->txeJavaScript->setFocus();
//            return true;
//        }
//        else if (keyEvent->key() == 16777235 || keyEvent->key() == 16777237 || keyEvent->key() == 16777239 || keyEvent->key() == 16777238) { // uparrow and downarrow, pageup, pagedown
//            return QObject::eventFilter(obj, event);
//        }
//        else {
//            _codeCompletionView->hide();
//            ui->txeJavaScript->setFocus();
//            return true;
//        }
//    }
//    // standard event processing
//    return QObject::eventFilter(obj, event);
//}

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

void MainWindow::loadPlugins()
{
    _aboutPlugins->loadedPlugins->clear();
    _aboutPlugins->loadedPlugins->setColumnWidth(1, 40);
    _aboutPlugins->loadedPlugins->header()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    _aboutPlugins->loadedPlugins->header()->setSectionResizeMode(2, QHeaderView::ResizeToContents);
//    _aboutPlugins->loadedPlugins->setRowCount(_metamodelPlugins.size());
//    int i = 0;
//    typedef QPair<QMetaModelPlugin *, QJsonObject> PluginData;
//    foreach (const PluginData &pair, _metamodelPlugins.values()) {
//        _aboutPlugins->loadedPlugins->setItem(i, 0, new QTableWidgetItem(pair.first->metaObject()->className()));
//        _aboutPlugins->loadedPlugins->setItem(i, 1, new QTableWidgetItem(pair.second.value("Version").toString()));
//        _aboutPlugins->loadedPlugins->setItem(i, 2, new QTableWidgetItem(pair.second.value("Vendor").toString()));
//        _aboutPlugins->loadedPlugins->setRowHeight(i, 22);
//        ++i;
//    }

    DuSE::ICore *core = DuSE::ICore::self();
    DuSE::IPlugin *dusePlugin;
    foreach (QString pluginPath, QCoreApplication::libraryPaths()) {
        QDir pluginsDir(pluginPath);
        pluginsDir.cd("metamodels");
        foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
            QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
            QObject *plugin = loader.instance();
            QMetaModelPlugin *metaModelPlugin = 0;
            if (plugin && (metaModelPlugin = qobject_cast<QMetaModelPlugin *>(plugin))) {
                QJsonObject jsonObject = loader.metaData().value(QString::fromLatin1("MetaData")).toObject();
                _metamodelPlugins.insert(jsonObject.value(QString::fromLatin1("MetaModelNamespaceUri")).toString(), QPair<QMetaModelPlugin *, QJsonObject>(metaModelPlugin, jsonObject));
                QTreeWidgetItem *metamodelItem = new QTreeWidgetItem(itemForCategory("Metamodels"),
                                                                     QStringList() << metaModelPlugin->metaObject()->className()
                                                                                   << QString()
                                                                                   << jsonObject.value("Version").toString()
                                                                                   << jsonObject.value("Vendor").toString());
                metamodelItem->setData(1, Qt::CheckStateRole, QVariant(Qt::Checked));
            }
        }
    }
    QDir dusePluginsDir(QCoreApplication::applicationDirPath());
    dusePluginsDir.cd("../lib/duse-mt/plugins");
    const QFileInfoList subdirs = dusePluginsDir.entryInfoList(QDir::Dirs|QDir::NoDotAndDotDot);
    foreach (const QFileInfo &subdir, subdirs) {
        QDir dusePluginSubDir(subdir.absoluteFilePath());
        foreach (QString fileName, dusePluginSubDir.entryList(QDir::Files)) {
            QPluginLoader loader(dusePluginSubDir.absoluteFilePath(fileName));
            QObject *plugin = loader.instance();
            if (plugin && (dusePlugin = qobject_cast<DuSE::IPlugin *>(plugin))) {
                dusePlugin->initialize(core);
                QJsonObject jsonObject = loader.metaData().value(QString::fromLatin1("MetaData")).toObject();
                _dusemtPlugins << QPair<DuSE::IPlugin *, QJsonObject>(dusePlugin, jsonObject);
                QTreeWidgetItem *dusePluginItem = new QTreeWidgetItem(itemForCategory(jsonObject.value("Category").toString()),
                                                                     QStringList() << dusePlugin->metaObject()->className()
                                                                                   << QString()
                                                                                   << jsonObject.value("Version").toString()
                                                                                   << jsonObject.value("Vendor").toString());
                dusePluginItem->setData(1, Qt::CheckStateRole, QVariant(Qt::Checked));
            }
            else
                qDebug() << "Error when loading plugin" << fileName << ":" << loader.errorString();
        }
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
