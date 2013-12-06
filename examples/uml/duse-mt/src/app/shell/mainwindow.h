/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>

QT_BEGIN_NAMESPACE
class QQuickItem;
class QQmlComponent;
class QTreeWidgetItem;

class QModelingElement;
//class QModelingObject;
class QMetaModelPlugin;
class QModelingObjectModel;
class QProgressDialog;
QT_END_NAMESPACE

class NewDuseDesignDialog;

namespace DuSE
{

namespace Ui {
    class MainWindow;
    class AboutPlugins;
    class AboutDuSEMT;
    class NewModel;
}

class IPlugin;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

    void readSettings();
    void populatePluginDialog();

protected:
    void closeEvent(QCloseEvent *event);

private Q_SLOTS:
    void update();
    void on_actionFileNewModel_triggered();
    void on_actionFileOpenModel_triggered();
    void on_actionFileCloseModel_triggered();
    void on_actionFileSaveAs_triggered();
    void on_actionFileSave_triggered();
    void on_actionHelpAboutPlugins_triggered();
    void on_actionHelpAboutDuSEMT_triggered();
    void on_centralWidget_currentChanged(int);
//    void on_btnOptimize_clicked();
    void evaluateQualityMetrics();

    void metaModelChanged(QString newMetaModel);
//    void addToDesignSpaceView(QModelingElement *modelingObject, QQuickItem *parent = 0);
    void addToPareto(QModelingElement *modelingObject, int pos);

    void designSpaceChanged();

private:
    Ui::MainWindow *ui;

    void populateDesignSpaceView(QModelingElement *modelingObject);

    QList<QModelingElement *> _inputModel;
    QList<QModelingElement *> _designSpaceLocation;

    QDialog *_aboutPluginsDialog;
    Ui::AboutPlugins *_aboutPlugins;
    QDialog *_aboutDuSEMTDialog;
    Ui::AboutDuSEMT *_aboutDuSEMT;
    QDialog *_newModelDialog;
    Ui::NewModel *_newModel;
    NewDuseDesignDialog *_newDuseDesign;

    QQmlComponent *_qmlComponent;

    QProgressDialog *progress;
    QTimer *timer;

    QTreeWidgetItem *itemForCategory(const QString &category);

    friend class UiController;
    void saveXmi(QString fileName = QString());
};

}

#endif // MAINWINDOW_H
