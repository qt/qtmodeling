#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore/QVariant>
#include <QtCore/QRegularExpression>
#include <QtCore/QMetaProperty>
#include <QtCore/QTimer>
#include <QtCore/QDebug>

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

#include "wrappedobjectmodel.h"
#include "propertyeditoritemdelegate.h"
#include "wrappedobjectpropertymodel.h"

using namespace QtUml;
using namespace QtWrappedObjects;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPalette propertyPallete = ui->propertyEditor->palette();
    propertyPallete.setColor(QPalette::Active, QPalette::Base, QColor(255, 242, 222));
    propertyPallete.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 242, 222));
    propertyPallete.setColor(QPalette::Active, QPalette::AlternateBase, QColor(255, 255, 191));
    propertyPallete.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(255, 255, 191));
    ui->propertyEditor->setPalette(propertyPallete);

    QPalette modelPallete = ui->modelInspector->palette();
    modelPallete.setColor(QPalette::Active, QPalette::Base, QColor(255, 255, 255));
    modelPallete.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 255, 255));
    modelPallete.setColor(QPalette::Active, QPalette::AlternateBase, QColor(248, 247, 246));
    modelPallete.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(248, 247, 246));
    ui->modelInspector->setPalette(modelPallete);

    PropertyEditorItemDelegate *delegate = new PropertyEditorItemDelegate(ui->propertyEditor);
    ui->propertyEditor->setItemDelegateForColumn(1, delegate);

    WrappedObjectPropertyModel *propertyModel = new WrappedObjectPropertyModel(this);
    ui->propertyEditor->setModel(propertyModel);

    WrappedObjectModel *wrappedObjectModel = new WrappedObjectModel(this);
    ui->modelInspector->setModel(wrappedObjectModel);

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

    wrappedObjectModel->setWrappedObject(_model);
    ui->modelInspector->expandAll();
    ui->modelInspector->resizeColumnToContents(0);
    ui->modelInspector->resizeColumnToContents(1);

    connect(ui->modelInspector->selectionModel(), &QItemSelectionModel::selectionChanged, this, &MainWindow::modelInspectorSelectionChanged);
    ui->modelInspector->setCurrentIndex(wrappedObjectModel->index(0, 0));

    connect(propertyModel, &WrappedObjectModel::dataChanged, [=](){
        wrappedObjectModel->updateIndex(ui->modelInspector->selectionModel()->selectedIndexes().first());
    });
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
    QWrappedObject *element = static_cast<QWrappedObject *>(ui->modelInspector->currentIndex().internalPointer());
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
                connect(action, &QAction::triggered, this, &MainWindow::handleAddMethod);
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
                connect(action, &QAction::triggered, this, &MainWindow::handleAddMethod);
                menu.addAction(action);
            }
        }
    }
}

void MainWindow::modelInspectorSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected)
{
    Q_UNUSED(deselected);
    QWrappedObject *element = static_cast<QWrappedObject *>(selected.indexes().first().internalPointer());
    WrappedObjectPropertyModel *model = qobject_cast<WrappedObjectPropertyModel *>(ui->propertyEditor->model());
    if (element && model) {
        model->setWrappedObject(element);
        ui->propertyEditor->expandAll();
        ui->propertyEditor->resizeColumnToContents(0);
        ui->propertyEditor->resizeColumnToContents(1);
    }
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
    WrappedObjectModel *wrappedObjectModel = dynamic_cast<WrappedObjectModel *>(ui->modelInspector->model());
    wrappedObjectModel->updateIndex(QModelIndex());
}
