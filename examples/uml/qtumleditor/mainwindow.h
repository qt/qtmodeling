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

class QTreeWidgetItem;
class QItemSelection;
class WrappedObjectPropertyModel;
class WrappedObjectModel;

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

    void on_actionFileOpen_triggered();
    void on_actionFileSaveAs_triggered();
    void on_actionFileSave_triggered();

private:
    Ui::MainWindow *ui;
    QHash< QString, QPair<QObject *, QMetaMethod> > _visitedAddMethods;
    QList<QWrappedObject *> _visitedObjects;

    WrappedObjectPropertyModel *_propertyModel;
    WrappedObjectModel *_wrappedObjectModel;
    QString _currentFileName;

    void populateContextMenu(QMenu &menu, QtWrappedObjects::QWrappedObject *element);
    void saveXmi(QWrappedObject *rootElement);
    QWrappedObject *loadXmi();
};

#endif // MAINWINDOW_H
