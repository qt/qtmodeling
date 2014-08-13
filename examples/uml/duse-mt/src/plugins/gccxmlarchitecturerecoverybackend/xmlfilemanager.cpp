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
#include "xmlfilemanager.h"

#include <QtCore/QDir>
#include <QtCore/QProcess>
#include <QtCore/QXmlStreamReader>

namespace DuSE
{

XmlFileManager::XmlFileManager()
{
}

QStringList XmlFileManager::generateXmlFiles(const QDir &rootProjectDir) const
{
    QStringList headers = rootProjectDir.entryList(QStringList("*.h"), QDir::Files | QDir::NoSymLinks);

    int codeFilesSize = headers.size();

    for (int i = 0; i < codeFilesSize; ++i) {
        QString file = headers.at(i).toLocal8Bit().constData();
        QString fileDir = rootProjectDir.absolutePath() + "/" + file;
        QString xmlFileDir = rootProjectDir.absolutePath() + "/" + file.replace(".h", ".xml");

        QProcess process;
        process.start("gccxml " + fileDir + " -fxml=" + xmlFileDir);
        process.waitForFinished();
    }

    return rootProjectDir.entryList(QStringList("*.xml"), QDir::Files | QDir::NoSymLinks);
}

QXmlStreamReader *XmlFileManager::openXmlFile(const QString &filePath)
{
    _xmlFile.setFileName(filePath);
    _xmlReader = new QXmlStreamReader(&_xmlFile);

    if (!_xmlFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return new QXmlStreamReader;
    }

    return _xmlReader;
}

void XmlFileManager::closeXmlFile()
{
    if (_xmlFile.isOpen()) {
        _xmlFile.close();
    }
}

}
