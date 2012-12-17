#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QHash>
#include <QtWidgets/QMainWindow>

namespace Ui {
    class MainWindow;
}

namespace QtWrappedObjects {
    class QWrappedObject;
}
using QtWrappedObjects::QWrappedObject;

namespace QtUml {
    class QNamedElement;
}

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
    void on_propertyEditor_itemClicked(QTreeWidgetItem *item, int column);
    void on_propertyEditor_currentItemChanged(QTreeWidgetItem *current,QTreeWidgetItem *previous);
    void populateModelExplorer(QWrappedObject *element, QTreeWidgetItem *parent = 0);
    QTreeWidgetItem *parentItemForProperty(QString propertyGroup);
    void handleAddMethod();
    void refreshModel();

private:
    Ui::MainWindow *ui;
    QHash< QString, QPair<QObject *, QMetaMethod> > _visitedAddMethods;
    QList<QWrappedObject *> _visitedObjects;

    void handleWrappedObjectProperties(QWrappedObject *element);
    void populateContextMenu(QMenu &menu, QObject *element);
};

#endif // MAINWINDOW_H
