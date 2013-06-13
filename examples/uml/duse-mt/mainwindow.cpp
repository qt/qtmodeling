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
#include "ui_newmodel.h"

#include <QtCore/QTimer>
#include <QtCore/QJsonArray>
#include <QtCore/QPluginLoader>
#include <QtCore/QStringListModel>

#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>

#include <QtGui/QKeyEvent>

#include <QtWrappedObjects/QXmiWriter>
#include <QtWrappedObjects/QXmiReader>
#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaModelPlugin>
#include <QtWrappedObjects/QMetaWrappedObject>
#include <QtWrappedObjectsWidgets/QWrappedObjectModel>
#include <QtWrappedObjectsWidgets/QWrappedObjectPropertyModel>

#include <QtQml/QQmlEngine>
#include <QtQml/QQmlContext>
#include <QtQml/QQmlComponent>

#include <QtQuick/QQuickView>
#include <QtQuick/QQuickItem>
#include "QtQuick/private/qquickflickable_p.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _wrappedObjectModel(new QWrappedObjectModel(this)),
    _aboutPluginsDialog(new QDialog(this)),
    _aboutPlugins(new Ui::AboutPlugins),
    _newModelDialog(new QDialog(this)),
    _newModel(new Ui::NewModel),
    _codeCompletionView(new QListView),
    _quickView(new QQuickView)
{
    ui->setupUi(this);
    _codeCompletionView->setParent(ui->txeJavaScript);
    _codeCompletionView->hide();

    ui->wrappedObjectView->setModel(_wrappedObjectModel);

    _newModel->setupUi(_newModelDialog);
    connect(_newModel->cboMetamodel, SIGNAL(currentIndexChanged(QString)), SLOT(metaModelChanged(QString)));
    _aboutPlugins->setupUi(_aboutPluginsDialog);

    QWrappedObjectPropertyModel *propertyModel = new QWrappedObjectPropertyModel(this);
    ui->propertyEditor->setModel(propertyModel);

    connect(ui->wrappedObjectView, &QWrappedObjectView::wrappedObjectChanged,
            propertyModel, &QWrappedObjectPropertyModel::setWrappedObject);
    connect(ui->wrappedObjectView, &QWrappedObjectView::addToView, this, &MainWindow::addToView);
    connect(ui->wrappedObjectView, SIGNAL(wrappedObjectChanged(QWrappedObject*)), SLOT(wrappedObjectChanged(QWrappedObject*)));
    connect(propertyModel, &QWrappedObjectPropertyModel::indexChanged,
            _wrappedObjectModel, &QWrappedObjectModel::updateIndex);

    loadPlugins();

    QPalette modelPallete = ui->txeIssues->palette();
    modelPallete.setColor(QPalette::Active, QPalette::Base, QColor(255, 255, 255));
    modelPallete.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 255, 255));
    modelPallete.setColor(QPalette::Active, QPalette::AlternateBase, QColor(248, 247, 246));
    modelPallete.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(248, 247, 246));
    ui->txeIssues->setPalette(modelPallete);

    tabifyDockWidget(ui->dckIssues, ui->dckXPath);
    tabifyDockWidget(ui->dckXPath, ui->dckOcl);
    tabifyDockWidget(ui->dckOcl, ui->dckJavaScript);
    ui->dckIssues->raise();

    ui->txeJavaScript->installEventFilter(this);
    _codeCompletionView->installEventFilter(this);

    _quickView->setSource(QUrl("source.qml"));
    QWidget *centralWidget = QWidget::createWindowContainer(_quickView, this);
    centralWidget->setAcceptDrops(true);
    setCentralWidget(centralWidget);

    _quickView->setResizeMode(QQuickView::SizeRootObjectToView);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionFileNew_triggered()
{
    _newModel->lneModel->clear();
    _newModel->cboMetamodel->clear();
    int i = 0;
    typedef QPair<QMetaModelPlugin *, QJsonObject> PluginData;
    foreach (const PluginData &pair, _loadedPlugins.values()) {
        _newModel->cboMetamodel->addItem(pair.first->metaObject()->className());
        ++i;
    }
    int type;
    _newModel->lneModel->setFocus();
    if (_newModelDialog->exec() == QDialog::Accepted) {
        foreach (const PluginData &pair, _loadedPlugins.values()) {
            if (pair.first->metaObject()->className() == _newModel->cboMetamodel->currentText())
                pair.first->initMetaModel(&_engine);
        }
        if ((type = QMetaType::type(_newModel->lstTopLevelContainers->currentItem()->text().append("*").toLatin1())) != QMetaType::UnknownType) {
            const QMetaObject *metaObject = QMetaType::metaObjectForType(type);
            if (metaObject) {
                QWrappedObject *topLevelElement = dynamic_cast<QWrappedObject *>(metaObject->newInstance());
                if (topLevelElement) {
                    topLevelElement->setObjectName(_newModel->lneModel->text());
                    _wrappedObjectModel->setWrappedObject(topLevelElement);
                    setWindowTitle("DuSE-MT");
                    ui->txeJavaScript->setText("self");
                    QTimer::singleShot(0, this, SLOT(on_psbJSEvaluate_clicked()));
                }
            }
        }
    }
}

void MainWindow::saveXmi(QWrappedObject *rootElement)
{
    QFile file(_currentFileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::critical(this, tr("Save As"), tr("Cannot write file !"));
        return;
    }

    QXmiWriter writer(rootElement);
    if (!writer.writeFile(&file))
        QMessageBox::critical(this, tr("Save As"), tr("Error when writing XMI file !"));
    else {
        statusBar()->showMessage("XMI file successfully saved !", 3000);
        setWindowTitle(QFileInfo(file).fileName() + " - DuSE-MT");
    }
}

QWrappedObject *MainWindow::loadXmi()
{
    QFile file(_currentFileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::critical(this, tr("Open"), tr("Cannot read file !"));
        return 0;
    }

    QXmiReader reader(&_engine, true);
    setWindowTitle(QFileInfo(file).fileName() + " - DuSE-MT");
    QWrappedObject *wrappedObject = reader.readFile(&file);
    ui->txeIssues->setModel(new QStringListModel(reader.errorStrings()));
    if (wrappedObject) {
        _engine.globalObject().setProperty(wrappedObject->objectName(), _engine.newQObject(wrappedObject));
        ui->txeJavaScript->setText("self");
        QTimer::singleShot(0, this, SLOT(on_psbJSEvaluate_clicked()));
    }

    return wrappedObject;
}

void MainWindow::on_actionFileOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open"), QDir::currentPath(), "XMI files (*.xmi)");
    if (!fileName.isEmpty()) {
        _currentFileName = fileName;
        delete _wrappedObjectModel->wrappedObject();
        _wrappedObjectModel->setWrappedObject(loadXmi());
    }
}

void MainWindow::on_actionFileSaveAs_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save As"), QDir::currentPath(), "XMI files (*.xmi)");
    if (!fileName.isEmpty()) {
        _currentFileName = fileName;
        saveXmi(_wrappedObjectModel->wrappedObject());
    }
}

void MainWindow::on_actionFileSave_triggered()
{
    if (_currentFileName.isEmpty())
        on_actionFileSaveAs_triggered();
    else
        saveXmi(_wrappedObjectModel->wrappedObject());
}

void MainWindow::on_actionAboutPlugins_triggered()
{
    _aboutPlugins->loadedPlugins->clearContents();
    _aboutPlugins->loadedPlugins->setRowCount(_loadedPlugins.size());
    int i = 0;
    typedef QPair<QMetaModelPlugin *, QJsonObject> PluginData;
    foreach (const PluginData &pair, _loadedPlugins.values()) {
        _aboutPlugins->loadedPlugins->setItem(i, 0, new QTableWidgetItem(pair.first->metaObject()->className()));
        _aboutPlugins->loadedPlugins->setItem(i, 1, new QTableWidgetItem(pair.second.value("Version").toString()));
        _aboutPlugins->loadedPlugins->setItem(i, 2, new QTableWidgetItem(pair.second.value("Vendor").toString()));
        _aboutPlugins->loadedPlugins->setRowHeight(i, 22);
        ++i;
    }
    _aboutPlugins->loadedPlugins->resizeColumnsToContents();
    _aboutPluginsDialog->exec();
}

void MainWindow::on_psbJSEvaluate_clicked()
{
    ui->txeJavaScriptEvaluation->setText(_engine.evaluate(ui->txeJavaScript->toPlainText()).toString());
    ui->wrappedObjectView->updateSelected();
}

void MainWindow::metaModelChanged(QString newMetaModel)
{
    _newModel->lstTopLevelContainers->clear();
    QVariantList list;
    typedef QPair<QMetaModelPlugin *, QJsonObject> PluginData;
    foreach (const PluginData &pair, _loadedPlugins.values()) {
        if (pair.first->metaObject()->className() == newMetaModel)
            list = pair.second.value("MetaModelTopLevelClasses").toArray().toVariantList();
    }
    foreach (QVariant variant, list)
        _newModel->lstTopLevelContainers->addItem(variant.toString());
    _newModel->lstTopLevelContainers->setCurrentRow(0);
}

void MainWindow::wrappedObjectChanged(QWrappedObject *wrappedObject)
{
    _engine.globalObject().setProperty("self", _engine.newQObject(wrappedObject));
}

void MainWindow::addToView(QWrappedObject *wrappedObject)
{
    QQmlComponent component(_quickView->engine());
    component.setData(QString("import QtQuick 2.0\nimport QtModeling.Uml 1.0\n\n%1 { name: \"%2\"}").arg(QString(wrappedObject->metaObject()->className()).remove(QRegularExpression("^Q"))).arg(wrappedObject->objectName()).toLatin1(), QUrl());
    QQuickItem *item = qobject_cast<QQuickItem *>(component.create());
    if (item) {
        item->setParentItem((qobject_cast<QQuickFlickable *>(_quickView->rootObject()))->contentItem());
    }
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress && obj == ui->txeJavaScript) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if (keyEvent->key() == 46) {
            QWrappedObject *wrappedObject = qwrappedobject_cast<QWrappedObject *>(dynamic_cast<QWrappedObject *>(_engine.evaluate(ui->txeJavaScript->toPlainText()).toQObject()));
            if (wrappedObject) {
                const QMetaWrappedObject *metaWrappedObject = wrappedObject->metaWrappedObject();
                int propertyCount = metaWrappedObject->propertyCount();
                QStringList propertyList;
                for (int i = 0; i < propertyCount; ++i)
                    propertyList << metaWrappedObject->property(i).metaProperty.name();
                _codeCompletionView->setModel(new QStringListModel(propertyList));
                QFont font;
                QFontMetrics fm(font);
                _codeCompletionView->setGeometry(ui->txeJavaScript->cursorRect().x(), ui->txeJavaScript->cursorRect().y()+fm.height(), 200, 100);
                _codeCompletionView->show();
                _codeCompletionView->setFocus();
            }
        }
        return QObject::eventFilter(obj, event);
    } else if (event->type() == QEvent::KeyPress && obj == _codeCompletionView) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
         if (keyEvent->key() == 16777220 || keyEvent->key() == 32) { // spacebar or enter
            ui->txeJavaScript->insertPlainText(_codeCompletionView->model()->data(_codeCompletionView->selectionModel()->selectedIndexes().first()).toString());
            _codeCompletionView->hide();
            ui->txeJavaScript->setFocus();
            return true;
        }
        else if (keyEvent->key() == 16777235 || keyEvent->key() == 16777237 || keyEvent->key() == 16777239 || keyEvent->key() == 16777238) { // uparrow and downarrow, pageup, pagedown
            return QObject::eventFilter(obj, event);
        }
        else {
            _codeCompletionView->hide();
            ui->txeJavaScript->setFocus();
            return true;
        }
    }
    // standard event processing
    return QObject::eventFilter(obj, event);
}

void MainWindow::loadPlugins()
{
    QMetaModelPlugin *metaModelPlugin = 0;
    foreach (QString pluginPath, QCoreApplication::libraryPaths()) {
        QDir pluginsDir(pluginPath);
        pluginsDir.cd("metamodels");
        foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
            QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
            QObject *plugin = loader.instance();
            if (plugin && (metaModelPlugin = qobject_cast<QMetaModelPlugin *>(plugin)))
                _loadedPlugins.insert(loader.metaData().value(QString::fromLatin1("MetaData")).toObject().value(QString::fromLatin1("MetaModelNamespaceUri")).toString(), QPair<QMetaModelPlugin *, QJsonObject>(metaModelPlugin, loader.metaData().value(QString::fromLatin1("MetaData")).toObject()));
        }
    }
}
