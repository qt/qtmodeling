/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia  LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QTUML_QIMAGE_H
#define QTUML_QIMAGE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QElement>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QImagePrivate;

class Q_UML_EXPORT QImage : public QElement
{
    Q_OBJECT

    Q_PROPERTY(QString format READ format WRITE setFormat)
    Q_PROPERTY(QString location READ location WRITE setLocation)
    Q_PROPERTY(QString content READ content WRITE setContent)

    Q_DISABLE_COPY(QImage)
    Q_DECLARE_PRIVATE(QImage)

public:
    Q_INVOKABLE explicit QImage(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QImage();

    // Attributes from QImage
    Q_INVOKABLE QString format() const;
    Q_INVOKABLE void setFormat(QString format);
    Q_INVOKABLE QString location() const;
    Q_INVOKABLE void setLocation(QString location);
    Q_INVOKABLE QString content() const;
    Q_INVOKABLE void setContent(QString content);

    virtual void setPropertyData();

protected:
    explicit QImage(QImagePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QIMAGE_H

