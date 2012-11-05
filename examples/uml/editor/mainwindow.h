#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>

namespace Ui {
class MainWindow;
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
    void on_trvModel_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);
    void itemChanged(QTableWidgetItem * item);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
