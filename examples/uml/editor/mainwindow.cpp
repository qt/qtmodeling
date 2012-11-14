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
    ui->propertyEditor->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->propertyEditor->setSelectionBehavior(QAbstractItemView::SelectRows);

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
    ui->modelExplorer->setCurrentItem(ui->modelExplorer->topLevelItem(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleMetaObjectProperties(QObject *element, const QMetaObject *metaObject, int level)
{
    if (metaObject->superClass() && !_visitedParents.contains(metaObject->superClass()->className()))
        handleMetaObjectProperties(element, metaObject->superClass(), level+1);

    _visitedParents.append(metaObject->className());

    const QMetaObject enumMetaObject = QtUml::QtUml::staticMetaObject;
    QMap<QString, QMetaEnum> enums;
    int enumeratorCount = enumMetaObject.enumeratorCount();
    for (int i = 0; i < enumeratorCount; ++i) {
        QMetaEnum metaEnum = enumMetaObject.enumerator(i);
        enums[QString(metaEnum.name())] = metaEnum;
    }

    int propertyCount = metaObject->propertyCount();

    for (int i = metaObject->propertyOffset(); i < propertyCount; ++i) {
        QMetaProperty property = metaObject->property(i);

        if (_visitedProperties.contains(property.name())) {
            if (_visitedProperties[property.name()].first == level)
                continue;

            if (_visitedProperties[property.name()].first >= level) {
                delete _visitedProperties[property.name()].second;
                _visitedProperties.remove(property.name());
            }
        }

        QTreeWidgetItem *parentItem = parentItemForProperty(metaObject->className());
        if (!parentItem) {
            parentItem = new QTreeWidgetItem(ui->propertyEditor, QStringList() << metaObject->className());
            parentItem->setExpanded(true);
            QFont font = parentItem->font(0);
            font.setBold(true);
            parentItem->setFont(0, font);
        }
        parentItem->setSizeHint(1, QSize(0, 19));

        QTreeWidgetItem *item = new QTreeWidgetItem(parentItem);
        item->setSizeHint(1, QSize(0, 19));
        item->setText(0, QString(property.name()).remove(QRegularExpression("_$")) + ((property.isWritable() == false) ? " (RO)":""));
        _visitedProperties[property.name()] = QPair<int, QTreeWidgetItem *>(level, item);

        if (property.isEnumType()) {
            if (enums.contains(QString(property.typeName()).split("::").last())) {
                QMetaEnum metaEnum = enums[QString(property.typeName()).split("::").last()];
                QComboBox *comboBox = new QComboBox;
                int keyCount = metaEnum.keyCount();
                for (int j = 0; j < keyCount; ++j)
                    comboBox->addItem(QString(metaEnum.key(j)).toLower().remove(QString(property.name())), qVariantFromValue(QString(property.name())));
                comboBox->setCurrentIndex(property.read(element).toInt());
                comboBox->setMaximumHeight(19);
                connect(comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(currentIndexChanged(int)));
                ui->propertyEditor->setItemWidget(item, 1, comboBox);
            }
        }

        if (property.type() == QVariant::Bool) {
            QComboBox *comboBox = new QComboBox;
            comboBox->addItem("false", qVariantFromValue(QString(property.name())));
            comboBox->addItem("true", qVariantFromValue(QString(property.name())));
            comboBox->setCurrentIndex(property.read(element).toBool() ? 1:0);
            comboBox->setMaximumHeight(19);
            connect(comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(currentIndexChanged(int)));
            ui->propertyEditor->setItemWidget(item, 1, comboBox);
            continue;
        }

        if (property.type() == QVariant::String) {
            QObject *rootElement = element;
            if (QString(property.name()) == "objectName")
                rootElement = qtuml_object_cast<QObject *>(element);
            item->setText(1, property.read(rootElement).toString());
        }

        QString typeName = property.typeName();
        if (typeName.endsWith('*') && !typeName.contains(QRegularExpression ("QSet|QList")) && property.read(element).value<QObject *>()) {
            QObject *objectElement = property.read(element).value<QObject *>();
            item->setText(1, objectElement->objectName());
            if (!property.isStored())
                delete objectElement;
        }

        if (typeName.endsWith('*') && typeName.contains("QSet") && property.read(element).isValid()) {
            if (QSet<QObject *> *elements = reinterpret_cast<QSet<QObject *> *>(*((QSet<QObject *> **) property.read(element).data()))) {
                if (elements->size() > 0) {
                    QString str = "[";
                    foreach (QObject *object, *elements)
                        str.append((qtuml_object_cast<QObject *>(object))->objectName().append(", "));
                    str.chop(2);
                    str.append("]");
                    item->setText(1, str);
                }
                if (!property.isStored())
                    delete elements;
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
                    item->setText(1, str);
                }
                if (!property.isStored())
                    delete elements;
            }
        }

        if (property.isWritable() == true)
            item->setFlags(item->flags() | Qt::ItemIsEditable);
    }
}

void MainWindow::handleObjectProperties(QObject *element, int level)
{
    foreach (QObject *child, element->children())
            handleObjectProperties(child, level+1);

    handleMetaObjectProperties(element, element->metaObject(), level);
}

void MainWindow::on_modelExplorer_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous)

    ui->propertyEditor->blockSignals(true);
    QObject *element = current->data(0, Qt::UserRole).value<QObject *>();
    ui->propertyEditor->clear();

    _visitedParents.clear();
    _visitedProperties.clear();
    handleObjectProperties(element);

    ui->propertyEditor->resizeColumnToContents(0);
    ui->propertyEditor->resizeColumnToContents(1);
    ui->propertyEditor->blockSignals(false);
}

void MainWindow::on_propertyEditor_itemChanged(QTreeWidgetItem *item, int column)
{
    if (column == 1) {
        QObject *element = ui->modelExplorer->currentItem()->data(0, Qt::UserRole).value<QObject *>();
        const QMetaObject *metaObject = element->metaObject();
        if (metaObject->property(metaObject->indexOfProperty(item->text(0).toLatin1())).type() == QVariant::String)
            element->setProperty(item->text(0).toLatin1(), item->text(1));
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

void MainWindow::populateModelExplorer(QObject *element, QTreeWidgetItem *parent)
{
    if (!element)
        return;

    QObject *parentObject = element;
    while (parentObject->parent())
        parentObject = parentObject->parent();
    QTreeWidgetItem *item = new QTreeWidgetItem(parent, QStringList() << QString("%1 (%2)").arg(parentObject->objectName()).arg(parentObject->metaObject()->className()));
    item->setData(0, Qt::UserRole, qVariantFromValue(parentObject));

    if (!parent)
        ui->modelExplorer->addTopLevelItem(item);

    if (QNamespace *namespace_ = qtuml_object_cast<QNamespace *>(element))
        foreach (QNamedElement *childNamedElement, *namespace_->members())
            populateModelExplorer(childNamedElement, item);
}

QTreeWidgetItem *MainWindow::parentItemForProperty(QString propertyGroup)
{
    int topLevelItemCount = ui->propertyEditor->topLevelItemCount();
    QTreeWidgetItem *parentItem = 0;
    for (int i = 0; i < topLevelItemCount; ++i)
        if (ui->propertyEditor->topLevelItem(i)->text(0) == propertyGroup)
            parentItem = ui->propertyEditor->topLevelItem(i);
    return parentItem;
}
