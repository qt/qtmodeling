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
#ifndef GCCXMLARCHITECTURERECOVERYBACKENDPLUGIN_H
#define GCCXMLARCHITECTURERECOVERYBACKENDPLUGIN_H

#include <duseinterfaces/iplugin.h>
#include <architecturerecoverycore/iarchitecturerecoverybackend.h>

#include <QtCore/QDir>
#include <QtCore/QHash>
#include <QtCore/QObjectList>
#include <QtCore/QObject>
#include <QtCore/QStringList>
#include <QtCore/QMetaType>
#include <QtCore/QVariant>

#include "xmlfilemanager.h"
#include "xmlfilereader.h"

#include "gccxmlarchitecturerecoverybackend_export.h"

QT_BEGIN_NAMESPACE
class QXmlStreamReader;
QT_END_NAMESPACE

namespace DuSE
{

class GCCXMLARCHITECTURERECOVERYBACKEND_EXPORT GccXmlArchitectureRecoveryBackendPlugin : public IPlugin, public IArchitectureRecoveryBackend
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.liveblue.DuSE.IPlugin" FILE "gccxmlarchitecturerecoverybackend.json")

public:
    GccXmlArchitectureRecoveryBackendPlugin(QObject *parent = 0);

    virtual bool initialize();

    virtual QObjectList components();
    virtual QObjectList connectors();
    void run();
    void runGccXml();
    void recoverDependencyRelations();
    void fieldAdjacencies();
    void baseAdjacencies();
    void argumentsAdjacencies();

private Q_SLOTS:

private:
    int            _xmlCount;
    QDir           _rootProjectDirectory;
    QString        _rootProjectDirectoryString;
    QStringList    _xmlFilesList;
    XmlFileManager *_xmlFileManager;
    XmlFileReader  *_reader;
    QMap<QString, QMap<QString, QString> > _fileClasses;
    QMap<QString, QList<QPair<QString, QString> > > _fileFields;
    QMap<QString, QMap<QString, QString> > _filePointers;
    QMap<QString, QList<QPair<QString, QString> > > _fileBases;
    QMap<QString, QList<QPair<QString, QString> > > _fileArguments;
    QMultiMap<QString, QString> _dependencyRelations;
};

typedef QMultiMap<QString, QString> DependencyRelations;

#endif // GCCXMLARCHITECTURERECOVERYBACKENDPLUGIN

}

Q_DECLARE_METATYPE(DuSE::DependencyRelations);
