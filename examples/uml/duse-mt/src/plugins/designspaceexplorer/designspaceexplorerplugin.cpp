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
#include "designspaceexplorerplugin.h"

#include <QDebug>

#include <duseinterfaces/iuicontroller.h>
#include <duseinterfaces/iprojectcontroller.h>

#include <QtQuick/QQuickView>

#include <QtWidgets/QAction>
#include <QtWidgets/QWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QApplication>


#include <QtCore/QFileInfo>

#include <QtScript/QScriptValueIterator>

#include <QtModeling/QXmiReader>
#include <QtModeling/QModelingElement>

#include <QtUml/QUmlModel>
#include <QtUml/QUmlProfile>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlProfileApplication>

#include <QtDuse/QDuseDesignSpace>
#include <QtDuse/QDuseVariationPoint>
#include <QtDuse/QDuseDesignDimension>
#include <QtDuse/QDuseDesignDimensionInstance>

#include <QtSADuseProfile/QSADuseProfileProcessComponent>
#include "private/qsaduseprofileprocesscomponentobject_p.h"

#include "newdusedesigndialog.h"

template <class T>
QScriptValue qSetToScriptValue(QScriptEngine *engine, const QSet<T *> &elements)
{
    QScriptValue array = engine->newArray();
    foreach (T *element, elements)
        array.property(QString::fromLatin1("push")).call(array, QScriptValueList() << engine->newQObject(element));
    return array;
}

template <class T>
void scriptValueToQSet(const QScriptValue &obj, QSet<T *> &elements)
{
    QScriptValueIterator it(obj);
    while (it.hasNext()) {
        it.next();
        elements.insert(qobject_cast<T *>(it.value().toQObject()));
    }
}

template <class T>
QScriptValue qListToScriptValue(QScriptEngine *engine, const QList<T *> &elements)
{
    QScriptValue array = engine->newArray();
    foreach (T *element, elements)
        array.property(QString::fromLatin1("push")).call(array, QScriptValueList() << engine->newQObject(element));
    return array;
}

template <class T>
void scriptValueToQList(const QScriptValue &obj, QList<T *> &elements)
{
    QScriptValueIterator it(obj);
    while (it.hasNext()) {
        it.next();
        elements.append(qobject_cast<T *>(it.value().toQObject()));
    }
}

DesignSpaceExplorerPlugin::DesignSpaceExplorerPlugin(QObject *parent) :
    DuSE::IPlugin(parent),
    _currentDesignSpaceLocationQuickView(new QQuickView),
    _metricsQuickView(new QQuickView),
    _designSpaceExplorer(new QTableWidget),
    _newDuseDesignDialog(new NewDuseDesignDialog)
{
}

DesignSpaceExplorerPlugin::~DesignSpaceExplorerPlugin()
{
    delete _newDuseDesignDialog;
}

Q_SCRIPT_DECLARE_QMETAOBJECT(QSADuseProfileProcessComponentObject, QSADuseProfileProcessComponent *);

bool DesignSpaceExplorerPlugin::initialize(DuSE::ICore *core)
{
    _core = core;

    _currentDesignSpaceLocationQuickView->setSource(QUrl("qrc:/designspaceexplorer/currentdesignspacelocation.qml"));
    _currentDesignSpaceLocationQuickView->setResizeMode(QQuickView::SizeRootObjectToView);

    core->uiController()->addCentralWidgetTab(QWidget::createWindowContainer(_currentDesignSpaceLocationQuickView), "Current Design Space Location");

    _metricsQuickView->setSource(QUrl("qrc:/designspaceexplorer/qualitymetrics/qualitymetrics.qml"));
    _metricsQuickView->setResizeMode(QQuickView::SizeRootObjectToView);

    core->uiController()->addDockWidget(Qt::LeftDockWidgetArea, tr("Quality Metrics"), QWidget::createWindowContainer(_metricsQuickView));

    _designSpaceExplorer->setAlternatingRowColors(true);
    _designSpaceExplorer->horizontalHeader()->setStretchLastSection(true);
    _designSpaceExplorer->verticalHeader()->setVisible(false);
    _designSpaceExplorer->setColumnCount(3);
    _designSpaceExplorer->setHorizontalHeaderItem(0, new QTableWidgetItem(tr("Design Dimension")));
    _designSpaceExplorer->setHorizontalHeaderItem(1, new QTableWidgetItem(tr("Dimension Instance Target")));
    _designSpaceExplorer->setHorizontalHeaderItem(2, new QTableWidgetItem(tr("Variation Point")));
    _designSpaceExplorer->resizeColumnToContents(0);
    _designSpaceExplorer->resizeColumnToContents(1);
    _designSpaceExplorer->resizeColumnToContents(2);

    core->uiController()->addDockWidget(Qt::RightDockWidgetArea, "Design Space Explorer", _designSpaceExplorer);

    QString iconThemeName;

    QAction *_actionFileNewDuseDesign = new QAction(0);
    _actionFileNewDuseDesign->setText(QApplication::translate("MainWindow", "New &DuSE Design ...", 0));
    _actionFileNewDuseDesign->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0));
    _actionFileNewDuseDesign->setObjectName(QStringLiteral("actionFileNewDuseDesign"));
    QIcon icon8;
    iconThemeName = QStringLiteral("document-new");
    if (QIcon::hasThemeIcon(iconThemeName)) {
        icon8 = QIcon::fromTheme(iconThemeName);
    } else {
        icon8.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
    }
    _actionFileNewDuseDesign->setIcon(icon8);
    connect(_actionFileNewDuseDesign, &QAction::triggered, this, &DesignSpaceExplorerPlugin::newDuseDesign);
    core->uiController()->addAction(_actionFileNewDuseDesign, "menu_File");

    QAction *_actionFileOpenDuseDesign = new QAction(0);
    _actionFileOpenDuseDesign->setText(QApplication::translate("MainWindow", "Open DuSE Design ...", 0));
    _actionFileOpenDuseDesign->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", 0));
    _actionFileOpenDuseDesign->setObjectName(QStringLiteral("actionFileOpenDuseDesign"));
    QIcon icon9;
    iconThemeName = QStringLiteral("document-open");
    if (QIcon::hasThemeIcon(iconThemeName)) {
        icon9 = QIcon::fromTheme(iconThemeName);
    } else {
        icon9.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
    }
    _actionFileOpenDuseDesign->setIcon(icon9);
    connect(_actionFileOpenDuseDesign, &QAction::triggered, this, &DesignSpaceExplorerPlugin::openDuseDesign);
    core->uiController()->addAction(_actionFileOpenDuseDesign, "menu_File");

    qScriptRegisterMetaType(&_engine, qSetToScriptValue<QObject>, scriptValueToQSet<QObject>);
    qScriptRegisterMetaType(&_engine, qListToScriptValue<QObject>, scriptValueToQList<QObject>);

    return true;
}

void DesignSpaceExplorerPlugin::newDuseDesign()
{
    do {
        if (_newDuseDesignDialog->exec() == QDialog::Accepted) {
            if (_newDuseDesignDialog->_inputModelFileName.isEmpty() || _newDuseDesignDialog->_duseInstanceModelFileName.isEmpty()) {
                QMessageBox::critical(0, tr("Create new DuSE design"), tr("You should select an input model and a DuSE instance model !"));
            }
            else {
                QFile file(_newDuseDesignDialog->_duseInstanceModelFileName);
                if (!file.open(QFile::ReadOnly | QFile::Text)) {
                    QMessageBox::critical(0, tr("Create new DuSE design"), tr("Cannot read DuSE instance file !"));
                    return;
                }
                QXmiReader reader;
                _duseInstance = reader.readFile(&file);
                if (QString::fromLatin1(_duseInstance.first()->asQModelingObject()->metaObject()->className()) != QStringLiteral("QDuseDesignSpaceObject")) {
                    QMessageBox::critical(0, tr("Create new DuSE design"), QStringLiteral("%1 is not a valid DuSE instance !").arg(QFileInfo(file).fileName()));
                    return;
                }

                if (!_core->projectController()->openModel(_newDuseDesignDialog->_inputModelFileName)) {
                    QMessageBox::critical(0, tr("Create new DuSE design"), QStringLiteral("Error loading input file %1 !").arg(_newDuseDesignDialog->_inputModelFileName));
                    return;
                }

                bool found = false;
                QUmlModel *package = dynamic_cast<QUmlModel *>(_core->projectController()->currentModelElements().first());
                QDuseDesignSpace *designSpace = dynamic_cast<QDuseDesignSpace *>(_duseInstance.first());
                foreach (QUmlProfileApplication *profileApplication, package->profileApplications()) {
                    if (profileApplication->appliedProfile()->name() == designSpace->requiredProfile()) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    QMessageBox::critical(0, tr("Create new DuSE design"), QStringLiteral("Input model does not contain the required %1Profile profile application !").arg(_duseInstance.first()->asQModelingObject()->objectName()));
                    return;
                }

                QScriptValue array = _engine.newArray();
                foreach (QObject *modelingObject, _core->projectController()->currentModelObjects())
                    array.property(QString::fromLatin1("push")).call(array, QScriptValueList() << _engine.newQObject(modelingObject));
                _engine.globalObject().setProperty("input", array);

                foreach (QDuseDesignDimension *designDimension, designSpace->designDimensions()) {
                    foreach (const QString &body, designDimension->instanceSelectionRule()->bodies()) {
                        qDebug() << body;
                        QScriptValue value = _engine.evaluate(body);
                        if (value.toVariant().canConvert(QMetaType::type("QVariantList"))) {
                            foreach (const QVariant &variant, value.toVariant().value<QVariantList>()) {
                                if (variant.canConvert(QMetaType::type("QObject*"))) {
                                    QDuseDesignDimensionInstance *designDimensionInstance = new QDuseDesignDimensionInstance;
                                    designDimensionInstance->setTargetInstance(qmodelingelementproperty_cast<QUmlElement *>(variant.value<QObject *>()));
                                    designDimension->addDesignDimensionInstance(designDimensionInstance);
                                }
                            }
                        }
                        else if (value.toVariant().canConvert(QMetaType::type("QObject*"))) {
                            QDuseDesignDimensionInstance *designDimensionInstance = new QDuseDesignDimensionInstance;
                            designDimensionInstance->setTargetInstance(qmodelingelementproperty_cast<QUmlElement *>(value.toVariant().value<QObject *>()));
                            designDimension->addDesignDimensionInstance(designDimensionInstance);
                        }
                        qDebug() << "result: " << value.toVariant();
                    }
                }

//                evaluateQualityMetrics();
                populateDesignSpaceExplorer();
            }
        }
        else
            return;
    } while (_newDuseDesignDialog->_inputModelFileName.isEmpty() || _newDuseDesignDialog->_duseInstanceModelFileName.isEmpty());
}

void DesignSpaceExplorerPlugin::populateDesignSpaceExplorer()
{
    QDuseDesignSpace *designSpace = dynamic_cast<QDuseDesignSpace *>(_duseInstance.first());
    _designSpaceExplorer->setRowCount(0);
    int row = 0;
    foreach (QDuseDesignDimension *dimension, designSpace->designDimensions()) {
        _designSpaceExplorer->setRowCount(_designSpaceExplorer->rowCount() + dimension->designDimensionInstances().count());
        foreach (QDuseDesignDimensionInstance *instance, dimension->designDimensionInstances()) {
            _designSpaceExplorer->setItem(row, 0, new QTableWidgetItem(dimension->name()));
            _designSpaceExplorer->setItem(row, 1, new QTableWidgetItem(instance->targetInstance()->asQModelingObject()->objectName()));
            QComboBox *comboBox = new QComboBox;
            foreach (QDuseVariationPoint *variationPoint, dimension->variationPoints()) {
                comboBox->addItem(variationPoint->asQModelingObject()->objectName());
            }
            _designSpaceExplorer->setCellWidget(row, 2, comboBox);
            connect(comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(designSpaceChanged()));
            ++row;
        }
    }
    _designSpaceExplorer->resizeRowsToContents();
}

void DesignSpaceExplorerPlugin::openDuseDesign()
{
}

