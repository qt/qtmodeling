#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtUml/QPackage>

#include <QtCore/QVariant>
#include <QtCore/QMetaProperty>

#include <QtWidgets/QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tblPropertyEditor->setAlternatingRowColors(true);

    QtUml::QPackage *topLevelPackage = new QtUml::QPackage;
    topLevelPackage->setName("Root Package");

    QTreeWidgetItem *topLevelItem = new QTreeWidgetItem(QStringList() << topLevelPackage->name());
    QVariant var1;
    var1.setValue(topLevelPackage);
    topLevelItem->setData(0, Qt::UserRole, var1);

    ui->trvModel->addTopLevelItem(topLevelItem);

    QtUml::QPackage *childPackage = new QtUml::QPackage;
    childPackage->setName("Child Package");
    topLevelPackage->addNestedPackage(childPackage);

    QTreeWidgetItem *childItem = new QTreeWidgetItem(topLevelItem, QStringList() << childPackage->name());
    QVariant var2;
    var2.setValue(childPackage);
    childItem->setData(0, Qt::UserRole, var2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_trvModel_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous)

    QtUml::QPackage *package = current->data(0, Qt::UserRole).value<QtUml::QPackage *>();
    ui->tblPropertyEditor->clear();
    QPalette palette = ui->tblPropertyEditor->palette();
    palette.setColor(QPalette::Active, QPalette::Base, QColor(255, 242, 222));
    palette.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 242, 222));
    palette.setColor(QPalette::Active, QPalette::AlternateBase, QColor(255, 255, 191));
    palette.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(255, 255, 191));
    ui->tblPropertyEditor->setPalette(palette);
    ui->tblPropertyEditor->setColumnCount(2);
    ui->tblPropertyEditor->setHorizontalHeaderLabels(QStringList() << "Property" << "Value");
    ui->tblPropertyEditor->verticalHeader()->hide();
    ui->tblPropertyEditor->horizontalHeader()->setStretchLastSection(true);
    int propertyCount = package->metaObject()->propertyCount();
    ui->tblPropertyEditor->setRowCount(propertyCount);
    for (int i = 0; i < propertyCount; ++i) {
        ui->tblPropertyEditor->setItem(i, 0, new QTableWidgetItem(package->metaObject()->property(i).name()));
        if (package->metaObject()->property(i).type() == QVariant::String)
            ui->tblPropertyEditor->setItem(i, 1, new QTableWidgetItem(package->property(package->metaObject()->property(i).name()).toString()));
    }
    ui->tblPropertyEditor->resizeColumnToContents(0);
    ui->tblPropertyEditor->resizeRowsToContents();
}
