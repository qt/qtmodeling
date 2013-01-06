#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QHash>

#include <QtWidgets/QMainWindow>

#include <QtWrappedObjects/QWrappedObjectPointer>

namespace Ui {
    class MainWindow;
}

namespace QtWrappedObjects {
    class QWrappedObject;
}
using QtWrappedObjects::QWrappedObject;
using QtWrappedObjects::QWrappedObjectPointer;

namespace QtUml {
    class QModel;
}
using QtUml::QModel;

class QTreeWidgetItem;
class QItemSelection;
class WrappedObjectPropertyModel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
     void contextMenuEvent(QContextMenuEvent *event);

private Q_SLOTS:
    void modelInspectorSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected);
    void handleAddMethod();

private:
    Ui::MainWindow *ui;
    QHash< QString, QPair<QObject *, QMetaMethod> > _visitedAddMethods;
    QList<QWrappedObject *> _visitedObjects;

    QWrappedObjectPointer<QModel> _model;
    QWrappedObjectPointer<QModel> _model2;
    WrappedObjectPropertyModel *_propertyModel;

    void populateContextMenu(QMenu &menu, QtWrappedObjects::QWrappedObject *element);
};

#endif // MAINWINDOW_H
