#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore/QVariant>
#include <QtCore/QRegularExpression>
#include <QtCore/QMetaProperty>
#include <QtCore/QDebug>

#include <QtGui/QContextMenuEvent>
#include <QtGui/QPixmap>

#include <QtWidgets/QComboBox>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QStyledItemDelegate>
#include <QtWidgets/QItemEditorCreatorBase>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>

#include <QtWrappedObjects/QMetaWrappedObject>

#include <QtMof/QXmiWriter>
#include <QtMof/QXmiReader>
#include <QtMof/QtMofMetaModel>

#include "wrappedobjectmodel.h"
#include "propertyeditoritemdelegate.h"
#include "wrappedobjectpropertymodel.h"
#include "wrappedobjectpropertyfiltermodel.h"

using namespace QtMof;
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

    QtMofMetaModel::init();

    _propertyModel = new WrappedObjectPropertyModel(this);
    WrappedObjectPropertyFilterModel *proxyModel = new WrappedObjectPropertyFilterModel(this);
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyModel->setSourceModel(_propertyModel);
    connect(ui->filterWidget, &FilterWidget::filterChanged,
            proxyModel, static_cast<void (QSortFilterProxyModel::*)(const QString &)>(&QSortFilterProxyModel::setFilterRegExp));
    connect(ui->filterWidget, &FilterWidget::filterChanged,
            ui->propertyEditor, &QTreeView::expandAll);
    connect(ui->filterWidget, &FilterWidget::filterChanged, [=](){
        ui->propertyEditor->resizeColumnToContents(0);
        ui->propertyEditor->resizeColumnToContents(1);
    });
    ui->propertyEditor->setModel(proxyModel);

    _wrappedObjectModel = new WrappedObjectModel(this);
    ui->modelInspector->setModel(_wrappedObjectModel);

    connect(ui->modelInspector->selectionModel(), &QItemSelectionModel::selectionChanged, this, &MainWindow::modelInspectorSelectionChanged);
    ui->modelInspector->setCurrentIndex(_wrappedObjectModel->index(0, 0));

    connect(_propertyModel, &WrappedObjectModel::dataChanged, [=](){
        _wrappedObjectModel->updateIndex(ui->modelInspector->selectionModel()->selectedIndexes().first());
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu menu(this);
    QWrappedObject *element = qvariant_cast<QWrappedObject *>(ui->modelInspector->currentIndex().data(Qt::UserRole));
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

void MainWindow::saveXmi(QWrappedObject *rootElement)
{
    QFile file(_currentFileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::critical(this, tr("Save As"), tr("Cannot write file !"));
        return;
    }

    QXmiWriter writer(rootElement);
    if (!writer.writeFile(&file))
        QMessageBox::critical(this, tr("Save As"), tr("Error when writing XMI file !"));
    else
        statusBar()->showMessage("XMI file successfully saved !", 3000);
}

QWrappedObject *MainWindow::loadXmi()
{
    QFile file(_currentFileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::critical(this, tr("Open"), tr("Cannot read file !"));
        return 0;
    }

    QXmiReader reader;
    return reader.readFile(&file);
}

void MainWindow::modelInspectorSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected)
{
    Q_UNUSED(deselected);
    QWrappedObject *element = qvariant_cast<QWrappedObject *>(selected.indexes().first().data(Qt::UserRole));
    if (element) {
        ui->lblInspectedObject->setText(QString("%1: %2").arg(element->objectName()).arg(element->metaObject()->className()));
        _propertyModel->setWrappedObject(element);
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
        qDebug() << "Procurando metatype de" << elementType;
        int type;
        if ((type = QMetaType::type(elementType.toLatin1())) != QMetaType::UnknownType) {
            const QMetaObject *metaObject = QMetaType::metaObjectForType(type);
            if (metaObject) {
                QObject *addedElement = metaObject->newInstance();
                if (addedElement) {
                    addedElement->setObjectName(QString("Unamed %1").arg(elementType.remove("*")));
                    if (!metaMethod.invoke(element, ::Q_ARG(QObject *, addedElement)))
                        statusBar()->showMessage("Error when invoking metaMethod !", 6000);
                    else
                        statusBar()->showMessage("MetaMethod successfully executed !", 3000);
                }
            }
        }
    }
    WrappedObjectModel *wrappedObjectModel = dynamic_cast<WrappedObjectModel *>(ui->modelInspector->model());
    wrappedObjectModel->updateIndex(QModelIndex());
}

void MainWindow::on_actionFileOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open"), QDir::currentPath(), "XMI files (*.xmi)");
    if (!fileName.isEmpty()) {
        _currentFileName = fileName;
        delete _wrappedObjectModel->wrappedObject();
        _wrappedObjectModel->setWrappedObject(loadXmi());
        ui->modelInspector->expandAll();
        ui->modelInspector->resizeColumnToContents(0);
        ui->modelInspector->resizeColumnToContents(1);
        ui->modelInspector->setCurrentIndex(_wrappedObjectModel->index(0, 0));
    }
}

void MainWindow::on_actionFileSaveAs_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save As"), QDir::currentPath(), "XMI files (*.xmi)");
    if (!fileName.isEmpty()) {
        _currentFileName = fileName;
        saveXmi(_wrappedObjectModel->wrappedObject());
    }
}

void MainWindow::on_actionFileSave_triggered()
{
    if (_currentFileName.isEmpty())
        on_actionFileSaveAs_triggered();
    else
        saveXmi(_wrappedObjectModel->wrappedObject());
}
