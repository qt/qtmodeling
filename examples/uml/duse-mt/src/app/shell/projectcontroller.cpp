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
#include "projectcontroller.h"

#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>

#include <QtModeling/QXmiReader>
#include <QtModeling/QXmiWriter>
#include <QtModeling/QMetaModelPlugin>
#include <QtModeling/QModelingElement>

namespace DuSE
{

ProjectController::ProjectController()
{
}

ProjectController::~ProjectController()
{
    closeModel();
}

bool ProjectController::initialize()
{
    return true;
}

QStringList ProjectController::errorStrings() const
{
    return _errorStrings;
}

QString ProjectController::currentModelFileName() const
{
    return _currentModelFileName;
}

QList<QModelingObject *> ProjectController::currentModelObjects() const
{
    return _currentModelObjects;
}

QList<QModelingElement *> ProjectController::currentModelElements() const
{
    return _currentModelElements;
}

bool ProjectController::openModel(const QString &fileName)
{
    closeModel();

    QFile file(fileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        _errorStrings << QObject::tr("Cannot read file %1").arg(fileName);
        return false;
    }

    _currentModelFileName = fileName;

    QXmiReader reader;
    _currentModelElements = reader.readFile(&file);
    _errorStrings << reader.errorStrings();

    foreach (QModelingElement *element, _currentModelElements)
        _currentModelObjects << element->asQModelingObject();

    emit modelOpened(_currentModelObjects);

    return true;
}

bool ProjectController::closeModel()
{
    if (_currentModelObjects.size() == 0)
        return false;

    emit modelAboutToBeClosed(_currentModelObjects);
    qDeleteAll(_currentModelElements);
    _currentModelElements.clear();
    _currentModelObjects.clear();
    _errorStrings.clear();
    emit modelClosed();

    return true;
}

bool ProjectController::saveModel()
{
    Q_ASSERT(!_currentModelFileName.isEmpty());
    _errorStrings.clear();

    QFile file(_currentModelFileName);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
         _errorStrings << QObject::tr("Cannot write file %1").arg(_currentModelFileName);
        return false;
    }

    QXmiWriter writer;
    if (!writer.writeFile(_currentModelObjects, &file)) {
        _errorStrings << QObject::tr("Error when writing XMI file %1").arg(_currentModelFileName);
        return false;
    }
    return true;
}

bool ProjectController::saveModelAs(const QString &fileName)
{
    _currentModelFileName = fileName;
    return saveModel();
}

bool ProjectController::createModel(const QString &modelFileName, QMetaModelPlugin *metamodelPlugin, const QString &topLevelType)
{
    QModelingElement *topLevelElement = metamodelPlugin->createModelingElement(topLevelType);
    if (topLevelElement) {
        topLevelElement->asQModelingObject()->setObjectName(modelFileName);
        qDeleteAll(_currentModelElements);
        _currentModelElements.clear();
        _currentModelObjects.clear();

        _currentModelElements << topLevelElement;
        _currentModelObjects << topLevelElement->asQModelingObject();

        emit modelOpened(_currentModelObjects);

        return saveModelAs(modelFileName);
    }
    else
        return false;
}

}
