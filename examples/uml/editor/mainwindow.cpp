#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtWrappedObjects/QWrappedObjectPointer>

#include <QtUml/QModel>
#include <QtUml/QPrimitiveType>
#include <QtUml/QEnumeration>
#include <QtUml/QEnumerationLiteral>
#include <QtUml/QClass>
#include <QtUml/QComment>

#include <QtCore/QDebug>
#include <QtCore/QVariant>
#include <QtCore/QRegularExpression>
#include <QtCore/QMetaProperty>
#include <QtCore/QTimer>

#include <QtWidgets/QComboBox>
#include <QContextMenuEvent>

using namespace QtUml;
using QtWrappedObjects::QWrappedObjectPointer;

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

    QWrappedObjectPointer<QModel> model = new QModel;
    model->setName("MyModel");

    QWrappedObjectPointer<QPackage> package = new QPackage;
    package->setName("Package1");

    QWrappedObjectPointer<QPrimitiveType> primitiveType = new QPrimitiveType;
    primitiveType->setName("String");

    QWrappedObjectPointer<QEnumeration> enumeration = new QEnumeration;
    enumeration->setName("DirectionKind");
    QWrappedObjectPointer<QEnumerationLiteral> directionIn = new QEnumerationLiteral;
    directionIn->setName("DirectionIn");
    enumeration->addOwnedLiteral(directionIn);

    QWrappedObjectPointer<QClass> class_ = new QClass;
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

void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu menu(this);
    QObject *element = ui->modelExplorer->currentItem()->data(0, Qt::UserRole).value<QObject *>();
    _visitedAddMethods.clear();
    populateContextMenu(menu, element);
    menu.exec(event->globalPos());
}

void MainWindow::populateContextMenu(QMenu &menu, QObject *element)
{
    foreach (QObject *child, element->children())
        populateContextMenu(menu, child);

    const QMetaObject *metaObject = element->metaObject();
    int propertyCount = metaObject->propertyCount();
    for (int i = 0; i < propertyCount; ++i) {
        QString propertyName = metaObject->property(i).name();
        QString propertyType = metaObject->property(i).typeName();
        if (propertyType.contains("QList") || propertyType.contains("QSet")) {
            QString modifiedPropertyName = QString(propertyName.left(1).toUpper()+propertyName.mid(1)).remove(QRegularExpression("s$")).replace(QRegularExpression("ie$"), "y").replace(QRegularExpression("se$"), "s").replace(QRegularExpression("ice$"), "ex").replace(QRegularExpression("ce$"), "x");
            QString methodParameter = QString(metaObject->property(i).typeName()).remove("const QList<").remove("const QSet<").remove(">*");
            QString methodSignature = QString("add%1(%2)").arg(modifiedPropertyName).arg(methodParameter);
            int metaMethodIndex;
            QString text = tr("Add %1").arg(modifiedPropertyName);
            if ((metaMethodIndex = metaObject->indexOfMethod(methodSignature.toLatin1())) != -1 and !_visitedAddMethods.contains(text)) {
                QAction *action = new QAction(text, this);
                _visitedAddMethods[text] = QPair<QObject *, QMetaMethod>(element, metaObject->method(metaMethodIndex));
                action->setData(methodParameter);
                connect(action, SIGNAL(triggered()), this, SLOT(handleAddMethod()));
                menu.addAction(action);
            }
        }
    }
}

void MainWindow::handleMetaObjectProperties(QWrappedObject *element, const QMetaObject *metaObject, int level)
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
                rootElement = qwrappedobject_cast<QObject *>(element);
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
            if (QSet<QWrappedObject *> *elements = reinterpret_cast<QSet<QWrappedObject *> *>(*((QSet<QObject *> **) property.read(element).data()))) {
                if (elements->size() > 0) {
                    QString str = "[";
                    foreach (QWrappedObject *object, *elements)
                        str.append((qwrappedobject_cast<QWrappedObject *>(object))->objectName().append(", "));
                    str.chop(2);
                    str.append("]");
                    item->setText(1, str);
                }
                if (!property.isStored())
                    delete elements;
            }
        }

        if (typeName.endsWith('*') && typeName.contains("QList") && property.read(element).isValid()) {
            if (QList<QWrappedObject *> *elements = reinterpret_cast<QList<QWrappedObject *> *>(*((QList<QObject *> **) property.read(element).data()))) {
                if (elements->size() > 0) {
                    QString str = "[";
                    foreach (QWrappedObject *object, *elements)
                        str.append((qwrappedobject_cast<QWrappedObject *>(object))->objectName().append(", "));
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

void MainWindow::handleObjectProperties(QWrappedObject *element, int level)
{
    foreach (QObject *child, element->children())
            handleObjectProperties(dynamic_cast<QWrappedObject *>(child), level+1);

    handleMetaObjectProperties(element, element->metaObject(), level);
}

void MainWindow::on_modelExplorer_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous)

    if (!current)
        return;

    ui->propertyEditor->blockSignals(true);
    QWrappedObject *element = qwrappedobject_cast<QWrappedObject *>(current->data(0, Qt::UserRole).value<QWrappedObject *>());
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
        if (metaObject->property(metaObject->indexOfProperty(item->text(0).toLatin1())).type() == QVariant::String) {
            element->setProperty(item->text(0).toLatin1(), item->text(1));
            QTimer::singleShot(0, this, SLOT(refreshModel()));
        }
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

void MainWindow::populateModelExplorer(QWrappedObject *element, QTreeWidgetItem *parent)
{
    if (!element)
        return;

    ui->modelExplorer->blockSignals(true);
    QWrappedObject *wrappingObject = element;
    while (wrappingObject->wrapper())
        wrappingObject = wrappingObject->wrapper();
    QTreeWidgetItem *item = new QTreeWidgetItem(parent, QStringList() << QString("%1 (%2)").arg(wrappingObject->objectName()).arg(wrappingObject->metaObject()->className()));
    item->setData(0, Qt::UserRole, qVariantFromValue(wrappingObject));

    if (!parent)
        ui->modelExplorer->addTopLevelItem(item);

    if (QElement *umlElement = qwrappedobject_cast<QElement *>(element))
        foreach (QElement *ownedElement, *umlElement->ownedElements())
            populateModelExplorer(ownedElement, item);
    ui->modelExplorer->blockSignals(false);
    ui->modelExplorer->setCurrentItem(ui->modelExplorer->topLevelItem(0));
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

void MainWindow::handleAddMethod()
{
    QAction *action = qobject_cast<QAction *>(sender());
    if (action) {
        QObject *element = _visitedAddMethods[action->text()].first;
        QMetaMethod metaMethod = _visitedAddMethods[action->text()].second;
        QString elementType = action->data().toString();
        int type;
        qRegisterMetaType<QComment *>("QComment *");
        if ((type = QMetaType::type(elementType.toLatin1())) != QMetaType::UnknownType) {
            const QMetaObject *metaObject = QMetaType::metaObjectForType(type);
            if (metaObject) {
                QObject *addedElement = metaObject->newInstance();
                addedElement->setObjectName(QString("Unamed %1").arg(elementType.remove("*")));
                if (addedElement)
                    metaMethod.invoke(element, Q_ARG(QObject *, addedElement));
            }
        }
    }
    QTimer::singleShot(0, this, SLOT(refreshModel()));
}

void MainWindow::refreshModel()
{
    QWrappedObject *rootElement = qwrappedobject_cast<QWrappedObject *>(ui->modelExplorer->topLevelItem(0)->data(0, Qt::UserRole).value<QWrappedObject *>());
    ui->modelExplorer->clear();
    populateModelExplorer(rootElement);
}
