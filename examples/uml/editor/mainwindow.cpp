#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtUml/QPackage>

#include <QtCore/QDebug>
#include <QtCore/QVariant>
#include <QtCore/QRegularExpression>
#include <QtCore/QMetaProperty>

#include <QtWidgets/QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPalette palette = ui->tblPropertyEditor->palette();
    palette.setColor(QPalette::Active, QPalette::Base, QColor(255, 242, 222));
    palette.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 242, 222));
    palette.setColor(QPalette::Active, QPalette::AlternateBase, QColor(255, 255, 191));
    palette.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(255, 255, 191));
    ui->tblPropertyEditor->setPalette(palette);
    ui->tblPropertyEditor->setAlternatingRowColors(true);
    ui->tblPropertyEditor->setColumnCount(2);
    ui->tblPropertyEditor->verticalHeader()->hide();
    ui->tblPropertyEditor->horizontalHeader()->setStretchLastSection(true);
    ui->tblPropertyEditor->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tblPropertyEditor->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tblPropertyEditor->setHorizontalHeaderLabels(QStringList() << "Property" << "Value");

    QtUml::QPackage *topLevelPackage = new QtUml::QPackage;
    topLevelPackage->setName("Root Package");
    topLevelPackage->setObjectName("Root Package");

    QTreeWidgetItem *topLevelItem = new QTreeWidgetItem(QStringList() << topLevelPackage->name());
    topLevelItem->setData(0, Qt::UserRole, qVariantFromValue(topLevelPackage));

    ui->trvModel->addTopLevelItem(topLevelItem);

    QtUml::QPackage *childPackage = new QtUml::QPackage;
    childPackage->setName("Child Package");
    topLevelPackage->addNestedPackage(childPackage);

    QTreeWidgetItem *childItem = new QTreeWidgetItem(topLevelItem, QStringList() << childPackage->name());
    childItem->setData(0, Qt::UserRole, qVariantFromValue(childPackage));

    QtUml::QPackage *gchildPackage = new QtUml::QPackage;
    gchildPackage->setName("GChild Package");
    childPackage->addNestedPackage(gchildPackage);

    QTreeWidgetItem *gchildItem = new QTreeWidgetItem(childItem, QStringList() << gchildPackage->name());
    gchildItem->setData(0, Qt::UserRole, qVariantFromValue(gchildPackage));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_trvModel_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous)

    disconnect(ui->tblPropertyEditor, SIGNAL(itemChanged(QTableWidgetItem*)), this, SLOT(itemChanged(QTableWidgetItem*)));
    QObject *element = *((QObject **) current->data(0, Qt::UserRole).data());
    ui->tblPropertyEditor->clearContents();
    int propertyCount = element->metaObject()->propertyCount();
    ui->tblPropertyEditor->setRowCount(propertyCount);

    qRegisterMetaType<QtUml::QElement *>("QElement *");

    for (int i = 0; i < propertyCount; ++i) {
        QMetaProperty property = element->metaObject()->property(i);
        QTableWidgetItem *item = new QTableWidgetItem(QString(property.name()) + ((property.isWritable() == false) ? " (RO)":""));
        item->setFlags(Qt::ItemIsEnabled | Qt::ItemIsSelectable);
        ui->tblPropertyEditor->setItem(i, 0, item);
        item = new QTableWidgetItem;
        if (property.isWritable() == false)
            item->setFlags(Qt::ItemIsEnabled | Qt::ItemIsSelectable);
        if (property.type() == QVariant::String)
            item->setText(property.read(element).toString());
        QString typeName = property.typeName();

        if (property.read(element).canConvert<QtUml::QElement *>())
            if (property.read(element).value<QtUml::QElement *>())
                if (dynamic_cast<QtUml::QNamedElement *>(property.read(element).value<QtUml::QElement *>()))
                    QMessageBox::information(this, "Teste", (dynamic_cast<QtUml::QNamedElement *>(property.read(element).value<QtUml::QElement *>()))->name());

        if (typeName.endsWith('*') and !typeName.contains(QRegularExpression ("QSet|QList"))) {
            if (QtUml::QNamedElement *namedElement = dynamic_cast<QtUml::QNamedElement *>(property.read(element).value<QtUml::QElement *>())) {
                item->setText(namedElement->name());
            }
        }
        ui->tblPropertyEditor->setItem(i, 1, item);
    }
    ui->tblPropertyEditor->resizeColumnToContents(0);
    ui->tblPropertyEditor->resizeRowsToContents();
    connect(ui->tblPropertyEditor, SIGNAL(itemChanged(QTableWidgetItem*)), this, SLOT(itemChanged(QTableWidgetItem*)));
}

void MainWindow::itemChanged(QTableWidgetItem *item)
{
    if (item->column() == 1) {
        QObject *element = ui->trvModel->currentItem()->data(0, Qt::UserRole).value<QtUml::QPackage *>();
        if (element->metaObject()->property(item->row()).type() == QVariant::String)
            element->setProperty(ui->tblPropertyEditor->item(item->row(), 0)->text().toLatin1(), item->text());
        on_trvModel_currentItemChanged(ui->trvModel->currentItem(), 0);
    }
}
