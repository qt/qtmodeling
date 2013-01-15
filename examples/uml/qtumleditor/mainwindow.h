#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>

#include <QtCore/QPair>
#include <QtCore/QJsonObject>

class QDialog;

namespace QtWrappedObjects
{
    class QMetaModelPlugin;
}

namespace Ui {
    class MainWindow;
    class AboutPlugins;
}

namespace QtWrappedObjects {
    class QWrappedObject;
    class QWrappedObjectModel;
}
using QtWrappedObjects::QWrappedObject;
using QtWrappedObjects::QWrappedObjectModel;
using QtWrappedObjects::QMetaModelPlugin;

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
    void on_actionAboutPlugins_triggered();

private:
    void loadPlugins();
    void saveXmi(QWrappedObject *rootElement);
    QWrappedObject *loadXmi();

    Ui::MainWindow *ui;
    QWrappedObjectModel *_wrappedObjectModel;

    QString _currentFileName;
    QHash<QString, QPair<QMetaModelPlugin *, QJsonObject>> _loadedPlugins;
    QDialog *_aboutPluginsDialog;
    Ui::AboutPlugins *_aboutPlugins;
};

#endif // MAINWINDOW_H
