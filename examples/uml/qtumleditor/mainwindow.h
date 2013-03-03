#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>

#include <QtCore/QPair>
#include <QtCore/QJsonObject>

#include <QtScript/QScriptEngine>

class QDialog;

namespace Ui {
    class MainWindow;
    class AboutPlugins;
}

class QWrappedObject;
class QMetaModelPlugin;
class QWrappedObjectModel;

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
    void on_psbJSEvaluate_clicked();

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

    QScriptEngine _engine;
};

#endif // MAINWINDOW_H
