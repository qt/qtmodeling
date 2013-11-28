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
#ifndef DESIGNSPACEEXPLORERPLUGIN_H
#define DESIGNSPACEEXPLORERPLUGIN_H

#include <duseinterfaces/iplugin.h>

#include <QtScript/QScriptEngine>

class NewDuseDesignDialog;

class QQuickView;
class QTableWidget;

class QModelingObject;
class QModelingElement;

class QModelingObjectModel;
class QModelingObjectView;

class QDuseDesignDimension;
class QDuseVariationPoint;

namespace Duse {
    class ICore;
}

class DesignSpaceExplorerPlugin : public DuSE::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.liveblue.DuSE.IPlugin" FILE "designspaceexplorer.json")

public:
    DesignSpaceExplorerPlugin(QObject *parent = 0);
    virtual ~DesignSpaceExplorerPlugin();

    virtual bool initialize();

private Q_SLOTS:
    void initializeEngine(QList<QModelingObject *> modelingObjects);
    void destroyEngine();
    void resetDesignSpaceExplorer();
    void newDuseDesign();
    void openDuseDesign();
    void currentDesignSpaceLocationChanged();

private:
    QQuickView *_currentDesignSpaceLocationQuickView;
    QQuickView *_metricsQuickView;
    QTableWidget *_designSpaceExplorer;
    QModelingObjectView *_currentDesignSpaceLocationView;
    QModelingObjectModel *_currentDesignSpaceLocationQtModel;

    NewDuseDesignDialog *_newDuseDesignDialog;
    QList<QModelingElement *> _duseInstance;
    QList<QModelingElement *> _currentDesignSpaceLocationMofModel;
    QHash<QString, QHash<QDuseDesignDimension *, QDuseVariationPoint *> > _currentDesignSpaceLocation;

    QScriptEngine *_engine;

    void populateDesignSpaceExplorer();
};

#endif // DESIGNSPACEEXPLORERPLUGIN_H

