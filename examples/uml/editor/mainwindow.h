#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>

namespace Ui {
    class MainWindow;
}

namespace QtUml {
    class QNamedElement;
}

class QTreeWidgetItem;
class QTableWidgetItem;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private Q_SLOTS:
    void on_modelExplorer_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);
    void itemChanged(QTableWidgetItem * item);
    void currentIndexChanged(int index);
    void populateModelExplorer(QtUml::QNamedElement *namedElement, QTreeWidgetItem *parent = 0);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
