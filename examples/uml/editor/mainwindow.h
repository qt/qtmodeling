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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
     void contextMenuEvent(QContextMenuEvent *event);

private Q_SLOTS:
    void on_modelExplorer_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);
    void populateModelExplorer(QWrappedObject *element, QTreeWidgetItem *parent = 0);
    void handleAddMethod();
    void refreshModel();

private:
    Ui::MainWindow *ui;
    QHash< QString, QPair<QObject *, QMetaMethod> > _visitedAddMethods;
    QList<QWrappedObject *> _visitedObjects;

    QWrappedObjectPointer<QModel> _model;
    QWrappedObjectPointer<QModel> _model2;

    void populateContextMenu(QMenu &menu, QObject *element);
};

#endif // MAINWINDOW_H
