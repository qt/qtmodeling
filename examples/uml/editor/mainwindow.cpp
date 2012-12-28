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

#include <QFileSystemModel>

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

    ui->propertyEditor->setItemDelegateForColumn(1, new PropertyEditorItemDelegate(ui->propertyEditor));

    WrappedObjectPropertyModel *m = new WrappedObjectPropertyModel;
    ui->propertyEditor->setModel(m);

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

void MainWindow::on_modelExplorer_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous)

    if (!current)
        return;

    QWrappedObject *element = current->data(0, Qt::UserRole).value<QWrappedObject *>();
    WrappedObjectPropertyModel *model = qobject_cast<WrappedObjectPropertyModel *>(ui->propertyEditor->model());
    if (element && model) {
        model->setWrappedObject(element);
        ui->propertyEditor->expandAll();
        ui->propertyEditor->resizeColumnToContents(0);
        ui->propertyEditor->resizeColumnToContents(1);
    }
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
