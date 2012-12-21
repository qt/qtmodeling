#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtWrappedObjects/QWrappedObjectPointer>
#include <QtWrappedObjects/QMetaWrappedObject>

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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QStyledItemDelegate>
#include <QtWidgets/QItemEditorCreatorBase>

#include <QtGui/QContextMenuEvent>
#include <QtGui/QPixmap>

#include "propertyeditoritemdelegate.h"
#include "wrappedobjectpropertymodel.h"

using namespace QtUml;
using namespace QtWrappedObjects;

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

    ui->propertyEditor->setItemDelegate(new PropertyEditorItemDelegate(this));
    ui->propertyEditor->setEditTriggers(QAbstractItemView::CurrentChanged);

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

    QWrappedObjectPointer<QClass> class2_ = new QClass;
    class2_->setName("InterStudent");

    package->addOwnedType(enumeration);
    package->addOwnedType(class_);
    package->addOwnedType(class2_);

    model->addNestedPackage(package);
    model->addOwnedType(primitiveType);

    WrappedObjectPropertyModel *m = new WrappedObjectPropertyModel;
    m->setWrappedObject(model);
    ui->treeView->setPalette(palette);
    ui->treeView->setAlternatingRowColors(true);
    ui->treeView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->treeView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->treeView->setModel(m);

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

void MainWindow::handleWrappedObjectProperties(QWrappedObject *element)
{
    const QMetaWrappedObject *metaWrappedObject = element->metaWrappedObject();
    int propertyCount = metaWrappedObject->propertyCount();

    for (int i = 0; i < propertyCount; ++i) {
        QMetaPropertyInfo metaPropertyInfo = metaWrappedObject->property(i);
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        QWrappedObject *propertyWrappedObject = metaPropertyInfo.propertyWrappedObject;

        QTreeWidgetItem *parentItem = parentItemForProperty(metaPropertyInfo.propertyMetaObject->className());
        if (!parentItem) {
            parentItem = new QTreeWidgetItem(ui->propertyEditor, QStringList() << metaPropertyInfo.propertyMetaObject->className());
            parentItem->setExpanded(true);
            QFont font = parentItem->font(0);
            font.setBold(true);
            parentItem->setFont(0, font);
        }
        parentItem->setSizeHint(1, QSize(0, 22));

        QTreeWidgetItem *item = new QTreeWidgetItem(parentItem);
        item->setSizeHint(1, QSize(0, 22));
        QString propertyName = QString(metaProperty.name()).remove(QRegularExpression("_$")).remove(QRegularExpression("^is"));
        if (propertyName.toUpper() != propertyName)
            propertyName = propertyName.left(1).toLower() + propertyName.mid(1);
        item->setData(0, Qt::DisplayRole, propertyName + ((metaProperty.isWritable() == false) ? " (RO)":""));
        item->setData(1, Qt::UserRole, qVariantFromValue(metaPropertyInfo));

        QString typeName = metaProperty.typeName();

        if (metaProperty.isEnumType()) {
            QMetaEnum metaEnum = metaProperty.enumerator();
            QString enumKey = metaEnum.valueToKey(metaProperty.read(propertyWrappedObject).toInt());
            item->setData(1, Qt::DisplayRole, enumKey.toLower().remove(metaProperty.name()));
        }
        else if (metaProperty.type() == QVariant::String) {
            QObject *rootElement = propertyWrappedObject;
            if (QString(metaProperty.name()) == "objectName")
                rootElement = qTopLevelWrapper(element);
            item->setData(1, Qt::DisplayRole, metaProperty.read(rootElement).toString());
        }
        else if (typeName.endsWith('*') && !typeName.contains(QRegularExpression ("QSet|QList")) && metaProperty.read(propertyWrappedObject).value<QWrappedObject *>()) {
            QWrappedObject *objectElement = metaProperty.read(propertyWrappedObject).value<QWrappedObject *>();
            item->setText(1, qTopLevelWrapper(objectElement)->objectName());
            if (!metaProperty.isStored())
                delete objectElement;
        }
        else if (typeName.endsWith('*') && typeName.contains("QSet") && metaProperty.read(propertyWrappedObject).isValid()) {
            if (QSet<QWrappedObject *> *elements = *(static_cast<QSet<QWrappedObject *> **>(metaProperty.read(propertyWrappedObject).data()))) {
                if (elements->size() > 0) {
                    QString str = "[";
                    foreach (QWrappedObject *object, *elements)
                        str.append((qwrappedobject_cast<QWrappedObject *>(object))->objectName().append(", "));
                    str.chop(2);
                    str.append("]");
                    item->setText(1, str);
                }
                if (!metaProperty.isStored())
                    delete elements;
            }
        }
        else if (typeName.endsWith('*') && typeName.contains("QList") && metaProperty.read(propertyWrappedObject).isValid()) {
            if (QList<QWrappedObject *> *elements = *(static_cast<QList<QWrappedObject *> **>(metaProperty.read(propertyWrappedObject).data()))) {
                if (elements->size() > 0) {
                    QString str = "[";
                    foreach (QWrappedObject *object, *elements)
                        str.append((qwrappedobject_cast<QWrappedObject *>(object))->objectName().append(", "));
                    str.chop(2);
                    str.append("]");
                    item->setText(1, str);
                }
                if (!metaProperty.isStored())
                    delete elements;
            }
        }
    }
}

void MainWindow::on_modelExplorer_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous)

    if (!current)
        return;

    ui->propertyEditor->blockSignals(true);
    QWrappedObject *element = current->data(0, Qt::UserRole).value<QWrappedObject *>();
    ui->propertyEditor->clear();

    handleWrappedObjectProperties(element);

    ui->propertyEditor->resizeColumnToContents(0);
    ui->propertyEditor->resizeColumnToContents(1);
    ui->propertyEditor->blockSignals(false);
}

void MainWindow::on_propertyEditor_itemClicked(QTreeWidgetItem *item, int column)
{
    QMetaPropertyInfo metaPropertyInfo = item->data(1, Qt::UserRole).value<QMetaPropertyInfo>();
    if (column == 1 && metaPropertyInfo.metaProperty.isWritable())
        ui->propertyEditor->openPersistentEditor(item, 1);
}

void MainWindow::on_propertyEditor_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(current)
    ui->propertyEditor->closePersistentEditor(previous, 1);
}

void MainWindow::populateModelExplorer(QWrappedObject *element, QTreeWidgetItem *parent)
{
    if (!element)
        return;

    ui->modelExplorer->blockSignals(true);
    QWrappedObject *wrappingObject = qTopLevelWrapper(element);
    _visitedObjects << wrappingObject;
    wrappingObject->registerMetaTypes();
    QTreeWidgetItem *item = new QTreeWidgetItem(parent, QStringList() << QString("%1 (%2)").arg(wrappingObject->objectName()).arg(wrappingObject->metaObject()->className()));
    item->setData(0, Qt::UserRole, qVariantFromValue(wrappingObject));

    if (!parent)
        ui->modelExplorer->addTopLevelItem(item);

    const QMetaWrappedObject *metaWrappedObject = element->metaWrappedObject();
    int propertyCount = metaWrappedObject->propertyCount();

    for (int i = 0; i < propertyCount; ++i) {
        QMetaPropertyInfo metaPropertyInfo = metaWrappedObject->property(i);
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        QWrappedObject *propertyWrappedObject = metaPropertyInfo.propertyWrappedObject;
        QString typeName = metaProperty.typeName();

        if (typeName.endsWith('*') && !typeName.contains(QRegularExpression ("QSet|QList")) && metaProperty.read(propertyWrappedObject).value<QWrappedObject *>()) {
            QWrappedObject *wrappedObject = metaProperty.read(propertyWrappedObject).value<QWrappedObject *>();
            if (!_visitedObjects.contains(qTopLevelWrapper(wrappedObject)))
                populateModelExplorer(wrappedObject, item);
            if (!metaProperty.isStored())
                delete wrappedObject;
        }
        else if (typeName.endsWith('*') && typeName.contains("QSet") && metaProperty.read(propertyWrappedObject).isValid()) {
            if (QSet<QWrappedObject *> *elements = *(static_cast<QSet<QWrappedObject *> **>(metaProperty.read(propertyWrappedObject).data()))) {
                foreach (QWrappedObject *wrappedObject, *elements)
                    if (!_visitedObjects.contains(qTopLevelWrapper(wrappedObject)))
                        populateModelExplorer(wrappedObject, item);
                if (!metaProperty.isStored())
                    delete elements;
            }
        }
        else if (typeName.endsWith('*') && typeName.contains("QList") && metaProperty.read(propertyWrappedObject).isValid()) {
            if (QList<QWrappedObject *> *elements = *(static_cast<QList<QWrappedObject *> **>(metaProperty.read(propertyWrappedObject).data()))) {
                foreach (QWrappedObject *wrappedObject, *elements)
                    if (!_visitedObjects.contains(qTopLevelWrapper(wrappedObject)))
                        populateModelExplorer(wrappedObject, item);
                if (!metaProperty.isStored())
                    delete elements;
            }
        }
    }

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
    QWrappedObject *rootElement = ui->modelExplorer->topLevelItem(0)->data(0, Qt::UserRole).value<QWrappedObject *>();
    ui->modelExplorer->clear();
    _visitedObjects.clear();
    populateModelExplorer(rootElement);
}
