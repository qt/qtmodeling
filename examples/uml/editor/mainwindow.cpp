#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtUml/QPackage>

#include <QtCore/QDebug>
#include <QtCore/QVariant>
#include <QtCore/QRegularExpression>
#include <QtCore/QMetaProperty>

#include <QtWidgets/QMessageBox>

using namespace QtUml;

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

    QUmlPointer<QPackage> topLevelPackage = new QPackage;
    topLevelPackage->setName("Root Package");
    topLevelPackage->setObjectName("Root Package");

    QTreeWidgetItem *topLevelItem = new QTreeWidgetItem(QStringList() << topLevelPackage->name());
    topLevelItem->setData(0, Qt::UserRole, qVariantFromValue(topLevelPackage.data()));

    ui->trvModel->addTopLevelItem(topLevelItem);

    QUmlPointer<QPackage> childPackage = new QPackage;
    childPackage->setName("Child Package");
    topLevelPackage->addNestedPackage(childPackage);

    QTreeWidgetItem *childItem = new QTreeWidgetItem(topLevelItem, QStringList() << childPackage->name());
    childItem->setData(0, Qt::UserRole, qVariantFromValue(childPackage.data()));

    QUmlPointer<QPackage> gchildPackage = new QPackage;
    gchildPackage->setName("GChild Package");
    childPackage->addNestedPackage(gchildPackage);

    QTreeWidgetItem *gchildItem = new QTreeWidgetItem(childItem, QStringList() << gchildPackage->name());
    gchildItem->setData(0, Qt::UserRole, qVariantFromValue(gchildPackage.data()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_trvModel_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous)

    disconnect(ui->tblPropertyEditor, SIGNAL(itemChanged(QTableWidgetItem*)), this, SLOT(itemChanged(QTableWidgetItem*)));
    QObject *element = current->data(0, Qt::UserRole).value<QObject *>();
    ui->tblPropertyEditor->clearContents();
    int propertyCount = element->metaObject()->propertyCount();
    ui->tblPropertyEditor->setRowCount(propertyCount);

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
        if (typeName.endsWith('*') and !typeName.contains(QRegularExpression ("QSet|QList"))) {
            if (QNamedElement *namedElement = qtuml_object_cast<QNamedElement *>(property.read(element).value<QObject *>())) {
                item->setText(namedElement->name());
            }
        }
        if (typeName.endsWith('*') and typeName.contains("QSet") && property.read(element).isValid()) {
            if (QSet<QObject *> *elements = reinterpret_cast<QSet<QObject *> *>(*((QSet<QObject *> **) property.read(element).data()))) {
                if (elements->size() > 0) {
                    QString str = "[";
                    foreach (QObject *object, *elements)
                        if (QNamedElement *namedElement = qtuml_object_cast<QNamedElement *>(object))
                        str.append(namedElement->name().append(", "));
                    str.chop(2);
                    str.append("]");
                    item->setText(str);
                }
            }
        }
        if (typeName.endsWith('*') and typeName.contains("QList") && property.read(element).isValid()) {
            if (QList<QObject *> *elements = reinterpret_cast<QList<QObject *> *>(*((QList<QObject *> **) property.read(element).data()))) {
                if (elements->size() > 0) {
                    QString str = "[";
                    foreach (QObject *object, *elements)
                        if (QNamedElement *namedElement = qtuml_object_cast<QNamedElement *>(object))
                        str.append(namedElement->name().append(", "));
                    str.chop(2);
                    str.append("]");
                    item->setText(str);
                }
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
        QObject *element = ui->trvModel->currentItem()->data(0, Qt::UserRole).value<QPackage *>();
        if (element->metaObject()->property(item->row()).type() == QVariant::String)
            element->setProperty(ui->tblPropertyEditor->item(item->row(), 0)->text().toLatin1(), item->text());
        on_trvModel_currentItemChanged(ui->trvModel->currentItem(), 0);
    }
}
