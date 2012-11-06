#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtUml/QModel>
#include <QtUml/QPrimitiveType>
#include <QtUml/QEnumeration>
#include <QtUml/QEnumerationLiteral>
#include <QtUml/QClass>

#include <QtCore/QDebug>
#include <QtCore/QVariant>
#include <QtCore/QRegularExpression>
#include <QtCore/QMetaProperty>

#include <QtWidgets/QComboBox>

using namespace QtUml;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPalette palette = ui->propertyEditor->palette();
    palette.setColor(QPalette::Active, QPalette::Base, QColor(255, 242, 222));
    palette.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 242, 222));
    palette.setColor(QPalette::Active, QPalette::AlternateBase, QColor(255, 255, 191));
    palette.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(255, 255, 191));
    ui->propertyEditor->setPalette(palette);
    ui->propertyEditor->setAlternatingRowColors(true);
    ui->propertyEditor->setColumnCount(2);
    ui->propertyEditor->verticalHeader()->hide();
    ui->propertyEditor->horizontalHeader()->setStretchLastSection(true);
    ui->propertyEditor->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->propertyEditor->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->propertyEditor->setHorizontalHeaderLabels(QStringList() << "Property" << "Value");

    QUmlPointer<QModel> model = new QModel;
    model->setName("MyModel");

    QUmlPointer<QPackage> package = new QPackage;
    package->setName("Package1");

    QUmlPointer<QPrimitiveType> primitiveType = new QPrimitiveType;
    primitiveType->setName("String");

    QUmlPointer<QEnumeration> enumeration = new QEnumeration;
    enumeration->setName("DirectionKind");
    QUmlPointer<QEnumerationLiteral> directionIn = new QEnumerationLiteral;
    directionIn->setName("DirectionIn");
    enumeration->addOwnedLiteral(directionIn);

    QUmlPointer<QClass> class_ = new QClass;
    class_->setName("Student");
    class_->setAbstract(true);
    class_->setVisibility(QtUml::QtUml::VisibilityPackage);

    package->addOwnedType(enumeration);
    package->addOwnedType(class_);

    model->addNestedPackage(package);
    model->addOwnedType(primitiveType);

    populateModelExplorer(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_modelExplorer_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous)

    disconnect(ui->propertyEditor, SIGNAL(itemChanged(QTableWidgetItem*)), this, SLOT(itemChanged(QTableWidgetItem*)));
    QObject *element = current->data(0, Qt::UserRole).value<QObject *>();
    ui->propertyEditor->clearContents();
    int propertyCount = element->metaObject()->propertyCount();
    ui->propertyEditor->setRowCount(propertyCount);

    const QMetaObject metaObject = QtUml::QtUml::staticMetaObject;
    int enumeratorCount = metaObject.enumeratorCount();
    QMap<QString, QMetaEnum> enums;
    for (int i = 0; i < enumeratorCount; ++i) {
        QMetaEnum metaEnum = metaObject.enumerator(i);
        enums[QString(metaEnum.name())] = metaEnum;
    }

    for (int i = 0; i < propertyCount; ++i) {
        QMetaProperty property = element->metaObject()->property(i);
        QTableWidgetItem *item = new QTableWidgetItem(QString(property.name()).remove(QRegularExpression("_$")) + ((property.isWritable() == false) ? " (RO)":""));
        item->setFlags(Qt::ItemIsEnabled | Qt::ItemIsSelectable);
        ui->propertyEditor->setItem(i, 0, item);
        if (property.type() == QVariant::Bool) {
            QComboBox *comboBox = new QComboBox;
            comboBox->addItem("false", qVariantFromValue(QString(property.name())));
            comboBox->addItem("true", qVariantFromValue(QString(property.name())));
            comboBox->setCurrentIndex(property.read(element).toBool() ? 1:0);
            connect(comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(currentIndexChanged(int)));
            ui->propertyEditor->setCellWidget(i, 1, comboBox);
            continue;
        }
        if (property.type() == QMetaType::Int) {
            if (enums.contains(QString(property.typeName()).split("::").last())) {
                QMetaEnum metaEnum = enums[QString(property.typeName()).split("::").last()];
                QComboBox *comboBox = new QComboBox;
                int keyCount = metaEnum.keyCount();
                for (int j = 0; j < keyCount; ++j)
                    comboBox->addItem(QString(metaEnum.key(j)).toLower().remove(QString(property.name())), qVariantFromValue(QString(property.name())));

                comboBox->setCurrentIndex(property.read(element).toInt());
                connect(comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(currentIndexChanged(int)));
                ui->propertyEditor->setCellWidget(i, 1, comboBox);
            }
        }
        item = new QTableWidgetItem;
        if (property.isWritable() == false)
            item->setFlags(Qt::ItemIsEnabled | Qt::ItemIsSelectable);
        if (property.type() == QVariant::String)
            item->setText(property.read(element).toString());
        QString typeName = property.typeName();
        if (typeName.endsWith('*') && !typeName.contains(QRegularExpression ("QSet|QList")) && property.read(element).value<QObject *>())
            item->setText((property.read(element).value<QObject *>())->objectName());
        if (typeName.endsWith('*') && typeName.contains("QSet") && property.read(element).isValid()) {
            if (QSet<QObject *> *elements = reinterpret_cast<QSet<QObject *> *>(*((QSet<QObject *> **) property.read(element).data()))) {
                if (elements->size() > 0) {
                    QString str = "[";
                    foreach (QObject *object, *elements)
                        str.append((qtuml_object_cast<QObject *>(object))->objectName().append(", "));
                    str.chop(2);
                    str.append("]");
                    item->setText(str);
                }
            }
        }
        if (typeName.endsWith('*') && typeName.contains("QList") && property.read(element).isValid()) {
            if (QList<QObject *> *elements = reinterpret_cast<QList<QObject *> *>(*((QList<QObject *> **) property.read(element).data()))) {
                if (elements->size() > 0) {
                    QString str = "[";
                    foreach (QObject *object, *elements)
                        str.append((qtuml_object_cast<QObject *>(object))->objectName().append(", "));
                    str.chop(2);
                    str.append("]");
                    item->setText(str);
                }
            }
        }
        ui->propertyEditor->setItem(i, 1, item);
    }
    ui->propertyEditor->resizeColumnToContents(0);
    ui->propertyEditor->resizeRowsToContents();
    connect(ui->propertyEditor, SIGNAL(itemChanged(QTableWidgetItem*)), this, SLOT(itemChanged(QTableWidgetItem*)));
}

void MainWindow::itemChanged(QTableWidgetItem *item)
{
    if (item->column() == 1) {
        QObject *element = ui->modelExplorer->currentItem()->data(0, Qt::UserRole).value<QObject *>();
        if (element->metaObject()->property(item->row()).type() == QVariant::String)
            element->setProperty(ui->propertyEditor->item(item->row(), 0)->text().toLatin1(), item->text());
        on_modelExplorer_currentItemChanged(ui->modelExplorer->currentItem(), 0);
    }
}

void MainWindow::currentIndexChanged(int index)
{
    QComboBox *comboBox = qobject_cast<QComboBox *>(sender());
    if (comboBox) {
        QString propertyName = comboBox->itemData(index).toString();
        QObject *element = ui->modelExplorer->currentItem()->data(0, Qt::UserRole).value<QObject *>();
        if (element && comboBox->itemText(0) == "false")
            element->setProperty(propertyName.toLatin1(), qVariantFromValue((index == 0) ? false:true));
        else
            element->setProperty(propertyName.toLatin1(), qVariantFromValue(index));
    }
}

void MainWindow::populateModelExplorer(QNamedElement *namedElement, QTreeWidgetItem *parent)
{
    if (!namedElement)
        return;

    QTreeWidgetItem *item = new QTreeWidgetItem(parent, QStringList() << namedElement->name());
    QObject *parentObject = namedElement;
    while (parentObject->parent())
        parentObject = parentObject->parent();
    item->setData(0, Qt::UserRole, qVariantFromValue(parentObject));

    if (!parent)
        ui->modelExplorer->addTopLevelItem(item);

    if (QNamespace *namespace_ = qtuml_object_cast<QNamespace *>(namedElement))
        foreach (QNamedElement *childNamedElement, *namespace_->members())
            populateModelExplorer(childNamedElement, item);
}
