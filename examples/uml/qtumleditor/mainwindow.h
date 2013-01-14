#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>

namespace Ui {
    class MainWindow;
}

namespace QtWrappedObjects {
    class QWrappedObject;
    class QWrappedObjectModel;
}
using QtWrappedObjects::QWrappedObject;
using QtWrappedObjects::QWrappedObjectModel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private Q_SLOTS:
    void on_actionFileOpen_triggered();
    void on_actionFileSaveAs_triggered();
    void on_actionFileSave_triggered();

private:
    void saveXmi(QWrappedObject *rootElement);
    QWrappedObject *loadXmi();

    Ui::MainWindow *ui;
    QWrappedObjectModel *_wrappedObjectModel;

    QString _currentFileName;
};

#endif // MAINWINDOW_H
