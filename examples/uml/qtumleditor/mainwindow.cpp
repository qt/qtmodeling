#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_aboutplugins.h"

#include <QtCore/QPluginLoader>
#include <QtCore/QStringListModel>
#include <QtCore/QTimer>

#include <QtScript/QScriptValueIterator>

#include <QtWidgets/QListView>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>

#include <QtWrappedObjects/QXmiWriter>
#include <QtWrappedObjects/QXmiReader>
#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaModelPlugin>
#include <QtWrappedObjectsWidgets/QWrappedObjectModel>
#include <QtWrappedObjectsWidgets/QWrappedObjectPropertyModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _wrappedObjectModel(new QWrappedObjectModel(this)),
    _aboutPluginsDialog(new QDialog(this)),
    _aboutPlugins(new Ui::AboutPlugins)
{
    ui->setupUi(this);
    _aboutPlugins->setupUi(_aboutPluginsDialog);

    ui->wrappedObjectView->setModel(_wrappedObjectModel);

    QWrappedObjectPropertyModel *propertyModel = new QWrappedObjectPropertyModel(this);
    ui->propertyEditor->setModel(propertyModel);

    connect(ui->wrappedObjectView, &QWrappedObjectView::wrappedObjectChanged,
            propertyModel, &QWrappedObjectPropertyModel::setWrappedObject);
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
}

MainWindow::~MainWindow()
{
    delete ui;
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
    else
        statusBar()->showMessage("XMI file successfully saved !", 3000);
}

QWrappedObject *MainWindow::loadXmi()
{
    QFile file(_currentFileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::critical(this, tr("Open"), tr("Cannot read file !"));
        return 0;
    }

    QXmiReader reader(&_engine);
    setWindowTitle(QFileInfo(file).fileName() + " - QtUml Editor");
    QWrappedObject *wrappedObject = reader.readFile(&file);
    ui->txeIssues->setModel(new QStringListModel(reader.errorStrings()));
    _engine.globalObject().setProperty("model", _engine.newQObject(wrappedObject));
    _engine.globalObject().setProperty(wrappedObject->objectName(), _engine.newQObject(wrappedObject));
    ui->txeJavaScript->setText(wrappedObject->objectName());
    QTimer::singleShot(0, this, SLOT(on_psbJSEvaluate_clicked()));

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
        _aboutPlugins->loadedPlugins->setItem(i, 0, new QTableWidgetItem(pair.second.value("className").toString()));
        _aboutPlugins->loadedPlugins->setItem(i, 1, new QTableWidgetItem(pair.second.value("MetaData").toObject().value("Version").toString()));
        _aboutPlugins->loadedPlugins->setItem(i, 2, new QTableWidgetItem(pair.second.value("MetaData").toObject().value("Vendor").toString()));
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

void MainWindow::loadPlugins()
{
    QMetaModelPlugin *metaModelPlugin = 0;
    foreach (QString pluginPath, QCoreApplication::libraryPaths()) {
        QDir pluginsDir(pluginPath);
        pluginsDir.cd("metamodels");
        foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
            QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
            QObject *plugin = loader.instance();
            if (plugin && (metaModelPlugin = qobject_cast<QMetaModelPlugin *>(plugin))) {
                _loadedPlugins.insert(metaModelPlugin->metaModelNamespaceUri(), QPair<QMetaModelPlugin *, QJsonObject>(metaModelPlugin, loader.metaData()));
            }
        }
    }
}
