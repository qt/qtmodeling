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
#include "xmlfilereader.h"

#include <QXmlStreamAttributes>

namespace DuSE
{

XmlFileReader::XmlFileReader(QString rootDirectory, QString fileName)
    : _rootProjectDir(rootDirectory), _fileName(fileName)
{
    _xmlFileManager = new XmlFileManager;
}

void XmlFileReader::fillTagContainers()
{
    _xmlReader = _xmlFileManager->openXmlFile(_rootProjectDir + "/" + _fileName);

    while (!_xmlReader->atEnd() & !_xmlReader->hasError()) {
        QXmlStreamReader::TokenType token = _xmlReader->readNext();
        QPair<QString, QString> auxPair;

        if (token == QXmlStreamReader::StartElement) {
            QXmlStreamAttributes attributes;

            if (_xmlReader->name() == "Class") {
                attributes = _xmlReader->attributes();
                QString classId = attributes.value("id").toString();
                QString className = attributes.value("name").toString();
                if (!_fileClasses.values().contains(className)) {
                    _fileClasses.insert(classId, className);
                }

                do {
                    if (_xmlReader->readNextStartElement()) {
                        if (_xmlReader->name() == "Base") {
                            attributes = _xmlReader->attributes();
                            QString baseType = attributes.value("type").toString();
                            auxPair.first = classId;
                            auxPair.second = baseType;
                            _fileBases.append(auxPair);
                        }
                    }
                } while (_xmlReader->name() == "Base");
            }

            if (_xmlReader->name() == "Field") {
                attributes = _xmlReader->attributes();
                QString fieldContext = attributes.value("context").toString();
                QString fieldType = attributes.value("type").toString();
                auxPair.first = fieldContext;
                auxPair.second = fieldType;
                _fileFields.append(auxPair);
            }

            if (_xmlReader->name() == "PointerType") {
                attributes = _xmlReader->attributes();
                QString pointerId = attributes.value("id").toString();
                QString pointerType = attributes.value("type").toString();
                auxPair.first = pointerId;
                auxPair.second = pointerType;
                _filePointers.insert(pointerId, pointerType);
            }


            if (_xmlReader->name() == "Method") {
                attributes = _xmlReader->attributes();
                QString methodContext = attributes.value("context").toString();

                do {
                    if (_xmlReader->readNextStartElement()) {
                        if (_xmlReader->name() == "Argument") {
                            attributes = _xmlReader->attributes();
                            QString argumentType = attributes.value("type").toString();
                            auxPair.first = methodContext;
                            auxPair.second = argumentType;
                            _fileArguments.append(auxPair);
                        }
                    }
                } while (_xmlReader->name() == "Argument");
            }
        }
    } _xmlFileManager->closeXmlFile();
}

QMap<QString, QString> XmlFileReader::fileClasses()
{
    return _fileClasses;
}

QList<QPair<QString, QString> > XmlFileReader::fileFields()
{
    return _fileFields;
}

QMap<QString, QString> XmlFileReader::filePointers()
{
    return _filePointers;
}

QList<QPair<QString, QString> > XmlFileReader::fileBases()
{
    return _fileBases;
}

QList<QPair<QString, QString> > XmlFileReader::fileArguments()
{
    return _fileArguments;
}

}
