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

#include <QtCore/QPair>
#include <QtCore/QJsonObject>

#include <QtScript/QScriptEngine>

class QDialog;
class QListView;
class QQuickView;

namespace Ui {
    class MainWindow;
    class AboutPlugins;
    class AboutDuSEMT;
    class NewModel;
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

    void closeEvent(QCloseEvent *event);
    void readSettings();

private Q_SLOTS:
    void on_actionFileNew_triggered();
    void on_actionFileOpen_triggered();
    void on_actionFileSaveAs_triggered();
    void on_actionFileSave_triggered();
    void on_actionAboutPlugins_triggered();
    void on_actionAboutDuSEMT_triggered();
    void on_psbJSEvaluate_clicked();

    void metaModelChanged(QString newMetaModel);
    void wrappedObjectChanged(QWrappedObject *wrappedObject);
    void addToView(QWrappedObject *wrappedObject);

    void dckMetricsVisibilityChanged(bool visible);

protected:
    bool eventFilter(QObject *obj, QEvent *event);

private:
    void loadPlugins();
    void saveXmi(QWrappedObject *rootElement);
    QList<QWrappedObject *> loadXmi();

    Ui::MainWindow *ui;
    QWrappedObjectModel *_wrappedObjectModel;

    QString _currentFileName;
    QHash< QString, QPair<QMetaModelPlugin *, QJsonObject> > _loadedPlugins;
    QDialog *_aboutPluginsDialog;
    Ui::AboutPlugins *_aboutPlugins;
    QDialog *_aboutDuSEMTDialog;
    Ui::AboutDuSEMT *_aboutDuSEMT;
    QDialog *_newModelDialog;
    Ui::NewModel *_newModel;

    QScriptEngine _engine;
    QListView *_codeCompletionView;
    QQuickView *_modelQuickView;
    QQuickView *_metricsQuickView;
    QQuickView *_paretoFrontQuickView;
};

#endif // MAINWINDOW_H
