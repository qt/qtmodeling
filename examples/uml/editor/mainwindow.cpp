#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore/QVariant>
#include <QtCore/QRegularExpression>
#include <QtCore/QMetaProperty>
#include <QtCore/QTimer>

#include <QtGui/QContextMenuEvent>
#include <QtGui/QPixmap>

#include <QtWidgets/QComboBox>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QStyledItemDelegate>
#include <QtWidgets/QItemEditorCreatorBase>

#include <QtWrappedObjects/QMetaWrappedObject>

#include <QtUml/QModel>
#include <QtUml/QGeneralization>
#include <QtUml/QElementImport>
#include <QtUml/QPrimitiveType>
#include <QtUml/QEnumeration>
#include <QtUml/QEnumerationLiteral>
#include <QtUml/QClass>
#include <QtUml/QProperty>
#include <QtUml/QComment>

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

    PropertyEditorItemDelegate *delegate = new PropertyEditorItemDelegate(ui->propertyEditor);
    ui->propertyEditor->setItemDelegateForColumn(1, delegate);

    WrappedObjectPropertyModel *m = new WrappedObjectPropertyModel(this);
    ui->propertyEditor->setModel(m);

    _model = new QModel;
    _model->setName("MyModel");

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

    QWrappedObjectPointer<QProperty> property = new QProperty;
    property->setName("name");
    property->setType(primitiveType);
    class_->addOwnedAttribute(property);

    QWrappedObjectPointer<QClass> class2_ = new QClass;
    class2_->setName("InterStudent");

    QWrappedObjectPointer<QGeneralization> generalization = new QGeneralization;
    generalization->setObjectName("generalization");
    generalization->setGeneral(class_);
    class2_->addGeneralization(generalization);

    _model2 = new QModel;
    _model2->setName("Model2");
    QWrappedObjectPointer<QClass> class3_ = new QClass;
    class3_->setName("Professor");
    _model2->addOwnedType(class3_);

    QWrappedObjectPointer<QElementImport> elementImport = new QElementImport;
    elementImport->setObjectName("ElementImport1");
    elementImport->setImportedElement(class3_);

    package->addOwnedType(enumeration);
    package->addOwnedType(class_);
    package->addOwnedType(class2_);

    _model->addNestedPackage(package);
    _model->addOwnedType(primitiveType);
    _model->addElementImport(elementImport);

    populateModelExplorer(_model);
    ui->modelExplorer->setCurrentItem(ui->modelExplorer->topLevelItem(0));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete _model.data();
    delete _model2.data();
}

void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu menu(this);
    QWrappedObject *element = qvariant_cast<QWrappedObject *>(ui->modelExplorer->currentItem()->data(0, Qt::UserRole));
    _visitedAddMethods.clear();
    populateContextMenu(menu, element);
    menu.exec(event->globalPos());
}

void MainWindow::populateContextMenu(QMenu &menu, QWrappedObject *element)
{
    const QMetaWrappedObject *metaWrappedObject = element->metaWrappedObject();
    int propertyCount = metaWrappedObject->propertyCount();
    for (int i = 0; i < propertyCount; ++i) {
        QString propertyName = metaWrappedObject->property(i).metaProperty.name();
        QString propertyType = metaWrappedObject->property(i).metaProperty.typeName();
        QString modifiedPropertyName = QString(propertyName.left(1).toUpper()+propertyName.mid(1)).remove(QRegularExpression("s$")).replace(QRegularExpression("ie$"), "y").replace(QRegularExpression("se$"), "s").replace(QRegularExpression("ice$"), "ex").replace(QRegularExpression("ce$"), "x");
        if (propertyType.contains("QList") || propertyType.contains("QSet")) {
            QString methodParameter = propertyType.remove("QList<").remove("QSet<").remove(">");
            QString methodSignature = QString("add%1(%2)").arg(modifiedPropertyName).arg(methodParameter);
            int metaMethodIndex;
            QString text = tr("Add %1").arg(modifiedPropertyName);
            if ((metaMethodIndex = element->metaObject()->indexOfMethod(methodSignature.toLatin1())) != -1 and !_visitedAddMethods.contains(text)) {
                QAction *action = new QAction(text, this);
                _visitedAddMethods[text] = QPair<QObject *, QMetaMethod>(element, element->metaObject()->method(metaMethodIndex));
                action->setData(methodParameter);
                connect(action, SIGNAL(triggered()), this, SLOT(handleAddMethod()));
                menu.addAction(action);
            }
        }
        else if (propertyType.endsWith("*")) {
            QString methodSignature = QString("set%1(%2)").arg(modifiedPropertyName).arg(propertyType);
            int metaMethodIndex;
            QString text = tr("Set %1").arg(modifiedPropertyName.remove(QRegularExpression("_$")));
            if ((metaMethodIndex = element->metaObject()->indexOfMethod(methodSignature.toLatin1())) != -1 and !_visitedAddMethods.contains(text)) {
                QAction *action = new QAction(text, this);
                _visitedAddMethods[text] = QPair<QObject *, QMetaMethod>(element, element->metaObject()->method(metaMethodIndex));
                action->setData(propertyType);
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

    QWrappedObject *element = qvariant_cast<QWrappedObject *>(current->data(0, Qt::UserRole));
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
        QString aggregationRole = element->propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()), metaProperty, QtWrappedObjects::QtWrappedObjects::AggregationRole).toString();

        if (typeName.endsWith('*') && qvariant_cast<QWrappedObject *>(metaProperty.read(propertyWrappedObject))) {
            QWrappedObject *wrappedObject = qvariant_cast<QWrappedObject *>(metaProperty.read(propertyWrappedObject));
            if (aggregationRole == QString::fromLatin1("composite") && !_visitedObjects.contains(qTopLevelWrapper(wrappedObject)))
                populateModelExplorer(wrappedObject, item);
        }
        else if (typeName.contains("QSet") && metaProperty.read(propertyWrappedObject).isValid()) {
            QSet<QWrappedObject *> elements = *(static_cast<QSet<QWrappedObject *> *>(metaProperty.read(propertyWrappedObject).data()));
            if (aggregationRole == QString::fromLatin1("composite"))
                foreach (QWrappedObject *wrappedObject, elements)
                    if (!_visitedObjects.contains(qTopLevelWrapper(wrappedObject)))
                        populateModelExplorer(wrappedObject, item);
        }
        else if (typeName.contains("QList") && metaProperty.read(propertyWrappedObject).isValid()) {
            QList<QWrappedObject *> elements = *(static_cast<QList<QWrappedObject *> *>(metaProperty.read(propertyWrappedObject).data()));
            if (aggregationRole == QString::fromLatin1("composite"))
                foreach (QWrappedObject *wrappedObject, elements)
                    if (!_visitedObjects.contains(qTopLevelWrapper(wrappedObject)))
                        populateModelExplorer(wrappedObject, item);
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
                if (addedElement) {
                    if (!metaMethod.invoke(element, Q_ARG(QObject *, addedElement)))
                        statusBar()->showMessage("Error when invoking metaMethod !");
                    else
                        statusBar()->showMessage("MetaMethod successfully executed !", 3000);
                }
            }
        }
    }
    QTimer::singleShot(0, this, SLOT(refreshModel()));
}

void MainWindow::refreshModel()
{
    QWrappedObject *rootElement = qvariant_cast<QWrappedObject *>(ui->modelExplorer->topLevelItem(0)->data(0, Qt::UserRole));
    ui->modelExplorer->clear();
    _visitedObjects.clear();
    populateModelExplorer(rootElement);
}
